// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableRoad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableRoad() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRoad_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRoad();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplinePointData();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSplineComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRoadConnectionComponent_NoRegister();
// End Cross Module References
	void AFGBuildableRoad::StaticRegisterNativesAFGBuildableRoad()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableRoad_NoRegister()
	{
		return AFGBuildableRoad::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableRoad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSplineData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSplineData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnection1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnection1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnection0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnection0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableRoad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRoad_Statics::Class_MetaDataParams[] = {
		{ "AutoJson", "FALSE" },
		{ "IncludePath", "Buildables/FGBuildableRoad.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRoad.h" },
		{ "ToolTip", "Roads for the wroom wroom." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mSplineData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRoad.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Spline data saved in a compact form for saving and replicating. All the vectors are in local space." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mSplineData = { "mSplineData", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRoad, mSplineData), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mSplineData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mSplineData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mSplineData_Inner = { "mSplineData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSplinePointData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mSplineComponent_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRoad.h" },
		{ "ToolTip", "The spline component for this train track." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mSplineComponent = { "mSplineComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRoad, mSplineComponent), Z_Construct_UClass_UFGSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mSplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mSplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mConnection1_MetaData[] = {
		{ "Category", "Road" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRoad.h" },
		{ "ToolTip", "Second connection on tack" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mConnection1 = { "mConnection1", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRoad, mConnection1), Z_Construct_UClass_UFGRoadConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mConnection1_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mConnection1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mConnection0_MetaData[] = {
		{ "Category", "Road" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRoad.h" },
		{ "ToolTip", "First connection on track" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mConnection0 = { "mConnection0", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRoad, mConnection0), Z_Construct_UClass_UFGRoadConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mConnection0_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mConnection0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableRoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mSplineData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mSplineData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mSplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mConnection1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRoad_Statics::NewProp_mConnection0,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableRoad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableRoad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableRoad_Statics::ClassParams = {
		&AFGBuildableRoad::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGBuildableRoad_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRoad_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRoad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRoad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableRoad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableRoad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableRoad, 354255569);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableRoad>()
	{
		return AFGBuildableRoad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableRoad(Z_Construct_UClass_AFGBuildableRoad, &AFGBuildableRoad::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableRoad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableRoad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
