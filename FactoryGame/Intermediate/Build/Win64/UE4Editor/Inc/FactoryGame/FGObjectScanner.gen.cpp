// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Equipment/FGObjectScanner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGObjectScanner() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FScannableDetails();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSchematic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGObjectScanner_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGObjectScanner();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGObjectScanner_CycleBackward();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGObjectScanner_CycleForward();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGObjectScanner_IsBeeping();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGObjectScanner_PlayBeep();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGObjectScannerAttachment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGObjectScannerAttachment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentAttachment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_IsBeeping();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_ScannerLightColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGObjectScannerAttachment_UpdateScannerVisuals();
// End Cross Module References
class UScriptStruct* FScannableDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FScannableDetails_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScannableDetails, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ScannableDetails"), sizeof(FScannableDetails), Get_Z_Construct_UScriptStruct_FScannableDetails_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScannableDetails(FScannableDetails::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ScannableDetails"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFScannableDetails
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFScannableDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScannableDetails")),new UScriptStruct::TCppStructOps<FScannableDetails>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFScannableDetails;
	struct Z_Construct_UScriptStruct_FScannableDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredSchematic_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_RequiredSchematic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDetectionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDetectionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldOverrideDetectionRange_MetaData[];
#endif
		static void NewProp_ShouldOverrideDetectionRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldOverrideDetectionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreCacheAllOfType_MetaData[];
