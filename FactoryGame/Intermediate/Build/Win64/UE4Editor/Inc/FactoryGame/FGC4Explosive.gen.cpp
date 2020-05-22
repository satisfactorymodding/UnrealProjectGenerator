// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGC4Explosive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGC4Explosive() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGC4Explosive_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGC4Explosive();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGC4Explosive_OnRep_IsDetonated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGC4Explosive_PlayExplosionEffects();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	static FName NAME_AFGC4Explosive_PlayExplosionEffects = FName(TEXT("PlayExplosionEffects"));
	void AFGC4Explosive::PlayExplosionEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGC4Explosive_PlayExplosionEffects),NULL);
	}
	void AFGC4Explosive::StaticRegisterNativesAFGC4Explosive()
	{
		UClass* Class = AFGC4Explosive::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsDetonated", &AFGC4Explosive::execOnRep_IsDetonated },
			{ "PlayExplosionEffects", &AFGC4Explosive::execPlayExplosionEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGC4Explosive_OnRep_IsDetonated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGC4Explosive_OnRep_IsDetonated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGC4Explosive.h" },
		{ "ToolTip", "Called when the server has blown this explosive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGC4Explosive_OnRep_IsDetonated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGC4Explosive, nullptr, "OnRep_IsDetonated", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGC4Explosive_OnRep_IsDetonated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGC4Explosive_OnRep_IsDetonated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGC4Explosive_OnRep_IsDetonated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGC4Explosive_OnRep_IsDetonated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGC4Explosive_PlayExplosionEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGC4Explosive_PlayExplosionEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/FGC4Explosive.h" },
		{ "ToolTip", "Play the sound and particle effect for this explosion" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGC4Explosive_PlayExplosionEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGC4Explosive, nullptr, "PlayExplosionEffects", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGC4Explosive_PlayExplosionEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGC4Explosive_PlayExplosionEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGC4Explosive_PlayExplosionEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGC4Explosive_PlayExplosionEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGC4Explosive_NoRegister()
	{
		return AFGC4Explosive::StaticClass();
	}
	struct Z_Construct_UClass_AFGC4Explosive_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsDetonated_MetaData[];
#endif
		static void NewProp_mIsDetonated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsDetonated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDamageRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDamageRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBaseDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBaseDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGC4Explosive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGC4Explosive_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGC4Explosive_OnRep_IsDetonated, "OnRep_IsDetonated" }, // 2941870645
		{ &Z_Construct_UFunction_AFGC4Explosive_PlayExplosionEffects, "PlayExplosionEffects" }, // 2541432070
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGC4Explosive_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGC4Explosive.h" },
		{ "ModuleRelativePath", "Public/FGC4Explosive.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mIsDetonated_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGC4Explosive.h" },
		{ "ToolTip", "Tells client to blow this shit up" },
	};
#endif
	void Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mIsDetonated_SetBit(void* Obj)
	{
		((AFGC4Explosive*)Obj)->mIsDetonated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mIsDetonated = { "mIsDetonated", "OnRep_IsDetonated", (EPropertyFlags)0x0020080101000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGC4Explosive), &Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mIsDetonated_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mIsDetonated_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mIsDetonated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mDamageType_MetaData[] = {
		{ "Category", "Explosive" },
		{ "ModuleRelativePath", "Public/FGC4Explosive.h" },
		{ "ToolTip", "Damage type used for the radial apply damage" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mDamageType = { "mDamageType", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGC4Explosive, mDamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mDamageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mDamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mDamageRadius_MetaData[] = {
		{ "Category", "Explosive" },
		{ "ModuleRelativePath", "Public/FGC4Explosive.h" },
		{ "ToolTip", "Damage radius used for the radial apply damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mDamageRadius = { "mDamageRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGC4Explosive, mDamageRadius), METADATA_PARAMS(Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mDamageRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mDamageRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mBaseDamage_MetaData[] = {
		{ "Category", "Explosive" },
		{ "ModuleRelativePath", "Public/FGC4Explosive.h" },
		{ "ToolTip", "Base damage used for the radial apply damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mBaseDamage = { "mBaseDamage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGC4Explosive, mBaseDamage), METADATA_PARAMS(Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mBaseDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mBaseDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGC4Explosive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mIsDetonated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mDamageRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGC4Explosive_Statics::NewProp_mBaseDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGC4Explosive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGC4Explosive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGC4Explosive_Statics::ClassParams = {
		&AFGC4Explosive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGC4Explosive_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGC4Explosive_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGC4Explosive_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGC4Explosive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGC4Explosive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGC4Explosive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGC4Explosive, 1092027758);
	template<> FACTORYGAME_API UClass* StaticClass<AFGC4Explosive>()
	{
		return AFGC4Explosive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGC4Explosive(Z_Construct_UClass_AFGC4Explosive, &AFGC4Explosive::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGC4Explosive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGC4Explosive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
