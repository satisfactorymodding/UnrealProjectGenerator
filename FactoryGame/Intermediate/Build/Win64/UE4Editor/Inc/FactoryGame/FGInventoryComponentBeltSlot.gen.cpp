// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGInventoryComponentBeltSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGInventoryComponentBeltSlot() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponentBeltSlot_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponentBeltSlot();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGInventoryComponentBeltSlot::StaticRegisterNativesUFGInventoryComponentBeltSlot()
	{
	}
	UClass* Z_Construct_UClass_UFGInventoryComponentBeltSlot_NoRegister()
	{
		return UFGInventoryComponentBeltSlot::StaticClass();
	}
	struct Z_Construct_UClass_UFGInventoryComponentBeltSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGInventoryComponentBeltSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGInventoryComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponentBeltSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGInventoryComponentBeltSlot.h" },
		{ "ModuleRelativePath", "Public/FGInventoryComponentBeltSlot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGInventoryComponentBeltSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGInventoryComponentBeltSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGInventoryComponentBeltSlot_Statics::ClassParams = {
		&UFGInventoryComponentBeltSlot::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponentBeltSlot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponentBeltSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGInventoryComponentBeltSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGInventoryComponentBeltSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGInventoryComponentBeltSlot, 1566268876);
	template<> FACTORYGAME_API UClass* StaticClass<UFGInventoryComponentBeltSlot>()
	{
		return UFGInventoryComponentBeltSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGInventoryComponentBeltSlot(Z_Construct_UClass_UFGInventoryComponentBeltSlot, &UFGInventoryComponentBeltSlot::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGInventoryComponentBeltSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGInventoryComponentBeltSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
