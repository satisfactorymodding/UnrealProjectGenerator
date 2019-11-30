// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Equipment/FGWeaponProjectileFire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWeaponProjectileFire() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDamageType_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGProjectile_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponProjectileFire_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponProjectileFire();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeapon();
// End Cross Module References
class UScriptStruct* FProjectileData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FProjectileData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ProjectileData"), sizeof(FProjectileData), Get_Z_Construct_UScriptStruct_FProjectileData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FProjectileData>()
{
	return FProjectileData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProjectileData(FProjectileData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ProjectileData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFProjectileData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFProjectileData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProjectileData")),new UScriptStruct::TCppStructOps<FProjectileData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFProjectileData;
	struct Z_Construct_UScriptStruct_FProjectileData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeExplode_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeExplode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodeAtEndOfLife_MetaData[];
#endif
		static void NewProp_ExplodeAtEndOfLife_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExplodeAtEndOfLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanTriggerExplodeBySameClass_MetaData[];
#endif
		static void NewProp_CanTriggerExplodeBySameClass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanTriggerExplodeBySameClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldExplodeOnImpact_MetaData[];
#endif
		static void NewProp_ShouldExplodeOnImpact_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldExplodeOnImpact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImpactDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExplosionDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileStickSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileStickSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileLifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileLifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectileData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_DamageTypeExplode_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ToolTip", "type of damage used for detonation" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_DamageTypeExplode = { "DamageTypeExplode", nullptr, (EPropertyFlags)0x0014000001010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileData, DamageTypeExplode), Z_Construct_UClass_UFGDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_DamageTypeExplode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_DamageTypeExplode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ToolTip", "type of damage used for impact damage" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000001010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileData, DamageType), Z_Construct_UClass_UFGDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplodeAtEndOfLife_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ToolTip", "Should the projectile explode when it dies of lifespan?" },
	};
#endif
	void Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplodeAtEndOfLife_SetBit(void* Obj)
	{
		((FProjectileData*)Obj)->ExplodeAtEndOfLife = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplodeAtEndOfLife = { "ExplodeAtEndOfLife", nullptr, (EPropertyFlags)0x0010000001010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProjectileData), &Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplodeAtEndOfLife_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplodeAtEndOfLife_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplodeAtEndOfLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_CanTriggerExplodeBySameClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ToolTip", "Indicates if we should explode if we are taking damage from same actor class as ourselves" },
	};
#endif
	void Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_CanTriggerExplodeBySameClass_SetBit(void* Obj)
	{
		((FProjectileData*)Obj)->CanTriggerExplodeBySameClass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_CanTriggerExplodeBySameClass = { "CanTriggerExplodeBySameClass", nullptr, (EPropertyFlags)0x0010000001010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProjectileData), &Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_CanTriggerExplodeBySameClass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_CanTriggerExplodeBySameClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_CanTriggerExplodeBySameClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ShouldExplodeOnImpact_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ToolTip", "If we impact something, should this projectile explode so that it deals radius damage?" },
	};
#endif
	void Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ShouldExplodeOnImpact_SetBit(void* Obj)
	{
		((FProjectileData*)Obj)->ShouldExplodeOnImpact = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ShouldExplodeOnImpact = { "ShouldExplodeOnImpact", nullptr, (EPropertyFlags)0x0010000001010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProjectileData), &Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ShouldExplodeOnImpact_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ShouldExplodeOnImpact_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ShouldExplodeOnImpact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ImpactDamage_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ToolTip", "Damage dealt to actor that get hit or impacted by this projectile" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ImpactDamage = { "ImpactDamage", nullptr, (EPropertyFlags)0x0010000001010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileData, ImpactDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ImpactDamage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ImpactDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ToolTip", "radius of damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0010000001010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileData, ExplosionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplosionRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplosionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ToolTip", "damage at impact point" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplosionDamage = { "ExplosionDamage", nullptr, (EPropertyFlags)0x0010000001010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileData, ExplosionDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplosionDamage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplosionDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileStickSpan_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ToolTip", "How long the projectile will live after it has gotten stuck to something" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileStickSpan = { "ProjectileStickSpan", nullptr, (EPropertyFlags)0x0010000001010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileData, ProjectileStickSpan), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileStickSpan_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileStickSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileLifeSpan_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ToolTip", "life time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileLifeSpan = { "ProjectileLifeSpan", nullptr, (EPropertyFlags)0x0010000001010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileData, ProjectileLifeSpan), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileLifeSpan_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileLifeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ToolTip", "projectile class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000001010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProjectileData, ProjectileClass), Z_Construct_UClass_AFGProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_DamageTypeExplode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplodeAtEndOfLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_CanTriggerExplodeBySameClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ShouldExplodeOnImpact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ImpactDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplosionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ExplosionDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileStickSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileLifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileData_Statics::NewProp_ProjectileClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ProjectileData",
		sizeof(FProjectileData),
		alignof(FProjectileData),
		Z_Construct_UScriptStruct_FProjectileData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProjectileData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProjectileData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProjectileData"), sizeof(FProjectileData), Get_Z_Construct_UScriptStruct_FProjectileData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProjectileData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProjectileData_Hash() { return 2590313576U; }
	void AFGWeaponProjectileFire::StaticRegisterNativesAFGWeaponProjectileFire()
	{
	}
	UClass* Z_Construct_UClass_AFGWeaponProjectileFire_NoRegister()
	{
		return AFGWeaponProjectileFire::StaticClass();
	}
	struct Z_Construct_UClass_AFGWeaponProjectileFire_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProjectileData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mProjectileData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGWeaponProjectileFire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeaponProjectileFire_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ToolTip", "Weapon that fires client side projectiles." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeaponProjectileFire_Statics::NewProp_mProjectileData_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Equipment/FGWeaponProjectileFire.h" },
		{ "ToolTip", "weapon config" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGWeaponProjectileFire_Statics::NewProp_mProjectileData = { "mProjectileData", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWeaponProjectileFire, mProjectileData), Z_Construct_UScriptStruct_FProjectileData, METADATA_PARAMS(Z_Construct_UClass_AFGWeaponProjectileFire_Statics::NewProp_mProjectileData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeaponProjectileFire_Statics::NewProp_mProjectileData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGWeaponProjectileFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeaponProjectileFire_Statics::NewProp_mProjectileData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGWeaponProjectileFire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGWeaponProjectileFire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGWeaponProjectileFire_Statics::ClassParams = {
		&AFGWeaponProjectileFire::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGWeaponProjectileFire_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGWeaponProjectileFire_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGWeaponProjectileFire_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGWeaponProjectileFire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGWeaponProjectileFire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGWeaponProjectileFire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGWeaponProjectileFire, 2649348448);
	template<> FACTORYGAME_API UClass* StaticClass<AFGWeaponProjectileFire>()
	{
		return AFGWeaponProjectileFire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGWeaponProjectileFire(Z_Construct_UClass_AFGWeaponProjectileFire, &AFGWeaponProjectileFire::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGWeaponProjectileFire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGWeaponProjectileFire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
