// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGDecorHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDecorHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDecorHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDecorHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void AFGDecorHologram::StaticRegisterNativesAFGDecorHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGDecorHologram_NoRegister()
	{
		return AFGDecorHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGDecorHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDecorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDecorMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGDecorHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDecorHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGDecorHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGDecorHologram.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDecorHologram_Statics::NewProp_mDecorMesh_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGDecorHologram.h" },
		{ "ToolTip", "The mesh we want to set to our decor to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGDecorHologram_Statics::NewProp_mDecorMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mDecorMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000020, 1, nullptr, STRUCT_OFFSET(AFGDecorHologram, mDecorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGDecorHologram_Statics::NewProp_mDecorMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDecorHologram_Statics::NewProp_mDecorMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGDecorHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDecorHologram_Statics::NewProp_mDecorMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGDecorHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGDecorHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGDecorHologram_Statics::ClassParams = {
		&AFGDecorHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFGDecorHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGDecorHologram_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGDecorHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGDecorHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGDecorHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGDecorHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGDecorHologram, 4035947495);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGDecorHologram(Z_Construct_UClass_AFGDecorHologram, &AFGDecorHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGDecorHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGDecorHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
