// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGGameViewportClient.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGameViewportClient() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameViewportClient_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGGameViewportClient::StaticRegisterNativesUFGGameViewportClient()
	{
	}
	UClass* Z_Construct_UClass_UFGGameViewportClient_NoRegister()
	{
		return UFGGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UFGGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGGameViewportClient.h" },
		{ "ModuleRelativePath", "FGGameViewportClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGGameViewportClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGGameViewportClient_Statics::ClassParams = {
		&UFGGameViewportClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFGGameViewportClient_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGGameViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGGameViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGGameViewportClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGGameViewportClient, 2724027613);
	template<> FACTORYGAME_API UClass* StaticClass<UFGGameViewportClient>()
	{
		return UFGGameViewportClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGGameViewportClient(Z_Construct_UClass_UFGGameViewportClient, &UFGGameViewportClient::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGGameViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGGameViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
