// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/UI/FGPopupWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPopupWidget() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_PopupConfirmClicked__DelegateSignature();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EPopupId();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPopupData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPopupWidget_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPopupWidget();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInteractWidget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPopupWidget_CallPopupConfirmClicked();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventPopupClosed_Parms
		{
			bool ConfirmClicked;
		};
		static void NewProp_ConfirmClicked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ConfirmClicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature_Statics::NewProp_ConfirmClicked_SetBit(void* Obj)
	{
		((_Script_FactoryGame_eventPopupClosed_Parms*)Obj)->ConfirmClicked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature_Statics::NewProp_ConfirmClicked = { UE4CodeGen_Private::EPropertyClass::Bool, "ConfirmClicked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_FactoryGame_eventPopupClosed_Parms), &Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature_Statics::NewProp_ConfirmClicked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature_Statics::NewProp_ConfirmClicked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "PopupClosed__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_FactoryGame_eventPopupClosed_Parms), Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_PopupConfirmClicked__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_PopupConfirmClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_PopupConfirmClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "PopupConfirmClicked__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_PopupConfirmClicked__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_PopupConfirmClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_PopupConfirmClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_PopupConfirmClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EPopupId_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EPopupId, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EPopupId"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPopupId(EPopupId_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EPopupId"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EPopupId_CRC() { return 859142132U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EPopupId()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPopupId"), 0, Get_Z_Construct_UEnum_FactoryGame_EPopupId_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PID_OK", (int64)PID_OK },
				{ "PID_OK_CANCEL", (int64)PID_OK_CANCEL },
				{ "PID_NONE", (int64)PID_NONE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPopupId",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EPopupId",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPopupData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPopupData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPopupData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PopupData"), sizeof(FPopupData), Get_Z_Construct_UScriptStruct_FPopupData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPopupData(FPopupData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("PopupData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFPopupData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFPopupData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PopupData")),new UScriptStruct::TCppStructOps<FPopupData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFPopupData;
	struct Z_Construct_UScriptStruct_FPopupData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupClosedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PopupClosedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupConfirmClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PopupConfirmClickedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PopupClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPopupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPopupData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupClosedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupClosedDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "PopupClosedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FPopupData, PopupClosedDelegate), Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupClosedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupClosedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupConfirmClickedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupConfirmClickedDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "PopupConfirmClickedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020080000, 1, nullptr, STRUCT_OFFSET(FPopupData, PopupConfirmClickedDelegate_DEPRECATED), Z_Construct_UDelegateFunction_FactoryGame_PopupConfirmClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupConfirmClickedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupConfirmClickedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "Popup" },
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Instigator = { UE4CodeGen_Private::EPropertyClass::Object, "Instigator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(FPopupData, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Instigator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupClass_MetaData[] = {
		{ "Category", "Popup" },
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupClass = { UE4CodeGen_Private::EPropertyClass::Class, "PopupClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010015, 1, nullptr, STRUCT_OFFSET(FPopupData, PopupClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Popup" },
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Byte, "ID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(FPopupData, ID), Z_Construct_UEnum_FactoryGame_EPopupId, METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_ID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Popup" },
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Body = { UE4CodeGen_Private::EPropertyClass::Text, "Body", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(FPopupData, Body), METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Body_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Popup" },
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Title = { UE4CodeGen_Private::EPropertyClass::Text, "Title", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(FPopupData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Title_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPopupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupClosedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupConfirmClickedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_PopupClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupData_Statics::NewProp_Title,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPopupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"PopupData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FPopupData),
		alignof(FPopupData),
		Z_Construct_UScriptStruct_FPopupData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPopupData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPopupData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PopupData"), sizeof(FPopupData), Get_Z_Construct_UScriptStruct_FPopupData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPopupData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPopupData_CRC() { return 2640942902U; }
	void UFGPopupWidget::StaticRegisterNativesUFGPopupWidget()
	{
		UClass* Class = UFGPopupWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallPopupClosedClicked", &UFGPopupWidget::execCallPopupClosedClicked },
			{ "CallPopupConfirmClicked", &UFGPopupWidget::execCallPopupConfirmClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked_Statics
	{
		struct FGPopupWidget_eventCallPopupClosedClicked_Parms
		{
			bool confirm;
		};
		static void NewProp_confirm_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_confirm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked_Statics::NewProp_confirm_SetBit(void* Obj)
	{
		((FGPopupWidget_eventCallPopupClosedClicked_Parms*)Obj)->confirm = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked_Statics::NewProp_confirm = { UE4CodeGen_Private::EPropertyClass::Bool, "confirm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGPopupWidget_eventCallPopupClosedClicked_Parms), &Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked_Statics::NewProp_confirm_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked_Statics::NewProp_confirm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Popup" },
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPopupWidget, "CallPopupClosedClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGPopupWidget_eventCallPopupClosedClicked_Parms), Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPopupWidget_CallPopupConfirmClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPopupWidget_CallPopupConfirmClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Popup" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use CallPopupClosedClicked instead" },
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPopupWidget_CallPopupConfirmClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPopupWidget, "CallPopupConfirmClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPopupWidget_CallPopupConfirmClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPopupWidget_CallPopupConfirmClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPopupWidget_CallPopupConfirmClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPopupWidget_CallPopupConfirmClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGPopupWidget_NoRegister()
	{
		return UFGPopupWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFGPopupWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPopupClosedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_mPopupClosedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPopupConfirmClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_mPopupConfirmClickedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGPopupWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGInteractWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGPopupWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGPopupWidget_CallPopupClosedClicked, "CallPopupClosedClicked" }, // 86131675
		{ &Z_Construct_UFunction_UFGPopupWidget_CallPopupConfirmClicked, "CallPopupConfirmClicked" }, // 3899086507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPopupWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGPopupWidget.h" },
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mInstigator_MetaData[] = {
		{ "Category", "Popup" },
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mInstigator = { UE4CodeGen_Private::EPropertyClass::Object, "mInstigator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(UFGPopupWidget, mInstigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mInstigator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mPopupClosedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
		{ "ToolTip", "Delegate for when pressing the confirm button in popup" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mPopupClosedDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "mPopupClosedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UFGPopupWidget, mPopupClosedDelegate), Z_Construct_UDelegateFunction_FactoryGame_PopupClosed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mPopupClosedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mPopupClosedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mPopupConfirmClickedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/FGPopupWidget.h" },
		{ "ToolTip", "Delegate for when pressing the confirm button in popup" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mPopupConfirmClickedDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "mPopupConfirmClickedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020080000, 1, nullptr, STRUCT_OFFSET(UFGPopupWidget, mPopupConfirmClickedDelegate_DEPRECATED), Z_Construct_UDelegateFunction_FactoryGame_PopupConfirmClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mPopupConfirmClickedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mPopupConfirmClickedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGPopupWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mPopupClosedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPopupWidget_Statics::NewProp_mPopupConfirmClickedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGPopupWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGPopupWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGPopupWidget_Statics::ClassParams = {
		&UFGPopupWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGPopupWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGPopupWidget_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGPopupWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGPopupWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGPopupWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGPopupWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGPopupWidget, 2711865928);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGPopupWidget(Z_Construct_UClass_UFGPopupWidget, &UFGPopupWidget::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGPopupWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGPopupWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
