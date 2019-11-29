// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGRailroadVehicleHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRailroadVehicleHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadVehicleHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadVehicleHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVehicleHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRailroadVehicle_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadTrackPosition();
// End Cross Module References
	void AFGRailroadVehicleHologram::StaticRegisterNativesAFGRailroadVehicleHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGRailroadVehicleHologram_NoRegister()
	{
		return AFGRailroadVehicleHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGRailroadVehicleHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnappedVehicle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnappedVehicle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTrackPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTrackPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGVehicleHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGRailroadVehicleHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGRailroadVehicleHologram.h" },
		{ "ToolTip", "Hologram for railroad vehicles, this snaps to train tracks and couple with each other." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mSnappedVehicle_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGRailroadVehicleHologram.h" },
		{ "ToolTip", "The snapped vehicle." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mSnappedVehicle = { "mSnappedVehicle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadVehicleHologram, mSnappedVehicle), Z_Construct_UClass_AFGRailroadVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mSnappedVehicle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mSnappedVehicle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mTrackPosition_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGRailroadVehicleHologram.h" },
		{ "ToolTip", "The track position for this hologram. If valid this vehicle has snapped to a track." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mTrackPosition = { "mTrackPosition", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadVehicleHologram, mTrackPosition), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mTrackPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mTrackPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mLength_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGRailroadVehicleHologram.h" },
		{ "ToolTip", "The length of our vehicle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mLength = { "mLength", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRailroadVehicleHologram, mLength), METADATA_PARAMS(Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mSnappedVehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mTrackPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::NewProp_mLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRailroadVehicleHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::ClassParams = {
		&AFGRailroadVehicleHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRailroadVehicleHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRailroadVehicleHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRailroadVehicleHologram, 4241534526);
	template<> FACTORYGAME_API UClass* StaticClass<AFGRailroadVehicleHologram>()
	{
		return AFGRailroadVehicleHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRailroadVehicleHologram(Z_Construct_UClass_AFGRailroadVehicleHologram, &AFGRailroadVehicleHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRailroadVehicleHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRailroadVehicleHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
