// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Equipment/FGGasMask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGasMask() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGasMask_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGasMask();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGasMaskAttachment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGasMaskAttachment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentAttachment();
// End Cross Module References
	void AFGGasMask::StaticRegisterNativesAFGGasMask()
	{
	}
	UClass* Z_Construct_UClass_AFGGasMask_NoRegister()
	{
		return AFGGasMask::StaticClass();
	}
	struct Z_Construct_UClass_AFGGasMask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGGasMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGasMask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGGasMask.h" },
		{ "ModuleRelativePath", "Equipment/FGGasMask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGGasMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGGasMask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGGasMask_Statics::ClassParams = {
		&AFGGasMask::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGGasMask_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGGasMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGGasMask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGGasMask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGGasMask, 164978232);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGGasMask(Z_Construct_UClass_AFGGasMask, &AFGGasMask::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGGasMask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGGasMask);
	void AFGGasMaskAttachment::StaticRegisterNativesAFGGasMaskAttachment()
	{
	}
	UClass* Z_Construct_UClass_AFGGasMaskAttachment_NoRegister()
	{
		return AFGGasMaskAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AFGGasMaskAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGGasMaskAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipmentAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGasMaskAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGGasMask.h" },
		{ "ModuleRelativePath", "Equipment/FGGasMask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGGasMaskAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGGasMaskAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGGasMaskAttachment_Statics::ClassParams = {
		&AFGGasMaskAttachment::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGGasMaskAttachment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGGasMaskAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGGasMaskAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGGasMaskAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGGasMaskAttachment, 1491350085);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGGasMaskAttachment(Z_Construct_UClass_AFGGasMaskAttachment, &AFGGasMaskAttachment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGGasMaskAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGGasMaskAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
