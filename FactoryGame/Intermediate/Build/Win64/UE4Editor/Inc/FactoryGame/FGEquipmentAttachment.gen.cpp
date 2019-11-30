// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Equipment/FGEquipmentAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGEquipmentAttachment() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentAttachment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentAttachment();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EEquipmentSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_OnAttach();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_OnDetach();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_OnAnimationStateUpdated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_UseLocationUpdated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_PlayAttachEffects3P();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_PlayDetachEffects3P();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EBackEquipment();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EArmEquipment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment_NoRegister();
// End Cross Module References
	static FName NAME_AFGEquipmentAttachment_OnAttach = FName(TEXT("OnAttach"));
	void AFGEquipmentAttachment::OnAttach()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipmentAttachment_OnAttach),NULL);
	}
	static FName NAME_AFGEquipmentAttachment_OnAttachmentUseStateUpdated = FName(TEXT("OnAttachmentUseStateUpdated"));
	void AFGEquipmentAttachment::OnAttachmentUseStateUpdated(int32 newUseState)
	{
		FGEquipmentAttachment_eventOnAttachmentUseStateUpdated_Parms Parms;
		Parms.newUseState=newUseState;
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipmentAttachment_OnAttachmentUseStateUpdated),&Parms);
	}
	static FName NAME_AFGEquipmentAttachment_OnDetach = FName(TEXT("OnDetach"));
	void AFGEquipmentAttachment::OnDetach()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipmentAttachment_OnDetach),NULL);
	}
	static FName NAME_AFGEquipmentAttachment_PlayAttachEffects3P = FName(TEXT("PlayAttachEffects3P"));
	void AFGEquipmentAttachment::PlayAttachEffects3P()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipmentAttachment_PlayAttachEffects3P),NULL);
	}
	static FName NAME_AFGEquipmentAttachment_PlayDetachEffects3P = FName(TEXT("PlayDetachEffects3P"));
	void AFGEquipmentAttachment::PlayDetachEffects3P()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipmentAttachment_PlayDetachEffects3P),NULL);
	}
	static FName NAME_AFGEquipmentAttachment_PlayUseEffect = FName(TEXT("PlayUseEffect"));
	void AFGEquipmentAttachment::PlayUseEffect(FVector useLocation)
	{
		FGEquipmentAttachment_eventPlayUseEffect_Parms Parms;
		Parms.useLocation=useLocation;
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipmentAttachment_PlayUseEffect),&Parms);
	}
	void AFGEquipmentAttachment::StaticRegisterNativesAFGEquipmentAttachment()
	{
		UClass* Class = AFGEquipmentAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachedTo", &AFGEquipmentAttachment::execGetAttachedTo },
			{ "GetAttachSocket", &AFGEquipmentAttachment::execGetAttachSocket },
			{ "GetEquippedSlot", &AFGEquipmentAttachment::execGetEquippedSlot },
			{ "IsAttached", &AFGEquipmentAttachment::execIsAttached },
			{ "OnAttach", &AFGEquipmentAttachment::execOnAttach },
			{ "OnDetach", &AFGEquipmentAttachment::execOnDetach },
			{ "OnRep_OnAnimationStateUpdated", &AFGEquipmentAttachment::execOnRep_OnAnimationStateUpdated },
			{ "OnRep_UseLocationUpdated", &AFGEquipmentAttachment::execOnRep_UseLocationUpdated },
			{ "PlayUseEffect", &AFGEquipmentAttachment::execPlayUseEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo_Statics
	{
		struct FGEquipmentAttachment_eventGetAttachedTo_Parms
		{
			AFGCharacterPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipmentAttachment_eventGetAttachedTo_Parms, ReturnValue), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "@return character this is attached to; nullptr if not attached." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentAttachment, nullptr, "GetAttachedTo", sizeof(FGEquipmentAttachment_eventGetAttachedTo_Parms), Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket_Statics
	{
		struct FGEquipmentAttachment_eventGetAttachSocket_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipmentAttachment_eventGetAttachSocket_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "@return socket this should attach to, can be none." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentAttachment, nullptr, "GetAttachSocket", sizeof(FGEquipmentAttachment_eventGetAttachSocket_Parms), Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot_Statics
	{
		struct FGEquipmentAttachment_eventGetEquippedSlot_Parms
		{
			EEquipmentSlot ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipmentAttachment_eventGetEquippedSlot_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EEquipmentSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "@return The equipment slot that this attachment is associated with" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentAttachment, nullptr, "GetEquippedSlot", sizeof(FGEquipmentAttachment_eventGetEquippedSlot_Parms), Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached_Statics
	{
		struct FGEquipmentAttachment_eventIsAttached_Parms
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
	void Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGEquipmentAttachment_eventIsAttached_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGEquipmentAttachment_eventIsAttached_Parms), &Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "@return true if this is attached; false if not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentAttachment, nullptr, "IsAttached", sizeof(FGEquipmentAttachment_eventIsAttached_Parms), Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentAttachment_OnAttach_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentAttachment_OnAttach_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "Event called when this equipment has been attached" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentAttachment_OnAttach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentAttachment, nullptr, "OnAttach", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentAttachment_OnAttach_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_OnAttach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_OnAttach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentAttachment_OnAttach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newUseState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated_Statics::NewProp_newUseState = { "newUseState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipmentAttachment_eventOnAttachmentUseStateUpdated_Parms, newUseState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated_Statics::NewProp_newUseState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "Event called when use state is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentAttachment, nullptr, "OnAttachmentUseStateUpdated", sizeof(FGEquipmentAttachment_eventOnAttachmentUseStateUpdated_Parms), Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentAttachment_OnDetach_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentAttachment_OnDetach_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "Event called before this equipment is detached" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentAttachment_OnDetach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentAttachment, nullptr, "OnDetach", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentAttachment_OnDetach_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_OnDetach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_OnDetach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentAttachment_OnDetach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_OnAnimationStateUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_OnAnimationStateUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "Called when the animation state has been updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_OnAnimationStateUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentAttachment, nullptr, "OnRep_OnAnimationStateUpdated", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_OnAnimationStateUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_OnAnimationStateUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_OnAnimationStateUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_OnAnimationStateUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_UseLocationUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_UseLocationUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "Called when we get a new use location, on client through replication and on server from SetFlashLocation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_UseLocationUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentAttachment, nullptr, "OnRep_UseLocationUpdated", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_UseLocationUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_UseLocationUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_UseLocationUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_UseLocationUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentAttachment_PlayAttachEffects3P_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentAttachment_PlayAttachEffects3P_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "Event called when we should play attach effects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentAttachment_PlayAttachEffects3P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentAttachment, nullptr, "PlayAttachEffects3P", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentAttachment_PlayAttachEffects3P_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_PlayAttachEffects3P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_PlayAttachEffects3P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentAttachment_PlayAttachEffects3P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentAttachment_PlayDetachEffects3P_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentAttachment_PlayDetachEffects3P_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment|Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "Event called when we should play detach" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentAttachment_PlayDetachEffects3P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentAttachment, nullptr, "PlayDetachEffects3P", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentAttachment_PlayDetachEffects3P_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_PlayDetachEffects3P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_PlayDetachEffects3P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentAttachment_PlayDetachEffects3P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_useLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect_Statics::NewProp_useLocation = { "useLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipmentAttachment_eventPlayUseEffect_Parms, useLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect_Statics::NewProp_useLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "Handles playing of effects on remote clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentAttachment, nullptr, "PlayUseEffect", sizeof(FGEquipmentAttachment_eventPlayUseEffect_Parms), Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGEquipmentAttachment_NoRegister()
	{
		return AFGEquipmentAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AFGEquipmentAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAnimationState_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mAnimationState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEquipmentSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mEquipmentSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mEquipmentSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttachedTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAttachedTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBackAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mBackAnimation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mBackAnimation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mArmAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mArmAnimation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mArmAnimation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttachSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mAttachSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mUseLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEquipmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mEquipmentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGEquipmentAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGEquipmentAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachedTo, "GetAttachedTo" }, // 796390152
		{ &Z_Construct_UFunction_AFGEquipmentAttachment_GetAttachSocket, "GetAttachSocket" }, // 4152713600
		{ &Z_Construct_UFunction_AFGEquipmentAttachment_GetEquippedSlot, "GetEquippedSlot" }, // 2135914498
		{ &Z_Construct_UFunction_AFGEquipmentAttachment_IsAttached, "IsAttached" }, // 2658483742
		{ &Z_Construct_UFunction_AFGEquipmentAttachment_OnAttach, "OnAttach" }, // 3695275035
		{ &Z_Construct_UFunction_AFGEquipmentAttachment_OnAttachmentUseStateUpdated, "OnAttachmentUseStateUpdated" }, // 2284739117
		{ &Z_Construct_UFunction_AFGEquipmentAttachment_OnDetach, "OnDetach" }, // 628295259
		{ &Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_OnAnimationStateUpdated, "OnRep_OnAnimationStateUpdated" }, // 1749265886
		{ &Z_Construct_UFunction_AFGEquipmentAttachment_OnRep_UseLocationUpdated, "OnRep_UseLocationUpdated" }, // 1324150521
		{ &Z_Construct_UFunction_AFGEquipmentAttachment_PlayAttachEffects3P, "PlayAttachEffects3P" }, // 4032529720
		{ &Z_Construct_UFunction_AFGEquipmentAttachment_PlayDetachEffects3P, "PlayDetachEffects3P" }, // 3117743756
		{ &Z_Construct_UFunction_AFGEquipmentAttachment_PlayUseEffect, "PlayUseEffect" }, // 2166656769
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGEquipmentAttachment.h" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAnimationState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "integer used for animation states" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAnimationState = { "mAnimationState", "OnRep_OnAnimationStateUpdated", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipmentAttachment, mAnimationState), METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAnimationState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAnimationState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mEquipmentSlot_MetaData[] = {
		{ "Category", "Equipment|Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "To what slot is this attachment attached" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mEquipmentSlot = { "mEquipmentSlot", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipmentAttachment, mEquipmentSlot), Z_Construct_UEnum_FactoryGame_EEquipmentSlot, METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mEquipmentSlot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mEquipmentSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mEquipmentSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAttachedTo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "The character this is attached to." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAttachedTo = { "mAttachedTo", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipmentAttachment, mAttachedTo), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAttachedTo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAttachedTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mBackAnimation_MetaData[] = {
		{ "Category", "Equipment|Animation" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "Arms animation this should play on the when the equipment is equipped (only used if mEquipmentSlot == ES_BACK)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mBackAnimation = { "mBackAnimation", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipmentAttachment, mBackAnimation), Z_Construct_UEnum_FactoryGame_EBackEquipment, METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mBackAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mBackAnimation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mBackAnimation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mArmAnimation_MetaData[] = {
		{ "Category", "Equipment|Animation" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "Arms animation this should play on the when the equipment is equipped (only used if mEquipmentSlot == ES_ARMS)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mArmAnimation = { "mArmAnimation", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipmentAttachment, mArmAnimation), Z_Construct_UEnum_FactoryGame_EArmEquipment, METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mArmAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mArmAnimation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mArmAnimation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAttachSocket_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "If this equipment should attach to a socket, this is the socket." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAttachSocket = { "mAttachSocket", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipmentAttachment, mAttachSocket), METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAttachSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAttachSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mUseLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "This value get replicated to clients so they can play effect" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mUseLocation = { "mUseLocation", "OnRep_UseLocationUpdated", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipmentAttachment, mUseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mUseLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mUseLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mEquipmentClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentAttachment.h" },
		{ "ToolTip", "The class of the equipment that spawned this attachment" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mEquipmentClass = { "mEquipmentClass", nullptr, (EPropertyFlags)0x0014000000000020, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipmentAttachment, mEquipmentClass), Z_Construct_UClass_AFGEquipment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mEquipmentClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mEquipmentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGEquipmentAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAnimationState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mEquipmentSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mEquipmentSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAttachedTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mBackAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mBackAnimation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mArmAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mArmAnimation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mAttachSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mUseLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentAttachment_Statics::NewProp_mEquipmentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGEquipmentAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGEquipmentAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGEquipmentAttachment_Statics::ClassParams = {
		&AFGEquipmentAttachment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGEquipmentAttachment_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentAttachment_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentAttachment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGEquipmentAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGEquipmentAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGEquipmentAttachment, 3446536087);
	template<> FACTORYGAME_API UClass* StaticClass<AFGEquipmentAttachment>()
	{
		return AFGEquipmentAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGEquipmentAttachment(Z_Construct_UClass_AFGEquipmentAttachment, &AFGEquipmentAttachment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGEquipmentAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGEquipmentAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
