// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGProductionIndicatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGProductionIndicatorComponent() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGProductionIndicatorComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGProductionIndicatorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	void UFGProductionIndicatorComponent::StaticRegisterNativesUFGProductionIndicatorComponent()
	{
	}
	UClass* Z_Construct_UClass_UFGProductionIndicatorComponent_NoRegister()
	{
		return UFGProductionIndicatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGProductionIndicatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIndicatorMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mIndicatorMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "FactoryGame" },
		{ "IncludePath", "FGProductionIndicatorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGProductionIndicatorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::NewProp_mIndicatorMaterial_MetaData[] = {
		{ "ModuleRelativePath", "FGProductionIndicatorComponent.h" },
		{ "ToolTip", "Dynamic instance of the material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::NewProp_mIndicatorMaterial = { "mIndicatorMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGProductionIndicatorComponent, mIndicatorMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::NewProp_mIndicatorMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::NewProp_mIndicatorMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::NewProp_mIndicatorMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGProductionIndicatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::ClassParams = {
		&UFGProductionIndicatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGProductionIndicatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGProductionIndicatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGProductionIndicatorComponent, 2050468508);
	template<> FACTORYGAME_API UClass* StaticClass<UFGProductionIndicatorComponent>()
	{
		return UFGProductionIndicatorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGProductionIndicatorComponent(Z_Construct_UClass_UFGProductionIndicatorComponent, &UFGProductionIndicatorComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGProductionIndicatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGProductionIndicatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
