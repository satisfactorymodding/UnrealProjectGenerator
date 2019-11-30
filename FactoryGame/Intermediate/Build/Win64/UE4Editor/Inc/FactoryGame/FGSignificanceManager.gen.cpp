// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGSignificanceManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSignificanceManager() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FGainSignificanceData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceManager();
	SIGNIFICANCEMANAGER_API UClass* Z_Construct_UClass_USignificanceManager();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorBase_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory_NoRegister();
// End Cross Module References
class UScriptStruct* FGainSignificanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FGainSignificanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGainSignificanceData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("GainSignificanceData"), sizeof(FGainSignificanceData), Get_Z_Construct_UScriptStruct_FGainSignificanceData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FGainSignificanceData>()
{
	return FGainSignificanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGainSignificanceData(FGainSignificanceData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("GainSignificanceData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFGainSignificanceData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFGainSignificanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GainSignificanceData")),new UScriptStruct::TCppStructOps<FGainSignificanceData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFGainSignificanceData;
	struct Z_Construct_UScriptStruct_FGainSignificanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGainSignificanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSignificanceManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGainSignificanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGainSignificanceData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGainSignificanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"GainSignificanceData",
		sizeof(FGainSignificanceData),
		alignof(FGainSignificanceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGainSignificanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGainSignificanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGainSignificanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGainSignificanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GainSignificanceData"), sizeof(FGainSignificanceData), Get_Z_Construct_UScriptStruct_FGainSignificanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGainSignificanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGainSignificanceData_Hash() { return 689359477U; }
	void UFGSignificanceManager::StaticRegisterNativesUFGSignificanceManager()
	{
	}
	UClass* Z_Construct_UClass_UFGSignificanceManager_NoRegister()
	{
		return UFGSignificanceManager::StaticClass();
	}
	struct Z_Construct_UClass_UFGSignificanceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreviousSignificantConveyorBases_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPreviousSignificantConveyorBases;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPreviousSignificantConveyorBases_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreviousSignificantFactories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPreviousSignificantFactories;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPreviousSignificantFactories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsEnabled_MetaData[];
#endif
		static void NewProp_mIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGSignificanceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USignificanceManager,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSignificanceManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGSignificanceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGSignificanceManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantConveyorBases_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSignificanceManager.h" },
		{ "ToolTip", "List of conveyor bases (belts and lifts) that were significant last time we checked" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantConveyorBases = { "mPreviousSignificantConveyorBases", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSignificanceManager, mPreviousSignificantConveyorBases), METADATA_PARAMS(Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantConveyorBases_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantConveyorBases_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantConveyorBases_Inner = { "mPreviousSignificantConveyorBases", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGBuildableConveyorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSignificanceManager.h" },
		{ "ToolTip", "List of factories that were significant last time we checked" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantFactories = { "mPreviousSignificantFactories", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSignificanceManager, mPreviousSignificantFactories), METADATA_PARAMS(Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantFactories_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantFactories_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantFactories_Inner = { "mPreviousSignificantFactories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGBuildableFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mIsEnabled_MetaData[] = {
		{ "Category", "SignificanceManager" },
		{ "ModuleRelativePath", "Public/FGSignificanceManager.h" },
		{ "ToolTip", "Is the manager enabled" },
	};
#endif
	void Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mIsEnabled_SetBit(void* Obj)
	{
		((UFGSignificanceManager*)Obj)->mIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mIsEnabled = { "mIsEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGSignificanceManager), &Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mIsEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mIsEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGSignificanceManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantConveyorBases,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantConveyorBases_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantFactories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mPreviousSignificantFactories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSignificanceManager_Statics::NewProp_mIsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGSignificanceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGSignificanceManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGSignificanceManager_Statics::ClassParams = {
		&UFGSignificanceManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGSignificanceManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFGSignificanceManager_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UFGSignificanceManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGSignificanceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGSignificanceManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGSignificanceManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGSignificanceManager, 1095274913);
	template<> FACTORYGAME_API UClass* StaticClass<UFGSignificanceManager>()
	{
		return UFGSignificanceManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGSignificanceManager(Z_Construct_UClass_UFGSignificanceManager, &UFGSignificanceManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGSignificanceManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGSignificanceManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
