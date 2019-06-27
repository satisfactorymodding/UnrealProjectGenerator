// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGProceduralStaticMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGProceduralStaticMeshActor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGProceduralStaticMeshActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGProceduralStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGProceduralStaticMeshActor::StaticRegisterNativesAFGProceduralStaticMeshActor()
	{
	}
	UClass* Z_Construct_UClass_AFGProceduralStaticMeshActor_NoRegister()
	{
		return AFGProceduralStaticMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AFGProceduralStaticMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGProceduralStaticMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGProceduralStaticMeshActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "FGProceduralStaticMeshActor.h" },
		{ "ModuleRelativePath", "FGProceduralStaticMeshActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGProceduralStaticMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGProceduralStaticMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGProceduralStaticMeshActor_Statics::ClassParams = {
		&AFGProceduralStaticMeshActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGProceduralStaticMeshActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGProceduralStaticMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGProceduralStaticMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGProceduralStaticMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGProceduralStaticMeshActor, 2073219846);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGProceduralStaticMeshActor(Z_Construct_UClass_AFGProceduralStaticMeshActor, &AFGProceduralStaticMeshActor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGProceduralStaticMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGProceduralStaticMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
