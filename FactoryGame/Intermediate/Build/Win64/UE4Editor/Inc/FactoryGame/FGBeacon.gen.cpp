// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGBeacon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBeacon() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBeacon_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBeacon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGBeacon::StaticRegisterNativesAFGBeacon()
	{
	}
	UClass* Z_Construct_UClass_AFGBeacon_NoRegister()
	{
		return AFGBeacon::StaticClass();
	}
	struct Z_Construct_UClass_AFGBeacon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBeacon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBeacon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGBeacon.h" },
		{ "ModuleRelativePath", "Public/FGBeacon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBeacon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBeacon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBeacon_Statics::ClassParams = {
		&AFGBeacon::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBeacon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBeacon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBeacon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBeacon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBeacon, 241621191);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBeacon(Z_Construct_UClass_AFGBeacon, &AFGBeacon::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBeacon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBeacon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
