// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/AI/FGEnvQueryTest_ItemDescription.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGEnvQueryTest_ItemDescription() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEnvQueryTest_ItemDescription();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
// End Cross Module References
	void UFGEnvQueryTest_ItemDescription::StaticRegisterNativesUFGEnvQueryTest_ItemDescription()
	{
	}
	UClass* Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_NoRegister()
	{
		return UFGEnvQueryTest_ItemDescription::StaticClass();
	}
	struct Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mItemDescriptorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mItemDescriptorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/FGEnvQueryTest_ItemDescription.h" },
		{ "ModuleRelativePath", "Public/AI/FGEnvQueryTest_ItemDescription.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::NewProp_mItemDescriptorClass_MetaData[] = {
		{ "Category", "Item Descriptor" },
		{ "ModuleRelativePath", "Public/AI/FGEnvQueryTest_ItemDescription.h" },
		{ "ToolTip", "Class of what descriptor we are looking for" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::NewProp_mItemDescriptorClass = { UE4CodeGen_Private::EPropertyClass::Class, "mItemDescriptorClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UFGEnvQueryTest_ItemDescription, mItemDescriptorClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::NewProp_mItemDescriptorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::NewProp_mItemDescriptorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::NewProp_mItemDescriptorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGEnvQueryTest_ItemDescription>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::ClassParams = {
		&UFGEnvQueryTest_ItemDescription::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGEnvQueryTest_ItemDescription()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGEnvQueryTest_ItemDescription_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGEnvQueryTest_ItemDescription, 2530139235);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGEnvQueryTest_ItemDescription(Z_Construct_UClass_UFGEnvQueryTest_ItemDescription, &UFGEnvQueryTest_ItemDescription::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGEnvQueryTest_ItemDescription"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGEnvQueryTest_ItemDescription);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
