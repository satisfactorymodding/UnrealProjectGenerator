// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGWorldCreationInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWorldCreationInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWorldCreationInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWorldCreationInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGWorldCreationInterface::StaticRegisterNativesUFGWorldCreationInterface()
	{
	}
	UClass* Z_Construct_UClass_UFGWorldCreationInterface_NoRegister()
	{
		return UFGWorldCreationInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGWorldCreationInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGWorldCreationInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWorldCreationInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGWorldCreationInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGWorldCreationInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGWorldCreationInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGWorldCreationInterface_Statics::ClassParams = {
		&UFGWorldCreationInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGWorldCreationInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGWorldCreationInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGWorldCreationInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGWorldCreationInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGWorldCreationInterface, 1943379721);
	template<> FACTORYGAME_API UClass* StaticClass<UFGWorldCreationInterface>()
	{
		return UFGWorldCreationInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGWorldCreationInterface(Z_Construct_UClass_UFGWorldCreationInterface, &UFGWorldCreationInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGWorldCreationInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGWorldCreationInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