#endif
		static void NewProp_PreCacheAllOfType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PreCacheAllOfType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScannerLightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScannerLightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScannableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ScannableClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScannableDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScannableDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScannableDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_RequiredSchematic_MetaData[] = {
		{ "Category", "ScannableDetails" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Required schematic to search for this object. None means no requirement." },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_RequiredSchematic = { UE4CodeGen_Private::EPropertyClass::SoftClass, "RequiredSchematic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(FScannableDetails, RequiredSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_RequiredSchematic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_RequiredSchematic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_NewDetectionRange_MetaData[] = {
		{ "Category", "ScannableDetails" },
		{ "EditCondition", "ShouldOverrideDetectionRange" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Override the base detection range of the scanner" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_NewDetectionRange = { UE4CodeGen_Private::EPropertyClass::Float, "NewDetectionRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FScannableDetails, NewDetectionRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_NewDetectionRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_NewDetectionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ShouldOverrideDetectionRange_MetaData[] = {
		{ "Category", "ScannableDetails" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "If true, NewDetectionRange will be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ShouldOverrideDetectionRange_SetBit(void* Obj)
	{
		((FScannableDetails*)Obj)->ShouldOverrideDetectionRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ShouldOverrideDetectionRange = { UE4CodeGen_Private::EPropertyClass::Bool, "ShouldOverrideDetectionRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FScannableDetails), &Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ShouldOverrideDetectionRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ShouldOverrideDetectionRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ShouldOverrideDetectionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_PreCacheAllOfType_MetaData[] = {
		{ "Category", "ScannableDetails" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Should we get all actors at load and cache them? or do we need to update these every frame.\nBetter to cache it, but some things can't be cached (eg. Enemies)" },
	};
#endif
	void Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_PreCacheAllOfType_SetBit(void* Obj)
	{
		((FScannableDetails*)Obj)->PreCacheAllOfType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_PreCacheAllOfType = { UE4CodeGen_Private::EPropertyClass::Bool, "PreCacheAllOfType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FScannableDetails), &Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_PreCacheAllOfType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_PreCacheAllOfType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_PreCacheAllOfType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ScannerLightColor_MetaData[] = {
		{ "Category", "ScannableDetails" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Scanner light color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ScannerLightColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ScannerLightColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(FScannableDetails, ScannerLightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ScannerLightColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ScannerLightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_DisplayText_MetaData[] = {
		{ "Category", "ScannableDetails" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Name of object to scan for" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_DisplayText = { UE4CodeGen_Private::EPropertyClass::Text, "DisplayText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(FScannableDetails, DisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_DisplayText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_DisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ScannableClass_MetaData[] = {
		{ "Category", "ScannableDetails" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Type of object to scan for" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ScannableClass = { UE4CodeGen_Private::EPropertyClass::Class, "ScannableClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010015, 1, nullptr, STRUCT_OFFSET(FScannableDetails, ScannableClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ScannableClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ScannableClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScannableDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_RequiredSchematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_NewDetectionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ShouldOverrideDetectionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_PreCacheAllOfType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ScannerLightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_DisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScannableDetails_Statics::NewProp_ScannableClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScannableDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ScannableDetails",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FScannableDetails),
		alignof(FScannableDetails),
		Z_Construct_UScriptStruct_FScannableDetails_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FScannableDetails_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScannableDetails_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FScannableDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScannableDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScannableDetails_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScannableDetails"), sizeof(FScannableDetails), Get_Z_Construct_UScriptStruct_FScannableDetails_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScannableDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScannableDetails_CRC() { return 4272842592U; }
	static FName NAME_AFGObjectScanner_PlayBeep = FName(TEXT("PlayBeep"));
	void AFGObjectScanner::PlayBeep(bool isObjectInRange)
	{
		FGObjectScanner_eventPlayBeep_Parms Parms;
		Parms.isObjectInRange=isObjectInRange ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGObjectScanner_PlayBeep),&Parms);
	}
	static FName NAME_AFGObjectScanner_UpdateScannerVisuals = FName(TEXT("UpdateScannerVisuals"));
	void AFGObjectScanner::UpdateScannerVisuals(bool wasChange)
	{
		FGObjectScanner_eventUpdateScannerVisuals_Parms Parms;
		Parms.wasChange=wasChange ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGObjectScanner_UpdateScannerVisuals),&Parms);
	}
	void AFGObjectScanner::StaticRegisterNativesAFGObjectScanner()
	{
		UClass* Class = AFGObjectScanner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CycleBackward", &AFGObjectScanner::execCycleBackward },
			{ "CycleForward", &AFGObjectScanner::execCycleForward },
			{ "GetAvailableObjectDetails", &AFGObjectScanner::execGetAvailableObjectDetails },
			{ "GetCurrentDetails", &AFGObjectScanner::execGetCurrentDetails },
			{ "IsBeeping", &AFGObjectScanner::execIsBeeping },
			{ "SetScannableEntry", &AFGObjectScanner::execSetScannableEntry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGObjectScanner_CycleBackward_Statics
	{
		struct FGObjectScanner_eventCycleBackward_Parms
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
	void Z_Construct_UFunction_AFGObjectScanner_CycleBackward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGObjectScanner_eventCycleBackward_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGObjectScanner_CycleBackward_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGObjectScanner_eventCycleBackward_Parms), &Z_Construct_UFunction_AFGObjectScanner_CycleBackward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGObjectScanner_CycleBackward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGObjectScanner_CycleBackward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGObjectScanner_CycleBackward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Cycles scannable type backward and updates the light on the attachment\n@return true if there was a setting change, false means there was nothing to cycle to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGObjectScanner_CycleBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGObjectScanner, "CycleBackward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGObjectScanner_eventCycleBackward_Parms), Z_Construct_UFunction_AFGObjectScanner_CycleBackward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_CycleBackward_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGObjectScanner_CycleBackward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_CycleBackward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGObjectScanner_CycleBackward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGObjectScanner_CycleBackward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGObjectScanner_CycleForward_Statics
	{
		struct FGObjectScanner_eventCycleForward_Parms
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
	void Z_Construct_UFunction_AFGObjectScanner_CycleForward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGObjectScanner_eventCycleForward_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGObjectScanner_CycleForward_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGObjectScanner_eventCycleForward_Parms), &Z_Construct_UFunction_AFGObjectScanner_CycleForward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGObjectScanner_CycleForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGObjectScanner_CycleForward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGObjectScanner_CycleForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Cycles scannable type forward and updates the light on the attachment\n@return true if there was a setting change, false means there was nothing to cycle to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGObjectScanner_CycleForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGObjectScanner, "CycleForward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGObjectScanner_eventCycleForward_Parms), Z_Construct_UFunction_AFGObjectScanner_CycleForward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_CycleForward_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGObjectScanner_CycleForward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_CycleForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGObjectScanner_CycleForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGObjectScanner_CycleForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails_Statics
	{
		struct FGObjectScanner_eventGetAvailableObjectDetails_Parms
		{
			TArray<FScannableDetails> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGObjectScanner_eventGetAvailableObjectDetails_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FScannableDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Returns array with all object details that we can search for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGObjectScanner, "GetAvailableObjectDetails", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGObjectScanner_eventGetAvailableObjectDetails_Parms), Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails_Statics
	{
		struct FGObjectScanner_eventGetCurrentDetails_Parms
		{
			FScannableDetails ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGObjectScanner_eventGetCurrentDetails_Parms, ReturnValue), Z_Construct_UScriptStruct_FScannableDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Does what it says on the tin: get's the current details" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGObjectScanner, "GetCurrentDetails", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGObjectScanner_eventGetCurrentDetails_Parms), Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGObjectScanner_IsBeeping_Statics
	{
		struct FGObjectScanner_eventIsBeeping_Parms
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
	void Z_Construct_UFunction_AFGObjectScanner_IsBeeping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGObjectScanner_eventIsBeeping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGObjectScanner_IsBeeping_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGObjectScanner_eventIsBeeping_Parms), &Z_Construct_UFunction_AFGObjectScanner_IsBeeping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGObjectScanner_IsBeeping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGObjectScanner_IsBeeping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGObjectScanner_IsBeeping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGObjectScanner_IsBeeping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGObjectScanner, "IsBeeping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGObjectScanner_eventIsBeeping_Parms), Z_Construct_UFunction_AFGObjectScanner_IsBeeping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_IsBeeping_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGObjectScanner_IsBeeping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_IsBeeping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGObjectScanner_IsBeeping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGObjectScanner_IsBeeping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGObjectScanner_PlayBeep_Statics
	{
		static void NewProp_isObjectInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isObjectInRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGObjectScanner_PlayBeep_Statics::NewProp_isObjectInRange_SetBit(void* Obj)
	{
		((FGObjectScanner_eventPlayBeep_Parms*)Obj)->isObjectInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGObjectScanner_PlayBeep_Statics::NewProp_isObjectInRange = { UE4CodeGen_Private::EPropertyClass::Bool, "isObjectInRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGObjectScanner_eventPlayBeep_Parms), &Z_Construct_UFunction_AFGObjectScanner_PlayBeep_Statics::NewProp_isObjectInRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGObjectScanner_PlayBeep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGObjectScanner_PlayBeep_Statics::NewProp_isObjectInRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGObjectScanner_PlayBeep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "guess what this does." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGObjectScanner_PlayBeep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGObjectScanner, "PlayBeep", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGObjectScanner_eventPlayBeep_Parms), Z_Construct_UFunction_AFGObjectScanner_PlayBeep_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_PlayBeep_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGObjectScanner_PlayBeep_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_PlayBeep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGObjectScanner_PlayBeep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGObjectScanner_PlayBeep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry_Statics
	{
		struct FGObjectScanner_eventSetScannableEntry_Parms
		{
			TSubclassOf<AActor>  scannableClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_scannableClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry_Statics::NewProp_scannableClass = { UE4CodeGen_Private::EPropertyClass::Class, "scannableClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGObjectScanner_eventSetScannableEntry_Parms, scannableClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry_Statics::NewProp_scannableClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Sets to a desired scannable entry" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGObjectScanner, "SetScannableEntry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGObjectScanner_eventSetScannableEntry_Parms), Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals_Statics
	{
		static void NewProp_wasChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals_Statics::NewProp_wasChange_SetBit(void* Obj)
	{
		((FGObjectScanner_eventUpdateScannerVisuals_Parms*)Obj)->wasChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals_Statics::NewProp_wasChange = { UE4CodeGen_Private::EPropertyClass::Bool, "wasChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGObjectScanner_eventUpdateScannerVisuals_Parms), &Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals_Statics::NewProp_wasChange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals_Statics::NewProp_wasChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Set light color etc.\n@param wasChange is true if there was a scanner setting change, false if not. eg. false when initialising scanner, true when you change what you are scanning for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGObjectScanner, "UpdateScannerVisuals", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGObjectScanner_eventUpdateScannerVisuals_Parms), Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGObjectScanner_NoRegister()
	{
		return AFGObjectScanner::StaticClass();
	}
	struct Z_Construct_UClass_AFGObjectScanner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShouldBeepEvenIfNoObject_MetaData[];
#endif
		static void NewProp_mShouldBeepEvenIfNoObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mShouldBeepEvenIfNoObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mClosestObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mClosestObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mObjectDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mObjectDetails;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mObjectDetails_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUpdateClosestObjectTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mUpdateClosestObjectTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDetectionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDetectionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBeepDelayMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBeepDelayMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBeepDelayMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBeepDelayMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGObjectScanner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGObjectScanner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGObjectScanner_CycleBackward, "CycleBackward" }, // 209561674
		{ &Z_Construct_UFunction_AFGObjectScanner_CycleForward, "CycleForward" }, // 3976562054
		{ &Z_Construct_UFunction_AFGObjectScanner_GetAvailableObjectDetails, "GetAvailableObjectDetails" }, // 3932264109
		{ &Z_Construct_UFunction_AFGObjectScanner_GetCurrentDetails, "GetCurrentDetails" }, // 3546208571
		{ &Z_Construct_UFunction_AFGObjectScanner_IsBeeping, "IsBeeping" }, // 1599603439
		{ &Z_Construct_UFunction_AFGObjectScanner_PlayBeep, "PlayBeep" }, // 1139605638
		{ &Z_Construct_UFunction_AFGObjectScanner_SetScannableEntry, "SetScannableEntry" }, // 3879514730
		{ &Z_Construct_UFunction_AFGObjectScanner_UpdateScannerVisuals, "UpdateScannerVisuals" }, // 3087711115
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGObjectScanner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGObjectScanner.h" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mShouldBeepEvenIfNoObject_MetaData[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "If true, the scanner beeps even if there is nothing within range. If false, it starts beeping if something comes within range." },
	};
#endif
	void Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mShouldBeepEvenIfNoObject_SetBit(void* Obj)
	{
		((AFGObjectScanner*)Obj)->mShouldBeepEvenIfNoObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mShouldBeepEvenIfNoObject = { UE4CodeGen_Private::EPropertyClass::Bool, "mShouldBeepEvenIfNoObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGObjectScanner), &Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mShouldBeepEvenIfNoObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mShouldBeepEvenIfNoObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mShouldBeepEvenIfNoObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mClosestObject_MetaData[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "The current closest Object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mClosestObject = { UE4CodeGen_Private::EPropertyClass::Object, "mClosestObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(AFGObjectScanner, mClosestObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mClosestObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mClosestObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mObjectDetails_MetaData[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Details regarding what we should scan.\n@note order is important here. the order this is in is the order that the scanner's toggle will be in." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mObjectDetails = { UE4CodeGen_Private::EPropertyClass::Array, "mObjectDetails", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGObjectScanner, mObjectDetails), METADATA_PARAMS(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mObjectDetails_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mObjectDetails_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mObjectDetails_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mObjectDetails", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FScannableDetails, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mUpdateClosestObjectTime_MetaData[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "\"the closest\" Object doesn't really need to be updated every frame. Maybe every second, or 2, or so." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mUpdateClosestObjectTime = { UE4CodeGen_Private::EPropertyClass::Float, "mUpdateClosestObjectTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGObjectScanner, mUpdateClosestObjectTime), METADATA_PARAMS(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mUpdateClosestObjectTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mUpdateClosestObjectTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mDetectionRange_MetaData[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Detection range of the scanner" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mDetectionRange = { UE4CodeGen_Private::EPropertyClass::Float, "mDetectionRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AFGObjectScanner, mDetectionRange), METADATA_PARAMS(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mDetectionRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mDetectionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mBeepDelayMin_MetaData[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Minimum delay (in seconds) between each beep" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mBeepDelayMin = { UE4CodeGen_Private::EPropertyClass::Float, "mBeepDelayMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGObjectScanner, mBeepDelayMin), METADATA_PARAMS(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mBeepDelayMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mBeepDelayMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mBeepDelayMax_MetaData[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Maximum delay (in seconds) between each beep" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mBeepDelayMax = { UE4CodeGen_Private::EPropertyClass::Float, "mBeepDelayMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGObjectScanner, mBeepDelayMax), METADATA_PARAMS(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mBeepDelayMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mBeepDelayMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGObjectScanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mShouldBeepEvenIfNoObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mClosestObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mObjectDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mObjectDetails_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mUpdateClosestObjectTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mDetectionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mBeepDelayMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGObjectScanner_Statics::NewProp_mBeepDelayMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGObjectScanner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGObjectScanner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGObjectScanner_Statics::ClassParams = {
		&AFGObjectScanner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGObjectScanner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGObjectScanner_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGObjectScanner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGObjectScanner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGObjectScanner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGObjectScanner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGObjectScanner, 1876571414);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGObjectScanner(Z_Construct_UClass_AFGObjectScanner, &AFGObjectScanner::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGObjectScanner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGObjectScanner);
	static FName NAME_AFGObjectScannerAttachment_UpdateScannerVisuals = FName(TEXT("UpdateScannerVisuals"));
	void AFGObjectScannerAttachment::UpdateScannerVisuals()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGObjectScannerAttachment_UpdateScannerVisuals),NULL);
	}
	void AFGObjectScannerAttachment::StaticRegisterNativesAFGObjectScannerAttachment()
	{
		UClass* Class = AFGObjectScannerAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScannerLightColor", &AFGObjectScannerAttachment::execGetScannerLightColor },
			{ "IsBeeping", &AFGObjectScannerAttachment::execIsBeeping },
			{ "OnRep_IsBeeping", &AFGObjectScannerAttachment::execOnRep_IsBeeping },
			{ "OnRep_ScannerLightColor", &AFGObjectScannerAttachment::execOnRep_ScannerLightColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor_Statics
	{
		struct FGObjectScannerAttachment_eventGetScannerLightColor_Parms
		{
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGObjectScannerAttachment_eventGetScannerLightColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGObjectScannerAttachment, "GetScannerLightColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(FGObjectScannerAttachment_eventGetScannerLightColor_Parms), Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping_Statics
	{
		struct FGObjectScannerAttachment_eventIsBeeping_Parms
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
	void Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGObjectScannerAttachment_eventIsBeeping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGObjectScannerAttachment_eventIsBeeping_Parms), &Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGObjectScannerAttachment, "IsBeeping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGObjectScannerAttachment_eventIsBeeping_Parms), Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_IsBeeping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_IsBeeping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_IsBeeping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGObjectScannerAttachment, "OnRep_IsBeeping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_IsBeeping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_IsBeeping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_IsBeeping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_IsBeeping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_ScannerLightColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_ScannerLightColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_ScannerLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGObjectScannerAttachment, "OnRep_ScannerLightColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_ScannerLightColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_ScannerLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_ScannerLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_ScannerLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGObjectScannerAttachment_UpdateScannerVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGObjectScannerAttachment_UpdateScannerVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scanner" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGObjectScannerAttachment_UpdateScannerVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGObjectScannerAttachment, "UpdateScannerVisuals", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGObjectScannerAttachment_UpdateScannerVisuals_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGObjectScannerAttachment_UpdateScannerVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGObjectScannerAttachment_UpdateScannerVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGObjectScannerAttachment_UpdateScannerVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGObjectScannerAttachment_NoRegister()
	{
		return AFGObjectScannerAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AFGObjectScannerAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mScannerLightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mScannerLightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsBeeping_MetaData[];
#endif
		static void NewProp_mIsBeeping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsBeeping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGObjectScannerAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipmentAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGObjectScannerAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGObjectScannerAttachment_GetScannerLightColor, "GetScannerLightColor" }, // 3868514607
		{ &Z_Construct_UFunction_AFGObjectScannerAttachment_IsBeeping, "IsBeeping" }, // 2749796268
		{ &Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_IsBeeping, "OnRep_IsBeeping" }, // 716190315
		{ &Z_Construct_UFunction_AFGObjectScannerAttachment_OnRep_ScannerLightColor, "OnRep_ScannerLightColor" }, // 1908923220
		{ &Z_Construct_UFunction_AFGObjectScannerAttachment_UpdateScannerVisuals, "UpdateScannerVisuals" }, // 226227162
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGObjectScannerAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGObjectScanner.h" },
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGObjectScannerAttachment_Statics::NewProp_mScannerLightColor_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "Scanner light color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGObjectScannerAttachment_Statics::NewProp_mScannerLightColor = { UE4CodeGen_Private::EPropertyClass::Struct, "mScannerLightColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_ScannerLightColor", STRUCT_OFFSET(AFGObjectScannerAttachment, mScannerLightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AFGObjectScannerAttachment_Statics::NewProp_mScannerLightColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGObjectScannerAttachment_Statics::NewProp_mScannerLightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGObjectScannerAttachment_Statics::NewProp_mIsBeeping_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGObjectScanner.h" },
		{ "ToolTip", "True if scanner is beeping" },
	};
#endif
	void Z_Construct_UClass_AFGObjectScannerAttachment_Statics::NewProp_mIsBeeping_SetBit(void* Obj)
	{
		((AFGObjectScannerAttachment*)Obj)->mIsBeeping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGObjectScannerAttachment_Statics::NewProp_mIsBeeping = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsBeeping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_IsBeeping", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGObjectScannerAttachment), &Z_Construct_UClass_AFGObjectScannerAttachment_Statics::NewProp_mIsBeeping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGObjectScannerAttachment_Statics::NewProp_mIsBeeping_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGObjectScannerAttachment_Statics::NewProp_mIsBeeping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGObjectScannerAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGObjectScannerAttachment_Statics::NewProp_mScannerLightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGObjectScannerAttachment_Statics::NewProp_mIsBeeping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGObjectScannerAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGObjectScannerAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGObjectScannerAttachment_Statics::ClassParams = {
		&AFGObjectScannerAttachment::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGObjectScannerAttachment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGObjectScannerAttachment_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGObjectScannerAttachment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGObjectScannerAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGObjectScannerAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGObjectScannerAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGObjectScannerAttachment, 563810044);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGObjectScannerAttachment(Z_Construct_UClass_AFGObjectScannerAttachment, &AFGObjectScannerAttachment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGObjectScannerAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGObjectScannerAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
