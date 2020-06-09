// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableWalkway.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableWalkway() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableWalkway_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableWalkway();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactoryBuilding();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFoundationSideSelectionFlags();
// End Cross Module References
	void AFGBuildableWalkway::StaticRegisterNativesAFGBuildableWalkway()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableWalkway_NoRegister()
	{
		return AFGBuildableWalkway::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableWalkway_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisableSnapOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDisableSnapOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mElevation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mElevation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableWalkway_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactoryBuilding,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWalkway_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableWalkway.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableWalkway.h" },
		{ "ToolTip", "Base class for walkways." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mDisableSnapOn_MetaData[] = {
		{ "Category", "Walkway" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableWalkway.h" },
		{ "ToolTip", "Disable snapping on specific sides." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mDisableSnapOn = { "mDisableSnapOn", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableWalkway, mDisableSnapOn), Z_Construct_UScriptStruct_FFoundationSideSelectionFlags, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mDisableSnapOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mDisableSnapOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mElevation_MetaData[] = {
		{ "Category", "Walkway" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableWalkway.h" },
		{ "ToolTip", "Elevation of this walkway if ramp, assumes the ramp to go up towards a positive X." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mElevation = { "mElevation", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableWalkway, mElevation), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mElevation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mElevation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mSize_MetaData[] = {
		{ "Category", "Walkway" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableWalkway.h" },
		{ "ToolTip", "Size of the walkway (size of one side of the square part)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mSize = { "mSize", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableWalkway, mSize), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableWalkway_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mDisableSnapOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mElevation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableWalkway_Statics::NewProp_mSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableWalkway_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableWalkway>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableWalkway_Statics::ClassParams = {
		&AFGBuildableWalkway::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGBuildableWalkway_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWalkway_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWalkway_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWalkway_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableWalkway()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableWalkway_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableWalkway, 2185037953);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableWalkway>()
	{
		return AFGBuildableWalkway::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableWalkway(Z_Construct_UClass_AFGBuildableWalkway, &AFGBuildableWalkway::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableWalkway"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableWalkway);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
