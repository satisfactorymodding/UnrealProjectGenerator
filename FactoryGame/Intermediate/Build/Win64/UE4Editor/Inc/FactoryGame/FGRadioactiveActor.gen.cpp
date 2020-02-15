// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGRadioactiveActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRadioactiveActor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRadioactiveActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRadioactiveActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGRadioactiveActor::StaticRegisterNativesAFGRadioactiveActor()
	{
	}
	UClass* Z_Construct_UClass_AFGRadioactiveActor_NoRegister()
	{
		return AFGRadioactiveActor::StaticClass();
	}
	struct Z_Construct_UClass_AFGRadioactiveActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRadioactiveDecay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRadioactiveDecay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRadioactiveActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRadioactiveActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGRadioactiveActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGRadioactiveActor.h" },
		{ "ToolTip", "An actor that is radioactive." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRadioactiveActor_Statics::NewProp_mRadioactiveDecay_MetaData[] = {
		{ "Category", "Radioactivity" },
		{ "ModuleRelativePath", "Public/FGRadioactiveActor.h" },
		{ "ToolTip", "How much radiation this item gives out in the number of nucleus that decays per second.\n0 means no radiation and 1 is 10^15 (1 quadrillion) decays/s.\nGood values are in the range 0 to 1." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGRadioactiveActor_Statics::NewProp_mRadioactiveDecay = { "mRadioactiveDecay", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRadioactiveActor, mRadioactiveDecay), METADATA_PARAMS(Z_Construct_UClass_AFGRadioactiveActor_Statics::NewProp_mRadioactiveDecay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRadioactiveActor_Statics::NewProp_mRadioactiveDecay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRadioactiveActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRadioactiveActor_Statics::NewProp_mRadioactiveDecay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRadioactiveActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRadioactiveActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRadioactiveActor_Statics::ClassParams = {
		&AFGRadioactiveActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGRadioactiveActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGRadioactiveActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGRadioactiveActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRadioactiveActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRadioactiveActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRadioactiveActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRadioactiveActor, 1360522574);
	template<> FACTORYGAME_API UClass* StaticClass<AFGRadioactiveActor>()
	{
		return AFGRadioactiveActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRadioactiveActor(Z_Construct_UClass_AFGRadioactiveActor, &AFGRadioactiveActor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRadioactiveActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRadioactiveActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
