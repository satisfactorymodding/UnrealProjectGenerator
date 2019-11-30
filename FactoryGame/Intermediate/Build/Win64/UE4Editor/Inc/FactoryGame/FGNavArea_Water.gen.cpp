// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/AI/FGNavArea_Water.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGNavArea_Water() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGNavArea_Water_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGNavArea_Water();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGNavArea_Water::StaticRegisterNativesUFGNavArea_Water()
	{
	}
	UClass* Z_Construct_UClass_UFGNavArea_Water_NoRegister()
	{
		return UFGNavArea_Water::StaticClass();
	}
	struct Z_Construct_UClass_UFGNavArea_Water_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGNavArea_Water_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGNavArea_Water_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/FGNavArea_Water.h" },
		{ "ModuleRelativePath", "Public/AI/FGNavArea_Water.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGNavArea_Water_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGNavArea_Water>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGNavArea_Water_Statics::ClassParams = {
		&UFGNavArea_Water::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGNavArea_Water_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGNavArea_Water_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGNavArea_Water()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGNavArea_Water_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGNavArea_Water, 4248366735);
	template<> FACTORYGAME_API UClass* StaticClass<UFGNavArea_Water>()
	{
		return UFGNavArea_Water::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGNavArea_Water(Z_Construct_UClass_UFGNavArea_Water, &UFGNavArea_Water::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGNavArea_Water"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGNavArea_Water);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
