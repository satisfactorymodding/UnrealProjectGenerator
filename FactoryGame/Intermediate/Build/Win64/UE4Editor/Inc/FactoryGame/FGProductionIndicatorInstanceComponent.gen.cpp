// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGProductionIndicatorInstanceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGProductionIndicatorInstanceComponent() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGProductionIndicatorInstanceComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGProductionIndicatorInstanceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGProductionIndicatorInstanceComponent::StaticRegisterNativesUFGProductionIndicatorInstanceComponent()
	{
	}
	UClass* Z_Construct_UClass_UFGProductionIndicatorInstanceComponent_NoRegister()
	{
		return UFGProductionIndicatorInstanceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGProductionIndicatorInstanceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGProductionIndicatorInstanceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGProductionIndicatorInstanceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "FactoryGame" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "FGProductionIndicatorInstanceComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGProductionIndicatorInstanceComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGProductionIndicatorInstanceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGProductionIndicatorInstanceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGProductionIndicatorInstanceComponent_Statics::ClassParams = {
		&UFGProductionIndicatorInstanceComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A4u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGProductionIndicatorInstanceComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGProductionIndicatorInstanceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGProductionIndicatorInstanceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGProductionIndicatorInstanceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGProductionIndicatorInstanceComponent, 2752951606);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGProductionIndicatorInstanceComponent(Z_Construct_UClass_UFGProductionIndicatorInstanceComponent, &UFGProductionIndicatorInstanceComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGProductionIndicatorInstanceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGProductionIndicatorInstanceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
