// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGAssetManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAssetManager() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAssetManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAssetManager();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGAssetManager::StaticRegisterNativesUFGAssetManager()
	{
	}
	UClass* Z_Construct_UClass_UFGAssetManager_NoRegister()
	{
		return UFGAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UFGAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAssetManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGAssetManager.h" },
		{ "ModuleRelativePath", "Public/FGAssetManager.h" },
		{ "ToolTip", "Help us discard packages that shouldn't be cooked and add assets that's should always be cooked" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAssetManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAssetManager_Statics::ClassParams = {
		&UFGAssetManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGAssetManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAssetManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAssetManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAssetManager, 4021858669);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAssetManager(Z_Construct_UClass_UFGAssetManager, &UFGAssetManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGAssetManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAssetManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
