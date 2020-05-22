// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGDamageOverTimeVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDamageOverTimeVolume() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDamageOverTimeVolume_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDamageOverTimeVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDotComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSharedPostProcessSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();
// End Cross Module References
	void AFGDamageOverTimeVolume::StaticRegisterNativesAFGDamageOverTimeVolume()
	{
	}
	UClass* Z_Construct_UClass_AFGDamageOverTimeVolume_NoRegister()
	{
		return AFGDamageOverTimeVolume::StaticClass();
	}
	struct Z_Construct_UClass_AFGDamageOverTimeVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDotComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDotComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mPostProcessSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobile Physics Cooking Collision Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "FGDamageOverTimeVolume.h" },
		{ "ModuleRelativePath", "Public/FGDamageOverTimeVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::NewProp_mDotComponent_MetaData[] = {
		{ "Category", "Damage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGDamageOverTimeVolume.h" },
		{ "ToolTip", "The component that will do the damage to actors" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::NewProp_mDotComponent = { "mDotComponent", nullptr, (EPropertyFlags)0x00200800000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGDamageOverTimeVolume, mDotComponent), Z_Construct_UClass_UFGDotComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::NewProp_mDotComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::NewProp_mDotComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::NewProp_mPostProcessSettings_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ModuleRelativePath", "Public/FGDamageOverTimeVolume.h" },
		{ "ToolTip", "Some damage over time volumes will want a post process effect attached to it" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::NewProp_mPostProcessSettings = { "mPostProcessSettings", nullptr, (EPropertyFlags)0x0024080000000801, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGDamageOverTimeVolume, mPostProcessSettings), Z_Construct_UClass_UFGSharedPostProcessSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::NewProp_mPostProcessSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::NewProp_mPostProcessSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::NewProp_mDotComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::NewProp_mPostProcessSettings,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister, (int32)VTABLE_OFFSET(AFGDamageOverTimeVolume, IInterface_PostProcessVolume), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGDamageOverTimeVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::ClassParams = {
		&AFGDamageOverTimeVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGDamageOverTimeVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGDamageOverTimeVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGDamageOverTimeVolume, 1722887852);
	template<> FACTORYGAME_API UClass* StaticClass<AFGDamageOverTimeVolume>()
	{
		return AFGDamageOverTimeVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGDamageOverTimeVolume(Z_Construct_UClass_AFGDamageOverTimeVolume, &AFGDamageOverTimeVolume::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGDamageOverTimeVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGDamageOverTimeVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
