// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Equipment/FGBuildGunBuild.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildGunBuild() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFactoryClearanceData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHologram_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
// End Cross Module References
class UScriptStruct* FFactoryClearanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFactoryClearanceData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactoryClearanceData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FactoryClearanceData"), sizeof(FFactoryClearanceData), Get_Z_Construct_UScriptStruct_FFactoryClearanceData_CRC());
	}
	return Singleton;
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
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactoryClearanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_mConnectionComponents_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_mConnectionComponents = { UE4CodeGen_Private::EPropertyClass::Array, "mConnectionComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(FFactoryClearanceData, mConnectionComponents), METADATA_PARAMS(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_mConnectionComponents_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_mConnectionComponents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_mConnectionComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mConnectionComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FConnectionRepresentation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_ClearanceComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_ClearanceComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ClearanceComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(FFactoryClearanceData, ClearanceComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_ClearanceComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_ClearanceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_Factory_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_Factory = { UE4CodeGen_Private::EPropertyClass::Object, "Factory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFactoryClearanceData, Factory), Z_Construct_UClass_AFGBuildableFactory_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_Factory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::NewProp_Factory_MetaData)) };
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
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FFactoryClearanceData),
		alignof(FFactoryClearanceData),
		Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFactoryClearanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFactoryClearanceData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FactoryClearanceData"), sizeof(FFactoryClearanceData), Get_Z_Construct_UScriptStruct_FFactoryClearanceData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFactoryClearanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFactoryClearanceData_CRC() { return 172204126U; }
