// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGListViewSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGListViewSlot() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGListViewSlot_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGListViewSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGListViewSlot::StaticRegisterNativesUFGListViewSlot()
	{
	}
	UClass* Z_Construct_UClass_UFGListViewSlot_NoRegister()
	{
		return UFGListViewSlot::StaticClass();
	}
	struct Z_Construct_UClass_UFGListViewSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGListViewSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGListViewSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGListViewSlot.h" },
		{ "ModuleRelativePath", "UI/FGListViewSlot.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The Slot for the UFGListView, contains the widget that is laid out in the list." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGListViewSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGListViewSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGListViewSlot_Statics::ClassParams = {
		&UFGListViewSlot::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGListViewSlot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGListViewSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGListViewSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGListViewSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGListViewSlot, 1007951526);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGListViewSlot(Z_Construct_UClass_UFGListViewSlot, &UFGListViewSlot::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGListViewSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGListViewSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
