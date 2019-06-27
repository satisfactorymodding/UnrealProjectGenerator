// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGConveyorAttachmentHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGConveyorAttachmentHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorAttachmentHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorAttachmentHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFactoryHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorBelt_NoRegister();
// End Cross Module References
	void AFGConveyorAttachmentHologram::StaticRegisterNativesAFGConveyorAttachmentHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGConveyorAttachmentHologram_NoRegister()
	{
		return AFGConveyorAttachmentHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnappedConveyor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnappedConveyor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxValidTurnAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxValidTurnAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxValidTurnOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxValidTurnOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGFactoryHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGConveyorAttachmentHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGConveyorAttachmentHologram.h" },
		{ "ToolTip", "Hologram for conveyor attachments, such as splitters/mergers." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConveyor_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGConveyorAttachmentHologram.h" },
		{ "ToolTip", "The conveyor we snapped to." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConveyor = { UE4CodeGen_Private::EPropertyClass::Object, "mSnappedConveyor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGConveyorAttachmentHologram, mSnappedConveyor), Z_Construct_UClass_AFGBuildableConveyorBelt_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConveyor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConveyor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnAngle_MetaData[] = {
		{ "Category", "Conveyor Attachment" },
		{ "ModuleRelativePath", "Hologram/FGConveyorAttachmentHologram.h" },
		{ "ToolTip", "Used to limit the placement in turns. What's the maximum angle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnAngle = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxValidTurnAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGConveyorAttachmentHologram, mMaxValidTurnAngle), METADATA_PARAMS(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnOffset_MetaData[] = {
		{ "Category", "Conveyor Attachment" },
		{ "ModuleRelativePath", "Hologram/FGConveyorAttachmentHologram.h" },
		{ "ToolTip", "Used to limit the placement in turns. What's the maximum offset to check from center to detect the curve." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnOffset = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxValidTurnOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGConveyorAttachmentHologram, mMaxValidTurnOffset), METADATA_PARAMS(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mSnappedConveyor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::NewProp_mMaxValidTurnOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGConveyorAttachmentHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::ClassParams = {
		&AFGConveyorAttachmentHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGConveyorAttachmentHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGConveyorAttachmentHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGConveyorAttachmentHologram, 1596477144);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGConveyorAttachmentHologram(Z_Construct_UClass_AFGConveyorAttachmentHologram, &AFGConveyorAttachmentHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGConveyorAttachmentHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGConveyorAttachmentHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
