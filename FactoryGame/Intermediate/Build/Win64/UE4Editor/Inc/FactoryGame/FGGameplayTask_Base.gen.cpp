// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Creature/Enemy/FGGameplayTask_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGameplayTask_Base() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameplayTask_Base_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameplayTask_Base();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEnemy_NoRegister();
// End Cross Module References
	void UFGGameplayTask_Base::StaticRegisterNativesUFGGameplayTask_Base()
	{
	}
	UClass* Z_Construct_UClass_UFGGameplayTask_Base_NoRegister()
	{
		return UFGGameplayTask_Base::StaticClass();
	}
	struct Z_Construct_UClass_UFGGameplayTask_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGGameplayTask_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameplayTask_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Creature/Enemy/FGGameplayTask_Base.h" },
		{ "ModuleRelativePath", "Creature/Enemy/FGGameplayTask_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameplayTask_Base_Statics::NewProp_mCachedPawn_MetaData[] = {
		{ "ModuleRelativePath", "Creature/Enemy/FGGameplayTask_Base.h" },
		{ "ToolTip", "Cache the pawn that we have" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGGameplayTask_Base_Statics::NewProp_mCachedPawn = { UE4CodeGen_Private::EPropertyClass::Object, "mCachedPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFGGameplayTask_Base, mCachedPawn), Z_Construct_UClass_AFGEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGGameplayTask_Base_Statics::NewProp_mCachedPawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_Base_Statics::NewProp_mCachedPawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGGameplayTask_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameplayTask_Base_Statics::NewProp_mCachedPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGGameplayTask_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGGameplayTask_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGGameplayTask_Base_Statics::ClassParams = {
		&UFGGameplayTask_Base::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A4u,
		nullptr, 0,
		Z_Construct_UClass_UFGGameplayTask_Base_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_Base_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGGameplayTask_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGGameplayTask_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGGameplayTask_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGGameplayTask_Base, 1991147667);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGGameplayTask_Base(Z_Construct_UClass_UFGGameplayTask_Base, &UFGGameplayTask_Base::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGGameplayTask_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGGameplayTask_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
