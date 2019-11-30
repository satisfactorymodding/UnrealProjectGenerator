// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGConveyorPoleHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGConveyorPoleHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorPoleHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorPoleHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPoleHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
// End Cross Module References
	void AFGConveyorPoleHologram::StaticRegisterNativesAFGConveyorPoleHologram()
	{
	}
	UClass* Z_Construct_UClass_AFGConveyorPoleHologram_NoRegister()
	{
		return AFGConveyorPoleHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGConveyorPoleHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnapConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnapConnection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGConveyorPoleHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGPoleHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorPoleHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGConveyorPoleHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorPoleHologram.h" },
		{ "ToolTip", "Hologram for conveyor poles." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorPoleHologram_Statics::NewProp_mSnapConnection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorPoleHologram.h" },
		{ "ToolTip", "The connection conveyors snap to, used when placing a pole automatically." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorPoleHologram_Statics::NewProp_mSnapConnection = { "mSnapConnection", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorPoleHologram, mSnapConnection), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorPoleHologram_Statics::NewProp_mSnapConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorPoleHologram_Statics::NewProp_mSnapConnection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGConveyorPoleHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorPoleHologram_Statics::NewProp_mSnapConnection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGConveyorPoleHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGConveyorPoleHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGConveyorPoleHologram_Statics::ClassParams = {
		&AFGConveyorPoleHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGConveyorPoleHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGConveyorPoleHologram_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGConveyorPoleHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorPoleHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGConveyorPoleHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGConveyorPoleHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGConveyorPoleHologram, 1956969565);
	template<> FACTORYGAME_API UClass* StaticClass<AFGConveyorPoleHologram>()
	{
		return AFGConveyorPoleHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGConveyorPoleHologram(Z_Construct_UClass_AFGConveyorPoleHologram, &AFGConveyorPoleHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGConveyorPoleHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGConveyorPoleHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
