// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGAmbientVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAmbientVolume() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAmbientVolume_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAmbientVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAmbientSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister();
// End Cross Module References
	void AFGAmbientVolume::StaticRegisterNativesAFGAmbientVolume()
	{
	}
	UClass* Z_Construct_UClass_AFGAmbientVolume_NoRegister()
	{
		return AFGAmbientVolume::StaticClass();
	}
	struct Z_Construct_UClass_AFGAmbientVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSignificanceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSignificanceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAdditionalAttenuationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAdditionalAttenuationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAmbientSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAmbientSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGAmbientVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAmbientVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Cooking Mobile Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "FGAmbientVolume.h" },
		{ "ModuleRelativePath", "FGAmbientVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mSignificanceRange_MetaData[] = {
		{ "Category", "Significance" },
		{ "ModuleRelativePath", "FGAmbientVolume.h" },
		{ "ToolTip", "Range that this volume should be significant within" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mSignificanceRange = { "mSignificanceRange", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGAmbientVolume, mSignificanceRange), METADATA_PARAMS(Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mSignificanceRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mSignificanceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAdditionalAttenuationDistance_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientVolume.h" },
		{ "ToolTip", "How much further away than the attenuation distance do we want to start playing the ambient OnGeCloseSound" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAdditionalAttenuationDistance = { "mAdditionalAttenuationDistance", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGAmbientVolume, mAdditionalAttenuationDistance), METADATA_PARAMS(Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAdditionalAttenuationDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAdditionalAttenuationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAudioComponent_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGAmbientVolume.h" },
		{ "ToolTip", "The audio component we want to move around" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAudioComponent = { "mAudioComponent", nullptr, (EPropertyFlags)0x00200800000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGAmbientVolume, mAudioComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAudioComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAmbientSettings_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientVolume.h" },
		{ "ToolTip", "The settings for the volume" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAmbientSettings = { "mAmbientSettings", nullptr, (EPropertyFlags)0x0024080000000801, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGAmbientVolume, mAmbientSettings), Z_Construct_UClass_UFGAmbientSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAmbientSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAmbientSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGAmbientVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mSignificanceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAdditionalAttenuationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGAmbientVolume_Statics::NewProp_mAmbientSettings,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGAmbientVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSignificanceInterface_NoRegister, (int32)VTABLE_OFFSET(AFGAmbientVolume, IFGSignificanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGAmbientVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGAmbientVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGAmbientVolume_Statics::ClassParams = {
		&AFGAmbientVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGAmbientVolume_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGAmbientVolume_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGAmbientVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGAmbientVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGAmbientVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGAmbientVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGAmbientVolume, 3945414389);
	template<> FACTORYGAME_API UClass* StaticClass<AFGAmbientVolume>()
	{
		return AFGAmbientVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGAmbientVolume(Z_Construct_UClass_AFGAmbientVolume, &AFGAmbientVolume::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGAmbientVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGAmbientVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
