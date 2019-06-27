// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGPowerPoleHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPowerPoleHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPowerPoleHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPowerPoleHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister();
// End Cross Module References
	void AFGPowerPoleHologram::StaticRegisterNativesAFGPowerPoleHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGPowerPoleHologram_NoRegister()
	{
		return AFGPowerPoleHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGPowerPoleHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnapConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnapConnection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGPowerPoleHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPowerPoleHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGPowerPoleHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGPowerPoleHologram.h" },
		{ "ToolTip", "Hologram for power poles." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPowerPoleHologram_Statics::NewProp_mSnapConnection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hologram/FGPowerPoleHologram.h" },
		{ "ToolTip", "The connection wires snap to, used when placing a pole automatically." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPowerPoleHologram_Statics::NewProp_mSnapConnection = { UE4CodeGen_Private::EPropertyClass::Object, "mSnapConnection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AFGPowerPoleHologram, mSnapConnection), Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPowerPoleHologram_Statics::NewProp_mSnapConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPowerPoleHologram_Statics::NewProp_mSnapConnection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGPowerPoleHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPowerPoleHologram_Statics::NewProp_mSnapConnection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGPowerPoleHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGPowerPoleHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGPowerPoleHologram_Statics::ClassParams = {
		&AFGPowerPoleHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFGPowerPoleHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGPowerPoleHologram_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGPowerPoleHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGPowerPoleHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGPowerPoleHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGPowerPoleHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGPowerPoleHologram, 2820799218);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGPowerPoleHologram(Z_Construct_UClass_AFGPowerPoleHologram, &AFGPowerPoleHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGPowerPoleHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGPowerPoleHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
