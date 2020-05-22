// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSubsystem() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGSubsystem::StaticRegisterNativesAFGSubsystem()
	{
	}
	UClass* Z_Construct_UClass_AFGSubsystem_NoRegister()
	{
		return AFGSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_AFGSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGSubsystem.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Base for all subsystems we use in the game." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSubsystem_Statics::ClassParams = {
		&AFGSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AFGSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSubsystem, 1734062037);
	template<> FACTORYGAME_API UClass* StaticClass<AFGSubsystem>()
	{
		return AFGSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSubsystem(Z_Construct_UClass_AFGSubsystem, &AFGSubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
