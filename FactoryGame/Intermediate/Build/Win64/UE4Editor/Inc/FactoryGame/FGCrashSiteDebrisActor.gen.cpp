// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGCrashSiteDebrisActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCrashSiteDebrisActor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCrashSiteDebrisActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCrashSiteDebrisActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister();
// End Cross Module References
	void AFGCrashSiteDebrisActor::StaticRegisterNativesAFGCrashSiteDebrisActor()
	{
	}
	UClass* Z_Construct_UClass_AFGCrashSiteDebrisActor_NoRegister()
	{
		return AFGCrashSiteDebrisActor::StaticClass();
	}
	struct Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGCrashSiteDebrisActor.h" },
		{ "ModuleRelativePath", "FGCrashSiteDebrisActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::NewProp_mMesh_MetaData[] = {
		{ "Category", "FGCrashSiteDebrisActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGCrashSiteDebrisActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::NewProp_mMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000090009, 1, nullptr, STRUCT_OFFSET(AFGCrashSiteDebrisActor, mMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::NewProp_mMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::NewProp_mMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::NewProp_mMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSignificanceInterface_NoRegister, (int32)VTABLE_OFFSET(AFGCrashSiteDebrisActor, IFGSignificanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGCrashSiteDebrisActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::ClassParams = {
		&AFGCrashSiteDebrisActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGCrashSiteDebrisActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGCrashSiteDebrisActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGCrashSiteDebrisActor, 283910006);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGCrashSiteDebrisActor(Z_Construct_UClass_AFGCrashSiteDebrisActor, &AFGCrashSiteDebrisActor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGCrashSiteDebrisActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGCrashSiteDebrisActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
