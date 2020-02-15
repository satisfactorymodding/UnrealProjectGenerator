// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Equipment/FGToolBelt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGToolBelt() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGToolBelt_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGToolBelt();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGToolBelt::StaticRegisterNativesAFGToolBelt()
	{
	}
	UClass* Z_Construct_UClass_AFGToolBelt_NoRegister()
	{
		return AFGToolBelt::StaticClass();
	}
	struct Z_Construct_UClass_AFGToolBelt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNumArmSlotsToUnlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mNumArmSlotsToUnlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGToolBelt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGToolBelt_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGToolBelt.h" },
		{ "ModuleRelativePath", "Public/Equipment/FGToolBelt.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGToolBelt_Statics::NewProp_mNumArmSlotsToUnlock_MetaData[] = {
		{ "Category", "Belt" },
		{ "ModuleRelativePath", "Public/Equipment/FGToolBelt.h" },
		{ "ToolTip", "How many arm slots are added by this belt" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGToolBelt_Statics::NewProp_mNumArmSlotsToUnlock = { "mNumArmSlotsToUnlock", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGToolBelt, mNumArmSlotsToUnlock), METADATA_PARAMS(Z_Construct_UClass_AFGToolBelt_Statics::NewProp_mNumArmSlotsToUnlock_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGToolBelt_Statics::NewProp_mNumArmSlotsToUnlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGToolBelt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGToolBelt_Statics::NewProp_mNumArmSlotsToUnlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGToolBelt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGToolBelt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGToolBelt_Statics::ClassParams = {
		&AFGToolBelt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGToolBelt_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGToolBelt_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGToolBelt_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGToolBelt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGToolBelt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGToolBelt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGToolBelt, 1633635696);
	template<> FACTORYGAME_API UClass* StaticClass<AFGToolBelt>()
	{
		return AFGToolBelt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGToolBelt(Z_Construct_UClass_AFGToolBelt, &AFGToolBelt::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGToolBelt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGToolBelt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
