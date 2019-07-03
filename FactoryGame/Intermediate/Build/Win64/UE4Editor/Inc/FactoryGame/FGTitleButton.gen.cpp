// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGTitleButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGTitleButton() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGTitleButton_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGTitleButton();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGButtonWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGTitleButton::StaticRegisterNativesUFGTitleButton()
	{
	}
	UClass* Z_Construct_UClass_UFGTitleButton_NoRegister()
	{
		return UFGTitleButton::StaticClass();
	}
	struct Z_Construct_UClass_UFGTitleButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGTitleButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGTitleButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGTitleButton.h" },
		{ "ModuleRelativePath", "UI/FGTitleButton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGTitleButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGTitleButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGTitleButton_Statics::ClassParams = {
		&UFGTitleButton::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGTitleButton_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGTitleButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGTitleButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGTitleButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGTitleButton, 2783513632);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGTitleButton(Z_Construct_UClass_UFGTitleButton, &UFGTitleButton::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGTitleButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGTitleButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
