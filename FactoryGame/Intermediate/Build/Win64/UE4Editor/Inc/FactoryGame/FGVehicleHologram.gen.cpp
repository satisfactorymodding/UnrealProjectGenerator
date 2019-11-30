// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGVehicleHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGVehicleHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVehicleHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVehicleHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVehicle_NoRegister();
// End Cross Module References
	void AFGVehicleHologram::StaticRegisterNativesAFGVehicleHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGVehicleHologram_NoRegister()
	{
		return AFGVehicleHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGVehicleHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mVehicleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mVehicleClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGVehicleHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicleHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGVehicleHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGVehicleHologram.h" },
		{ "ToolTip", "The base class for vehicle holograms such as trucks, trains etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGVehicleHologram_Statics::NewProp_mVehicleClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGVehicleHologram.h" },
		{ "ToolTip", "The vehicle class that this hologram constructs." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGVehicleHologram_Statics::NewProp_mVehicleClass = { UE4CodeGen_Private::EPropertyClass::Class, "mVehicleClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000020, 1, nullptr, STRUCT_OFFSET(AFGVehicleHologram, mVehicleClass), Z_Construct_UClass_AFGVehicle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGVehicleHologram_Statics::NewProp_mVehicleClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGVehicleHologram_Statics::NewProp_mVehicleClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGVehicleHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGVehicleHologram_Statics::NewProp_mVehicleClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGVehicleHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGVehicleHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGVehicleHologram_Statics::ClassParams = {
		&AFGVehicleHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFGVehicleHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGVehicleHologram_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGVehicleHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGVehicleHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGVehicleHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGVehicleHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGVehicleHologram, 3637929755);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGVehicleHologram(Z_Construct_UClass_AFGVehicleHologram, &AFGVehicleHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGVehicleHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGVehicleHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
