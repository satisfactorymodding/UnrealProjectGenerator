// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGResourceNodeGeyser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGResourceNodeGeyser() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNodeGeyser_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNodeGeyser();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNode();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGResourceNodeGeyser::StaticRegisterNativesAFGResourceNodeGeyser()
	{
	}
	UClass* Z_Construct_UClass_AFGResourceNodeGeyser_NoRegister()
	{
		return AFGResourceNodeGeyser::StaticClass();
	}
	struct Z_Construct_UClass_AFGResourceNodeGeyser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGResourceNodeGeyser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGResourceNode,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceNodeGeyser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGResourceNodeGeyser.h" },
		{ "ModuleRelativePath", "FGResourceNodeGeyser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGResourceNodeGeyser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGResourceNodeGeyser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGResourceNodeGeyser_Statics::ClassParams = {
		&AFGResourceNodeGeyser::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGResourceNodeGeyser_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGResourceNodeGeyser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGResourceNodeGeyser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGResourceNodeGeyser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGResourceNodeGeyser, 977616477);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGResourceNodeGeyser(Z_Construct_UClass_AFGResourceNodeGeyser, &AFGResourceNodeGeyser::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGResourceNodeGeyser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGResourceNodeGeyser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
