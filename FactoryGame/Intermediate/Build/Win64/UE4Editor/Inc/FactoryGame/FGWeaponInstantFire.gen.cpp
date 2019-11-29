// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Equipment/FGWeaponInstantFire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWeaponInstantFire() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponInstantFire_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponInstantFire();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeapon();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyMiss();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	static FName NAME_AFGWeaponInstantFire_Server_NotifyHit = FName(TEXT("Server_NotifyHit"));
	void AFGWeaponInstantFire::Server_NotifyHit(FHitResult const& hitResult)
	{
		FGWeaponInstantFire_eventServer_NotifyHit_Parms Parms;
		Parms.hitResult=hitResult;
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponInstantFire_Server_NotifyHit),&Parms);
	}
	static FName NAME_AFGWeaponInstantFire_Server_NotifyMiss = FName(TEXT("Server_NotifyMiss"));
	void AFGWeaponInstantFire::Server_NotifyMiss()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponInstantFire_Server_NotifyMiss),NULL);
	}
	void AFGWeaponInstantFire::StaticRegisterNativesAFGWeaponInstantFire()
	{
		UClass* Class = AFGWeaponInstantFire::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_NotifyHit", &AFGWeaponInstantFire::execServer_NotifyHit },
			{ "Server_NotifyMiss", &AFGWeaponInstantFire::execServer_NotifyMiss },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics::NewProp_hitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics::NewProp_hitResult = { "hitResult", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWeaponInstantFire_eventServer_NotifyHit_Parms, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics::NewProp_hitResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics::NewProp_hitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics::NewProp_hitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGWeaponInstantFire.h" },
		{ "ToolTip", "server notified of hit from client to verify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponInstantFire, nullptr, "Server_NotifyHit", sizeof(FGWeaponInstantFire_eventServer_NotifyHit_Parms), Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyMiss_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyMiss_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGWeaponInstantFire.h" },
		{ "ToolTip", "server notified of miss to show trail FX" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyMiss_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponInstantFire, nullptr, "Server_NotifyMiss", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyMiss_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyMiss_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyMiss()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyMiss_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGWeaponInstantFire_NoRegister()
	{
		return AFGWeaponInstantFire::StaticClass();
	}
	struct Z_Construct_UClass_AFGWeaponInstantFire_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHitParticleEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHitParticleEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWeaponTraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mWeaponTraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInstantHitDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mInstantHitDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGWeaponInstantFire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGWeaponInstantFire_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyHit, "Server_NotifyHit" }, // 2912919753
		{ &Z_Construct_UFunction_AFGWeaponInstantFire_Server_NotifyMiss, "Server_NotifyMiss" }, // 3014090964
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeaponInstantFire_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGWeaponInstantFire.h" },
		{ "ModuleRelativePath", "Equipment/FGWeaponInstantFire.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mHitParticleEffect_MetaData[] = {
		{ "Category", "FGWeaponInstantFire" },
		{ "ModuleRelativePath", "Equipment/FGWeaponInstantFire.h" },
		{ "ToolTip", "The particle to use when hitting the ground" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mHitParticleEffect = { "mHitParticleEffect", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWeaponInstantFire, mHitParticleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mHitParticleEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mHitParticleEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mWeaponTraceLength_MetaData[] = {
		{ "Category", "FGWeaponInstantFire" },
		{ "ModuleRelativePath", "Equipment/FGWeaponInstantFire.h" },
		{ "ToolTip", "How far we should trace for the weapon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mWeaponTraceLength = { "mWeaponTraceLength", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWeaponInstantFire, mWeaponTraceLength), METADATA_PARAMS(Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mWeaponTraceLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mWeaponTraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mInstantHitDamage_MetaData[] = {
		{ "Category", "FGWeaponInstantFire" },
		{ "ModuleRelativePath", "Equipment/FGWeaponInstantFire.h" },
		{ "ToolTip", "Instant hit damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mInstantHitDamage = { "mInstantHitDamage", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWeaponInstantFire, mInstantHitDamage), METADATA_PARAMS(Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mInstantHitDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mInstantHitDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGWeaponInstantFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mHitParticleEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mWeaponTraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeaponInstantFire_Statics::NewProp_mInstantHitDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGWeaponInstantFire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGWeaponInstantFire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGWeaponInstantFire_Statics::ClassParams = {
		&AFGWeaponInstantFire::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGWeaponInstantFire_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGWeaponInstantFire_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGWeaponInstantFire_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGWeaponInstantFire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGWeaponInstantFire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGWeaponInstantFire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGWeaponInstantFire, 4114667476);
	template<> FACTORYGAME_API UClass* StaticClass<AFGWeaponInstantFire>()
	{
		return AFGWeaponInstantFire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGWeaponInstantFire(Z_Construct_UClass_AFGWeaponInstantFire, &AFGWeaponInstantFire::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGWeaponInstantFire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGWeaponInstantFire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
