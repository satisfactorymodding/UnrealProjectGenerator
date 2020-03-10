// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableGeneratorGeoThermal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableGeneratorGeoThermal() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGeneratorGeoThermal();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableGenerator();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNode_NoRegister();
// End Cross Module References
	void AFGBuildableGeneratorGeoThermal::StaticRegisterNativesAFGBuildableGeneratorGeoThermal()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_NoRegister()
	{
		return AFGBuildableGeneratorGeoThermal::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractableResource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mExtractableResource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExtractResourceNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mExtractResourceNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableGeneratorGeoThermal.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorGeoThermal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractableResource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorGeoThermal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractableResource = { "mExtractableResource", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorGeoThermal, mExtractableResource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractableResource_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractableResource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractResourceNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableGeneratorGeoThermal.h" },
		{ "ToolTip", "DEPRICATED - Use mExtractableResource instead. This exists for save functionality\n     This is the geyser this generator is placed on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractResourceNode = { "mExtractResourceNode", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableGeneratorGeoThermal, mExtractResourceNode), Z_Construct_UClass_AFGResourceNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractResourceNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractResourceNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractableResource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::NewProp_mExtractResourceNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableGeneratorGeoThermal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::ClassParams = {
		&AFGBuildableGeneratorGeoThermal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableGeneratorGeoThermal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableGeneratorGeoThermal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableGeneratorGeoThermal, 3240207912);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableGeneratorGeoThermal>()
	{
		return AFGBuildableGeneratorGeoThermal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableGeneratorGeoThermal(Z_Construct_UClass_AFGBuildableGeneratorGeoThermal, &AFGBuildableGeneratorGeoThermal::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableGeneratorGeoThermal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableGeneratorGeoThermal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
