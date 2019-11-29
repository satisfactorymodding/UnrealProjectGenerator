// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableWall() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableWall_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableWall();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactoryBuilding();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGBuildableWall::StaticRegisterNativesAFGBuildableWall()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableWall_NoRegister()
	{
		return AFGBuildableWall::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactoryBuilding,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableWall.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableWall.h" },
		{ "ToolTip", "A wall that can be build on foundations, floors and other walls." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWall_Statics::NewProp_mHeight_MetaData[] = {
		{ "Category", "Wall" },
		{ "ModuleRelativePath", "Buildables/FGBuildableWall.h" },
		{ "ToolTip", "Height of the wall" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableWall_Statics::NewProp_mHeight = { "mHeight", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableWall, mHeight), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWall_Statics::NewProp_mHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWall_Statics::NewProp_mHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableWall_Statics::NewProp_mWidth_MetaData[] = {
		{ "Category", "Wall" },
		{ "ModuleRelativePath", "Buildables/FGBuildableWall.h" },
		{ "ToolTip", "Width of the wall" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableWall_Statics::NewProp_mWidth = { "mWidth", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableWall, mWidth), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWall_Statics::NewProp_mWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWall_Statics::NewProp_mWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableWall_Statics::NewProp_mHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableWall_Statics::NewProp_mWidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableWall_Statics::ClassParams = {
		&AFGBuildableWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGBuildableWall_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWall_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableWall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableWall, 2641757977);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableWall>()
	{
		return AFGBuildableWall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableWall(Z_Construct_UClass_AFGBuildableWall, &AFGBuildableWall::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
