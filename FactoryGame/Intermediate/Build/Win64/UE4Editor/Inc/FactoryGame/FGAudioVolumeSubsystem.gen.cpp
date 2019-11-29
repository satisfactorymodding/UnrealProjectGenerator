// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGAudioVolumeSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAudioVolumeSubsystem() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAudioVolumeSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAudioVolumeSubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGAudioVolumeSubsystem::StaticRegisterNativesAFGAudioVolumeSubsystem()
	{
	}
	UClass* Z_Construct_UClass_AFGAudioVolumeSubsystem_NoRegister()
	{
		return AFGAudioVolumeSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_AFGAudioVolumeSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGAudioVolumeSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAudioVolumeSubsystem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGAudioVolumeSubsystem.h" },
		{ "ModuleRelativePath", "FGAudioVolumeSubsystem.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGAudioVolumeSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGAudioVolumeSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGAudioVolumeSubsystem_Statics::ClassParams = {
		&AFGAudioVolumeSubsystem::StaticClass,
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
		0x008002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGAudioVolumeSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGAudioVolumeSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGAudioVolumeSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGAudioVolumeSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGAudioVolumeSubsystem, 1131157758);
	template<> FACTORYGAME_API UClass* StaticClass<AFGAudioVolumeSubsystem>()
	{
		return AFGAudioVolumeSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGAudioVolumeSubsystem(Z_Construct_UClass_AFGAudioVolumeSubsystem, &AFGAudioVolumeSubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGAudioVolumeSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGAudioVolumeSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