class UScriptStruct* FConnectionRepresentation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FConnectionRepresentation_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectionRepresentation, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ConnectionRepresentation"), sizeof(FConnectionRepresentation), Get_Z_Construct_UScriptStruct_FConnectionRepresentation_CRC());
	}
	return Singleton;
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
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConnectionRepresentation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionRepresentation_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "mConnectionRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(FConnectionRepresentation, mConnectionRepresentation), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionRepresentation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionRepresentation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mConnectionComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(FConnectionRepresentation, mConnectionComponent), Z_Construct_UClass_UFGConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionRepresentation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::NewProp_mConnectionComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ConnectionRepresentation",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FConnectionRepresentation),
		alignof(FConnectionRepresentation),
		Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConnectionRepresentation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConnectionRepresentation_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConnectionRepresentation"), sizeof(FConnectionRepresentation), Get_Z_Construct_UScriptStruct_FConnectionRepresentation_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConnectionRepresentation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConnectionRepresentation_CRC() { return 3493497886U; }
	static FName NAME_UFGBuildGunStateBuild_Client_OnBuildableConstructed = FName(TEXT("Client_OnBuildableConstructed"));
	void UFGBuildGunStateBuild::Client_OnBuildableConstructed(TSubclassOf<UFGItemDescriptor>  desc)
	{
		FGBuildGunStateBuild_eventClient_OnBuildableConstructed_Parms Parms;
		Parms.desc=desc;
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateBuild_Client_OnBuildableConstructed),&Parms);
	}
	static FName NAME_UFGBuildGunStateBuild_Client_OnResetHologram = FName(TEXT("Client_OnResetHologram"));
	void UFGBuildGunStateBuild::Client_OnResetHologram()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateBuild_Client_OnResetHologram),NULL);
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
	void UFGBuildGunStateBuild::StaticRegisterNativesUFGBuildGunStateBuild()
	{
		UClass* Class = UFGBuildGunStateBuild::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginClearanceOverlap", &UFGBuildGunStateBuild::execBeginClearanceOverlap },
			{ "Client_OnBuildableConstructed", &UFGBuildGunStateBuild::execClient_OnBuildableConstructed },
			{ "Client_OnResetHologram", &UFGBuildGunStateBuild::execClient_OnResetHologram },
			{ "EndClearanceOverlap", &UFGBuildGunStateBuild::execEndClearanceOverlap },
			{ "GetDescriptor", &UFGBuildGunStateBuild::execGetDescriptor },
			{ "GetHologram", &UFGBuildGunStateBuild::execGetHologram },
			{ "GetHologramCost", &UFGBuildGunStateBuild::execGetHologramCost },
			{ "OnRep_Hologram", &UFGBuildGunStateBuild::execOnRep_Hologram },
			{ "ResetHologram", &UFGBuildGunStateBuild::execResetHologram },
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms), &Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
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
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, "BeginClearanceOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00440401, sizeof(FGBuildGunStateBuild_eventBeginClearanceOverlap_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::NewProp_desc = { UE4CodeGen_Private::EPropertyClass::Class, "desc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateBuild_eventClient_OnBuildableConstructed_Parms, desc), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::NewProp_desc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Helper to notify the client that something was built" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, "Client_OnBuildableConstructed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01080CC0, sizeof(FGBuildGunStateBuild_eventClient_OnBuildableConstructed_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Helper to notify the client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, "Client_OnResetHologram", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01080CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram_Statics::FuncParams);
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateBuild_eventEndClearanceOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateBuild_eventEndClearanceOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateBuild_eventEndClearanceOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateBuild_eventEndClearanceOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, "EndClearanceOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(FGBuildGunStateBuild_eventEndClearanceOverlap_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateBuild_eventGetDescriptor_Parms, ReturnValue), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Build" },
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Get the current descriptor, null if no descriptor is set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, "GetDescriptor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildGunStateBuild_eventGetDescriptor_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateBuild_eventGetHologram_Parms, ReturnValue), Z_Construct_UClass_AFGHologram_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Build" },
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Returns the hologram; null if hologram not spawned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, "GetHologram", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildGunStateBuild_eventGetHologram_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateBuild_eventGetHologramCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Build" },
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Returns the cost for building the hologram." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, "GetHologramCost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildGunStateBuild_eventGetHologramCost_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Let blueprint know when we get a new descriptor, the new descriptor may be null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, "OnActiveDescriptorChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::NewProp_isFinalStep = { UE4CodeGen_Private::EPropertyClass::Bool, "isFinalStep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildGunStateBuild_eventOnMultiStepPlacement_Parms), &Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::NewProp_isFinalStep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::NewProp_isFinalStep,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Build" },
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Let blueprint know we performed a multi-step placement.\n@param isFinalStep - true if this was the last step, the thing is now built. Hologram is no longer guaranteed to exist on the the client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, "OnMultiStepPlacement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(FGBuildGunStateBuild_eventOnMultiStepPlacement_Parms), Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Called whenever the hologram is udpated *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, "OnRep_Hologram", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Let blueprint know we reset the multi-step placement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, "OnResetHologram", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Resets any changes made to the hologram.\n@note Must be called on the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateBuild, "ResetHologram", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGBuildGunStateBuild_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGBuildGunState,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGBuildGunStateBuild_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_BeginClearanceOverlap, "BeginClearanceOverlap" }, // 2678958636
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnBuildableConstructed, "Client_OnBuildableConstructed" }, // 3096659967
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_Client_OnResetHologram, "Client_OnResetHologram" }, // 1029684438
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_EndClearanceOverlap, "EndClearanceOverlap" }, // 3188752287
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_GetDescriptor, "GetDescriptor" }, // 3537469108
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologram, "GetHologram" }, // 3135401855
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_GetHologramCost, "GetHologramCost" }, // 492843978
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_OnActiveDescriptorChanged, "OnActiveDescriptorChanged" }, // 2173253787
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_OnMultiStepPlacement, "OnMultiStepPlacement" }, // 113834668
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_OnRep_Hologram, "OnRep_Hologram" }, // 744665933
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_OnResetHologram, "OnResetHologram" }, // 4049704188
		{ &Z_Construct_UFunction_UFGBuildGunStateBuild_ResetHologram, "ResetHologram" }, // 1288540577
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGBuildGunBuild.h" },
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Build guns build state." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mClearanceDetector_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Component that finds close clearances of nearby buildings and visualize them //@todo G2 2019-04-10 An improvement here would be to make this a component that can keep track of detected\n//                    overlaps so the state does not contain this easily self contained logic." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mClearanceDetector = { UE4CodeGen_Private::EPropertyClass::Object, "mClearanceDetector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UFGBuildGunStateBuild, mClearanceDetector), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mClearanceDetector_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mClearanceDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Contains all the proximate clearances volumes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances = { UE4CodeGen_Private::EPropertyClass::Array, "mProximateClearances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000000, 1, nullptr, STRUCT_OFFSET(UFGBuildGunStateBuild, mProximateClearances), METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mProximateClearances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFactoryClearanceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mUpgradedActor_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "The actor to replace (dismantle) when upgrading." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mUpgradedActor = { UE4CodeGen_Private::EPropertyClass::Object, "mUpgradedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(UFGBuildGunStateBuild, mUpgradedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mUpgradedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mUpgradedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mHologram_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "The hologram to build." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mHologram = { UE4CodeGen_Private::EPropertyClass::Object, "mHologram", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_Hologram", STRUCT_OFFSET(UFGBuildGunStateBuild, mHologram), Z_Construct_UClass_AFGHologram_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mHologram_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mHologram_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mActiveRecipe_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "The currently active recipe, this decides which action will be used.\nNot replicated as the client sets it locally and then tells the server to set it." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mActiveRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "mActiveRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000000, 1, nullptr, STRUCT_OFFSET(UFGBuildGunStateBuild, mActiveRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mActiveRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mActiveRecipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mPendingRecipe_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGBuildGunBuild.h" },
		{ "ToolTip", "Recipe to activate when state is entered." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mPendingRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "mPendingRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000000, 1, nullptr, STRUCT_OFFSET(UFGBuildGunStateBuild, mPendingRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mPendingRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mPendingRecipe_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGBuildGunStateBuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mClearanceDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mProximateClearances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mUpgradedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mHologram,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mActiveRecipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateBuild_Statics::NewProp_mPendingRecipe,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGBuildGunStateBuild_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGBuildGunStateBuild>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGBuildGunStateBuild_Statics::ClassParams = {
		&UFGBuildGunStateBuild::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGBuildGunStateBuild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateBuild_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(UFGBuildGunStateBuild, 649688716);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGBuildGunStateBuild(Z_Construct_UClass_UFGBuildGunStateBuild, &UFGBuildGunStateBuild::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGBuildGunStateBuild"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGBuildGunStateBuild);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
