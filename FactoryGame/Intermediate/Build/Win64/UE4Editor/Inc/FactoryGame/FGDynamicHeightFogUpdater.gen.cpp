// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGDynamicHeightFogUpdater.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDynamicHeightFogUpdater() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDynamicHeightFogUpdater_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDynamicHeightFogUpdater();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	void UFGDynamicHeightFogUpdater::StaticRegisterNativesUFGDynamicHeightFogUpdater()
	{
	}
	UClass* Z_Construct_UClass_UFGDynamicHeightFogUpdater_NoRegister()
	{
		return UFGDynamicHeightFogUpdater::StaticClass();
	}
	struct Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActiveWorlds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mActiveWorlds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mActiveWorlds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGDynamicHeightFogUpdater.h" },
		{ "ModuleRelativePath", "Public/FGDynamicHeightFogUpdater.h" },
		{ "ToolTip", "Exists both in EditorEngine and GameEngine, encapsulates the interpolation ExponentialHeightFog\n@todo: Should be renamed to something else, as it does more than update height fog" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::NewProp_mActiveWorlds_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGDynamicHeightFogUpdater.h" },
		{ "ToolTip", "The worlds we want to affect" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::NewProp_mActiveWorlds = { "mActiveWorlds", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDynamicHeightFogUpdater, mActiveWorlds), METADATA_PARAMS(Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::NewProp_mActiveWorlds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::NewProp_mActiveWorlds_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::NewProp_mActiveWorlds_Inner = { "mActiveWorlds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::NewProp_mActiveWorlds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::NewProp_mActiveWorlds_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGDynamicHeightFogUpdater>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::ClassParams = {
		&UFGDynamicHeightFogUpdater::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGDynamicHeightFogUpdater()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGDynamicHeightFogUpdater_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGDynamicHeightFogUpdater, 3336572646);
	template<> FACTORYGAME_API UClass* StaticClass<UFGDynamicHeightFogUpdater>()
	{
		return UFGDynamicHeightFogUpdater::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGDynamicHeightFogUpdater(Z_Construct_UClass_UFGDynamicHeightFogUpdater, &UFGDynamicHeightFogUpdater::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGDynamicHeightFogUpdater"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGDynamicHeightFogUpdater);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
