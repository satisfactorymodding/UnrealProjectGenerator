// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGSplinePath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSplinePath() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSplinePath_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSplinePath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void AFGSplinePath::StaticRegisterNativesAFGSplinePath()
	{
	}
	UClass* Z_Construct_UClass_AFGSplinePath_NoRegister()
	{
		return AFGSplinePath::StaticClass();
	}
	struct Z_Construct_UClass_AFGSplinePath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSpline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSplinePath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSplinePath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGSplinePath.h" },
		{ "ModuleRelativePath", "Public/FGSplinePath.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSplinePath_Statics::NewProp_mSpline_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGSplinePath.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGSplinePath_Statics::NewProp_mSpline = { "mSpline", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSplinePath, mSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGSplinePath_Statics::NewProp_mSpline_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSplinePath_Statics::NewProp_mSpline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGSplinePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSplinePath_Statics::NewProp_mSpline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSplinePath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSplinePath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSplinePath_Statics::ClassParams = {
		&AFGSplinePath::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGSplinePath_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGSplinePath_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGSplinePath_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGSplinePath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSplinePath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSplinePath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSplinePath, 118151477);
	template<> FACTORYGAME_API UClass* StaticClass<AFGSplinePath>()
	{
		return AFGSplinePath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSplinePath(Z_Construct_UClass_AFGSplinePath, &AFGSplinePath::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGSplinePath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSplinePath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
