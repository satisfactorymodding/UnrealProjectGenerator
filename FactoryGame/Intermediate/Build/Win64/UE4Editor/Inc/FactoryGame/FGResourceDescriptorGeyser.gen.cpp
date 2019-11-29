// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Resources/FGResourceDescriptorGeyser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGResourceDescriptorGeyser() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceDescriptorGeyser_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceDescriptorGeyser();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceDescriptor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGResourceDescriptorGeyser::StaticRegisterNativesUFGResourceDescriptorGeyser()
	{
	}
	UClass* Z_Construct_UClass_UFGResourceDescriptorGeyser_NoRegister()
	{
		return UFGResourceDescriptorGeyser::StaticClass();
	}
	struct Z_Construct_UClass_UFGResourceDescriptorGeyser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGResourceDescriptorGeyser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGResourceDescriptor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceDescriptorGeyser_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGResourceDescriptorGeyser.h" },
		{ "ModuleRelativePath", "Resources/FGResourceDescriptorGeyser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGResourceDescriptorGeyser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGResourceDescriptorGeyser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGResourceDescriptorGeyser_Statics::ClassParams = {
		&UFGResourceDescriptorGeyser::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGResourceDescriptorGeyser_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptorGeyser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGResourceDescriptorGeyser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGResourceDescriptorGeyser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGResourceDescriptorGeyser, 3873763760);
	template<> FACTORYGAME_API UClass* StaticClass<UFGResourceDescriptorGeyser>()
	{
		return UFGResourceDescriptorGeyser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGResourceDescriptorGeyser(Z_Construct_UClass_UFGResourceDescriptorGeyser, &UFGResourceDescriptorGeyser::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGResourceDescriptorGeyser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGResourceDescriptorGeyser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
