// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGAnimNotify_Landed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAnimNotify_Landed() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAnimNotify_Landed_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAnimNotify_Landed();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGAnimNotify_Landed::StaticRegisterNativesUFGAnimNotify_Landed()
	{
	}
	UClass* Z_Construct_UClass_UFGAnimNotify_Landed_NoRegister()
	{
		return UFGAnimNotify_Landed::StaticClass();
	}
	struct Z_Construct_UClass_UFGAnimNotify_Landed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAnimNotify_Landed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimNotify_Landed_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "FGAnimNotify_Landed.h" },
		{ "ModuleRelativePath", "FGAnimNotify_Landed.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAnimNotify_Landed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAnimNotify_Landed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAnimNotify_Landed_Statics::ClassParams = {
		&UFGAnimNotify_Landed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGAnimNotify_Landed_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGAnimNotify_Landed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAnimNotify_Landed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAnimNotify_Landed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAnimNotify_Landed, 3999878959);
	template<> FACTORYGAME_API UClass* StaticClass<UFGAnimNotify_Landed>()
	{
		return UFGAnimNotify_Landed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAnimNotify_Landed(Z_Construct_UClass_UFGAnimNotify_Landed, &UFGAnimNotify_Landed::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGAnimNotify_Landed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAnimNotify_Landed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
