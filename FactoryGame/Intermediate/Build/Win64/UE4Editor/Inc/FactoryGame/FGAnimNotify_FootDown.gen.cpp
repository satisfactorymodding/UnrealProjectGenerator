// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGAnimNotify_FootDown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAnimNotify_FootDown() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAnimNotify_FootDown_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAnimNotify_FootDown();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGAnimNotify_FootDown::StaticRegisterNativesUFGAnimNotify_FootDown()
	{
	}
	UClass* Z_Construct_UClass_UFGAnimNotify_FootDown_NoRegister()
	{
		return UFGAnimNotify_FootDown::StaticClass();
	}
	struct Z_Construct_UClass_UFGAnimNotify_FootDown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPlaySound_MetaData[];
#endif
		static void NewProp_mPlaySound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mPlaySound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFootIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mFootIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "FGAnimNotify_FootDown.h" },
		{ "ModuleRelativePath", "Public/FGAnimNotify_FootDown.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::NewProp_mPlaySound_MetaData[] = {
		{ "Category", "Foot" },
		{ "ModuleRelativePath", "Public/FGAnimNotify_FootDown.h" },
		{ "ToolTip", "Should play a sound." },
	};
#endif
	void Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::NewProp_mPlaySound_SetBit(void* Obj)
	{
		((UFGAnimNotify_FootDown*)Obj)->mPlaySound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::NewProp_mPlaySound = { UE4CodeGen_Private::EPropertyClass::Bool, "mPlaySound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000011, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGAnimNotify_FootDown), &Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::NewProp_mPlaySound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::NewProp_mPlaySound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::NewProp_mPlaySound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::NewProp_mFootIndex_MetaData[] = {
		{ "Category", "Foot" },
		{ "ModuleRelativePath", "Public/FGAnimNotify_FootDown.h" },
		{ "ToolTip", "Foot" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::NewProp_mFootIndex = { UE4CodeGen_Private::EPropertyClass::Int, "mFootIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000011, 1, nullptr, STRUCT_OFFSET(UFGAnimNotify_FootDown, mFootIndex), METADATA_PARAMS(Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::NewProp_mFootIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::NewProp_mFootIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::NewProp_mPlaySound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::NewProp_mFootIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAnimNotify_FootDown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::ClassParams = {
		&UFGAnimNotify_FootDown::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001120A0u,
		nullptr, 0,
		Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAnimNotify_FootDown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAnimNotify_FootDown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAnimNotify_FootDown, 3343611349);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAnimNotify_FootDown(Z_Construct_UClass_UFGAnimNotify_FootDown, &UFGAnimNotify_FootDown::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGAnimNotify_FootDown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAnimNotify_FootDown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
