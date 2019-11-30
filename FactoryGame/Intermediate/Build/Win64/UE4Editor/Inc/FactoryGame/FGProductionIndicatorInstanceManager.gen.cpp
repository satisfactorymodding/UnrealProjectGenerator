// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGProductionIndicatorInstanceManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGProductionIndicatorInstanceManager() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGProductionIndicatorInstanceManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGProductionIndicatorInstanceManager();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
	void UFGProductionIndicatorInstanceManager::StaticRegisterNativesUFGProductionIndicatorInstanceManager()
	{
	}
	UClass* Z_Construct_UClass_UFGProductionIndicatorInstanceManager_NoRegister()
	{
		return UFGProductionIndicatorInstanceManager::StaticClass();
	}
	struct Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics
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
	UObject* (*const Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "FactoryGame" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGProductionIndicatorInstanceManager.h" },
		{ "ModuleRelativePath", "Public/FGProductionIndicatorInstanceManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::NewProp_mInstanceComponents_MetaData[] = {
		{ "ArraySizeEnum", "/Script/FactoryGame.EProductionStatus" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGProductionIndicatorInstanceManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::NewProp_mInstanceComponents = { UE4CodeGen_Private::EPropertyClass::Object, "mInstanceComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, CPP_ARRAY_DIM(mInstanceComponents, UFGProductionIndicatorInstanceManager), nullptr, STRUCT_OFFSET(UFGProductionIndicatorInstanceManager, mInstanceComponents), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::NewProp_mInstanceComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::NewProp_mInstanceComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::NewProp_mInstanceComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGProductionIndicatorInstanceManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::ClassParams = {
		&UFGProductionIndicatorInstanceManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGProductionIndicatorInstanceManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGProductionIndicatorInstanceManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGProductionIndicatorInstanceManager, 1794412920);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGProductionIndicatorInstanceManager(Z_Construct_UClass_UFGProductionIndicatorInstanceManager, &UFGProductionIndicatorInstanceManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGProductionIndicatorInstanceManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGProductionIndicatorInstanceManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
