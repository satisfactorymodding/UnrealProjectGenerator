// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableAttachmentMerger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableAttachmentMerger() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableAttachmentMerger_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableAttachmentMerger();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorAttachment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void AFGBuildableAttachmentMerger::StaticRegisterNativesAFGBuildableAttachmentMerger()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableAttachmentMerger_NoRegister()
	{
		return AFGBuildableAttachmentMerger::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentInputIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mCurrentInputIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableConveyorAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableAttachmentMerger.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableAttachmentMerger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::NewProp_mCurrentInputIndex_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableAttachmentMerger.h" },
		{ "NoAutoJson", "" },
		{ "ToolTip", "Cycles through the inputs, stores the input we want to check next. Index is for the mInputs array." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::NewProp_mCurrentInputIndex = { UE4CodeGen_Private::EPropertyClass::Int, "mCurrentInputIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableAttachmentMerger, mCurrentInputIndex), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::NewProp_mCurrentInputIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::NewProp_mCurrentInputIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::NewProp_mCurrentInputIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableAttachmentMerger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::ClassParams = {
		&AFGBuildableAttachmentMerger::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableAttachmentMerger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableAttachmentMerger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableAttachmentMerger, 4147590776);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableAttachmentMerger(Z_Construct_UClass_AFGBuildableAttachmentMerger, &AFGBuildableAttachmentMerger::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableAttachmentMerger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableAttachmentMerger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
