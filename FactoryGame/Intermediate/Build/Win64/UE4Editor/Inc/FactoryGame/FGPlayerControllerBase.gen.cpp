// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGPlayerControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPlayerControllerBase() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnInputChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPlayerControllerBase_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPlayerControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_Admin();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAdminInterface_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFGKeyMapping();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCheatManager_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnInputChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnInputChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnInputChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnInputChanged__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnInputChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnInputChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnInputChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnInputChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_AFGPlayerControllerBase_Client_UpdateCappedBandwidth = FName(TEXT("Client_UpdateCappedBandwidth"));
	void AFGPlayerControllerBase::Client_UpdateCappedBandwidth(int32 cap)
	{
		FGPlayerControllerBase_eventClient_UpdateCappedBandwidth_Parms Parms;
		Parms.cap=cap;
		ProcessEvent(FindFunctionChecked(NAME_AFGPlayerControllerBase_Client_UpdateCappedBandwidth),&Parms);
	}
	static FName NAME_AFGPlayerControllerBase_GetPresenceString = FName(TEXT("GetPresenceString"));
	FString AFGPlayerControllerBase::GetPresenceString() const
	{
		FGPlayerControllerBase_eventGetPresenceString_Parms Parms;
		const_cast<AFGPlayerControllerBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFGPlayerControllerBase_GetPresenceString),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFGPlayerControllerBase_Server_AdminLogin = FName(TEXT("Server_AdminLogin"));
	void AFGPlayerControllerBase::Server_AdminLogin(const FString& hashedPassword)
	{
		FGPlayerControllerBase_eventServer_AdminLogin_Parms Parms;
		Parms.hashedPassword=hashedPassword;
		ProcessEvent(FindFunctionChecked(NAME_AFGPlayerControllerBase_Server_AdminLogin),&Parms);
	}
	static FName NAME_AFGPlayerControllerBase_Server_UpdateCappedBandwidth = FName(TEXT("Server_UpdateCappedBandwidth"));
	void AFGPlayerControllerBase::Server_UpdateCappedBandwidth(int32 cap)
	{
		FGPlayerControllerBase_eventServer_UpdateCappedBandwidth_Parms Parms;
		Parms.cap=cap;
		ProcessEvent(FindFunctionChecked(NAME_AFGPlayerControllerBase_Server_UpdateCappedBandwidth),&Parms);
	}
	static FName NAME_AFGPlayerControllerBase_ServerAdmin = FName(TEXT("ServerAdmin"));
	void AFGPlayerControllerBase::ServerAdmin(const FString& command)
	{
		FGPlayerControllerBase_eventServerAdmin_Parms Parms;
		Parms.command=command;
		ProcessEvent(FindFunctionChecked(NAME_AFGPlayerControllerBase_ServerAdmin),&Parms);
	}
	void AFGPlayerControllerBase::StaticRegisterNativesAFGPlayerControllerBase()
	{
		UClass* Class = AFGPlayerControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Admin", &AFGPlayerControllerBase::execAdmin },
			{ "AdminLogin", &AFGPlayerControllerBase::execAdminLogin },
			{ "Client_UpdateCappedBandwidth", &AFGPlayerControllerBase::execClient_UpdateCappedBandwidth },
			{ "DiscardInput", &AFGPlayerControllerBase::execDiscardInput },
			{ "FlushPressedKeys", &AFGPlayerControllerBase::execFlushPressedKeys },
			{ "GetAdminInterface", &AFGPlayerControllerBase::execGetAdminInterface },
			{ "GetDefaultMouseSensitivity", &AFGPlayerControllerBase::execGetDefaultMouseSensitivity },
			{ "GetDefaultMouseSensitivityX", &AFGPlayerControllerBase::execGetDefaultMouseSensitivityX },
			{ "GetDefaultMouseSensitivityY", &AFGPlayerControllerBase::execGetDefaultMouseSensitivityY },
			{ "GetIsUsingGamepad", &AFGPlayerControllerBase::execGetIsUsingGamepad },
			{ "GetKeyNameForAction", &AFGPlayerControllerBase::execGetKeyNameForAction },
			{ "GetMouseSensitivity", &AFGPlayerControllerBase::execGetMouseSensitivity },
			{ "GetMouseSensitivityX", &AFGPlayerControllerBase::execGetMouseSensitivityX },
			{ "GetMouseSensitivityY", &AFGPlayerControllerBase::execGetMouseSensitivityY },
			{ "GetPresenceString", &AFGPlayerControllerBase::execGetPresenceString },
			{ "RebindActionKey", &AFGPlayerControllerBase::execRebindActionKey },
			{ "ResetInputBindings", &AFGPlayerControllerBase::execResetInputBindings },
			{ "Server_AdminLogin", &AFGPlayerControllerBase::execServer_AdminLogin },
			{ "Server_UpdateCappedBandwidth", &AFGPlayerControllerBase::execServer_UpdateCappedBandwidth },
			{ "ServerAdmin", &AFGPlayerControllerBase::execServerAdmin },
			{ "SetIsUsingGamepad", &AFGPlayerControllerBase::execSetIsUsingGamepad },
			{ "SetMouseSensitivity", &AFGPlayerControllerBase::execSetMouseSensitivity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics
	{
		struct FGPlayerControllerBase_eventAdmin_Parms
		{
			FString command;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_command;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics::NewProp_command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics::NewProp_command = { "command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventAdmin_Parms, command), METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics::NewProp_command_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics::NewProp_command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics::NewProp_command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Try to run a command on the server, require admin rights" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "Admin", sizeof(FGPlayerControllerBase_eventAdmin_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_Admin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_Admin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin_Statics
	{
		struct FGPlayerControllerBase_eventAdminLogin_Parms
		{
			FString password;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_password;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin_Statics::NewProp_password = { "password", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventAdminLogin_Parms, password), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin_Statics::NewProp_password,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "AdminLogin", sizeof(FGPlayerControllerBase_eventAdminLogin_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_cap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::NewProp_cap = { "cap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventClient_UpdateCappedBandwidth_Parms, cap), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::NewProp_cap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Set CurrentNetSpeed to the lower of its current value and Cap, can update during the game to the new value if server updates it's bandwith due to options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "Client_UpdateCappedBandwidth", sizeof(FGPlayerControllerBase_eventClient_UpdateCappedBandwidth_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Used to discard any input when we are dead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "DiscardInput", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Input" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Exposing flushPressedKeys to BP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "FlushPressedKeys", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface_Statics
	{
		struct FGPlayerControllerBase_eventGetAdminInterface_Parms
		{
			AFGAdminInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventGetAdminInterface_Parms, ReturnValue), Z_Construct_UClass_AFGAdminInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Online|Admin" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "@return the admin interface if we are logged in as server admin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "GetAdminInterface", sizeof(FGPlayerControllerBase_eventGetAdminInterface_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics
	{
		struct FGPlayerControllerBase_eventGetDefaultMouseSensitivity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventGetDefaultMouseSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetDefaultMouseSensitivityX/GetDefaultMouseSensitivityY instead" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "GetDefaultMouseSensitivity", sizeof(FGPlayerControllerBase_eventGetDefaultMouseSensitivity_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX_Statics
	{
		struct FGPlayerControllerBase_eventGetDefaultMouseSensitivityX_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventGetDefaultMouseSensitivityX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Input" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Get default value for mouse sensitivity in X axis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "GetDefaultMouseSensitivityX", sizeof(FGPlayerControllerBase_eventGetDefaultMouseSensitivityX_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY_Statics
	{
		struct FGPlayerControllerBase_eventGetDefaultMouseSensitivityY_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventGetDefaultMouseSensitivityY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Input" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Get default value for mouse sensitivity in Y axis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "GetDefaultMouseSensitivityY", sizeof(FGPlayerControllerBase_eventGetDefaultMouseSensitivityY_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics
	{
		struct FGPlayerControllerBase_eventGetIsUsingGamepad_Parms
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
	void Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGPlayerControllerBase_eventGetIsUsingGamepad_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPlayerControllerBase_eventGetIsUsingGamepad_Parms), &Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Input" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "End APlayerController interface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "GetIsUsingGamepad", sizeof(FGPlayerControllerBase_eventGetIsUsingGamepad_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics
	{
		struct FGPlayerControllerBase_eventGetKeyNameForAction_Parms
		{
			FName inAction;
			bool getGamepadKey;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static void NewProp_getGamepadKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_getGamepadKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_inAction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventGetKeyNameForAction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_getGamepadKey_SetBit(void* Obj)
	{
		((FGPlayerControllerBase_eventGetKeyNameForAction_Parms*)Obj)->getGamepadKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_getGamepadKey = { "getGamepadKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPlayerControllerBase_eventGetKeyNameForAction_Parms), &Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_getGamepadKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_inAction = { "inAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventGetKeyNameForAction_Parms, inAction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_getGamepadKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_inAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Input" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Returns readable name for an action" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "GetKeyNameForAction", sizeof(FGPlayerControllerBase_eventGetKeyNameForAction_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics
	{
		struct FGPlayerControllerBase_eventGetMouseSensitivity_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventGetMouseSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetMouseSensitivityX/GetMouseSensitivityY instead" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "GetMouseSensitivity", sizeof(FGPlayerControllerBase_eventGetMouseSensitivity_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX_Statics
	{
		struct FGPlayerControllerBase_eventGetMouseSensitivityX_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventGetMouseSensitivityX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Input" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Get current sensitivity in X axis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "GetMouseSensitivityX", sizeof(FGPlayerControllerBase_eventGetMouseSensitivityX_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY_Statics
	{
		struct FGPlayerControllerBase_eventGetMouseSensitivityY_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventGetMouseSensitivityY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Input" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Get current sensitivity in X axis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "GetMouseSensitivityY", sizeof(FGPlayerControllerBase_eventGetMouseSensitivityY_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventGetPresenceString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Online|Presence" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "GetPresenceString", sizeof(FGPlayerControllerBase_eventGetPresenceString_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics
	{
		struct FGPlayerControllerBase_eventRebindActionKey_Parms
		{
			FFGKeyMapping newKeyMapping;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newKeyMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGPlayerControllerBase_eventRebindActionKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPlayerControllerBase_eventRebindActionKey_Parms), &Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::NewProp_newKeyMapping = { "newKeyMapping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventRebindActionKey_Parms, newKeyMapping), Z_Construct_UScriptStruct_FFGKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::NewProp_newKeyMapping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Input" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Used for rebinding keys" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "RebindActionKey", sizeof(FGPlayerControllerBase_eventRebindActionKey_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Input" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Removes custom bindings and restores to default" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "ResetInputBindings", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hashedPassword_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hashedPassword;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics::NewProp_hashedPassword_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics::NewProp_hashedPassword = { "hashedPassword", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventServer_AdminLogin_Parms, hashedPassword), METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics::NewProp_hashedPassword_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics::NewProp_hashedPassword_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics::NewProp_hashedPassword,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Login a player controller with a password, response comes later" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "Server_AdminLogin", sizeof(FGPlayerControllerBase_eventServer_AdminLogin_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_cap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::NewProp_cap = { "cap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventServer_UpdateCappedBandwidth_Parms, cap), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::NewProp_cap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Set CurrentNetSpeed to the lower of its current value and Cap, can update during the game to the new value if client updates it's bandwidth" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "Server_UpdateCappedBandwidth", sizeof(FGPlayerControllerBase_eventServer_UpdateCappedBandwidth_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_command;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics::NewProp_command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics::NewProp_command = { "command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventServerAdmin_Parms, command), METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics::NewProp_command_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics::NewProp_command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics::NewProp_command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "ServerAdmin", sizeof(FGPlayerControllerBase_eventServerAdmin_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics
	{
		struct FGPlayerControllerBase_eventSetIsUsingGamepad_Parms
		{
			bool newIsUsingGamepad;
		};
		static void NewProp_newIsUsingGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newIsUsingGamepad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::NewProp_newIsUsingGamepad_SetBit(void* Obj)
	{
		((FGPlayerControllerBase_eventSetIsUsingGamepad_Parms*)Obj)->newIsUsingGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::NewProp_newIsUsingGamepad = { "newIsUsingGamepad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGPlayerControllerBase_eventSetIsUsingGamepad_Parms), &Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::NewProp_newIsUsingGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::NewProp_newIsUsingGamepad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Input" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "SetIsUsingGamepad", sizeof(FGPlayerControllerBase_eventSetIsUsingGamepad_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics
	{
		struct FGPlayerControllerBase_eventSetMouseSensitivity_Parms
		{
			float newSense;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newSense;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::NewProp_newSense = { "newSense", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGPlayerControllerBase_eventSetMouseSensitivity_Parms, newSense), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::NewProp_newSense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Input" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Sets mouse sensitivity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, nullptr, "SetMouseSensitivity", sizeof(FGPlayerControllerBase_eventSetMouseSensitivity_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGPlayerControllerBase_NoRegister()
	{
		return AFGPlayerControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AFGPlayerControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAllowedInputWhenDead_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAllowedInputWhenDead;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mAllowedInputWhenDead_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEnableInputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mEnableInputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisableInputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDisableInputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReplicatedCheatManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mReplicatedCheatManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAdminInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAdminInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInputChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGPlayerControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGPlayerControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_Admin, "Admin" }, // 1632102286
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_AdminLogin, "AdminLogin" }, // 3394812698
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth, "Client_UpdateCappedBandwidth" }, // 1105277740
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput, "DiscardInput" }, // 627032534
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys, "FlushPressedKeys" }, // 1230046927
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetAdminInterface, "GetAdminInterface" }, // 1874992495
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity, "GetDefaultMouseSensitivity" }, // 1650205496
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityX, "GetDefaultMouseSensitivityX" }, // 1884999892
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivityY, "GetDefaultMouseSensitivityY" }, // 4003804554
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad, "GetIsUsingGamepad" }, // 396532617
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction, "GetKeyNameForAction" }, // 412948520
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity, "GetMouseSensitivity" }, // 430630627
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityX, "GetMouseSensitivityX" }, // 3332553992
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivityY, "GetMouseSensitivityY" }, // 2840528900
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString, "GetPresenceString" }, // 4194125262
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey, "RebindActionKey" }, // 255183085
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings, "ResetInputBindings" }, // 2104624316
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_Server_AdminLogin, "Server_AdminLogin" }, // 736098747
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth, "Server_UpdateCappedBandwidth" }, // 877446706
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_ServerAdmin, "ServerAdmin" }, // 4236352518
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad, "SetIsUsingGamepad" }, // 81854938
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity, "SetMouseSensitivity" }, // 2795864062
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGPlayerControllerBase.h" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Input that's allowed when you are dead" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead = { "mAllowedInputWhenDead", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerControllerBase, mAllowedInputWhenDead), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead_Inner = { "mAllowedInputWhenDead", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mEnableInputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "The input component used when we want to enable our input" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mEnableInputComponent = { "mEnableInputComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerControllerBase, mEnableInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mEnableInputComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mEnableInputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mDisableInputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "The input component used when we want to disable our input" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mDisableInputComponent = { "mDisableInputComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerControllerBase, mDisableInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mDisableInputComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mDisableInputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mReplicatedCheatManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "If we are allowed to cheat, then we replicate the cheat manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mReplicatedCheatManager = { "mReplicatedCheatManager", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerControllerBase, mReplicatedCheatManager), Z_Construct_UClass_UFGCheatManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mReplicatedCheatManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mReplicatedCheatManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAdminInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Admin interface if we have one available" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAdminInterface = { "mAdminInterface", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerControllerBase, mAdminInterface), Z_Construct_UClass_AFGAdminInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAdminInterface_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAdminInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_OnInputChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPlayerControllerBase.h" },
		{ "ToolTip", "Called when we rebind any key" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_OnInputChanged = { "OnInputChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlayerControllerBase, OnInputChanged), Z_Construct_UDelegateFunction_FactoryGame_OnInputChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_OnInputChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_OnInputChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGPlayerControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mEnableInputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mDisableInputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mReplicatedCheatManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAdminInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_OnInputChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGPlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::ClassParams = {
		&AFGPlayerControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGPlayerControllerBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGPlayerControllerBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGPlayerControllerBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGPlayerControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGPlayerControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGPlayerControllerBase, 3322603476);
	template<> FACTORYGAME_API UClass* StaticClass<AFGPlayerControllerBase>()
	{
		return AFGPlayerControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGPlayerControllerBase(Z_Construct_UClass_AFGPlayerControllerBase, &AFGPlayerControllerBase::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGPlayerControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGPlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
