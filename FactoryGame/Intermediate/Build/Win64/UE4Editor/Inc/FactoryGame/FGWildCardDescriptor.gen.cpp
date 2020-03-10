// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Resources/FGWildCardDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWildCardDescriptor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWildCardDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWildCardDescriptor();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGWildCardDescriptor::StaticRegisterNativesUFGWildCardDescriptor()
	{
	}
	UClass* Z_Construct_UClass_UFGWildCardDescriptor_NoRegister()
	{
		return UFGWildCardDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UFGWildCardDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGWildCardDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGItemDescriptor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWildCardDescriptor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGWildCardDescriptor.h" },
		{ "ModuleRelativePath", "Public/Resources/FGWildCardDescriptor.h" },
		{ "ToolTip", "Not a real resource, used to indicate a wild card in sorting rules." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGWildCardDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGWildCardDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGWildCardDescriptor_Statics::ClassParams = {
		&UFGWildCardDescriptor::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGWildCardDescriptor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGWildCardDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGWildCardDescriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGWildCardDescriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGWildCardDescriptor, 881644438);
	template<> FACTORYGAME_API UClass* StaticClass<UFGWildCardDescriptor>()
	{
		return UFGWildCardDescriptor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGWildCardDescriptor(Z_Construct_UClass_UFGWildCardDescriptor, &UFGWildCardDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGWildCardDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGWildCardDescriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
