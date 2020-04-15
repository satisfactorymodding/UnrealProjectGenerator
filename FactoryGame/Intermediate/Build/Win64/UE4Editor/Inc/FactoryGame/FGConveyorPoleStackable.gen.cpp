// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGConveyorPoleStackable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGConveyorPoleStackable() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorPoleStackable_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorPoleStackable();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildablePole();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGConveyorPoleStackable::StaticRegisterNativesAFGConveyorPoleStackable()
	{
	}
	UClass* Z_Construct_UClass_AFGConveyorPoleStackable_NoRegister()
	{
		return AFGConveyorPoleStackable::StaticClass();
	}
	struct Z_Construct_UClass_AFGConveyorPoleStackable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGConveyorPoleStackable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildablePole,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorPoleStackable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGConveyorPoleStackable.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGConveyorPoleStackable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGConveyorPoleStackable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGConveyorPoleStackable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGConveyorPoleStackable_Statics::ClassParams = {
		&AFGConveyorPoleStackable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGConveyorPoleStackable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorPoleStackable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGConveyorPoleStackable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGConveyorPoleStackable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGConveyorPoleStackable, 1446624117);
	template<> FACTORYGAME_API UClass* StaticClass<AFGConveyorPoleStackable>()
	{
		return AFGConveyorPoleStackable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGConveyorPoleStackable(Z_Construct_UClass_AFGConveyorPoleStackable, &AFGConveyorPoleStackable::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGConveyorPoleStackable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGConveyorPoleStackable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
