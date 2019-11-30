// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGFluffActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFluffActor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFluffActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFluffActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGFluffActor::StaticRegisterNativesAFGFluffActor()
	{
	}
	UClass* Z_Construct_UClass_AFGFluffActor_NoRegister()
	{
		return AFGFluffActor::StaticClass();
	}
	struct Z_Construct_UClass_AFGFluffActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGFluffActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFluffActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGFluffActor.h" },
		{ "ModuleRelativePath", "Public/FGFluffActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGFluffActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGFluffActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGFluffActor_Statics::ClassParams = {
		&AFGFluffActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGFluffActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGFluffActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGFluffActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGFluffActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGFluffActor, 3491396479);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGFluffActor(Z_Construct_UClass_AFGFluffActor, &AFGFluffActor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGFluffActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGFluffActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
