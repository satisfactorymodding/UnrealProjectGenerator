// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/AI/FGAttackRanged.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAttackRanged() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttackRanged_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttackRanged();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttack();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEnemy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGProjectile_NoRegister();
// End Cross Module References
	static FName NAME_UFGAttackRanged_SpawnProjectile = FName(TEXT("SpawnProjectile"));
	void UFGAttackRanged::SpawnProjectile(AActor* targetActor, AFGEnemy* sourceActor)
	{
		FGAttackRanged_eventSpawnProjectile_Parms Parms;
		Parms.targetActor=targetActor;
		Parms.sourceActor=sourceActor;
		ProcessEvent(FindFunctionChecked(NAME_UFGAttackRanged_SpawnProjectile),&Parms);
	}
	void UFGAttackRanged::StaticRegisterNativesUFGAttackRanged()
	{
		UClass* Class = UFGAttackRanged::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnProjectile", &UFGAttackRanged::execSpawnProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sourceActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile_Statics::NewProp_sourceActor = { UE4CodeGen_Private::EPropertyClass::Object, "sourceActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGAttackRanged_eventSpawnProjectile_Parms, sourceActor), Z_Construct_UClass_AFGEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile_Statics::NewProp_targetActor = { UE4CodeGen_Private::EPropertyClass::Object, "targetActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGAttackRanged_eventSpawnProjectile_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile_Statics::NewProp_sourceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile_Statics::NewProp_targetActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Enemy|Attack" },
		{ "ModuleRelativePath", "AI/FGAttackRanged.h" },
		{ "ToolTip", "Has the actual logic for spawning projectiles ( so that we can override in blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAttackRanged, "SpawnProjectile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGAttackRanged_eventSpawnProjectile_Parms), Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGAttackRanged_NoRegister()
	{
		return UFGAttackRanged::StaticClass();
	}
	struct Z_Construct_UClass_UFGAttackRanged_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAttackRanged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGAttackRanged_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGAttackRanged_SpawnProjectile, "SpawnProjectile" }, // 3017849574
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttackRanged_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AI/FGAttackRanged.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AI/FGAttackRanged.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttackRanged_Statics::NewProp_mProjectileClass_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "AI/FGAttackRanged.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGAttackRanged_Statics::NewProp_mProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "mProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(UFGAttackRanged, mProjectileClass), Z_Construct_UClass_AFGProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGAttackRanged_Statics::NewProp_mProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAttackRanged_Statics::NewProp_mProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGAttackRanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAttackRanged_Statics::NewProp_mProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAttackRanged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAttackRanged>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAttackRanged_Statics::ClassParams = {
		&UFGAttackRanged::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGAttackRanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGAttackRanged_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGAttackRanged_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGAttackRanged_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAttackRanged()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAttackRanged_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAttackRanged, 4114408048);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAttackRanged(Z_Construct_UClass_UFGAttackRanged, &UFGAttackRanged::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGAttackRanged"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAttackRanged);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
