// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGFoliageLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFoliageLibrary() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFoliageLibrary_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFoliageLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGFoliageLibrary::StaticRegisterNativesUFGFoliageLibrary()
	{
	}
	UClass* Z_Construct_UClass_UFGFoliageLibrary_NoRegister()
	{
		return UFGFoliageLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFGFoliageLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGFoliageLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFoliageLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGFoliageLibrary.h" },
		{ "ModuleRelativePath", "Public/FGFoliageLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGFoliageLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGFoliageLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGFoliageLibrary_Statics::ClassParams = {
		&UFGFoliageLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGFoliageLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGFoliageLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGFoliageLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGFoliageLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGFoliageLibrary, 1230014710);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGFoliageLibrary(Z_Construct_UClass_UFGFoliageLibrary, &UFGFoliageLibrary::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGFoliageLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGFoliageLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
