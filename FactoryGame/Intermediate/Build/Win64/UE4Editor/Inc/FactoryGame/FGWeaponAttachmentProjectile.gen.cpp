// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGWeaponAttachmentProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWeaponAttachmentProjectile() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponAttachmentProjectile_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponAttachmentProjectile();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponAttachment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGWeaponAttachmentProjectile::StaticRegisterNativesAFGWeaponAttachmentProjectile()
	{
	}
	UClass* Z_Construct_UClass_AFGWeaponAttachmentProjectile_NoRegister()
	{
		return AFGWeaponAttachmentProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AFGWeaponAttachmentProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGWeaponAttachmentProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGWeaponAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeaponAttachmentProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGWeaponAttachmentProjectile.h" },
		{ "ModuleRelativePath", "Public/FGWeaponAttachmentProjectile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGWeaponAttachmentProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGWeaponAttachmentProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGWeaponAttachmentProjectile_Statics::ClassParams = {
		&AFGWeaponAttachmentProjectile::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGWeaponAttachmentProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGWeaponAttachmentProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGWeaponAttachmentProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGWeaponAttachmentProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGWeaponAttachmentProjectile, 2011314151);
	template<> FACTORYGAME_API UClass* StaticClass<AFGWeaponAttachmentProjectile>()
	{
		return AFGWeaponAttachmentProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGWeaponAttachmentProjectile(Z_Construct_UClass_AFGWeaponAttachmentProjectile, &AFGWeaponAttachmentProjectile::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGWeaponAttachmentProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGWeaponAttachmentProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
