// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Resources/FGNoneDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGNoneDescriptor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGNoneDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGNoneDescriptor();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGNoneDescriptor::StaticRegisterNativesUFGNoneDescriptor()
	{
	}
	UClass* Z_Construct_UClass_UFGNoneDescriptor_NoRegister()
	{
		return UFGNoneDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UFGNoneDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGNoneDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGItemDescriptor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGNoneDescriptor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGNoneDescriptor.h" },
		{ "ModuleRelativePath", "Resources/FGNoneDescriptor.h" },
		{ "ToolTip", "Not a real resource, used to indicate none in sorting rules." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGNoneDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGNoneDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGNoneDescriptor_Statics::ClassParams = {
		&UFGNoneDescriptor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGNoneDescriptor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGNoneDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGNoneDescriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGNoneDescriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGNoneDescriptor, 4250214505);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGNoneDescriptor(Z_Construct_UClass_UFGNoneDescriptor, &UFGNoneDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGNoneDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGNoneDescriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
