// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGInputLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGInputLibrary() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFGKeyMapping();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInputLibrary_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInputLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputEvent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_RebindKey();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings();
// End Cross Module References
class UScriptStruct* FFGKeyMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFGKeyMapping_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGKeyMapping, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FGKeyMapping"), sizeof(FFGKeyMapping), Get_Z_Construct_UScriptStruct_FFGKeyMapping_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGKeyMapping(FFGKeyMapping::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FGKeyMapping"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFGKeyMapping
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFGKeyMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGKeyMapping")),new UScriptStruct::TCppStructOps<FFGKeyMapping>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFGKeyMapping;
	struct Z_Construct_UScriptStruct_FFGKeyMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAxisMapping_MetaData[];
#endif
		static void NewProp_IsAxisMapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAxisMapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisKeyMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisKeyMapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionKeyMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionKeyMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGKeyMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_IsAxisMapping_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_IsAxisMapping_SetBit(void* Obj)
	{
		((FFGKeyMapping*)Obj)->IsAxisMapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_IsAxisMapping = { UE4CodeGen_Private::EPropertyClass::Bool, "IsAxisMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFGKeyMapping), &Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_IsAxisMapping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_IsAxisMapping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_IsAxisMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_AxisKeyMapping_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_AxisKeyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "AxisKeyMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFGKeyMapping, AxisKeyMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_AxisKeyMapping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_AxisKeyMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_ActionKeyMapping_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_ActionKeyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "ActionKeyMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFGKeyMapping, ActionKeyMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_ActionKeyMapping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_ActionKeyMapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGKeyMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_IsAxisMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_AxisKeyMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGKeyMapping_Statics::NewProp_ActionKeyMapping,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FGKeyMapping",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FFGKeyMapping),
		alignof(FFGKeyMapping),
		Z_Construct_UScriptStruct_FFGKeyMapping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGKeyMapping_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGKeyMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGKeyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGKeyMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGKeyMapping_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGKeyMapping"), sizeof(FFGKeyMapping), Get_Z_Construct_UScriptStruct_FFGKeyMapping_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGKeyMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGKeyMapping_CRC() { return 1860020116U; }
	void UFGInputLibrary::StaticRegisterNativesUFGInputLibrary()
	{
		UClass* Class = UFGInputLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateFGKeyMappingStruct", &UFGInputLibrary::execCreateFGKeyMappingStruct },
			{ "FormatStringWithKeyNames", &UFGInputLibrary::execFormatStringWithKeyNames },
			{ "GetAbbreviatedKeyName", &UFGInputLibrary::execGetAbbreviatedKeyName },
			{ "GetKeyForAxis", &UFGInputLibrary::execGetKeyForAxis },
			{ "GetKeyMappingForAction", &UFGInputLibrary::execGetKeyMappingForAction },
			{ "GetKeyNameForAction", &UFGInputLibrary::execGetKeyNameForAction },
			{ "GetKeyNameForAxis", &UFGInputLibrary::execGetKeyNameForAxis },
			{ "GetOverlappingKeyMapping", &UFGInputLibrary::execGetOverlappingKeyMapping },
			{ "IsActionAndAxisMappingUsingSameKeys", &UFGInputLibrary::execIsActionAndAxisMappingUsingSameKeys },
			{ "IsActionKeyMappingAvailable", &UFGInputLibrary::execIsActionKeyMappingAvailable },
			{ "IsActionMappingUsingSameKeys", &UFGInputLibrary::execIsActionMappingUsingSameKeys },
			{ "IsAxisKeyMappingAvailable", &UFGInputLibrary::execIsAxisKeyMappingAvailable },
			{ "IsAxisMappingUsingSameKeys", &UFGInputLibrary::execIsAxisMappingUsingSameKeys },
			{ "IsFGKeyMappingAvailable", &UFGInputLibrary::execIsFGKeyMappingAvailable },
			{ "IsKeyMappingRelevant", &UFGInputLibrary::execIsKeyMappingRelevant },
			{ "NullKeyMappingWithSameKeyCombo", &UFGInputLibrary::execNullKeyMappingWithSameKeyCombo },
			{ "RebindKey", &UFGInputLibrary::execRebindKey },
			{ "UpdateInputMappings", &UFGInputLibrary::execUpdateInputMappings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics
	{
		struct FGInputLibrary_eventCreateFGKeyMappingStruct_Parms
		{
			FName actionName;
			bool isAxisMapping;
			bool positiveAxisScale;
			FInputEvent inputEvent;
			FKey keyPressed;
			FFGKeyMapping ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_keyPressed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inputEvent;
		static void NewProp_positiveAxisScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_positiveAxisScale;
		static void NewProp_isAxisMapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAxisMapping;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_actionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventCreateFGKeyMappingStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FFGKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_keyPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "keyPressed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventCreateFGKeyMappingStruct_Parms, keyPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_inputEvent = { UE4CodeGen_Private::EPropertyClass::Struct, "inputEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventCreateFGKeyMappingStruct_Parms, inputEvent), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_positiveAxisScale_SetBit(void* Obj)
	{
		((FGInputLibrary_eventCreateFGKeyMappingStruct_Parms*)Obj)->positiveAxisScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_positiveAxisScale = { UE4CodeGen_Private::EPropertyClass::Bool, "positiveAxisScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventCreateFGKeyMappingStruct_Parms), &Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_positiveAxisScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_isAxisMapping_SetBit(void* Obj)
	{
		((FGInputLibrary_eventCreateFGKeyMappingStruct_Parms*)Obj)->isAxisMapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_isAxisMapping = { UE4CodeGen_Private::EPropertyClass::Bool, "isAxisMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventCreateFGKeyMappingStruct_Parms), &Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_isAxisMapping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_actionName = { UE4CodeGen_Private::EPropertyClass::Name, "actionName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventCreateFGKeyMappingStruct_Parms, actionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_keyPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_inputEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_positiveAxisScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_isAxisMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::NewProp_actionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Create new FG key mapping struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "CreateFGKeyMappingStruct", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGInputLibrary_eventCreateFGKeyMappingStruct_Parms), Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics
	{
		struct FGInputLibrary_eventFormatStringWithKeyNames_Parms
		{
			APlayerController* playerController;
			FText textToFormat;
			bool abbreviateKeyNames;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static void NewProp_abbreviateKeyNames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_abbreviateKeyNames;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_textToFormat;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventFormatStringWithKeyNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::NewProp_abbreviateKeyNames_SetBit(void* Obj)
	{
		((FGInputLibrary_eventFormatStringWithKeyNames_Parms*)Obj)->abbreviateKeyNames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::NewProp_abbreviateKeyNames = { UE4CodeGen_Private::EPropertyClass::Bool, "abbreviateKeyNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventFormatStringWithKeyNames_Parms), &Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::NewProp_abbreviateKeyNames_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::NewProp_textToFormat = { UE4CodeGen_Private::EPropertyClass::Text, "textToFormat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventFormatStringWithKeyNames_Parms, textToFormat), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::NewProp_playerController = { UE4CodeGen_Private::EPropertyClass::Object, "playerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventFormatStringWithKeyNames_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::NewProp_abbreviateKeyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::NewProp_textToFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::NewProp_playerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "CPP_Default_abbreviateKeyNames", "true" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Replaces action names in the provided text with the corresponding key e.g. ({PrimaryFire} = LMB)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "FormatStringWithKeyNames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGInputLibrary_eventFormatStringWithKeyNames_Parms), Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName_Statics
	{
		struct FGInputLibrary_eventGetAbbreviatedKeyName_Parms
		{
			FKey key;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetAbbreviatedKeyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Struct, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetAbbreviatedKeyName_Parms, key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Returns a shortened name for a key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "GetAbbreviatedKeyName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGInputLibrary_eventGetAbbreviatedKeyName_Parms), Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics
	{
		struct FGInputLibrary_eventGetKeyForAxis_Parms
		{
			APlayerController* playerController;
			FName axisName;
			bool positiveAxisScale;
			bool getGamepadKey;
			FKey ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_getGamepadKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_getGamepadKey;
		static void NewProp_positiveAxisScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_positiveAxisScale;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_axisName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetKeyForAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_getGamepadKey_SetBit(void* Obj)
	{
		((FGInputLibrary_eventGetKeyForAxis_Parms*)Obj)->getGamepadKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_getGamepadKey = { UE4CodeGen_Private::EPropertyClass::Bool, "getGamepadKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventGetKeyForAxis_Parms), &Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_getGamepadKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_positiveAxisScale_SetBit(void* Obj)
	{
		((FGInputLibrary_eventGetKeyForAxis_Parms*)Obj)->positiveAxisScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_positiveAxisScale = { UE4CodeGen_Private::EPropertyClass::Bool, "positiveAxisScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventGetKeyForAxis_Parms), &Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_positiveAxisScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_axisName = { UE4CodeGen_Private::EPropertyClass::Name, "axisName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetKeyForAxis_Parms, axisName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_playerController = { UE4CodeGen_Private::EPropertyClass::Object, "playerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetKeyForAxis_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_getGamepadKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_positiveAxisScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_axisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::NewProp_playerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Returns the FKey for the axis we specify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "GetKeyForAxis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGInputLibrary_eventGetKeyForAxis_Parms), Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics
	{
		struct FGInputLibrary_eventGetKeyMappingForAction_Parms
		{
			APlayerController* playerController;
			FName inAction;
			bool getGamepadKey;
			FInputActionKeyMapping ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_getGamepadKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_getGamepadKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_inAction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetKeyMappingForAction_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::NewProp_getGamepadKey_SetBit(void* Obj)
	{
		((FGInputLibrary_eventGetKeyMappingForAction_Parms*)Obj)->getGamepadKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::NewProp_getGamepadKey = { UE4CodeGen_Private::EPropertyClass::Bool, "getGamepadKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventGetKeyMappingForAction_Parms), &Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::NewProp_getGamepadKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::NewProp_inAction = { UE4CodeGen_Private::EPropertyClass::Name, "inAction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetKeyMappingForAction_Parms, inAction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::NewProp_playerController = { UE4CodeGen_Private::EPropertyClass::Object, "playerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetKeyMappingForAction_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::NewProp_getGamepadKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::NewProp_inAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::NewProp_playerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Returns the action key mapping for the action we specify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "GetKeyMappingForAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGInputLibrary_eventGetKeyMappingForAction_Parms), Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics
	{
		struct FGInputLibrary_eventGetKeyNameForAction_Parms
		{
			APlayerController* playerController;
			FName actionName;
			bool getGamepadKey;
			bool abbreviateKeyName;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static void NewProp_abbreviateKeyName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_abbreviateKeyName;
		static void NewProp_getGamepadKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_getGamepadKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_actionName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetKeyNameForAction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_abbreviateKeyName_SetBit(void* Obj)
	{
		((FGInputLibrary_eventGetKeyNameForAction_Parms*)Obj)->abbreviateKeyName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_abbreviateKeyName = { UE4CodeGen_Private::EPropertyClass::Bool, "abbreviateKeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventGetKeyNameForAction_Parms), &Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_abbreviateKeyName_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_getGamepadKey_SetBit(void* Obj)
	{
		((FGInputLibrary_eventGetKeyNameForAction_Parms*)Obj)->getGamepadKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_getGamepadKey = { UE4CodeGen_Private::EPropertyClass::Bool, "getGamepadKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventGetKeyNameForAction_Parms), &Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_getGamepadKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_actionName = { UE4CodeGen_Private::EPropertyClass::Name, "actionName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetKeyNameForAction_Parms, actionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_playerController = { UE4CodeGen_Private::EPropertyClass::Object, "playerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetKeyNameForAction_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_abbreviateKeyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_getGamepadKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_actionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::NewProp_playerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "CPP_Default_abbreviateKeyName", "true" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Returns readable name for an action" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "GetKeyNameForAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGInputLibrary_eventGetKeyNameForAction_Parms), Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics
	{
		struct FGInputLibrary_eventGetKeyNameForAxis_Parms
		{
			APlayerController* playerController;
			FName axisName;
			bool positiveAxisScale;
			bool getGamepadKey;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static void NewProp_getGamepadKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_getGamepadKey;
		static void NewProp_positiveAxisScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_positiveAxisScale;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_axisName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetKeyNameForAxis_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_getGamepadKey_SetBit(void* Obj)
	{
		((FGInputLibrary_eventGetKeyNameForAxis_Parms*)Obj)->getGamepadKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_getGamepadKey = { UE4CodeGen_Private::EPropertyClass::Bool, "getGamepadKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventGetKeyNameForAxis_Parms), &Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_getGamepadKey_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_positiveAxisScale_SetBit(void* Obj)
	{
		((FGInputLibrary_eventGetKeyNameForAxis_Parms*)Obj)->positiveAxisScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_positiveAxisScale = { UE4CodeGen_Private::EPropertyClass::Bool, "positiveAxisScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventGetKeyNameForAxis_Parms), &Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_positiveAxisScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_axisName = { UE4CodeGen_Private::EPropertyClass::Name, "axisName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetKeyNameForAxis_Parms, axisName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_playerController = { UE4CodeGen_Private::EPropertyClass::Object, "playerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetKeyNameForAxis_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_getGamepadKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_positiveAxisScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_axisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::NewProp_playerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Returns readable name for an axis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "GetKeyNameForAxis", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGInputLibrary_eventGetKeyNameForAxis_Parms), Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics
	{
		struct FGInputLibrary_eventGetOverlappingKeyMapping_Parms
		{
			APlayerController* playerController;
			FFGKeyMapping keyMapping;
			FFGKeyMapping ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_keyMapping;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetOverlappingKeyMapping_Parms, ReturnValue), Z_Construct_UScriptStruct_FFGKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::NewProp_keyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::NewProp_keyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "keyMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetOverlappingKeyMapping_Parms, keyMapping), Z_Construct_UScriptStruct_FFGKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::NewProp_keyMapping_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::NewProp_keyMapping_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::NewProp_playerController = { UE4CodeGen_Private::EPropertyClass::Object, "playerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventGetOverlappingKeyMapping_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::NewProp_keyMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::NewProp_playerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Returns the key mapping that uses the same relevant keys" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "GetOverlappingKeyMapping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGInputLibrary_eventGetOverlappingKeyMapping_Parms), Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics
	{
		struct FGInputLibrary_eventIsActionAndAxisMappingUsingSameKeys_Parms
		{
			FInputActionKeyMapping actionMapping;
			FInputAxisKeyMapping axisMapping;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_axisMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_axisMapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actionMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInputLibrary_eventIsActionAndAxisMappingUsingSameKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventIsActionAndAxisMappingUsingSameKeys_Parms), &Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_axisMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_axisMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "axisMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventIsActionAndAxisMappingUsingSameKeys_Parms, axisMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_axisMapping_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_axisMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_actionMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_actionMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "actionMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventIsActionAndAxisMappingUsingSameKeys_Parms, actionMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_actionMapping_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_actionMapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_axisMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::NewProp_actionMapping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Check if an action and axis mapping is using the same relevant keys" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "IsActionAndAxisMappingUsingSameKeys", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGInputLibrary_eventIsActionAndAxisMappingUsingSameKeys_Parms), Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics
	{
		struct FGInputLibrary_eventIsActionKeyMappingAvailable_Parms
		{
			APlayerController* playerController;
			FFGKeyMapping keyMapping;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_keyMapping;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInputLibrary_eventIsActionKeyMappingAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventIsActionKeyMappingAvailable_Parms), &Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::NewProp_keyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::NewProp_keyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "keyMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventIsActionKeyMappingAvailable_Parms, keyMapping), Z_Construct_UScriptStruct_FFGKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::NewProp_keyMapping_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::NewProp_keyMapping_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::NewProp_playerController = { UE4CodeGen_Private::EPropertyClass::Object, "playerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventIsActionKeyMappingAvailable_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::NewProp_keyMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::NewProp_playerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Check if a action key mapping is available" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "IsActionKeyMappingAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGInputLibrary_eventIsActionKeyMappingAvailable_Parms), Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics
	{
		struct FGInputLibrary_eventIsActionMappingUsingSameKeys_Parms
		{
			FInputActionKeyMapping mappingA;
			FInputActionKeyMapping mappingB;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mappingB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mappingB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mappingA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mappingA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInputLibrary_eventIsActionMappingUsingSameKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventIsActionMappingUsingSameKeys_Parms), &Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_mappingB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_mappingB = { UE4CodeGen_Private::EPropertyClass::Struct, "mappingB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventIsActionMappingUsingSameKeys_Parms, mappingB), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_mappingB_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_mappingB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_mappingA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_mappingA = { UE4CodeGen_Private::EPropertyClass::Struct, "mappingA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventIsActionMappingUsingSameKeys_Parms, mappingA), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_mappingA_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_mappingA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_mappingB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::NewProp_mappingA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Check if action mappings is using the same relevant keys" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "IsActionMappingUsingSameKeys", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGInputLibrary_eventIsActionMappingUsingSameKeys_Parms), Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics
	{
		struct FGInputLibrary_eventIsAxisKeyMappingAvailable_Parms
		{
			APlayerController* playerController;
			FFGKeyMapping keyMapping;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_keyMapping;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInputLibrary_eventIsAxisKeyMappingAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventIsAxisKeyMappingAvailable_Parms), &Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::NewProp_keyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::NewProp_keyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "keyMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventIsAxisKeyMappingAvailable_Parms, keyMapping), Z_Construct_UScriptStruct_FFGKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::NewProp_keyMapping_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::NewProp_keyMapping_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::NewProp_playerController = { UE4CodeGen_Private::EPropertyClass::Object, "playerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventIsAxisKeyMappingAvailable_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::NewProp_keyMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::NewProp_playerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Check if a axis key mapping is available" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "IsAxisKeyMappingAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGInputLibrary_eventIsAxisKeyMappingAvailable_Parms), Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics
	{
		struct FGInputLibrary_eventIsAxisMappingUsingSameKeys_Parms
		{
			FInputAxisKeyMapping mappingA;
			FInputAxisKeyMapping mappingB;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mappingB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mappingB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mappingA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mappingA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInputLibrary_eventIsAxisMappingUsingSameKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventIsAxisMappingUsingSameKeys_Parms), &Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_mappingB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_mappingB = { UE4CodeGen_Private::EPropertyClass::Struct, "mappingB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventIsAxisMappingUsingSameKeys_Parms, mappingB), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_mappingB_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_mappingB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_mappingA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_mappingA = { UE4CodeGen_Private::EPropertyClass::Struct, "mappingA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventIsAxisMappingUsingSameKeys_Parms, mappingA), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_mappingA_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_mappingA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_mappingB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::NewProp_mappingA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Check if axis mappings is using the same relevant keys" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "IsAxisMappingUsingSameKeys", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGInputLibrary_eventIsAxisMappingUsingSameKeys_Parms), Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics
	{
		struct FGInputLibrary_eventIsFGKeyMappingAvailable_Parms
		{
			APlayerController* playerController;
			FFGKeyMapping keyMapping;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_keyMapping;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInputLibrary_eventIsFGKeyMappingAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventIsFGKeyMappingAvailable_Parms), &Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::NewProp_keyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::NewProp_keyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "keyMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventIsFGKeyMappingAvailable_Parms, keyMapping), Z_Construct_UScriptStruct_FFGKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::NewProp_keyMapping_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::NewProp_keyMapping_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::NewProp_playerController = { UE4CodeGen_Private::EPropertyClass::Object, "playerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventIsFGKeyMappingAvailable_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::NewProp_keyMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::NewProp_playerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Check if a FG key mapping is available" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "IsFGKeyMappingAvailable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGInputLibrary_eventIsFGKeyMappingAvailable_Parms), Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics
	{
		struct FGInputLibrary_eventIsKeyMappingRelevant_Parms
		{
			FName keyMappingName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_keyMappingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInputLibrary_eventIsKeyMappingRelevant_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventIsKeyMappingRelevant_Parms), &Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::NewProp_keyMappingName = { UE4CodeGen_Private::EPropertyClass::Name, "keyMappingName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventIsKeyMappingRelevant_Parms, keyMappingName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::NewProp_keyMappingName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Check if a key mapping is relevant for rebinding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "IsKeyMappingRelevant", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGInputLibrary_eventIsKeyMappingRelevant_Parms), Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics
	{
		struct FGInputLibrary_eventNullKeyMappingWithSameKeyCombo_Parms
		{
			APlayerController* playerController;
			FFGKeyMapping keyMapping;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_keyMapping;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::NewProp_keyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::NewProp_keyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "keyMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventNullKeyMappingWithSameKeyCombo_Parms, keyMapping), Z_Construct_UScriptStruct_FFGKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::NewProp_keyMapping_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::NewProp_keyMapping_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::NewProp_playerController = { UE4CodeGen_Private::EPropertyClass::Object, "playerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventNullKeyMappingWithSameKeyCombo_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::NewProp_keyMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::NewProp_playerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Find and set overlapping key mapping to none" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "NullKeyMappingWithSameKeyCombo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FGInputLibrary_eventNullKeyMappingWithSameKeyCombo_Parms), Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics
	{
		struct FGInputLibrary_eventRebindKey_Parms
		{
			APlayerController* playerController;
			FFGKeyMapping newKeyMapping;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newKeyMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newKeyMapping;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInputLibrary_eventRebindKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInputLibrary_eventRebindKey_Parms), &Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::NewProp_newKeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::NewProp_newKeyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "newKeyMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventRebindKey_Parms, newKeyMapping), Z_Construct_UScriptStruct_FFGKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::NewProp_newKeyMapping_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::NewProp_newKeyMapping_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::NewProp_playerController = { UE4CodeGen_Private::EPropertyClass::Object, "playerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventRebindKey_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::NewProp_newKeyMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::NewProp_playerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Rebind a key mapping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "RebindKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FGInputLibrary_eventRebindKey_Parms), Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_RebindKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_RebindKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings_Statics
	{
		struct FGInputLibrary_eventUpdateInputMappings_Parms
		{
			APlayerController* playerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings_Statics::NewProp_playerController = { UE4CodeGen_Private::EPropertyClass::Object, "playerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInputLibrary_eventUpdateInputMappings_Parms, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings_Statics::NewProp_playerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
		{ "ToolTip", "Update the provided playercontrollers input mappings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInputLibrary, "UpdateInputMappings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGInputLibrary_eventUpdateInputMappings_Parms), Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGInputLibrary_NoRegister()
	{
		return UFGInputLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFGInputLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGInputLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGInputLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGInputLibrary_CreateFGKeyMappingStruct, "CreateFGKeyMappingStruct" }, // 2180567098
		{ &Z_Construct_UFunction_UFGInputLibrary_FormatStringWithKeyNames, "FormatStringWithKeyNames" }, // 969602164
		{ &Z_Construct_UFunction_UFGInputLibrary_GetAbbreviatedKeyName, "GetAbbreviatedKeyName" }, // 927366163
		{ &Z_Construct_UFunction_UFGInputLibrary_GetKeyForAxis, "GetKeyForAxis" }, // 3740614950
		{ &Z_Construct_UFunction_UFGInputLibrary_GetKeyMappingForAction, "GetKeyMappingForAction" }, // 4088696800
		{ &Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAction, "GetKeyNameForAction" }, // 685255758
		{ &Z_Construct_UFunction_UFGInputLibrary_GetKeyNameForAxis, "GetKeyNameForAxis" }, // 3334694299
		{ &Z_Construct_UFunction_UFGInputLibrary_GetOverlappingKeyMapping, "GetOverlappingKeyMapping" }, // 730896711
		{ &Z_Construct_UFunction_UFGInputLibrary_IsActionAndAxisMappingUsingSameKeys, "IsActionAndAxisMappingUsingSameKeys" }, // 1035888350
		{ &Z_Construct_UFunction_UFGInputLibrary_IsActionKeyMappingAvailable, "IsActionKeyMappingAvailable" }, // 1950958169
		{ &Z_Construct_UFunction_UFGInputLibrary_IsActionMappingUsingSameKeys, "IsActionMappingUsingSameKeys" }, // 3124865914
		{ &Z_Construct_UFunction_UFGInputLibrary_IsAxisKeyMappingAvailable, "IsAxisKeyMappingAvailable" }, // 1745941511
		{ &Z_Construct_UFunction_UFGInputLibrary_IsAxisMappingUsingSameKeys, "IsAxisMappingUsingSameKeys" }, // 610546839
		{ &Z_Construct_UFunction_UFGInputLibrary_IsFGKeyMappingAvailable, "IsFGKeyMappingAvailable" }, // 311160730
		{ &Z_Construct_UFunction_UFGInputLibrary_IsKeyMappingRelevant, "IsKeyMappingRelevant" }, // 682701649
		{ &Z_Construct_UFunction_UFGInputLibrary_NullKeyMappingWithSameKeyCombo, "NullKeyMappingWithSameKeyCombo" }, // 1778900231
		{ &Z_Construct_UFunction_UFGInputLibrary_RebindKey, "RebindKey" }, // 2388949127
		{ &Z_Construct_UFunction_UFGInputLibrary_UpdateInputMappings, "UpdateInputMappings" }, // 4294144166
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInputLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGInputLibrary.h" },
		{ "ModuleRelativePath", "Public/FGInputLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGInputLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGInputLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGInputLibrary_Statics::ClassParams = {
		&UFGInputLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGInputLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGInputLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGInputLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGInputLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGInputLibrary, 1822111154);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGInputLibrary(Z_Construct_UClass_UFGInputLibrary, &UFGInputLibrary::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGInputLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGInputLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
