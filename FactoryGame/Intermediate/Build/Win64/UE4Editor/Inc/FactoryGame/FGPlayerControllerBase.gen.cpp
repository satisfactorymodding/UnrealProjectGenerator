// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGPlayerControllerBase.h"
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFGKeyMapping();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
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
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnInputChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnInputChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnInputChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnInputChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	static FName NAME_AFGPlayerControllerBase_Server_UpdateCappedBandwidth = FName(TEXT("Server_UpdateCappedBandwidth"));
	void AFGPlayerControllerBase::Server_UpdateCappedBandwidth(int32 cap)
	{
		FGPlayerControllerBase_eventServer_UpdateCappedBandwidth_Parms Parms;
		Parms.cap=cap;
		ProcessEvent(FindFunctionChecked(NAME_AFGPlayerControllerBase_Server_UpdateCappedBandwidth),&Parms);
	}
	void AFGPlayerControllerBase::StaticRegisterNativesAFGPlayerControllerBase()
	{
		UClass* Class = AFGPlayerControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_UpdateCappedBandwidth", &AFGPlayerControllerBase::execClient_UpdateCappedBandwidth },
			{ "DiscardInput", &AFGPlayerControllerBase::execDiscardInput },
			{ "FlushPressedKeys", &AFGPlayerControllerBase::execFlushPressedKeys },
			{ "GetDefaultMouseSensitivity", &AFGPlayerControllerBase::execGetDefaultMouseSensitivity },
			{ "GetIsUsingGamepad", &AFGPlayerControllerBase::execGetIsUsingGamepad },
			{ "GetKeyNameForAction", &AFGPlayerControllerBase::execGetKeyNameForAction },
			{ "GetMouseSensitivity", &AFGPlayerControllerBase::execGetMouseSensitivity },
			{ "GetPresenceString", &AFGPlayerControllerBase::execGetPresenceString },
			{ "RebindActionKey", &AFGPlayerControllerBase::execRebindActionKey },
			{ "ResetInputBindings", &AFGPlayerControllerBase::execResetInputBindings },
			{ "Server_UpdateCappedBandwidth", &AFGPlayerControllerBase::execServer_UpdateCappedBandwidth },
			{ "SetIsUsingGamepad", &AFGPlayerControllerBase::execSetIsUsingGamepad },
			{ "SetMouseSensitivity", &AFGPlayerControllerBase::execSetMouseSensitivity },
			{ "SetPresenceEnabled", &AFGPlayerControllerBase::execSetPresenceEnabled },
			{ "SetSessionEnabled", &AFGPlayerControllerBase::execSetSessionEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::NewProp_cap = { UE4CodeGen_Private::EPropertyClass::Int, "cap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGPlayerControllerBase_eventClient_UpdateCappedBandwidth_Parms, cap), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::NewProp_cap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "Set CurrentNetSpeed to the lower of its current value and Cap, can update during the game to the new value if server updates it's bandwith due to options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "Client_UpdateCappedBandwidth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01020CC0, sizeof(FGPlayerControllerBase_eventClient_UpdateCappedBandwidth_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "Used to discard any input when we are dead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "DiscardInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput_Statics::Function_MetaDataParams)) };
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
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "Exposing flushPressedKeys to BP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "FlushPressedKeys", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerControllerBase_eventGetDefaultMouseSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "Get default value for mouse sensitivity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "GetDefaultMouseSensitivity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPlayerControllerBase_eventGetDefaultMouseSensitivity_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity_Statics::FuncParams);
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGPlayerControllerBase_eventGetIsUsingGamepad_Parms), &Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "End APlayerController interface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "GetIsUsingGamepad", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPlayerControllerBase_eventGetIsUsingGamepad_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerControllerBase_eventGetKeyNameForAction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_getGamepadKey_SetBit(void* Obj)
	{
		((FGPlayerControllerBase_eventGetKeyNameForAction_Parms*)Obj)->getGamepadKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_getGamepadKey = { UE4CodeGen_Private::EPropertyClass::Bool, "getGamepadKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGPlayerControllerBase_eventGetKeyNameForAction_Parms), &Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_getGamepadKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_inAction = { UE4CodeGen_Private::EPropertyClass::Name, "inAction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGPlayerControllerBase_eventGetKeyNameForAction_Parms, inAction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_getGamepadKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::NewProp_inAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "Returns readable name for an action" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "GetKeyNameForAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPlayerControllerBase_eventGetKeyNameForAction_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerControllerBase_eventGetMouseSensitivity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "Get current sensitivity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "GetMouseSensitivity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPlayerControllerBase_eventGetMouseSensitivity_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity_Statics::FuncParams);
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPlayerControllerBase_eventGetPresenceString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Presence" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "GetPresenceString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(FGPlayerControllerBase_eventGetPresenceString_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGPlayerControllerBase_eventRebindActionKey_Parms), &Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::NewProp_newKeyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "newKeyMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGPlayerControllerBase_eventRebindActionKey_Parms, newKeyMapping), Z_Construct_UScriptStruct_FFGKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::NewProp_newKeyMapping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "Used for rebinding keys" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "RebindActionKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGPlayerControllerBase_eventRebindActionKey_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey_Statics::Function_MetaDataParams)) };
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
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "Removes custom bindings and restores to default" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "ResetInputBindings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings_Statics::FuncParams);
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::NewProp_cap = { UE4CodeGen_Private::EPropertyClass::Int, "cap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGPlayerControllerBase_eventServer_UpdateCappedBandwidth_Parms, cap), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::NewProp_cap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "Set CurrentNetSpeed to the lower of its current value and Cap, can update during the game to the new value if client updates it's bandwidth" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "Server_UpdateCappedBandwidth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(FGPlayerControllerBase_eventServer_UpdateCappedBandwidth_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth_Statics::FuncParams);
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::NewProp_newIsUsingGamepad = { UE4CodeGen_Private::EPropertyClass::Bool, "newIsUsingGamepad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGPlayerControllerBase_eventSetIsUsingGamepad_Parms), &Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::NewProp_newIsUsingGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::NewProp_newIsUsingGamepad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "SetIsUsingGamepad", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGPlayerControllerBase_eventSetIsUsingGamepad_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::NewProp_newSense = { UE4CodeGen_Private::EPropertyClass::Float, "newSense", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGPlayerControllerBase_eventSetMouseSensitivity_Parms, newSense), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::NewProp_newSense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "Sets mouse sensitivity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "SetMouseSensitivity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGPlayerControllerBase_eventSetMouseSensitivity_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled_Statics
	{
		struct FGPlayerControllerBase_eventSetPresenceEnabled_Parms
		{
			bool enabled;
		};
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((FGPlayerControllerBase_eventSetPresenceEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled_Statics::NewProp_enabled = { UE4CodeGen_Private::EPropertyClass::Bool, "enabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGPlayerControllerBase_eventSetPresenceEnabled_Parms), &Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "DEBUG FUNCTIONS TO BE REMOVED AFTER https:questions.satisfactorygame.com/6612/frame-drops-every-few-minutes-constant-freezes?show=17767#c17767 is closed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "SetPresenceEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(FGPlayerControllerBase_eventSetPresenceEnabled_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled_Statics
	{
		struct FGPlayerControllerBase_eventSetSessionEnabled_Parms
		{
			bool enabled;
		};
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((FGPlayerControllerBase_eventSetSessionEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled_Statics::NewProp_enabled = { UE4CodeGen_Private::EPropertyClass::Bool, "enabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGPlayerControllerBase_eventSetSessionEnabled_Parms), &Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlayerControllerBase, "SetSessionEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020601, sizeof(FGPlayerControllerBase_eventSetSessionEnabled_Parms), Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_Client_UpdateCappedBandwidth, "Client_UpdateCappedBandwidth" }, // 2874647811
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_DiscardInput, "DiscardInput" }, // 1846201594
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_FlushPressedKeys, "FlushPressedKeys" }, // 2566718978
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetDefaultMouseSensitivity, "GetDefaultMouseSensitivity" }, // 2601445163
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetIsUsingGamepad, "GetIsUsingGamepad" }, // 3946144712
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetKeyNameForAction, "GetKeyNameForAction" }, // 3931401267
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetMouseSensitivity, "GetMouseSensitivity" }, // 1405116107
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_GetPresenceString, "GetPresenceString" }, // 2704509147
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_RebindActionKey, "RebindActionKey" }, // 1278004298
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_ResetInputBindings, "ResetInputBindings" }, // 1187641009
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_Server_UpdateCappedBandwidth, "Server_UpdateCappedBandwidth" }, // 924822193
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_SetIsUsingGamepad, "SetIsUsingGamepad" }, // 3894533327
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_SetMouseSensitivity, "SetMouseSensitivity" }, // 3015475645
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_SetPresenceEnabled, "SetPresenceEnabled" }, // 1484367221
		{ &Z_Construct_UFunction_AFGPlayerControllerBase_SetSessionEnabled, "SetSessionEnabled" }, // 2638530325
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerControllerBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGPlayerControllerBase.h" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "Input that's allowed when you are dead" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead = { UE4CodeGen_Private::EPropertyClass::Array, "mAllowedInputWhenDead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGPlayerControllerBase, mAllowedInputWhenDead), METADATA_PARAMS(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "mAllowedInputWhenDead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mEnableInputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "The input component used when we want to enable our input" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mEnableInputComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mEnableInputComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AFGPlayerControllerBase, mEnableInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mEnableInputComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mEnableInputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mDisableInputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "The input component used when we want to disable our input" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mDisableInputComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mDisableInputComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AFGPlayerControllerBase, mDisableInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mDisableInputComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mDisableInputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_OnInputChanged_MetaData[] = {
		{ "ModuleRelativePath", "FGPlayerControllerBase.h" },
		{ "ToolTip", "Called when we rebind any key" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_OnInputChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnInputChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGPlayerControllerBase, OnInputChanged), Z_Construct_UDelegateFunction_FactoryGame_OnInputChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_OnInputChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_OnInputChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGPlayerControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mAllowedInputWhenDead_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mEnableInputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_mDisableInputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlayerControllerBase_Statics::NewProp_OnInputChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGPlayerControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGPlayerControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGPlayerControllerBase_Statics::ClassParams = {
		&AFGPlayerControllerBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGPlayerControllerBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGPlayerControllerBase_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AFGPlayerControllerBase, 2205124074);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGPlayerControllerBase(Z_Construct_UClass_AFGPlayerControllerBase, &AFGPlayerControllerBase::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGPlayerControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGPlayerControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
