// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGRailroadTrackHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRailroadTrackHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadTrackHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadTrackHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSplineHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister();
// End Cross Module References
	void AFGRailroadTrackHologram::StaticRegisterNativesAFGRailroadTrackHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGRailroadTrackHologram_NoRegister()
	{
		return AFGRailroadTrackHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGRailroadTrackHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSplineMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSplineMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnappedConnectionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnappedConnectionComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnectionComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnapDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSnapDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxGrade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxGrade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinBendRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMinBendRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMinLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRailroadTrackHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSplineHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadTrackHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGRailroadTrackHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadTrackHologram.h" },
		{ "ToolTip", "Hologram used to place train tracks." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadTrackHologram.h" },
		{ "ToolTip", "Cached from the default buildable." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGRailroadTrackHologram, mMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSplineMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadTrackHologram.h" },
		{ "ToolTip", "All the generated spline meshes." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSplineMeshes = { UE4CodeGen_Private::EPropertyClass::Array, "mSplineMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000008, 1, nullptr, STRUCT_OFFSET(AFGRailroadTrackHologram, mSplineMeshes), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSplineMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSplineMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSplineMeshes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mSplineMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadTrackHologram.h" },
		{ "ToolTip", "The track connection we snap when building the track." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSnappedConnectionComponents = { UE4CodeGen_Private::EPropertyClass::Object, "mSnappedConnectionComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, CPP_ARRAY_DIM(mSnappedConnectionComponents, AFGRailroadTrackHologram), nullptr, STRUCT_OFFSET(AFGRailroadTrackHologram, mSnappedConnectionComponents), Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mConnectionComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadTrackHologram.h" },
		{ "ToolTip", "The track connections we have." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mConnectionComponents = { UE4CodeGen_Private::EPropertyClass::Object, "mConnectionComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, CPP_ARRAY_DIM(mConnectionComponents, AFGRailroadTrackHologram), nullptr, STRUCT_OFFSET(AFGRailroadTrackHologram, mConnectionComponents), Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mConnectionComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mConnectionComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSnapDistance_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadTrackHologram.h" },
		{ "ToolTip", "From how far away we should snap to another track. [cm]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSnapDistance = { UE4CodeGen_Private::EPropertyClass::Float, "mSnapDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGRailroadTrackHologram, mSnapDistance), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSnapDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSnapDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMaxGrade_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadTrackHologram.h" },
		{ "ToolTip", "Grade restriction of the track. [degrees]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMaxGrade = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxGrade", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGRailroadTrackHologram, mMaxGrade), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMaxGrade_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMaxGrade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMinBendRadius_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadTrackHologram.h" },
		{ "ToolTip", "Turn radius restriction of the track. [cm]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMinBendRadius = { UE4CodeGen_Private::EPropertyClass::Float, "mMinBendRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGRailroadTrackHologram, mMinBendRadius), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMinBendRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMinBendRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMaxLength_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadTrackHologram.h" },
		{ "ToolTip", "Length restriction of the track. [cm]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMaxLength = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGRailroadTrackHologram, mMaxLength), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMaxLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMaxLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMinLength_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadTrackHologram.h" },
		{ "ToolTip", "Length restriction of the track. [cm]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMinLength = { UE4CodeGen_Private::EPropertyClass::Float, "mMinLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGRailroadTrackHologram, mMinLength), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMinLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMinLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRailroadTrackHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSplineMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSplineMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSnappedConnectionComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mConnectionComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mSnapDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMaxGrade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMinBendRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMaxLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadTrackHologram_Statics::NewProp_mMinLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRailroadTrackHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRailroadTrackHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRailroadTrackHologram_Statics::ClassParams = {
		&AFGRailroadTrackHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFGRailroadTrackHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadTrackHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRailroadTrackHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRailroadTrackHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRailroadTrackHologram, 1158515027);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRailroadTrackHologram(Z_Construct_UClass_AFGRailroadTrackHologram, &AFGRailroadTrackHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRailroadTrackHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRailroadTrackHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
