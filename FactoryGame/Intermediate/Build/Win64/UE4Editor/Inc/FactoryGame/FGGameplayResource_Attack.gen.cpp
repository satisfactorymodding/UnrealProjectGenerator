// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Creature/Enemy/FGGameplayResource_Attack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGameplayResource_Attack() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGameplayTaskResource_Attack_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGameplayTaskResource_Attack();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGameplayTaskResource_Attack::StaticRegisterNativesUFGameplayTaskResource_Attack()
	{
	}
	UClass* Z_Construct_UClass_UFGameplayTaskResource_Attack_NoRegister()
	{
		return UFGameplayTaskResource_Attack::StaticClass();
	}
	struct Z_Construct_UClass_UFGameplayTaskResource_Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGameplayTaskResource_Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTaskResource,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGameplayTaskResource_Attack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Creature/Enemy/FGGameplayResource_Attack.h" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayResource_Attack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGameplayTaskResource_Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGameplayTaskResource_Attack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGameplayTaskResource_Attack_Statics::ClassParams = {
		&UFGameplayTaskResource_Attack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A4u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGameplayTaskResource_Attack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGameplayTaskResource_Attack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGameplayTaskResource_Attack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGameplayTaskResource_Attack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGameplayTaskResource_Attack, 1273917842);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGameplayTaskResource_Attack(Z_Construct_UClass_UFGameplayTaskResource_Attack, &UFGameplayTaskResource_Attack::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGameplayTaskResource_Attack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGameplayTaskResource_Attack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
