// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGRailroadHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRailroadHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFactoryHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadTrackPosition();
// End Cross Module References
	void AFGRailroadHologram::StaticRegisterNativesAFGRailroadHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGRailroadHologram_NoRegister()
	{
		return AFGRailroadHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGRailroadHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnappedTrackPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSnappedTrackPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRailroadHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGFactoryHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGRailroadHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadHologram.h" },
		{ "ToolTip", "Hologram base for railroad buildings, stations, signals, switch controls etc. but not special cases like tracks, vehicles." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadHologram_Statics::NewProp_mSnappedTrackPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGRailroadHologram.h" },
		{ "ToolTip", "The track position for this hologram. If valid this station has snapped to a track." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGRailroadHologram_Statics::NewProp_mSnappedTrackPosition = { "mSnappedTrackPosition", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadHologram, mSnappedTrackPosition), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadHologram_Statics::NewProp_mSnappedTrackPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadHologram_Statics::NewProp_mSnappedTrackPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRailroadHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadHologram_Statics::NewProp_mSnappedTrackPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRailroadHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRailroadHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRailroadHologram_Statics::ClassParams = {
		&AFGRailroadHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGRailroadHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGRailroadHologram_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGRailroadHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRailroadHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRailroadHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRailroadHologram, 761649647);
	template<> FACTORYGAME_API UClass* StaticClass<AFGRailroadHologram>()
	{
		return AFGRailroadHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRailroadHologram(Z_Construct_UClass_AFGRailroadHologram, &AFGRailroadHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRailroadHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRailroadHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
