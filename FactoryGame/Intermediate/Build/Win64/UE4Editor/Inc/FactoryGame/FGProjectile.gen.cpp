// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGProjectile() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGProjectile_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGProjectile_GetCollisionSphere();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGProjectile_OnBounce();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGProjectile_OnImpact();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGProjectile_OnRep_Exploded();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGProjectile_OnRep_InitialVelocity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGProjectile_PlayAttachEffect();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGProjectile_PlayExplosionEffects();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGProjectile_SetInitialVelocity();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGProjectile_SetTargetLocation();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileData();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	static FName NAME_AFGProjectile_PlayAttachEffect = FName(TEXT("PlayAttachEffect"));
	void AFGProjectile::PlayAttachEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGProjectile_PlayAttachEffect),NULL);
	}
	static FName NAME_AFGProjectile_PlayExplosionEffects = FName(TEXT("PlayExplosionEffects"));
	void AFGProjectile::PlayExplosionEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGProjectile_PlayExplosionEffects),NULL);
	}
	void AFGProjectile::StaticRegisterNativesAFGProjectile()
	{
		UClass* Class = AFGProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCollisionSphere", &AFGProjectile::execGetCollisionSphere },
			{ "GetProjectileTargetLocation", &AFGProjectile::execGetProjectileTargetLocation },
			{ "OnBounce", &AFGProjectile::execOnBounce },
			{ "OnImpact", &AFGProjectile::execOnImpact },
			{ "OnRep_Exploded", &AFGProjectile::execOnRep_Exploded },
			{ "OnRep_InitialVelocity", &AFGProjectile::execOnRep_InitialVelocity },
			{ "SetInitialVelocity", &AFGProjectile::execSetInitialVelocity },
			{ "SetTargetLocation", &AFGProjectile::execSetTargetLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics
	{
		struct FGProjectile_eventGetCollisionSphere_Parms
		{
			USphereComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGProjectile_eventGetCollisionSphere_Parms, ReturnValue), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "Returns the collision sphere" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGProjectile, nullptr, "GetCollisionSphere", sizeof(FGProjectile_eventGetCollisionSphere_Parms), Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGProjectile_GetCollisionSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGProjectile_GetCollisionSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation_Statics
	{
		struct FGProjectile_eventGetProjectileTargetLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGProjectile_eventGetProjectileTargetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "Returns the location we are aiming for ( if any )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGProjectile, nullptr, "GetProjectileTargetLocation", sizeof(FGProjectile_eventGetProjectileTargetLocation_Parms), Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGProjectile_OnBounce_Statics
	{
		struct FGProjectile_eventOnBounce_Parms
		{
			FHitResult hitResult;
			FVector hitVelocity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::NewProp_hitVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::NewProp_hitVelocity = { "hitVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGProjectile_eventOnBounce_Parms, hitVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::NewProp_hitVelocity_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::NewProp_hitVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::NewProp_hitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::NewProp_hitResult = { "hitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGProjectile_eventOnBounce_Parms, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::NewProp_hitResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::NewProp_hitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::NewProp_hitVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::NewProp_hitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "handle bounce" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGProjectile, nullptr, "OnBounce", sizeof(FGProjectile_eventOnBounce_Parms), Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGProjectile_OnBounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGProjectile_OnBounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGProjectile_OnImpact_Statics
	{
		struct FGProjectile_eventOnImpact_Parms
		{
			FHitResult hitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_OnImpact_Statics::NewProp_hitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGProjectile_OnImpact_Statics::NewProp_hitResult = { "hitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGProjectile_eventOnImpact_Parms, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_OnImpact_Statics::NewProp_hitResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_OnImpact_Statics::NewProp_hitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGProjectile_OnImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGProjectile_OnImpact_Statics::NewProp_hitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_OnImpact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "handle hit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGProjectile_OnImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGProjectile, nullptr, "OnImpact", sizeof(FGProjectile_eventOnImpact_Parms), Z_Construct_UFunction_AFGProjectile_OnImpact_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_OnImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_OnImpact_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_OnImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGProjectile_OnImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGProjectile_OnImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGProjectile_OnRep_Exploded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_OnRep_Exploded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "[client] explosion happened" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGProjectile_OnRep_Exploded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGProjectile, nullptr, "OnRep_Exploded", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_OnRep_Exploded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_OnRep_Exploded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGProjectile_OnRep_Exploded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGProjectile_OnRep_Exploded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGProjectile_OnRep_InitialVelocity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_OnRep_InitialVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGProjectile_OnRep_InitialVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGProjectile, nullptr, "OnRep_InitialVelocity", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_OnRep_InitialVelocity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_OnRep_InitialVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGProjectile_OnRep_InitialVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGProjectile_OnRep_InitialVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGProjectile_PlayAttachEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_PlayAttachEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "Called when we attach this actor to something like the world, a factory, a character" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGProjectile_PlayAttachEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGProjectile, nullptr, "PlayAttachEffect", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_PlayAttachEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_PlayAttachEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGProjectile_PlayAttachEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGProjectile_PlayAttachEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGProjectile_PlayExplosionEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_PlayExplosionEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "Function to set up explosion effects in Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGProjectile_PlayExplosionEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGProjectile, nullptr, "PlayExplosionEffects", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_PlayExplosionEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_PlayExplosionEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGProjectile_PlayExplosionEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGProjectile_PlayExplosionEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGProjectile_SetInitialVelocity_Statics
	{
		struct FGProjectile_eventSetInitialVelocity_Parms
		{
			FVector inVelocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGProjectile_SetInitialVelocity_Statics::NewProp_inVelocity = { "inVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGProjectile_eventSetInitialVelocity_Parms, inVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGProjectile_SetInitialVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGProjectile_SetInitialVelocity_Statics::NewProp_inVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_SetInitialVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "Sets the initial velocity so that it can be replicated to clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGProjectile_SetInitialVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGProjectile, nullptr, "SetInitialVelocity", sizeof(FGProjectile_eventSetInitialVelocity_Parms), Z_Construct_UFunction_AFGProjectile_SetInitialVelocity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_SetInitialVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_SetInitialVelocity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_SetInitialVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGProjectile_SetInitialVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGProjectile_SetInitialVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGProjectile_SetTargetLocation_Statics
	{
		struct FGProjectile_eventSetTargetLocation_Parms
		{
			FVector targetLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGProjectile_SetTargetLocation_Statics::NewProp_targetLocation = { "targetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGProjectile_eventSetTargetLocation_Parms, targetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGProjectile_SetTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGProjectile_SetTargetLocation_Statics::NewProp_targetLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGProjectile_SetTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "Returns the location we are aiming for ( if any )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGProjectile_SetTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGProjectile, nullptr, "SetTargetLocation", sizeof(FGProjectile_eventSetTargetLocation_Parms), Z_Construct_UFunction_AFGProjectile_SetTargetLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_SetTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGProjectile_SetTargetLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGProjectile_SetTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGProjectile_SetTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGProjectile_SetTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGProjectile_NoRegister()
	{
		return AFGProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AFGProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedPC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExplodeAtEndOfLife_MetaData[];
#endif
		static void NewProp_mExplodeAtEndOfLife_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mExplodeAtEndOfLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCanTriggerExplodeBySameClass_MetaData[];
#endif
		static void NewProp_mCanTriggerExplodeBySameClass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCanTriggerExplodeBySameClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mProjectileMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCollisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCollisionComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInitialVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mInitialVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasExploded_MetaData[];
#endif
		static void NewProp_mHasExploded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasExploded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProjectileData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mProjectileData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGProjectile_GetCollisionSphere, "GetCollisionSphere" }, // 1254937530
		{ &Z_Construct_UFunction_AFGProjectile_GetProjectileTargetLocation, "GetProjectileTargetLocation" }, // 3429089813
		{ &Z_Construct_UFunction_AFGProjectile_OnBounce, "OnBounce" }, // 4185528348
		{ &Z_Construct_UFunction_AFGProjectile_OnImpact, "OnImpact" }, // 1774887412
		{ &Z_Construct_UFunction_AFGProjectile_OnRep_Exploded, "OnRep_Exploded" }, // 2844100645
		{ &Z_Construct_UFunction_AFGProjectile_OnRep_InitialVelocity, "OnRep_InitialVelocity" }, // 1500101116
		{ &Z_Construct_UFunction_AFGProjectile_PlayAttachEffect, "PlayAttachEffect" }, // 2312410129
		{ &Z_Construct_UFunction_AFGProjectile_PlayExplosionEffects, "PlayExplosionEffects" }, // 2421634861
		{ &Z_Construct_UFunction_AFGProjectile_SetInitialVelocity, "SetInitialVelocity" }, // 3700259968
		{ &Z_Construct_UFunction_AFGProjectile_SetTargetLocation, "SetTargetLocation" }, // 3338419792
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGProjectile.h" },
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCachedPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "Caching the PC so that we can do damage even without a valid weapon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCachedPC = { "mCachedPC", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGProjectile, mCachedPC), Z_Construct_UClass_AFGPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCachedPC_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCachedPC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_mExplodeAtEndOfLife_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "Should the projectile explode when it dies of lifespan?" },
	};
#endif
	void Z_Construct_UClass_AFGProjectile_Statics::NewProp_mExplodeAtEndOfLife_SetBit(void* Obj)
	{
		((AFGProjectile*)Obj)->mExplodeAtEndOfLife = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_mExplodeAtEndOfLife = { "mExplodeAtEndOfLife", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGProjectile), &Z_Construct_UClass_AFGProjectile_Statics::NewProp_mExplodeAtEndOfLife_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mExplodeAtEndOfLife_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mExplodeAtEndOfLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCanTriggerExplodeBySameClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "Indicates if we should explode if we are taking damage from same actor class as ourselves" },
	};
#endif
	void Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCanTriggerExplodeBySameClass_SetBit(void* Obj)
	{
		((AFGProjectile*)Obj)->mCanTriggerExplodeBySameClass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCanTriggerExplodeBySameClass = { "mCanTriggerExplodeBySameClass", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGProjectile), &Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCanTriggerExplodeBySameClass_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCanTriggerExplodeBySameClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCanTriggerExplodeBySameClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_mTargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "Location we are aiming at ( if any )" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_mTargetLocation = { "mTargetLocation", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGProjectile, mTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mTargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_mProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "Projectile movement component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_mProjectileMovement = { "mProjectileMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGProjectile, mProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mProjectileMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCollisionComp_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "Sphere collision component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCollisionComp = { "mCollisionComp", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGProjectile, mCollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCollisionComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCollisionComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_mInitialVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "Used to get the velocity over to clients" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_mInitialVelocity = { "mInitialVelocity", "OnRep_InitialVelocity", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGProjectile, mInitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mInitialVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mInitialVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_mHasExploded_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "did it explode?" },
	};
#endif
	void Z_Construct_UClass_AFGProjectile_Statics::NewProp_mHasExploded_SetBit(void* Obj)
	{
		((AFGProjectile*)Obj)->mHasExploded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_mHasExploded = { "mHasExploded", "OnRep_Exploded", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGProjectile), &Z_Construct_UClass_AFGProjectile_Statics::NewProp_mHasExploded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mHasExploded_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mHasExploded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProjectile_Statics::NewProp_mProjectileData_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/FGProjectile.h" },
		{ "ToolTip", "projectile data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGProjectile_Statics::NewProp_mProjectileData = { "mProjectileData", nullptr, (EPropertyFlags)0x0020080001010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGProjectile, mProjectileData), Z_Construct_UScriptStruct_FProjectileData, METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mProjectileData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::NewProp_mProjectileData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCachedPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_mExplodeAtEndOfLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCanTriggerExplodeBySameClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_mTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_mProjectileMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_mCollisionComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_mInitialVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_mHasExploded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGProjectile_Statics::NewProp_mProjectileData,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGProjectile_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGProjectile, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGProjectile_Statics::ClassParams = {
		&AFGProjectile::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGProjectile_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGProjectile, 2675196893);
	template<> FACTORYGAME_API UClass* StaticClass<AFGProjectile>()
	{
		return AFGProjectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGProjectile(Z_Construct_UClass_AFGProjectile, &AFGProjectile::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
