// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCharacterBase() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepEffectWater();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepEffect();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFootstepEffectSurface();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterBase_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_AdjustDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_CheckIfShouldDestroy();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_Died();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_GetDeathSound();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDamageType_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGHealthComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_GetMesh3P();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_IsRagdolled();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_NotifyOnWeakspotHit();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_OnRep_IsPossessed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_OnRep_IsRagdolled();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVehicle_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_ReceiveDied();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCharacterBase_TraceForGround();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FFootstepEffectWater::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFootstepEffectWater_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootstepEffectWater, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FootstepEffectWater"), sizeof(FFootstepEffectWater), Get_Z_Construct_UScriptStruct_FFootstepEffectWater_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FFootstepEffectWater>()
{
	return FFootstepEffectWater::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFootstepEffectWater(FFootstepEffectWater::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FootstepEffectWater"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFootstepEffectWater
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFootstepEffectWater()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FootstepEffectWater")),new UScriptStruct::TCppStructOps<FFootstepEffectWater>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFootstepEffectWater;
	struct Z_Construct_UScriptStruct_FFootstepEffectWater_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWaterDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinWaterDepth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootstepEffectWater>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The effect we want to play when hitting the surface" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootstepEffectWater, Effect), Z_Construct_UScriptStruct_FFootstepEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::NewProp_Effect_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::NewProp_MinWaterDepth_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "When at this minimum water depth, then use this footstep effect instead" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::NewProp_MinWaterDepth = { "MinWaterDepth", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootstepEffectWater, MinWaterDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::NewProp_MinWaterDepth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::NewProp_MinWaterDepth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::NewProp_MinWaterDepth,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FootstepEffectWater",
		sizeof(FFootstepEffectWater),
		alignof(FFootstepEffectWater),
		Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootstepEffectWater()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFootstepEffectWater_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FootstepEffectWater"), sizeof(FFootstepEffectWater), Get_Z_Construct_UScriptStruct_FFootstepEffectWater_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFootstepEffectWater_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFootstepEffectWater_Hash() { return 3166479586U; }
class UScriptStruct* FFootstepEffectSurface::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFootstepEffectSurface_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootstepEffectSurface, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FootstepEffectSurface"), sizeof(FFootstepEffectSurface), Get_Z_Construct_UScriptStruct_FFootstepEffectSurface_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FFootstepEffectSurface>()
{
	return FFootstepEffectSurface::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFootstepEffectSurface(FFootstepEffectSurface::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FootstepEffectSurface"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFootstepEffectSurface
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFootstepEffectSurface()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FootstepEffectSurface")),new UScriptStruct::TCppStructOps<FFootstepEffectSurface>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFootstepEffectSurface;
	struct Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Surface_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Surface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootstepEffectSurface>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The effect we want to play when hitting the surface" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootstepEffectSurface, Effect), Z_Construct_UScriptStruct_FFootstepEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::NewProp_Effect_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::NewProp_Surface_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "The surface the foot hit" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::NewProp_Surface = { "Surface", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootstepEffectSurface, Surface), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::NewProp_Surface_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::NewProp_Surface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::NewProp_Effect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::NewProp_Surface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FootstepEffectSurface",
		sizeof(FFootstepEffectSurface),
		alignof(FFootstepEffectSurface),
		Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootstepEffectSurface()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFootstepEffectSurface_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FootstepEffectSurface"), sizeof(FFootstepEffectSurface), Get_Z_Construct_UScriptStruct_FFootstepEffectSurface_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFootstepEffectSurface_Hash() { return 4274289462U; }
class UScriptStruct* FFootstepEffect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFootstepEffect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootstepEffect, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FootstepEffect"), sizeof(FFootstepEffect), Get_Z_Construct_UScriptStruct_FFootstepEffect_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FFootstepEffect>()
{
	return FFootstepEffect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFootstepEffect(FFootstepEffect::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FootstepEffect"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFootstepEffect
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFootstepEffect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FootstepEffect")),new UScriptStruct::TCppStructOps<FFootstepEffect>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFootstepEffect;
	struct Z_Construct_UScriptStruct_FFootstepEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundDecal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroundDecal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootstepEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootstepEffect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffect_Statics::NewProp_GroundDecal_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "UNIMPLEMENTED: The decal to place on the ground when walking around" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootstepEffect_Statics::NewProp_GroundDecal = { "GroundDecal", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootstepEffect, GroundDecal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffect_Statics::NewProp_GroundDecal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffect_Statics::NewProp_GroundDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootstepEffect_Statics::NewProp_Particle_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "The particle to use when hitting the ground" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootstepEffect_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootstepEffect, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffect_Statics::NewProp_Particle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffect_Statics::NewProp_Particle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootstepEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffect_Statics::NewProp_GroundDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootstepEffect_Statics::NewProp_Particle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootstepEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FootstepEffect",
		sizeof(FFootstepEffect),
		alignof(FFootstepEffect),
		Z_Construct_UScriptStruct_FFootstepEffect_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootstepEffect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFootstepEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootstepEffect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFootstepEffect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FootstepEffect"), sizeof(FFootstepEffect), Get_Z_Construct_UScriptStruct_FFootstepEffect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFootstepEffect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFootstepEffect_Hash() { return 921259771U; }
	static FName NAME_AFGCharacterBase_CalculateFallDamage = FName(TEXT("CalculateFallDamage"));
	int32 AFGCharacterBase::CalculateFallDamage(float zSpeed) const
	{
		FGCharacterBase_eventCalculateFallDamage_Parms Parms;
		Parms.zSpeed=zSpeed;
		const_cast<AFGCharacterBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFGCharacterBase_CalculateFallDamage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFGCharacterBase_NotifyOnTakeDamage = FName(TEXT("NotifyOnTakeDamage"));
	void AFGCharacterBase::NotifyOnTakeDamage(AActor* damagedActor, float damageAmount, const UDamageType* damageType, AController* instigatedBy, AActor* damageCauser)
	{
		FGCharacterBase_eventNotifyOnTakeDamage_Parms Parms;
		Parms.damagedActor=damagedActor;
		Parms.damageAmount=damageAmount;
		Parms.damageType=damageType;
		Parms.instigatedBy=instigatedBy;
		Parms.damageCauser=damageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AFGCharacterBase_NotifyOnTakeDamage),&Parms);
	}
	static FName NAME_AFGCharacterBase_NotifyOnTakePointDamage = FName(TEXT("NotifyOnTakePointDamage"));
	void AFGCharacterBase::NotifyOnTakePointDamage(AActor* damagedActor, float damage, AController* instigatedBy, FVector hitLocation, UPrimitiveComponent* hitComponent, FName boneName, FVector shotFromDirection, const UDamageType* damageType, AActor* damageCauser)
	{
		FGCharacterBase_eventNotifyOnTakePointDamage_Parms Parms;
		Parms.damagedActor=damagedActor;
		Parms.damage=damage;
		Parms.instigatedBy=instigatedBy;
		Parms.hitLocation=hitLocation;
		Parms.hitComponent=hitComponent;
		Parms.boneName=boneName;
		Parms.shotFromDirection=shotFromDirection;
		Parms.damageType=damageType;
		Parms.damageCauser=damageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AFGCharacterBase_NotifyOnTakePointDamage),&Parms);
	}
	static FName NAME_AFGCharacterBase_NotifyOnTakeRadialDamage = FName(TEXT("NotifyOnTakeRadialDamage"));
	void AFGCharacterBase::NotifyOnTakeRadialDamage(AActor* damagedActor, float damage, AController* instigatedBy, const UDamageType* damageType, AActor* damageCauser)
	{
		FGCharacterBase_eventNotifyOnTakeRadialDamage_Parms Parms;
		Parms.damagedActor=damagedActor;
		Parms.damage=damage;
		Parms.instigatedBy=instigatedBy;
		Parms.damageType=damageType;
		Parms.damageCauser=damageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AFGCharacterBase_NotifyOnTakeRadialDamage),&Parms);
	}
	static FName NAME_AFGCharacterBase_NotifyOnWeakspotHit = FName(TEXT("NotifyOnWeakspotHit"));
	void AFGCharacterBase::NotifyOnWeakspotHit()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGCharacterBase_NotifyOnWeakspotHit),NULL);
	}
	static FName NAME_AFGCharacterBase_OnLocallyPossessedChanged = FName(TEXT("OnLocallyPossessedChanged"));
	void AFGCharacterBase::OnLocallyPossessedChanged(bool isLocallyPossessed)
	{
		FGCharacterBase_eventOnLocallyPossessedChanged_Parms Parms;
		Parms.isLocallyPossessed=isLocallyPossessed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGCharacterBase_OnLocallyPossessedChanged),&Parms);
	}
	static FName NAME_AFGCharacterBase_PlayFootstepEffect = FName(TEXT("PlayFootstepEffect"));
	void AFGCharacterBase::PlayFootstepEffect(int32 footDown, bool playSound)
	{
		FGCharacterBase_eventPlayFootstepEffect_Parms Parms;
		Parms.footDown=footDown;
		Parms.playSound=playSound ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGCharacterBase_PlayFootstepEffect),&Parms);
	}
	static FName NAME_AFGCharacterBase_ReceivedAdjustDamage = FName(TEXT("ReceivedAdjustDamage"));
	int32 AFGCharacterBase::ReceivedAdjustDamage(float damageAmount, const UDamageType* damageType, AController* instigatedBy, AActor* damageCauser)
	{
		FGCharacterBase_eventReceivedAdjustDamage_Parms Parms;
		Parms.damageAmount=damageAmount;
		Parms.damageType=damageType;
		Parms.instigatedBy=instigatedBy;
		Parms.damageCauser=damageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AFGCharacterBase_ReceivedAdjustDamage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFGCharacterBase_ReceiveDied = FName(TEXT("ReceiveDied"));
	void AFGCharacterBase::ReceiveDied()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGCharacterBase_ReceiveDied),NULL);
	}
	void AFGCharacterBase::StaticRegisterNativesAFGCharacterBase()
	{
		UClass* Class = AFGCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustDamage", &AFGCharacterBase::execAdjustDamage },
			{ "CalculateFallDamage", &AFGCharacterBase::execCalculateFallDamage },
			{ "CheckIfShouldDestroy", &AFGCharacterBase::execCheckIfShouldDestroy },
			{ "Died", &AFGCharacterBase::execDied },
			{ "GetDeathSound", &AFGCharacterBase::execGetDeathSound },
			{ "GetFallDamageDamageType", &AFGCharacterBase::execGetFallDamageDamageType },
			{ "GetHealthComponent", &AFGCharacterBase::execGetHealthComponent },
			{ "GetMesh3P", &AFGCharacterBase::execGetMesh3P },
			{ "GetTakeDamageParticle", &AFGCharacterBase::execGetTakeDamageParticle },
			{ "GetTakeDamageSound", &AFGCharacterBase::execGetTakeDamageSound },
			{ "IsAliveAndWell", &AFGCharacterBase::execIsAliveAndWell },
			{ "IsRagdolled", &AFGCharacterBase::execIsRagdolled },
			{ "OnRep_IsPossessed", &AFGCharacterBase::execOnRep_IsPossessed },
			{ "OnRep_IsRagdolled", &AFGCharacterBase::execOnRep_IsRagdolled },
			{ "OnTakeDamage", &AFGCharacterBase::execOnTakeDamage },
			{ "OnTakePointDamage", &AFGCharacterBase::execOnTakePointDamage },
			{ "OnTakeRadialDamage", &AFGCharacterBase::execOnTakeRadialDamage },
			{ "PlayFootstepEffect", &AFGCharacterBase::execPlayFootstepEffect },
			{ "PushedByVehicle", &AFGCharacterBase::execPushedByVehicle },
			{ "RagdollCharacter", &AFGCharacterBase::execRagdollCharacter },
			{ "SetFallDamageOverride", &AFGCharacterBase::execSetFallDamageOverride },
			{ "TraceForGround", &AFGCharacterBase::execTraceForGround },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics
	{
		struct FGCharacterBase_eventAdjustDamage_Parms
		{
			AActor* damagedActor;
			float damageAmount;
			const UDamageType* damageType;
			AController* instigatedBy;
			AActor* damageCauser;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventAdjustDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventAdjustDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventAdjustDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventAdjustDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventAdjustDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventAdjustDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_damageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Bound function to our healthcomponent that cares about when we receive damage, passes it on to other AdjustDamage for BP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "AdjustDamage", sizeof(FGCharacterBase_eventAdjustDamage_Parms), Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_AdjustDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_AdjustDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventCalculateFallDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage_Statics::NewProp_zSpeed = { "zSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventCalculateFallDamage_Parms, zSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage_Statics::NewProp_zSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fall Damage" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Calculate damage we take from a fall" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "CalculateFallDamage", sizeof(FGCharacterBase_eventCalculateFallDamage_Parms), Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_CheckIfShouldDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_CheckIfShouldDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Called regularly after we have been killed, will destroy us eventually" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_CheckIfShouldDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "CheckIfShouldDestroy", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_CheckIfShouldDestroy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_CheckIfShouldDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_CheckIfShouldDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_CheckIfShouldDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_Died_Statics
	{
		struct FGCharacterBase_eventDied_Parms
		{
			AActor* thisActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thisActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_Died_Statics::NewProp_thisActor = { "thisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventDied_Parms, thisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_Died_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_Died_Statics::NewProp_thisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_Died_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Called when we died, need to be UFUNCTION as it's bound as a delegate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_Died_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "Died", sizeof(FGCharacterBase_eventDied_Parms), Z_Construct_UFunction_AFGCharacterBase_Died_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_Died_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_Died_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_Died_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_Died()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_Died_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_GetDeathSound_Statics
	{
		struct FGCharacterBase_eventGetDeathSound_Parms
		{
			UAkAudioEvent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_GetDeathSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventGetDeathSound_Parms, ReturnValue), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_GetDeathSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_GetDeathSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_GetDeathSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Sound played when pawn dies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_GetDeathSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "GetDeathSound", sizeof(FGCharacterBase_eventGetDeathSound_Parms), Z_Construct_UFunction_AFGCharacterBase_GetDeathSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetDeathSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_GetDeathSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetDeathSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_GetDeathSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_GetDeathSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType_Statics
	{
		struct FGCharacterBase_eventGetFallDamageDamageType_Parms
		{
			TSubclassOf<UFGDamageType>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventGetFallDamageDamageType_Parms, ReturnValue), Z_Construct_UClass_UFGDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fall Damage" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Get mFallDamageDamageType" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "GetFallDamageDamageType", sizeof(FGCharacterBase_eventGetFallDamageDamageType_Parms), Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics
	{
		struct FGCharacterBase_eventGetHealthComponent_Parms
		{
			UFGHealthComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventGetHealthComponent_Parms, ReturnValue), Z_Construct_UClass_UFGHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Get our current health component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "GetHealthComponent", sizeof(FGCharacterBase_eventGetHealthComponent_Parms), Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics
	{
		struct FGCharacterBase_eventGetMesh3P_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventGetMesh3P_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Returns Mesh3P subobject *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "GetMesh3P", sizeof(FGCharacterBase_eventGetMesh3P_Parms), Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_GetMesh3P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_GetMesh3P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle_Statics
	{
		struct FGCharacterBase_eventGetTakeDamageParticle_Parms
		{
			UParticleSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventGetTakeDamageParticle_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle_Statics::Function_MetaDataParams[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Get mTakeDamageParticle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "GetTakeDamageParticle", sizeof(FGCharacterBase_eventGetTakeDamageParticle_Parms), Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound_Statics
	{
		struct FGCharacterBase_eventGetTakeDamageSound_Parms
		{
			UAkAudioEvent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventGetTakeDamageSound_Parms, ReturnValue), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Sound played when pawn takes damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "GetTakeDamageSound", sizeof(FGCharacterBase_eventGetTakeDamageSound_Parms), Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell_Statics
	{
		struct FGCharacterBase_eventIsAliveAndWell_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCharacterBase_eventIsAliveAndWell_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCharacterBase_eventIsAliveAndWell_Parms), &Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "@returns true if this character is alive and well, no health components means yes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "IsAliveAndWell", sizeof(FGCharacterBase_eventIsAliveAndWell_Parms), Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_IsRagdolled_Statics
	{
		struct FGCharacterBase_eventIsRagdolled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGCharacterBase_IsRagdolled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCharacterBase_eventIsRagdolled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCharacterBase_IsRagdolled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCharacterBase_eventIsRagdolled_Parms), &Z_Construct_UFunction_AFGCharacterBase_IsRagdolled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_IsRagdolled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_IsRagdolled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_IsRagdolled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "returns true if mesh is ragdolled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_IsRagdolled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "IsRagdolled", sizeof(FGCharacterBase_eventIsRagdolled_Parms), Z_Construct_UFunction_AFGCharacterBase_IsRagdolled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_IsRagdolled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_IsRagdolled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_IsRagdolled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_IsRagdolled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_IsRagdolled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakeDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakeDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakeDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakeDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakeDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::NewProp_damageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "DisplayName", "OnTakeDamage" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "We have taken damage, called after controller has gotten a chance to response to the damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "NotifyOnTakeDamage", sizeof(FGCharacterBase_eventNotifyOnTakeDamage_Parms), Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_shotFromDirection;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_boneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakePointDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakePointDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_shotFromDirection = { "shotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakePointDamage_Parms, shotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakePointDamage_Parms, boneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakePointDamage_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_hitComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_hitLocation = { "hitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakePointDamage_Parms, hitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakePointDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakePointDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakePointDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_shotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_boneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_hitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_hitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "DisplayName", "OnTakePointDamage" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "We have taken damage, called after controller has gotten a chance to response to the damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "NotifyOnTakePointDamage", sizeof(FGCharacterBase_eventNotifyOnTakePointDamage_Parms), Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakeRadialDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakeRadialDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakeRadialDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakeRadialDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventNotifyOnTakeRadialDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "DisplayName", "OnTakeRadialDamage" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "We have taken radial damage, called after controller has gotten a chance to response to the damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "NotifyOnTakeRadialDamage", sizeof(FGCharacterBase_eventNotifyOnTakeRadialDamage_Parms), Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_NotifyOnWeakspotHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_NotifyOnWeakspotHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "DisplayName", "OnWeakspotHit" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "We have taken a weakspot hit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_NotifyOnWeakspotHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "NotifyOnWeakspotHit", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_NotifyOnWeakspotHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_NotifyOnWeakspotHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_NotifyOnWeakspotHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_NotifyOnWeakspotHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged_Statics
	{
		static void NewProp_isLocallyPossessed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocallyPossessed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged_Statics::NewProp_isLocallyPossessed_SetBit(void* Obj)
	{
		((FGCharacterBase_eventOnLocallyPossessedChanged_Parms*)Obj)->isLocallyPossessed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged_Statics::NewProp_isLocallyPossessed = { "isLocallyPossessed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCharacterBase_eventOnLocallyPossessedChanged_Parms), &Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged_Statics::NewProp_isLocallyPossessed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged_Statics::NewProp_isLocallyPossessed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Event called when a locally controlled pawn gets possessed/unpossessed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "OnLocallyPossessedChanged", sizeof(FGCharacterBase_eventOnLocallyPossessedChanged_Parms), Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_OnRep_IsPossessed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_OnRep_IsPossessed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_OnRep_IsPossessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "OnRep_IsPossessed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_OnRep_IsPossessed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnRep_IsPossessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_OnRep_IsPossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_OnRep_IsPossessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_OnRep_IsRagdolled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_OnRep_IsRagdolled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_OnRep_IsRagdolled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "OnRep_IsRagdolled", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_OnRep_IsRagdolled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnRep_IsRagdolled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_OnRep_IsRagdolled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_OnRep_IsRagdolled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics
	{
		struct FGCharacterBase_eventOnTakeDamage_Parms
		{
			AActor* damagedActor;
			float damageAmount;
			const UDamageType* damageType;
			AController* instigatedBy;
			AActor* damageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakeDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakeDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakeDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakeDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakeDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::NewProp_damageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Notify from our health component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "OnTakeDamage", sizeof(FGCharacterBase_eventOnTakeDamage_Parms), Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics
	{
		struct FGCharacterBase_eventOnTakePointDamage_Parms
		{
			AActor* damagedActor;
			float damage;
			AController* instigatedBy;
			FVector hitLocation;
			UPrimitiveComponent* hitComponent;
			FName boneName;
			FVector shotFromDirection;
			const UDamageType* damageType;
			AActor* damageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_shotFromDirection;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_boneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakePointDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakePointDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_shotFromDirection = { "shotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakePointDamage_Parms, shotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakePointDamage_Parms, boneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakePointDamage_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_hitComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_hitLocation = { "hitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakePointDamage_Parms, hitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakePointDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakePointDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakePointDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_shotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_boneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_hitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_hitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Notify from our health component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "OnTakePointDamage", sizeof(FGCharacterBase_eventOnTakePointDamage_Parms), Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics
	{
		struct FGCharacterBase_eventOnTakeRadialDamage_Parms
		{
			AActor* damagedActor;
			float damage;
			const UDamageType* damageType;
			FVector hitLocation;
			FHitResult hitInfo;
			AController* instigatedBy;
			AActor* damageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakeRadialDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakeRadialDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_hitInfo = { "hitInfo", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakeRadialDamage_Parms, hitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_hitLocation = { "hitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakeRadialDamage_Parms, hitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakeRadialDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakeRadialDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_damagedActor = { "damagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventOnTakeRadialDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_hitInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_hitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Notify from our health component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "OnTakeRadialDamage", sizeof(FGCharacterBase_eventOnTakeRadialDamage_Parms), Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics
	{
		static void NewProp_playSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playSound;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_footDown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::NewProp_playSound_SetBit(void* Obj)
	{
		((FGCharacterBase_eventPlayFootstepEffect_Parms*)Obj)->playSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::NewProp_playSound = { "playSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCharacterBase_eventPlayFootstepEffect_Parms), &Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::NewProp_playSound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::NewProp_footDown = { "footDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventPlayFootstepEffect_Parms, footDown), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::NewProp_playSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::NewProp_footDown,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Plays the footstep effect of this character, default is: Audio, Particle and Decal\n\n@param footDown - the index specified in UFGAnimNotify_FootDown" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "PlayFootstepEffect", sizeof(FGCharacterBase_eventPlayFootstepEffect_Parms), Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle_Statics
	{
		struct FGCharacterBase_eventPushedByVehicle_Parms
		{
			AFGVehicle* vehicle;
			FVector pushVelocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pushVelocity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_vehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle_Statics::NewProp_pushVelocity = { "pushVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventPushedByVehicle_Parms, pushVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle_Statics::NewProp_vehicle = { "vehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventPushedByVehicle_Parms, vehicle), Z_Construct_UClass_AFGVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle_Statics::NewProp_pushVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle_Statics::NewProp_vehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Player has collided with a vehicle and has received a push. This may be better as a general case function instead of specifically being for vehicles but it is what it is for now." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "PushedByVehicle", sizeof(FGCharacterBase_eventPushedByVehicle_Parms), Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter_Statics
	{
		struct FGCharacterBase_eventRagdollCharacter_Parms
		{
			bool newRagdoll;
		};
		static void NewProp_newRagdoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newRagdoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter_Statics::NewProp_newRagdoll_SetBit(void* Obj)
	{
		((FGCharacterBase_eventRagdollCharacter_Parms*)Obj)->newRagdoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter_Statics::NewProp_newRagdoll = { "newRagdoll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCharacterBase_eventRagdollCharacter_Parms), &Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter_Statics::NewProp_newRagdoll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter_Statics::NewProp_newRagdoll,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "if newRagdoll is true this function will ragdoll the player\n@Note: ONLY does something if called from the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "RagdollCharacter", sizeof(FGCharacterBase_eventRagdollCharacter_Parms), Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventReceivedAdjustDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventReceivedAdjustDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventReceivedAdjustDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventReceivedAdjustDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventReceivedAdjustDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::NewProp_damageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "DisplayName", "AdjustDamage" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Called whenever we receive damage and gives us a chance to adjust it\nSERVER ONLY\n\n@param damageAmount - how much damage we receive\n@param damageType - what damage type the damage is that we receive\n@param instigatedBy - who instigated the damage (Controller)\n@param damageCauser - the actor who damaged us\n@return the adjusted damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "ReceivedAdjustDamage", sizeof(FGCharacterBase_eventReceivedAdjustDamage_Parms), Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_ReceiveDied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_ReceiveDied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "DisplayName", "Died" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Blueprint version of when we died" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_ReceiveDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "ReceiveDied", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_ReceiveDied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_ReceiveDied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_ReceiveDied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_ReceiveDied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride_Statics
	{
		struct FGCharacterBase_eventSetFallDamageOverride_Parms
		{
			UCurveFloat* fallDamageCurveOverride;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fallDamageCurveOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride_Statics::NewProp_fallDamageCurveOverride = { "fallDamageCurveOverride", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventSetFallDamageOverride_Parms, fallDamageCurveOverride), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride_Statics::NewProp_fallDamageCurveOverride,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fall Damage" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Assign override to fall damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "SetFallDamageOverride", sizeof(FGCharacterBase_eventSetFallDamageOverride_Parms), Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics
	{
		struct FGCharacterBase_eventTraceForGround_Parms
		{
			FVector traceStart;
			FVector traceEnd;
			FHitResult out_hitResult;
			float out_waterDepth;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_out_waterDepth;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_hitResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_traceEnd;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_traceStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCharacterBase_eventTraceForGround_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCharacterBase_eventTraceForGround_Parms), &Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::NewProp_out_waterDepth = { "out_waterDepth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventTraceForGround_Parms, out_waterDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::NewProp_out_hitResult = { "out_hitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventTraceForGround_Parms, out_hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::NewProp_traceEnd = { "traceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventTraceForGround_Parms, traceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::NewProp_traceStart = { "traceStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCharacterBase_eventTraceForGround_Parms, traceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::NewProp_out_waterDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::NewProp_out_hitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::NewProp_traceEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::NewProp_traceStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Traces for the ground, and checks also if we need to go through water to find the ground\n\n@param traceStart - from where the trace should start\n@param traceEnd - where the trace should end end\n@param out_hitResult - the hit on the ground\n@param out_waterDepth - if > 0, then it's how deep the water was before we hit the ground\n\n@return true if we hit something" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCharacterBase, nullptr, "TraceForGround", sizeof(FGCharacterBase_eventTraceForGround_Parms), Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCharacterBase_TraceForGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCharacterBase_TraceForGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGCharacterBase_NoRegister()
	{
		return AFGCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AFGCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsPossessed_MetaData[];
#endif
		static void NewProp_mIsPossessed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsPossessed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNormalDamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mNormalDamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWeakspotBoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mWeakspotBoneNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mWeakspotBoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWeakspotMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mWeakspotMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIgnoredDamageTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mIgnoredDamageTypes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mIgnoredDamageTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mApplyDamageMomentum_MetaData[];
#endif
		static void NewProp_mApplyDamageMomentum_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mApplyDamageMomentum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSyncBodyMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSyncBodyMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRagdollMeshPhysicsBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mRagdollMeshPhysicsBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRagdollMeshLocBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mRagdollMeshLocBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRagdollMeshVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mRagdollMeshVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRagdollMeshLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mRagdollMeshLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsRagdolled_MetaData[];
#endif
		static void NewProp_mIsRagdolled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsRagdolled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxDistanceMovedToGetUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxDistanceMovedToGetUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTimeToGetUpFromRagdoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mTimeToGetUpFromRagdoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinVehiclePushVelocityForRagdoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMinVehiclePushVelocityForRagdoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTakeDamageParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTakeDamageParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLandEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mLandEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDeathSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDeathSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTakeDamageSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTakeDamageSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEnemyTargetDesirability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mEnemyTargetDesirability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDeathRemoveCheckTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDeathRemoveCheckTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxDeathStayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxDeathStayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFallDamageDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mFallDamageDamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFallDamageCurveOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFallDamageCurveOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFallDamageCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFallDamageCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFootstepDecalLifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mFootstepDecalLifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFootstepDecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFootstepDecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxFootstepDecalSpawnDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxFootstepDecalSpawnDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxFootstepParticleSpawnDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxFootstepParticleSpawnDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFootstepAudioEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mFootstepAudioEvents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFootstepAudioEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFootstepEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mFootstepEffect;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFootstepEffect_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultFootstepEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDefaultFootstepEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFeetNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mFeetNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mFeetNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGCharacterBase_AdjustDamage, "AdjustDamage" }, // 2101810353
		{ &Z_Construct_UFunction_AFGCharacterBase_CalculateFallDamage, "CalculateFallDamage" }, // 1648961133
		{ &Z_Construct_UFunction_AFGCharacterBase_CheckIfShouldDestroy, "CheckIfShouldDestroy" }, // 2393818956
		{ &Z_Construct_UFunction_AFGCharacterBase_Died, "Died" }, // 194777375
		{ &Z_Construct_UFunction_AFGCharacterBase_GetDeathSound, "GetDeathSound" }, // 1093040815
		{ &Z_Construct_UFunction_AFGCharacterBase_GetFallDamageDamageType, "GetFallDamageDamageType" }, // 92306497
		{ &Z_Construct_UFunction_AFGCharacterBase_GetHealthComponent, "GetHealthComponent" }, // 1511488404
		{ &Z_Construct_UFunction_AFGCharacterBase_GetMesh3P, "GetMesh3P" }, // 1674282058
		{ &Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageParticle, "GetTakeDamageParticle" }, // 567363216
		{ &Z_Construct_UFunction_AFGCharacterBase_GetTakeDamageSound, "GetTakeDamageSound" }, // 2255539029
		{ &Z_Construct_UFunction_AFGCharacterBase_IsAliveAndWell, "IsAliveAndWell" }, // 1931417096
		{ &Z_Construct_UFunction_AFGCharacterBase_IsRagdolled, "IsRagdolled" }, // 2028143044
		{ &Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeDamage, "NotifyOnTakeDamage" }, // 2379460201
		{ &Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakePointDamage, "NotifyOnTakePointDamage" }, // 3196504411
		{ &Z_Construct_UFunction_AFGCharacterBase_NotifyOnTakeRadialDamage, "NotifyOnTakeRadialDamage" }, // 4079173964
		{ &Z_Construct_UFunction_AFGCharacterBase_NotifyOnWeakspotHit, "NotifyOnWeakspotHit" }, // 3040358174
		{ &Z_Construct_UFunction_AFGCharacterBase_OnLocallyPossessedChanged, "OnLocallyPossessedChanged" }, // 4146564184
		{ &Z_Construct_UFunction_AFGCharacterBase_OnRep_IsPossessed, "OnRep_IsPossessed" }, // 1830910655
		{ &Z_Construct_UFunction_AFGCharacterBase_OnRep_IsRagdolled, "OnRep_IsRagdolled" }, // 1871322297
		{ &Z_Construct_UFunction_AFGCharacterBase_OnTakeDamage, "OnTakeDamage" }, // 462514942
		{ &Z_Construct_UFunction_AFGCharacterBase_OnTakePointDamage, "OnTakePointDamage" }, // 205488500
		{ &Z_Construct_UFunction_AFGCharacterBase_OnTakeRadialDamage, "OnTakeRadialDamage" }, // 2685442438
		{ &Z_Construct_UFunction_AFGCharacterBase_PlayFootstepEffect, "PlayFootstepEffect" }, // 3490536680
		{ &Z_Construct_UFunction_AFGCharacterBase_PushedByVehicle, "PushedByVehicle" }, // 2808565081
		{ &Z_Construct_UFunction_AFGCharacterBase_RagdollCharacter, "RagdollCharacter" }, // 1570540185
		{ &Z_Construct_UFunction_AFGCharacterBase_ReceivedAdjustDamage, "ReceivedAdjustDamage" }, // 2451102827
		{ &Z_Construct_UFunction_AFGCharacterBase_ReceiveDied, "ReceiveDied" }, // 136006429
		{ &Z_Construct_UFunction_AFGCharacterBase_SetFallDamageOverride, "SetFallDamageOverride" }, // 4260730259
		{ &Z_Construct_UFunction_AFGCharacterBase_TraceForGround, "TraceForGround" }, // 1042787457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FGCharacterBase.h" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsPossessed_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Used to let client know when a pawn gets possessed/unpossessed" },
	};
#endif
	void Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsPossessed_SetBit(void* Obj)
	{
		((AFGCharacterBase*)Obj)->mIsPossessed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsPossessed = { "mIsPossessed", "OnRep_IsPossessed", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGCharacterBase), &Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsPossessed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsPossessed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsPossessed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mNormalDamageMultiplier_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Multiplier for this creature and normal damage taken" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mNormalDamageMultiplier = { "mNormalDamageMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mNormalDamageMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mNormalDamageMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mNormalDamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mWeakspotBoneNames_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Bone names that result in a weakspot hit" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mWeakspotBoneNames = { "mWeakspotBoneNames", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mWeakspotBoneNames), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mWeakspotBoneNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mWeakspotBoneNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mWeakspotBoneNames_Inner = { "mWeakspotBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mWeakspotMultiplier_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "How much more damage should be dealt when taking a weakspot hit" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mWeakspotMultiplier = { "mWeakspotMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mWeakspotMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mWeakspotMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mWeakspotMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIgnoredDamageTypes_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Damage types that this character is immune to" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIgnoredDamageTypes = { "mIgnoredDamageTypes", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mIgnoredDamageTypes), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIgnoredDamageTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIgnoredDamageTypes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIgnoredDamageTypes_Inner = { "mIgnoredDamageTypes", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mApplyDamageMomentum_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Should the auto momentum be applied when taking damage?" },
	};
#endif
	void Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mApplyDamageMomentum_SetBit(void* Obj)
	{
		((AFGCharacterBase*)Obj)->mApplyDamageMomentum = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mApplyDamageMomentum = { "mApplyDamageMomentum", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGCharacterBase), &Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mApplyDamageMomentum_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mApplyDamageMomentum_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mApplyDamageMomentum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mSyncBodyMaxDistance_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "The maximum sync error distance between the current body location\nand the synced location before we teleport the ragdoll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mSyncBodyMaxDistance = { "mSyncBodyMaxDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mSyncBodyMaxDistance), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mSyncBodyMaxDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mSyncBodyMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshPhysicsBoneName_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Name of the bone we take physics velocity from" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshPhysicsBoneName = { "mRagdollMeshPhysicsBoneName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mRagdollMeshPhysicsBoneName), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshPhysicsBoneName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshPhysicsBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshLocBoneName_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Name of the bone we take mesh location from" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshLocBoneName = { "mRagdollMeshLocBoneName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mRagdollMeshLocBoneName), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshLocBoneName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshLocBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshVelocity = { "mRagdollMeshVelocity", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mRagdollMeshVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshLoc = { "mRagdollMeshLoc", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mRagdollMeshLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshLoc_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsRagdolled_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "true if ragdolled" },
	};
#endif
	void Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsRagdolled_SetBit(void* Obj)
	{
		((AFGCharacterBase*)Obj)->mIsRagdolled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsRagdolled = { "mIsRagdolled", "OnRep_IsRagdolled", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGCharacterBase), &Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsRagdolled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsRagdolled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsRagdolled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxDistanceMovedToGetUp_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "the furthest distance we can move during ragdoll before we are considered still enough to stand up from ragdoll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxDistanceMovedToGetUp = { "mMaxDistanceMovedToGetUp", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mMaxDistanceMovedToGetUp), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxDistanceMovedToGetUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxDistanceMovedToGetUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTimeToGetUpFromRagdoll_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "time in seconds until character gets up from ragdoll if alive" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTimeToGetUpFromRagdoll = { "mTimeToGetUpFromRagdoll", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mTimeToGetUpFromRagdoll), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTimeToGetUpFromRagdoll_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTimeToGetUpFromRagdoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMinVehiclePushVelocityForRagdoll_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Min push velocity required to start ragdoll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMinVehiclePushVelocityForRagdoll = { "mMinVehiclePushVelocityForRagdoll", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mMinVehiclePushVelocityForRagdoll), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMinVehiclePushVelocityForRagdoll_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMinVehiclePushVelocityForRagdoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTakeDamageParticle_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Particle for when pawn takes damage" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTakeDamageParticle = { "mTakeDamageParticle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mTakeDamageParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTakeDamageParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTakeDamageParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mLandEvent_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Event posted when landing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mLandEvent = { "mLandEvent", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mLandEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mLandEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mLandEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDeathSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Sound played when pawn dies" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDeathSound = { "mDeathSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mDeathSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDeathSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDeathSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTakeDamageSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Sound played when pawn takes damage" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTakeDamageSound = { "mTakeDamageSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mTakeDamageSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTakeDamageSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTakeDamageSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mEnemyTargetDesirability_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Multiplier for targeting desirability" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mEnemyTargetDesirability = { "mEnemyTargetDesirability", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mEnemyTargetDesirability), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mEnemyTargetDesirability_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mEnemyTargetDesirability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDeathRemoveCheckTime_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "How often will we check if the pawn is in sight of any player" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDeathRemoveCheckTime = { "mDeathRemoveCheckTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mDeathRemoveCheckTime), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDeathRemoveCheckTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDeathRemoveCheckTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxDeathStayTime_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "The maximum time after death (in seconds) the pawn will stay in the world, so it will be removed even if it's in sight after this time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxDeathStayTime = { "mMaxDeathStayTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mMaxDeathStayTime), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxDeathStayTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxDeathStayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageDamageType_MetaData[] = {
		{ "Category", "Fall Damage" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "@todo: This should not be specified for each pawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageDamageType = { "mFallDamageDamageType", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mFallDamageDamageType), Z_Construct_UClass_UFGDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageDamageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageDamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageCurveOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Overrides the default fall damage curve, utilized by Equipment" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageCurveOverride = { "mFallDamageCurveOverride", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mFallDamageCurveOverride), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageCurveOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageCurveOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageCurve_MetaData[] = {
		{ "Category", "FallDamage" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "How much damage to take falling with a given velocity" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageCurve = { "mFallDamageCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mFallDamageCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mHealthComponent_MetaData[] = {
		{ "Category", "FGCharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Keeps track of our current health" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mHealthComponent = { "mHealthComponent", nullptr, (EPropertyFlags)0x00200800010a003d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mHealthComponent), Z_Construct_UClass_UFGHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mHealthComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mHealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepDecalLifetime_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Lifetime of footstep decals" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepDecalLifetime = { "mFootstepDecalLifetime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mFootstepDecalLifetime), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepDecalLifetime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepDecalLifetime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepDecalSize_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Size of footstep decals" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepDecalSize = { "mFootstepDecalSize", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mFootstepDecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepDecalSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepDecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxFootstepDecalSpawnDistance_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Maximum distance we want to spawn footsteps decals at" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxFootstepDecalSpawnDistance = { "mMaxFootstepDecalSpawnDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mMaxFootstepDecalSpawnDistance), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxFootstepDecalSpawnDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxFootstepDecalSpawnDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxFootstepParticleSpawnDistance_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Maximum distance we want to play footstep particles at" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxFootstepParticleSpawnDistance = { "mMaxFootstepParticleSpawnDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mMaxFootstepParticleSpawnDistance), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxFootstepParticleSpawnDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxFootstepParticleSpawnDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepAudioEvents_MetaData[] = {
		{ "Category", "Footstep|Audio" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Audio event to play (where index in array is the feet index passed from AnimNotify_FootDown)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepAudioEvents = { "mFootstepAudioEvents", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mFootstepAudioEvents), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepAudioEvents_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepAudioEvents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepAudioEvents_Inner = { "mFootstepAudioEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepEffect_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Effects to play when a foot hits the ground" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepEffect = { "mFootstepEffect", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mFootstepEffect), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepEffect_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepEffect_Inner = { "mFootstepEffect", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFootstepEffectSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDefaultFootstepEffect_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "Default effects to play when a foot hits the ground when the material doesn't exist in mFootstepEffects" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDefaultFootstepEffect = { "mDefaultFootstepEffect", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mDefaultFootstepEffect), Z_Construct_UScriptStruct_FFootstepEffect, METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDefaultFootstepEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDefaultFootstepEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFeetNames_MetaData[] = {
		{ "Category", "Footstep" },
		{ "ModuleRelativePath", "Public/FGCharacterBase.h" },
		{ "ToolTip", "When receiving FootDown on index 2, then we will trace from mFeetNames[2] socket for ground" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFeetNames = { "mFeetNames", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCharacterBase, mFeetNames), METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFeetNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFeetNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFeetNames_Inner = { "mFeetNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsPossessed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mNormalDamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mWeakspotBoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mWeakspotBoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mWeakspotMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIgnoredDamageTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIgnoredDamageTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mApplyDamageMomentum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mSyncBodyMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshPhysicsBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshLocBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mRagdollMeshLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mIsRagdolled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxDistanceMovedToGetUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTimeToGetUpFromRagdoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMinVehiclePushVelocityForRagdoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTakeDamageParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mLandEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDeathSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mTakeDamageSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mEnemyTargetDesirability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDeathRemoveCheckTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxDeathStayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageCurveOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFallDamageCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mHealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepDecalLifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepDecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxFootstepDecalSpawnDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mMaxFootstepParticleSpawnDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepAudioEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepAudioEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFootstepEffect_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mDefaultFootstepEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFeetNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCharacterBase_Statics::NewProp_mFeetNames_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGCharacterBase, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGCharacterBase_Statics::ClassParams = {
		&AFGCharacterBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGCharacterBase_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGCharacterBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGCharacterBase, 3591823876);
	template<> FACTORYGAME_API UClass* StaticClass<AFGCharacterBase>()
	{
		return AFGCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGCharacterBase(Z_Construct_UClass_AFGCharacterBase, &AFGCharacterBase::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
