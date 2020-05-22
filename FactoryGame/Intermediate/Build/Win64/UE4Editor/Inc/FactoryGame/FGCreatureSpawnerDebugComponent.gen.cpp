// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Creature/FGCreatureSpawnerDebugComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCreatureSpawnerDebugComponent() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCreatureSpawnerDebugComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCreatureSpawnerDebugComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGCreatureSpawnerDebugComponent::StaticRegisterNativesUFGCreatureSpawnerDebugComponent()
	{
	}
	UClass* Z_Construct_UClass_UFGCreatureSpawnerDebugComponent_NoRegister()
	{
		return UFGCreatureSpawnerDebugComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGCreatureSpawnerDebugComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGCreatureSpawnerDebugComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCreatureSpawnerDebugComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Tags Activation" },
		{ "IncludePath", "Creature/FGCreatureSpawnerDebugComponent.h" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawnerDebugComponent.h" },
		{ "ToolTip", "@todo: Do we maybe want to create a scene proxy for this, so that we can always draw cylinders, even when we ain't clicked (see USphereComponent)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGCreatureSpawnerDebugComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGCreatureSpawnerDebugComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGCreatureSpawnerDebugComponent_Statics::ClassParams = {
		&UFGCreatureSpawnerDebugComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFGCreatureSpawnerDebugComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGCreatureSpawnerDebugComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGCreatureSpawnerDebugComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGCreatureSpawnerDebugComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGCreatureSpawnerDebugComponent, 500278953);
	template<> FACTORYGAME_API UClass* StaticClass<UFGCreatureSpawnerDebugComponent>()
	{
		return UFGCreatureSpawnerDebugComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGCreatureSpawnerDebugComponent(Z_Construct_UClass_UFGCreatureSpawnerDebugComponent, &UFGCreatureSpawnerDebugComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGCreatureSpawnerDebugComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGCreatureSpawnerDebugComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
