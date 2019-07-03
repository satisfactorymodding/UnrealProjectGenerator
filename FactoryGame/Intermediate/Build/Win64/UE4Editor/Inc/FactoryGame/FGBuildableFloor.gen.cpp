// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableFloor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableFloor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFloor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFloor();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactoryBuilding();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGBuildableFloor::StaticRegisterNativesAFGBuildableFloor()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableFloor_NoRegister()
	{
		return AFGBuildableFloor::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableFloor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableFloor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactoryBuilding,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableFloor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableFloor.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableFloor.h" },
		{ "ToolTip", "DEPRECATED - We only want foundations for now.\nA floor, must be placed on a foundation." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableFloor_Statics::NewProp_mSize_MetaData[] = {
		{ "Category", "Foundation" },
		{ "ModuleRelativePath", "Buildables/FGBuildableFloor.h" },
		{ "ToolTip", "Size of the floor, width and depth." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableFloor_Statics::NewProp_mSize = { UE4CodeGen_Private::EPropertyClass::Float, "mSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(AFGBuildableFloor, mSize), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableFloor_Statics::NewProp_mSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableFloor_Statics::NewProp_mSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableFloor_Statics::NewProp_mSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableFloor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableFloor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableFloor_Statics::ClassParams = {
		&AFGBuildableFloor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A5u,
		nullptr, 0,
		Z_Construct_UClass_AFGBuildableFloor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableFloor_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableFloor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableFloor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableFloor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableFloor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableFloor, 3916384018);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableFloor(Z_Construct_UClass_AFGBuildableFloor, &AFGBuildableFloor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableFloor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableFloor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
