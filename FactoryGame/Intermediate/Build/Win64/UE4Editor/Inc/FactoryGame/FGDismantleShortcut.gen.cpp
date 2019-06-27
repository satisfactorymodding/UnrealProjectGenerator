// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGDismantleShortcut.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDismantleShortcut() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDismantleShortcut_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDismantleShortcut();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHotbarShortcut();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGDismantleShortcut::StaticRegisterNativesUFGDismantleShortcut()
	{
	}
	UClass* Z_Construct_UClass_UFGDismantleShortcut_NoRegister()
	{
		return UFGDismantleShortcut::StaticClass();
	}
	struct Z_Construct_UClass_UFGDismantleShortcut_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGDismantleShortcut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGHotbarShortcut,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDismantleShortcut_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGDismantleShortcut.h" },
		{ "ModuleRelativePath", "FGDismantleShortcut.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGDismantleShortcut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGDismantleShortcut>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGDismantleShortcut_Statics::ClassParams = {
		&UFGDismantleShortcut::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGDismantleShortcut_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGDismantleShortcut_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGDismantleShortcut()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGDismantleShortcut_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGDismantleShortcut, 499783229);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGDismantleShortcut(Z_Construct_UClass_UFGDismantleShortcut, &UFGDismantleShortcut::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGDismantleShortcut"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGDismantleShortcut);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
