// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGFactoryBuildingHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFactoryBuildingHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFactoryBuildingHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFactoryBuildingHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFGFactoryBuildingHologram::StaticRegisterNativesAFGFactoryBuildingHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGFactoryBuildingHologram_NoRegister()
	{
		return AFGFactoryBuildingHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGFactoryBuildingHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildingMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBuildingMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGFactoryBuildingHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGFactoryBuildingHologram.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::NewProp_mBuildingMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGFactoryBuildingHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::NewProp_mBuildingMesh = { "mBuildingMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGFactoryBuildingHologram, mBuildingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::NewProp_mBuildingMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::NewProp_mBuildingMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::NewProp_mBuildingMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGFactoryBuildingHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::ClassParams = {
		&AFGFactoryBuildingHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGFactoryBuildingHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGFactoryBuildingHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGFactoryBuildingHologram, 626191752);
	template<> FACTORYGAME_API UClass* StaticClass<AFGFactoryBuildingHologram>()
	{
		return AFGFactoryBuildingHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGFactoryBuildingHologram(Z_Construct_UClass_AFGFactoryBuildingHologram, &AFGFactoryBuildingHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGFactoryBuildingHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGFactoryBuildingHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
