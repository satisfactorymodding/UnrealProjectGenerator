// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGRoadConnectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRoadConnectionComponent() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRoadConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRoadConnectionComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConnectionComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGRoadConnectionComponent::StaticRegisterNativesUFGRoadConnectionComponent()
	{
	}
	UClass* Z_Construct_UClass_UFGRoadConnectionComponent_NoRegister()
	{
		return UFGRoadConnectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGRoadConnectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGRoadConnectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGConnectionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRoadConnectionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGRoadConnectionComponent.h" },
		{ "ModuleRelativePath", "Public/FGRoadConnectionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGRoadConnectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGRoadConnectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGRoadConnectionComponent_Statics::ClassParams = {
		&UFGRoadConnectionComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFGRoadConnectionComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGRoadConnectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGRoadConnectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGRoadConnectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGRoadConnectionComponent, 3575062712);
	template<> FACTORYGAME_API UClass* StaticClass<UFGRoadConnectionComponent>()
	{
		return UFGRoadConnectionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGRoadConnectionComponent(Z_Construct_UClass_UFGRoadConnectionComponent, &UFGRoadConnectionComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGRoadConnectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGRoadConnectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
