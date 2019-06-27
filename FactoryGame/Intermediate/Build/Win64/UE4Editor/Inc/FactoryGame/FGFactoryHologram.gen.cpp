// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGFactoryHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFactoryHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFactoryHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFactoryHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AFGFactoryHologram::StaticRegisterNativesAFGFactoryHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGFactoryHologram_NoRegister()
	{
		return AFGFactoryHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGFactoryHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mClearanceMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mClearanceMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mClearanceMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mClearanceMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mClearanceMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mClearanceMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGFactoryHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFactoryHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGFactoryHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGFactoryHologram.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGFactoryHologram.h" },
		{ "ToolTip", "Material to use on the clearance component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "mClearanceMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGFactoryHologram, mClearanceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMesh_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGFactoryHologram.h" },
		{ "ToolTip", "Mesh we want to use in the component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mClearanceMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGFactoryHologram, mClearanceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hologram/FGFactoryHologram.h" },
		{ "ToolTip", "Mesh component used to display the clearance mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mClearanceMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AFGFactoryHologram, mClearanceMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGFactoryHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFactoryHologram_Statics::NewProp_mClearanceMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGFactoryHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGFactoryHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGFactoryHologram_Statics::ClassParams = {
		&AFGFactoryHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFGFactoryHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGFactoryHologram_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGFactoryHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGFactoryHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGFactoryHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGFactoryHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGFactoryHologram, 3501375132);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGFactoryHologram(Z_Construct_UClass_AFGFactoryHologram, &AFGFactoryHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGFactoryHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGFactoryHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
