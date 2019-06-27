// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGBuildableSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableSubsystem() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDistanceBasedTickRate();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableSubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_ReplayBuildingEffects();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColoredInstanceManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGProductionIndicatorInstanceManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnBuildableConstructedGlobal_Parms
		{
			AFGBuildable* buildable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buildable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature_Statics::NewProp_buildable = { UE4CodeGen_Private::EPropertyClass::Object, "buildable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnBuildableConstructedGlobal_Parms, buildable), Z_Construct_UClass_AFGBuildable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature_Statics::NewProp_buildable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnBuildableConstructedGlobal__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnBuildableConstructedGlobal_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FDistanceBasedTickRate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FDistanceBasedTickRate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistanceBasedTickRate, Z_Construct_UPackage__Script_FactoryGame(), TEXT("DistanceBasedTickRate"), sizeof(FDistanceBasedTickRate), Get_Z_Construct_UScriptStruct_FDistanceBasedTickRate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDistanceBasedTickRate(FDistanceBasedTickRate::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("DistanceBasedTickRate"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFDistanceBasedTickRate
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFDistanceBasedTickRate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DistanceBasedTickRate")),new UScriptStruct::TCppStructOps<FDistanceBasedTickRate>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFDistanceBasedTickRate;
	struct Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "Distances where we switch tick rate" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistanceBasedTickRate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::NewProp_TickRate_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::NewProp_TickRate = { UE4CodeGen_Private::EPropertyClass::Float, "TickRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FDistanceBasedTickRate, TickRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::NewProp_TickRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::NewProp_TickRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::NewProp_Distance = { UE4CodeGen_Private::EPropertyClass::Float, "Distance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FDistanceBasedTickRate, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::NewProp_Distance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::NewProp_Distance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::NewProp_TickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::NewProp_Distance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"DistanceBasedTickRate",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FDistanceBasedTickRate),
		alignof(FDistanceBasedTickRate),
		Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistanceBasedTickRate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDistanceBasedTickRate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DistanceBasedTickRate"), sizeof(FDistanceBasedTickRate), Get_Z_Construct_UScriptStruct_FDistanceBasedTickRate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDistanceBasedTickRate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDistanceBasedTickRate_CRC() { return 60028849U; }
	void AFGBuildableSubsystem::StaticRegisterNativesAFGBuildableSubsystem()
	{
		UClass* Class = AFGBuildableSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &AFGBuildableSubsystem::execGet },
			{ "getColorSlotPrimary", &AFGBuildableSubsystem::execgetColorSlotPrimary },
			{ "getColorSlotPrimaryLinear", &AFGBuildableSubsystem::execgetColorSlotPrimaryLinear },
			{ "getColorSlotSecondary", &AFGBuildableSubsystem::execgetColorSlotSecondary },
			{ "getColorSlotSecondaryLinear", &AFGBuildableSubsystem::execgetColorSlotSecondaryLinear },
			{ "GetTypedBuildable", &AFGBuildableSubsystem::execGetTypedBuildable },
			{ "ReplayBuildingEffects", &AFGBuildableSubsystem::execReplayBuildingEffects },
			{ "setColorSlotPrimary", &AFGBuildableSubsystem::execsetColorSlotPrimary },
			{ "setColorSlotSecondary", &AFGBuildableSubsystem::execsetColorSlotSecondary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableSubsystem_Get_Statics
	{
		struct FGBuildableSubsystem_eventGet_Parms
		{
			UObject* worldContext;
			AFGBuildableSubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_Get_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGBuildableSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_Get_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSubsystem_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSubsystem_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Buildable Subsystem" },
		{ "DefaultToSelf", "WorldContext" },
		{ "DisplayName", "GetBuildableSubsystem" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "Get the buildable subsystem in the current world, can be nullptr, e.g. on game ending (destroy) or game startup." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSubsystem_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSubsystem, "Get", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGBuildableSubsystem_eventGet_Parms), Z_Construct_UFunction_AFGBuildableSubsystem_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_Get_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSubsystem_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSubsystem_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary_Statics
	{
		struct FGBuildableSubsystem_eventgetColorSlotPrimary_Parms
		{
			uint8 index;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventgetColorSlotPrimary_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Byte, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventgetColorSlotPrimary_Parms, index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSubsystem, "getColorSlotPrimary", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGBuildableSubsystem_eventgetColorSlotPrimary_Parms), Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear_Statics
	{
		struct FGBuildableSubsystem_eventgetColorSlotPrimaryLinear_Parms
		{
			uint8 index;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventgetColorSlotPrimaryLinear_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Byte, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventgetColorSlotPrimaryLinear_Parms, index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSubsystem, "getColorSlotPrimaryLinear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGBuildableSubsystem_eventgetColorSlotPrimaryLinear_Parms), Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary_Statics
	{
		struct FGBuildableSubsystem_eventgetColorSlotSecondary_Parms
		{
			uint8 index;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventgetColorSlotSecondary_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Byte, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventgetColorSlotSecondary_Parms, index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSubsystem, "getColorSlotSecondary", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGBuildableSubsystem_eventgetColorSlotSecondary_Parms), Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear_Statics
	{
		struct FGBuildableSubsystem_eventgetColorSlotSecondaryLinear_Parms
		{
			uint8 index;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventgetColorSlotSecondaryLinear_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Byte, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventgetColorSlotSecondaryLinear_Parms, index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSubsystem, "getColorSlotSecondaryLinear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGBuildableSubsystem_eventgetColorSlotSecondaryLinear_Parms), Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics
	{
		struct FGBuildableSubsystem_eventGetTypedBuildable_Parms
		{
			TSubclassOf<AFGBuildable>  inClass;
			TArray<AFGBuildable*> out_buildables;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_buildables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_buildables_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::NewProp_out_buildables = { UE4CodeGen_Private::EPropertyClass::Array, "out_buildables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventGetTypedBuildable_Parms, out_buildables), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::NewProp_out_buildables_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "out_buildables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGBuildable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventGetTypedBuildable_Parms, inClass), Z_Construct_UClass_AFGBuildable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::NewProp_out_buildables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::NewProp_out_buildables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Buildable Subsystem" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "Get all buildables of the supplied type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSubsystem, "GetTypedBuildable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(FGBuildableSubsystem_eventGetTypedBuildable_Parms), Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSubsystem_ReplayBuildingEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSubsystem_ReplayBuildingEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "Starts replaying of build effects in the build order of the buildings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSubsystem_ReplayBuildingEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSubsystem, "ReplayBuildingEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSubsystem_ReplayBuildingEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_ReplayBuildingEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_ReplayBuildingEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSubsystem_ReplayBuildingEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary_Statics
	{
		struct FGBuildableSubsystem_eventsetColorSlotPrimary_Parms
		{
			uint8 index;
			FColor color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary_Statics::NewProp_color = { UE4CodeGen_Private::EPropertyClass::Struct, "color", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventsetColorSlotPrimary_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Byte, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventsetColorSlotPrimary_Parms, index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary_Statics::NewProp_color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSubsystem, "setColorSlotPrimary", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGBuildableSubsystem_eventsetColorSlotPrimary_Parms), Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary_Statics
	{
		struct FGBuildableSubsystem_eventsetColorSlotSecondary_Parms
		{
			uint8 index;
			FColor color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary_Statics::NewProp_color = { UE4CodeGen_Private::EPropertyClass::Struct, "color", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventsetColorSlotSecondary_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Byte, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSubsystem_eventsetColorSlotSecondary_Parms, index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary_Statics::NewProp_color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSubsystem, "setColorSlotSecondary", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGBuildableSubsystem_eventsetColorSlotSecondary_Parms), Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableSubsystem_NoRegister()
	{
		return AFGBuildableSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultFactoryMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDefaultFactoryMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReplayEffectTimerDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mReplayEffectTimerDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReplayEffecTimeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mReplayEffecTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFactoryOptimizationEnabled_MetaData[];
#endif
		static void NewProp_mFactoryOptimizationEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mFactoryOptimizationEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDistanceBasedTickRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDistanceBasedTickRate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDistanceBasedTickRate_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mColorSlotsSecondary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mColorSlotsSecondary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mColorSlotsPrimary_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mColorSlotsPrimary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mColoredInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mColoredInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mColoredInstances_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mColoredInstances_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProductionIndicatorInstanceManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mProductionIndicatorInstanceManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildableInstancesActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBuildableInstancesActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mBuildables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBuildables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildableConstructedGlobalDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BuildableConstructedGlobalDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNumFactoriesNeededForCloseCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mNumFactoriesNeededForCloseCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDistanceConsideredClose_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDistanceConsideredClose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableSubsystem_Get, "Get" }, // 3481826129
		{ &Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimary, "getColorSlotPrimary" }, // 764985159
		{ &Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotPrimaryLinear, "getColorSlotPrimaryLinear" }, // 3869862312
		{ &Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondary, "getColorSlotSecondary" }, // 30496575
		{ &Z_Construct_UFunction_AFGBuildableSubsystem_getColorSlotSecondaryLinear, "getColorSlotSecondaryLinear" }, // 2496096727
		{ &Z_Construct_UFunction_AFGBuildableSubsystem_GetTypedBuildable, "GetTypedBuildable" }, // 3546881100
		{ &Z_Construct_UFunction_AFGBuildableSubsystem_ReplayBuildingEffects, "ReplayBuildingEffects" }, // 1608769726
		{ &Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotPrimary, "setColorSlotPrimary" }, // 1977633234
		{ &Z_Construct_UFunction_AFGBuildableSubsystem_setColorSlotSecondary, "setColorSlotSecondary" }, // 2580087051
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGBuildableSubsystem.h" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Subsystem responsible for spawning and maintaining buildables.\nThis enables and disables ticks on the buildable." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDefaultFactoryMaterial_MetaData[] = {
		{ "Category", "FGBuildableSubsystem" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "used for comparing and finding materials of factory meshes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDefaultFactoryMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "mDefaultFactoryMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableSubsystem, mDefaultFactoryMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDefaultFactoryMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDefaultFactoryMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mReplayEffectTimerDefault_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "How much time between each build effect when replaying the whole factory" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mReplayEffectTimerDefault = { UE4CodeGen_Private::EPropertyClass::Float, "mReplayEffectTimerDefault", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableSubsystem, mReplayEffectTimerDefault), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mReplayEffectTimerDefault_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mReplayEffectTimerDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mReplayEffecTimeDilation_MetaData[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "How much time can differ between each build effect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mReplayEffecTimeDilation = { UE4CodeGen_Private::EPropertyClass::Float, "mReplayEffecTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableSubsystem, mReplayEffecTimeDilation), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mReplayEffecTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mReplayEffecTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mFactoryOptimizationEnabled_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "Is factory optimization ( tick control ) active" },
	};
#endif
	void Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mFactoryOptimizationEnabled_SetBit(void* Obj)
	{
		((AFGBuildableSubsystem*)Obj)->mFactoryOptimizationEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mFactoryOptimizationEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "mFactoryOptimizationEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGBuildableSubsystem), &Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mFactoryOptimizationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mFactoryOptimizationEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mFactoryOptimizationEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDistanceBasedTickRate_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "Information about what distances we change the tick rate on" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDistanceBasedTickRate = { UE4CodeGen_Private::EPropertyClass::Array, "mDistanceBasedTickRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableSubsystem, mDistanceBasedTickRate), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDistanceBasedTickRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDistanceBasedTickRate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDistanceBasedTickRate_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mDistanceBasedTickRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FDistanceBasedTickRate, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColorSlotsSecondary_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColorSlotsSecondary = { UE4CodeGen_Private::EPropertyClass::Struct, "mColorSlotsSecondary", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001010001, CPP_ARRAY_DIM(mColorSlotsSecondary, AFGBuildableSubsystem), nullptr, STRUCT_OFFSET(AFGBuildableSubsystem, mColorSlotsSecondary), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColorSlotsSecondary_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColorSlotsSecondary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColorSlotsPrimary_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColorSlotsPrimary = { UE4CodeGen_Private::EPropertyClass::Struct, "mColorSlotsPrimary", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001010001, CPP_ARRAY_DIM(mColorSlotsPrimary, AFGBuildableSubsystem), nullptr, STRUCT_OFFSET(AFGBuildableSubsystem, mColorSlotsPrimary), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColorSlotsPrimary_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColorSlotsPrimary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColoredInstances_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColoredInstances = { UE4CodeGen_Private::EPropertyClass::Map, "mColoredInstances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000008, 1, nullptr, STRUCT_OFFSET(AFGBuildableSubsystem, mColoredInstances), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColoredInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColoredInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColoredInstances_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Object, "mColoredInstances_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColoredInstances_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "mColoredInstances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 1, Z_Construct_UClass_UFGColoredInstanceManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mProductionIndicatorInstanceManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mProductionIndicatorInstanceManager = { UE4CodeGen_Private::EPropertyClass::Object, "mProductionIndicatorInstanceManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AFGBuildableSubsystem, mProductionIndicatorInstanceManager), Z_Construct_UClass_UFGProductionIndicatorInstanceManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mProductionIndicatorInstanceManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mProductionIndicatorInstanceManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mBuildableInstancesActor_MetaData[] = {
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "Hierarchical instances for the factory buildings." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mBuildableInstancesActor = { UE4CodeGen_Private::EPropertyClass::Object, "mBuildableInstancesActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableSubsystem, mBuildableInstancesActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mBuildableInstancesActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mBuildableInstancesActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mBuildables_MetaData[] = {
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "List of all buildables." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mBuildables = { UE4CodeGen_Private::EPropertyClass::Array, "mBuildables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableSubsystem, mBuildables), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mBuildables_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mBuildables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mBuildables_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mBuildables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGBuildable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_BuildableConstructedGlobalDelegate_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "OnBuildableConstructedGlobal" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "Broadcast when a buildable or decor has been constructed. Regardless of who built it" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_BuildableConstructedGlobalDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "BuildableConstructedGlobalDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGBuildableSubsystem, BuildableConstructedGlobalDelegate), Z_Construct_UDelegateFunction_FactoryGame_OnBuildableConstructedGlobal__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_BuildableConstructedGlobalDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_BuildableConstructedGlobalDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mNumFactoriesNeededForCloseCheck_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "How many factories need to be within the close range for it to count as if a given location is near a base" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mNumFactoriesNeededForCloseCheck = { UE4CodeGen_Private::EPropertyClass::Int, "mNumFactoriesNeededForCloseCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableSubsystem, mNumFactoriesNeededForCloseCheck), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mNumFactoriesNeededForCloseCheck_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mNumFactoriesNeededForCloseCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDistanceConsideredClose_MetaData[] = {
		{ "Category", "Factory" },
		{ "ModuleRelativePath", "FGBuildableSubsystem.h" },
		{ "ToolTip", "Distance used when calculating if a location is near a base" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDistanceConsideredClose = { UE4CodeGen_Private::EPropertyClass::Float, "mDistanceConsideredClose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableSubsystem, mDistanceConsideredClose), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDistanceConsideredClose_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDistanceConsideredClose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDefaultFactoryMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mReplayEffectTimerDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mReplayEffecTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mFactoryOptimizationEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDistanceBasedTickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDistanceBasedTickRate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColorSlotsSecondary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColorSlotsPrimary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColoredInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColoredInstances_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mColoredInstances_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mProductionIndicatorInstanceManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mBuildableInstancesActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mBuildables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mBuildables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_BuildableConstructedGlobalDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mNumFactoriesNeededForCloseCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSubsystem_Statics::NewProp_mDistanceConsideredClose,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGBuildableSubsystem, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableSubsystem_Statics::ClassParams = {
		&AFGBuildableSubsystem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableSubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableSubsystem, 3593928848);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableSubsystem(Z_Construct_UClass_AFGBuildableSubsystem, &AFGBuildableSubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
