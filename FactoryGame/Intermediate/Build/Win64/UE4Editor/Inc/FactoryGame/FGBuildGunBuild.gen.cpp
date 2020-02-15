// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Equipment/FGBuildGunBuild.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildGunBuild() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EHologramSplinePathMode();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFactoryClearanceData();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConnectionRepresentation();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildGunStateBuild_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildGunStateBuild();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildGunState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FNetConstructionID();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_CloseSplineModeSelectUI();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHologram_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnUserSettingsUpdated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConstructHologramMessage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_ShowSplineModeSelectUI();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventSplineModeChangedDelegate_Parms
		{
			EHologramSplinePathMode newMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature_Statics::NewProp_newMode = { "newMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventSplineModeChangedDelegate_Parms, newMode), Z_Construct_UEnum_FactoryGame_EHologramSplinePathMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature_Statics::NewProp_newMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature_Statics::NewProp_newMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature_Statics::NewProp_newMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "SplineModeChangedDelegate__DelegateSignature", sizeof(_Script_FactoryGame_eventSplineModeChangedDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FFactoryClearanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFactoryClearanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactoryClearanceData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FactoryClearanceData"), sizeof(FFactoryClearanceData), Get_Z_Construct_UScriptStruct_FFactoryClearanceData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FFactoryClearanceData>()
{
	return FFactoryClearanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFactoryClearanceData(FFactoryClearanceData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FactoryClearanceData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFactoryClearanceData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFactoryClearanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FactoryClearanceData")),new UScriptStruct::TCppStructOps<FFactoryClearanceData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFactoryClearanceData;
	struct Z_Construct_UScriptStruct_FFactoryClearanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mConnectionComponents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mConnectionComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearanceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClearanceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Factory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Factory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactoryClearanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_mConnectionComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_mConnectionComponents = { "mConnectionComponents", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFactoryClearanceData, mConnectionComponents), METADATA_PARAMS(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_mConnectionComponents_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_mConnectionComponents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_mConnectionComponents_Inner = { "mConnectionComponents", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConnectionRepresentation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_ClearanceComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_ClearanceComponent = { "ClearanceComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFactoryClearanceData, ClearanceComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_ClearanceComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_ClearanceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_Factory_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFactoryClearanceData, Factory), Z_Construct_UClass_AFGBuildableFactory_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_Factory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_Factory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_mConnectionComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_mConnectionComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_ClearanceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_Factory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FactoryClearanceData",
		sizeof(FFactoryClearanceData),
		alignof(FFactoryClearanceData),
		Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFactoryClearanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFactoryClearanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FactoryClearanceData"), sizeof(FFactoryClearanceData), Get_Z_Construct_UScriptStruct_FFactoryClearanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFactoryClearanceData_Hash() { return 1546892371U; }
class UScriptStruct* FConnectionRepresentation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FConnectionRepresentation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectionRepresentation, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ConnectionRepresentation"), sizeof(FConnectionRepresentation), Get_Z_Construct_UScriptStruct_FConnectionRepresentation_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FConnectionRepresentation>()
{
	return FConnectionRepresentation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConnectionRepresentation(FConnectionRepresentation::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ConnectionRepresentation"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFConnectionRepresentation
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFConnectionRepresentation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConnectionRepresentation")),new UScriptStruct::TCppStructOps<FConnectionRepresentation>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFConnectionRepresentation;
	struct Z_Construct_UScriptStruct_FConnectionRepresentation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionRepresentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnectionRepresentation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnectionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConnectionRepresentation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionRepresentation_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionRepresentation = { "mConnectionRepresentation", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConnectionRepresentation, mConnectionRepresentation), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionRepresentation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionRepresentation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionComponent = { "mConnectionComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConnectionRepresentation, mConnectionComponent), Z_Construct_UClass_UFGConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionRepresentation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ConnectionRepresentation",
		sizeof(FConnectionRepresentation),
		alignof(FConnectionRepresentation),
		Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConnectionRepresentation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConnectionRepresentation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConnectionRepresentation"), sizeof(FConnectionRepresentation), Get_Z_Construct_UScriptStruct_FConnectionRepresentation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConnectionRepresentation_Hash() { return 3718632385U; }
	static FName NAME_UFGBuildGunStateBuild_Client_OnBuildableConstructed = FName(TEXT("Client_OnBuildableConstructed"));
	void UFGBuildGunStateBuild::Client_OnBuildableConstructed(TSubclassOf<UFGItemDescriptor>  desc)
	{
		FGBuildGunStateBuild_eventClient_OnBuildableConstructed_Parms Parms;
		Parms.desc=desc;
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateBuild_Client_OnBuildableConstructed),&Parms);
	}
	static FName NAME_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction = FName(TEXT("Client_OnBuildableFailedConstruction"));
	void UFGBuildGunStateBuild::Client_OnBuildableFailedConstruction(FNetConstructionID netConstructionID)
	{
		FGBuildGunStateBuild_eventClient_OnBuildableFailedConstruction_Parms Parms;
		Parms.netConstructionID=netConstructionID;
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction),&Parms);
	}
	static FName NAME_UFGBuildGunStateBuild_Client_OnResetHologram = FName(TEXT("Client_OnResetHologram"));
	void UFGBuildGunStateBuild::Client_OnResetHologram()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateBuild_Client_OnResetHologram),NULL);
	}
	static FName NAME_UFGBuildGunStateBuild_CloseSplineModeSelectUI = FName(TEXT("CloseSplineModeSelectUI"));
	void UFGBuildGunStateBuild::CloseSplineModeSelectUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateBuild_CloseSplineModeSelectUI),NULL);
	}
	static FName NAME_UFGBuildGunStateBuild_OnActiveDescriptorChanged = FName(TEXT("OnActiveDescriptorChanged"));
	void UFGBuildGunStateBuild::OnActiveDescriptorChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateBuild_OnActiveDescriptorChanged),NULL);
	}
	static FName NAME_UFGBuildGunStateBuild_OnMultiStepPlacement = FName(TEXT("OnMultiStepPlacement"));
	void UFGBuildGunStateBuild::OnMultiStepPlacement(bool isFinalStep)
	{
		FGBuildGunStateBuild_eventOnMultiStepPlacement_Parms Parms;
		Parms.isFinalStep=isFinalStep ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateBuild_OnMultiStepPlacement),&Parms);
	}
	static FName NAME_UFGBuildGunStateBuild_OnResetHologram = FName(TEXT("OnResetHologram"));
	void UFGBuildGunStateBuild::OnResetHologram()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateBuild_OnResetHologram),NULL);
	}
	static FName NAME_UFGBuildGunStateBuild_Server_ConstructHologram = FName(TEXT("Server_ConstructHologram"));
	void UFGBuildGunStateBuild::Server_ConstructHologram(FNetConstructionID clientNetConstructID, FConstructHologramMessage data)
	{
		FGBuildGunStateBuild_eventServer_ConstructHologram_Parms Parms;
		Parms.clientNetConstructID=clientNetConstructID;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateBuild_Server_ConstructHologram),&Parms);
	}
	static FName NAME_UFGBuildGunStateBuild_ShowSplineModeSelectUI = FName(TEXT("ShowSplineModeSelectUI"));
	void UFGBuildGunStateBuild::ShowSplineModeSelectUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateBuild_ShowSplineModeSelectUI),NULL);
	}
	void UFGBuildGunStateBuild::StaticRegisterNativesUFGBuildGunStateBuild()
	{
		UClass* Class = UFGBuildGunStateBuild::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginClearanceOverlap", &UFGBuildGunStateBuild::execBeginClearanceOverlap },
			{ "Client_OnBuildableConstructed", &UFGBuildGunStateBuild::execClient_OnBuildableConstructed },
			{ "Client_OnBuildableFailedConstruction", &UFGBuildGunStateBuild::execClient_OnBuildableFailedConstruction },
			{ "Client_OnResetHologram", &UFGBuildGunStateBuild::execClient_OnResetHologram },
			{ "EndClearanceOverlap", &UFGBuildGunStateBuild::execEndClearanceOverlap },
			{ "GetDescriptor", &UFGBuildGunStateBuild::execGetDescriptor },
			{ "GetHologram", &UFGBuildGunStateBuild::execGetHologram },
			{ "GetHologramCost", &UFGBuildGunStateBuild::execGetHologramCost },
			{ "GetSupportedSplineModes", &UFGBuildGunStateBuild::execGetSupportedSplineModes },
			{ "OnRep_Hologram", &UFGBuildGunStateBuild::execOnRep_Hologram },
			{ "OnUserSettingsUpdated", &UFGBuildGunStateBuild::execOnUserSettingsUpdated },
			{ "ResetHologram", &UFGBuildGunStateBuild::execResetHologram },
			{ "Server_ConstructHologram", &UFGBuildGunStateBuild::execServer_ConstructHologram },
			{ "SetActiveSplineMode", &UFGBuildGunStateBuild::execSetActiveSplineMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics
	{
		struct FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms), &Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "BeginClearanceOverlap", sizeof(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_desc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::NewProp_desc = { "desc", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventClient_OnBuildableConstructed_Parms, desc), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::NewProp_desc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Helper to notify the client that something was built" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "Client_OnBuildableConstructed", sizeof(FGBuildGunStateBuild_eventClient_OnBuildableConstructed_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_netConstructionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction_Statics::NewProp_netConstructionID = { "netConstructionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventClient_OnBuildableFailedConstruction_Parms, netConstructionID), Z_Construct_UScriptStruct_FNetConstructionID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction_Statics::NewProp_netConstructionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "Client_OnBuildableFailedConstruction", sizeof(FGBuildGunStateBuild_eventClient_OnBuildableFailedConstruction_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Helper to notify the client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "Client_OnResetHologram", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_CloseSplineModeSelectUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_CloseSplineModeSelectUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineModeSelect" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Close the  mode selection UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_CloseSplineModeSelectUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "CloseSplineModeSelectUI", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_CloseSplineModeSelectUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_CloseSplineModeSelectUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_CloseSplineModeSelectUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_CloseSplineModeSelectUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics
	{
		struct FGBuildGunStateBuild_eventEndClearanceOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventEndClearanceOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventEndClearanceOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventEndClearanceOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventEndClearanceOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "EndClearanceOverlap", sizeof(FGBuildGunStateBuild_eventEndClearanceOverlap_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics
	{
		struct FGBuildGunStateBuild_eventGetDescriptor_Parms
		{
			TSubclassOf<UFGItemDescriptor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventGetDescriptor_Parms, ReturnValue), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Build" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Get the current descriptor, null if no descriptor is set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "GetDescriptor", sizeof(FGBuildGunStateBuild_eventGetDescriptor_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics
	{
		struct FGBuildGunStateBuild_eventGetHologram_Parms
		{
			AFGHologram* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventGetHologram_Parms, ReturnValue), Z_Construct_UClass_AFGHologram_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Build" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Returns the hologram; null if hologram not spawned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "GetHologram", sizeof(FGBuildGunStateBuild_eventGetHologram_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics
	{
		struct FGBuildGunStateBuild_eventGetHologramCost_Parms
		{
			TArray<FItemAmount> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventGetHologramCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Build" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Returns the cost for building the hologram." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "GetHologramCost", sizeof(FGBuildGunStateBuild_eventGetHologramCost_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics
	{
		struct FGBuildGunStateBuild_eventGetSupportedSplineModes_Parms
		{
			TArray<EHologramSplinePathMode> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventGetSupportedSplineModes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FactoryGame_EHologramSplinePathMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::NewProp_ReturnValue_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineModeSelect" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Get a list of the currently supported build modes for the current hologram." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "GetSupportedSplineModes", sizeof(FGBuildGunStateBuild_eventGetSupportedSplineModes_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Build" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Let blueprint know when we get a new descriptor, the new descriptor may be null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "OnActiveDescriptorChanged", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics
	{
		static void NewProp_isFinalStep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFinalStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::NewProp_isFinalStep_SetBit(void* Obj)
	{
		((FGBuildGunStateBuild_eventOnMultiStepPlacement_Parms*)Obj)->isFinalStep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::NewProp_isFinalStep = { "isFinalStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildGunStateBuild_eventOnMultiStepPlacement_Parms), &Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::NewProp_isFinalStep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::NewProp_isFinalStep,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Build" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Let blueprint know we performed a multi-step placement.\n@param isFinalStep - true if this was the last step, the thing is now built. Hologram is no longer guaranteed to exist on the the client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "OnMultiStepPlacement", sizeof(FGBuildGunStateBuild_eventOnMultiStepPlacement_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Called whenever the hologram is udpated *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "OnRep_Hologram", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Build" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Let blueprint know we reset the multi-step placement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "OnResetHologram", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_OnUserSettingsUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_OnUserSettingsUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_OnUserSettingsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "OnUserSettingsUpdated", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_OnUserSettingsUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_OnUserSettingsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnUserSettingsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_OnUserSettingsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Build" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Resets any changes made to the hologram.\n@note Must be called on the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "ResetHologram", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_clientNetConstructID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventServer_ConstructHologram_Parms, data), Z_Construct_UScriptStruct_FConstructHologramMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram_Statics::NewProp_clientNetConstructID = { "clientNetConstructID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventServer_ConstructHologram_Parms, clientNetConstructID), Z_Construct_UScriptStruct_FNetConstructionID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram_Statics::NewProp_clientNetConstructID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "RPC to construct from hologram data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "Server_ConstructHologram", sizeof(FGBuildGunStateBuild_eventServer_ConstructHologram_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode_Statics
	{
		struct FGBuildGunStateBuild_eventSetActiveSplineMode_Parms
		{
			EHologramSplinePathMode mode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateBuild_eventSetActiveSplineMode_Parms, mode), Z_Construct_UEnum_FactoryGame_EHologramSplinePathMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode_Statics::NewProp_mode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineModeSelect" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Set the mode on the current hologram" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "SetActiveSplineMode", sizeof(FGBuildGunStateBuild_eventSetActiveSplineMode_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateBuild_ShowSplineModeSelectUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_ShowSplineModeSelectUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineModeSelect" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Show the  mode selection UI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_ShowSplineModeSelectUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, nullptr, "ShowSplineModeSelectUI", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_ShowSplineModeSelectUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_ShowSplineModeSelectUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_ShowSplineModeSelectUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_ShowSplineModeSelectUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGBuildGunStateBuild_NoRegister()
	{
		return UFGBuildGunStateBuild::StaticClass();
	}
	struct Z_Construct_UClass_UFGBuildGunStateBuild_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mClearanceDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mClearanceDetector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProximateClearances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mProximateClearances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mProximateClearances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUpgradedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mUpgradedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHologram_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHologram;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActiveRecipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mActiveRecipe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPendingRecipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mPendingRecipe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsUsingPressAndReleaseAsBuildSteps_MetaData[];
#endif
		static void NewProp_mIsUsingPressAndReleaseAsBuildSteps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsUsingPressAndReleaseAsBuildSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsWaitingForSelectionUI_MetaData[];
#endif
		static void NewProp_mIsWaitingForSelectionUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsWaitingForSelectionUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineModeSelectHoldDownDurationForUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSplineModeSelectHoldDownDurationForUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSplineModeChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSplineModeChangedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGBuildGunStateBuild_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGBuildGunState,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGBuildGunStateBuild_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap, "BeginClearanceOverlap" }, // 1079050821
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed, "Client_OnBuildableConstructed" }, // 704857413
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableFailedConstruction, "Client_OnBuildableFailedConstruction" }, // 402250861
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram, "Client_OnResetHologram" }, // 1667402326
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_CloseSplineModeSelectUI, "CloseSplineModeSelectUI" }, // 859810481
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap, "EndClearanceOverlap" }, // 289315875
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor, "GetDescriptor" }, // 1989110187
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram, "GetHologram" }, // 1746480968
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost, "GetHologramCost" }, // 2872235376
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_GetSupportedSplineModes, "GetSupportedSplineModes" }, // 1407718540
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged, "OnActiveDescriptorChanged" }, // 2859769153
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement, "OnMultiStepPlacement" }, // 2116205926
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram, "OnRep_Hologram" }, // 226035141
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram, "OnResetHologram" }, // 401771452
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_OnUserSettingsUpdated, "OnUserSettingsUpdated" }, // 84939011
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram, "ResetHologram" }, // 2959223535
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_Server_ConstructHologram, "Server_ConstructHologram" }, // 3238020768
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_SetActiveSplineMode, "SetActiveSplineMode" }, // 2641691879
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_ShowSplineModeSelectUI, "ShowSplineModeSelectUI" }, // 461288008
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGBuildGunBuild.h" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Build guns build state." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mClearanceDetector_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "@todo G2 2019-04-10 An improvement here would be to make this a component that can keep track of detected\n                    overlaps so the state does not contain this easily self contained logic." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mClearanceDetector = { "mClearanceDetector", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateBuild, mClearanceDetector), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mClearanceDetector_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mClearanceDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Contains all the proximate clearances volumes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances = { "mProximateClearances", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateBuild, mProximateClearances), METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances_Inner = { "mProximateClearances", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFactoryClearanceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mUpgradedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "The actor to replace (dismantle) when upgrading." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mUpgradedActor = { "mUpgradedActor", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateBuild, mUpgradedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mUpgradedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mUpgradedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mHologram_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "ReplicatedUsing=OnRep_Hologram" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mHologram = { "mHologram", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateBuild, mHologram), Z_Construct_UClass_AFGHologram_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mHologram_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mHologram_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mActiveRecipe_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "The currently active recipe, this decides which action will be used.\nNot replicated as the client sets it locally and then tells the server to set it." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mActiveRecipe = { "mActiveRecipe", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateBuild, mActiveRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mActiveRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mActiveRecipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mPendingRecipe_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Recipe to activate when state is entered." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mPendingRecipe = { "mPendingRecipe", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateBuild, mPendingRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mPendingRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mPendingRecipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsUsingPressAndReleaseAsBuildSteps_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "user setting for if we are using the release and press mode or not for advancing build steps. Nett to be in sync on client and ser ver players preferences" },
	};
#endif
	void Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsUsingPressAndReleaseAsBuildSteps_SetBit(void* Obj)
	{
		((UFGBuildGunStateBuild*)Obj)->mIsUsingPressAndReleaseAsBuildSteps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsUsingPressAndReleaseAsBuildSteps = { "mIsUsingPressAndReleaseAsBuildSteps", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGBuildGunStateBuild), &Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsUsingPressAndReleaseAsBuildSteps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsUsingPressAndReleaseAsBuildSteps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsUsingPressAndReleaseAsBuildSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsWaitingForSelectionUI_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "True if we are waiting for the selection UI" },
	};
#endif
	void Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsWaitingForSelectionUI_SetBit(void* Obj)
	{
		((UFGBuildGunStateBuild*)Obj)->mIsWaitingForSelectionUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsWaitingForSelectionUI = { "mIsWaitingForSelectionUI", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGBuildGunStateBuild), &Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsWaitingForSelectionUI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsWaitingForSelectionUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsWaitingForSelectionUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mSplineModeSelectHoldDownDurationForUI_MetaData[] = {
		{ "Category", "SplineModeSelect" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Time needed to hold down the key to show the selection UI" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mSplineModeSelectHoldDownDurationForUI = { "mSplineModeSelectHoldDownDurationForUI", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateBuild, mSplineModeSelectHoldDownDurationForUI), METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mSplineModeSelectHoldDownDurationForUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mSplineModeSelectHoldDownDurationForUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_OnSplineModeChangedDelegate_MetaData[] = {
		{ "Category", "SplineModeSelect" },
		{ "DisplayName", "OnSplineModeChanged" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_OnSplineModeChangedDelegate = { "OnSplineModeChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateBuild, OnSplineModeChangedDelegate), Z_Construct_UDelegateFunction_FactoryGame_SplineModeChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_OnSplineModeChangedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_OnSplineModeChangedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGBuildGunStateBuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mClearanceDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mUpgradedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mHologram,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mActiveRecipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mPendingRecipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsUsingPressAndReleaseAsBuildSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mIsWaitingForSelectionUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mSplineModeSelectHoldDownDurationForUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_OnSplineModeChangedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGBuildGunStateBuild_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGBuildGunStateBuild>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::ClassParams = {
		&UFGBuildGunStateBuild::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGBuildGunStateBuild_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGBuildGunStateBuild()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGBuildGunStateBuild_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGBuildGunStateBuild, 4000984191);
	template<> FACTORYGAME_API UClass* StaticClass<UFGBuildGunStateBuild>()
	{
		return UFGBuildGunStateBuild::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGBuildGunStateBuild(Z_Construct_UClass_UFGBuildGunStateBuild, &UFGBuildGunStateBuild::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGBuildGunStateBuild"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGBuildGunStateBuild);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
