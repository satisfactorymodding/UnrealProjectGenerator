// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGRecipeProducerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRecipeProducerInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipeProducerInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipeProducerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGRecipeProducerInterface::StaticRegisterNativesUFGRecipeProducerInterface()
	{
	}
	UClass* Z_Construct_UClass_UFGRecipeProducerInterface_NoRegister()
	{
		return UFGRecipeProducerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGRecipeProducerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGRecipeProducerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRecipeProducerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGRecipeProducerInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGRecipeProducerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGRecipeProducerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGRecipeProducerInterface_Statics::ClassParams = {
		&UFGRecipeProducerInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGRecipeProducerInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGRecipeProducerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGRecipeProducerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGRecipeProducerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGRecipeProducerInterface, 3075823899);
	template<> FACTORYGAME_API UClass* StaticClass<UFGRecipeProducerInterface>()
	{
		return UFGRecipeProducerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGRecipeProducerInterface(Z_Construct_UClass_UFGRecipeProducerInterface, &UFGRecipeProducerInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGRecipeProducerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGRecipeProducerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
