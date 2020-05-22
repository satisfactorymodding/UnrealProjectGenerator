// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGColoredInstanceMeshProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGColoredInstanceMeshProxy() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColoredInstanceMeshProxy();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGColoredInstanceMeshProxy::StaticRegisterNativesUFGColoredInstanceMeshProxy()
	{
	}
	UClass* Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister()
	{
		return UFGColoredInstanceMeshProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBlockInstancing_MetaData[];
#endif
		static void NewProp_mBlockInstancing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mBlockInstancing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCanBecolored_MetaData[];
#endif
		static void NewProp_mCanBecolored_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCanBecolored;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "FactoryGame" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "FGColoredInstanceMeshProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGColoredInstanceMeshProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mBlockInstancing_MetaData[] = {
		{ "Category", "FGColoredInstanceMeshProxy" },
		{ "ModuleRelativePath", "Public/FGColoredInstanceMeshProxy.h" },
	};
#endif
	void Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mBlockInstancing_SetBit(void* Obj)
	{
		((UFGColoredInstanceMeshProxy*)Obj)->mBlockInstancing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mBlockInstancing = { "mBlockInstancing", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGColoredInstanceMeshProxy), &Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mBlockInstancing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mBlockInstancing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mBlockInstancing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mCanBecolored_MetaData[] = {
		{ "Category", "FGColoredInstanceMeshProxy" },
		{ "ModuleRelativePath", "Public/FGColoredInstanceMeshProxy.h" },
	};
#endif
	void Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mCanBecolored_SetBit(void* Obj)
	{
		((UFGColoredInstanceMeshProxy*)Obj)->mCanBecolored = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mCanBecolored = { "mCanBecolored", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGColoredInstanceMeshProxy), &Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mCanBecolored_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mCanBecolored_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mCanBecolored_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mBlockInstancing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::NewProp_mCanBecolored,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGColoredInstanceMeshProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::ClassParams = {
		&UFGColoredInstanceMeshProxy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGColoredInstanceMeshProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGColoredInstanceMeshProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGColoredInstanceMeshProxy, 666006741);
	template<> FACTORYGAME_API UClass* StaticClass<UFGColoredInstanceMeshProxy>()
	{
		return UFGColoredInstanceMeshProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGColoredInstanceMeshProxy(Z_Construct_UClass_UFGColoredInstanceMeshProxy, &UFGColoredInstanceMeshProxy::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGColoredInstanceMeshProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGColoredInstanceMeshProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
