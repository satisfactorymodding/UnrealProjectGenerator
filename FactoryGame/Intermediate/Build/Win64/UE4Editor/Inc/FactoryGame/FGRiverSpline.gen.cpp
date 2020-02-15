// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGRiverSpline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRiverSpline() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRiverSpline_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRiverSpline();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSoundSplineComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	void AFGRiverSpline::StaticRegisterNativesAFGRiverSpline()
	{
	}
	UClass* Z_Construct_UClass_AFGRiverSpline_NoRegister()
	{
		return AFGRiverSpline::StaticClass();
	}
	struct Z_Construct_UClass_AFGRiverSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShouldHaveAudio_MetaData[];
#endif
		static void NewProp_mShouldHaveAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mShouldHaveAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSoundSplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSoundSplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEmitterInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mEmitterInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAudioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRiverSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRiverSpline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGRiverSpline.h" },
		{ "ModuleRelativePath", "Public/FGRiverSpline.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mShouldHaveAudio_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FGRiverSpline.h" },
		{ "ToolTip", "If true, then we should have no audio" },
	};
#endif
	void Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mShouldHaveAudio_SetBit(void* Obj)
	{
		((AFGRiverSpline*)Obj)->mShouldHaveAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mShouldHaveAudio = { "mShouldHaveAudio", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGRiverSpline), &Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mShouldHaveAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mShouldHaveAudio_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mShouldHaveAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mSoundSplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGRiverSpline.h" },
		{ "ToolTip", "The component that has our sound spline" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mSoundSplineComponent = { "mSoundSplineComponent", nullptr, (EPropertyFlags)0x0020080020080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRiverSpline, mSoundSplineComponent_DEPRECATED), Z_Construct_UClass_UFGSoundSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mSoundSplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mSoundSplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mEmitterInterval_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "50" },
		{ "EditCondition", "mShouldHaveAudio" },
		{ "ModuleRelativePath", "Public/FGRiverSpline.h" },
		{ "ToolTip", "Distance between each emitter on the spline" },
		{ "UIMax", "1000" },
		{ "UIMin", "100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mEmitterInterval = { "mEmitterInterval", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRiverSpline, mEmitterInterval), METADATA_PARAMS(Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mEmitterInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mEmitterInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mAudioEvent_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditCondition", "mShouldHaveAudio" },
		{ "ModuleRelativePath", "Public/FGRiverSpline.h" },
		{ "ToolTip", "The audio event this river plays" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mAudioEvent = { "mAudioEvent", nullptr, (EPropertyFlags)0x0020080000000815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRiverSpline, mAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mAudioEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mAudioEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRiverSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mShouldHaveAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mSoundSplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mEmitterInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRiverSpline_Statics::NewProp_mAudioEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRiverSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRiverSpline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRiverSpline_Statics::ClassParams = {
		&AFGRiverSpline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGRiverSpline_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGRiverSpline_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGRiverSpline_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRiverSpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRiverSpline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRiverSpline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRiverSpline, 1996261069);
	template<> FACTORYGAME_API UClass* StaticClass<AFGRiverSpline>()
	{
		return AFGRiverSpline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRiverSpline(Z_Construct_UClass_AFGRiverSpline, &AFGRiverSpline::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRiverSpline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRiverSpline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
