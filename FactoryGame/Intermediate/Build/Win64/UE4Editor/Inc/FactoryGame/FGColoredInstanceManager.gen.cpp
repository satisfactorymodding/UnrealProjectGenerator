// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGColoredInstanceManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGColoredInstanceManager() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColoredInstanceManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColoredInstanceManager();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
	void UFGColoredInstanceManager::StaticRegisterNativesUFGColoredInstanceManager()
	{
	}
	UClass* Z_Construct_UClass_UFGColoredInstanceManager_NoRegister()
	{
		return UFGColoredInstanceManager::StaticClass();
	}
	struct Z_Construct_UClass_UFGColoredInstanceManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInstanceComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInstanceComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGColoredInstanceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGColoredInstanceManager_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "FactoryGame" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGColoredInstanceManager.h" },
		{ "ModuleRelativePath", "FGColoredInstanceManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGColoredInstanceManager_Statics::NewProp_mInstanceComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGColoredInstanceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGColoredInstanceManager_Statics::NewProp_mInstanceComponents = { UE4CodeGen_Private::EPropertyClass::Object, "mInstanceComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, CPP_ARRAY_DIM(mInstanceComponents, UFGColoredInstanceManager), nullptr, STRUCT_OFFSET(UFGColoredInstanceManager, mInstanceComponents), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGColoredInstanceManager_Statics::NewProp_mInstanceComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGColoredInstanceManager_Statics::NewProp_mInstanceComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGColoredInstanceManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGColoredInstanceManager_Statics::NewProp_mInstanceComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGColoredInstanceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGColoredInstanceManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGColoredInstanceManager_Statics::ClassParams = {
		&UFGColoredInstanceManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UFGColoredInstanceManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGColoredInstanceManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGColoredInstanceManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGColoredInstanceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGColoredInstanceManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGColoredInstanceManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGColoredInstanceManager, 3352879233);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGColoredInstanceManager(Z_Construct_UClass_UFGColoredInstanceManager, &UFGColoredInstanceManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGColoredInstanceManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGColoredInstanceManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
