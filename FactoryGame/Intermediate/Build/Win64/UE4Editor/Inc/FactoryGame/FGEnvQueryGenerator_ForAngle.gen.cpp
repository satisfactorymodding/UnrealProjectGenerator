// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/AI/FGEnvQueryGenerator_ForAngle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGEnvQueryGenerator_ForAngle() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
// End Cross Module References
	void UFGEnvQueryGenerator_ForAngle::StaticRegisterNativesUFGEnvQueryGenerator_ForAngle()
	{
	}
	UClass* Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_NoRegister()
	{
		return UFGEnvQueryGenerator_ForAngle::StaticClass();
	}
	struct Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCenterActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mCenterActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGenerateMirroredPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mGenerateMirroredPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/FGEnvQueryGenerator_ForAngle.h" },
		{ "ModuleRelativePath", "AI/FGEnvQueryGenerator_ForAngle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mCenterActor_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "AI/FGEnvQueryGenerator_ForAngle.h" },
		{ "ToolTip", "The actor (or actors) that will generate a cone in their facing direction" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mCenterActor = { "mCenterActor", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGEnvQueryGenerator_ForAngle, mCenterActor), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mCenterActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mCenterActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mGenerateMirroredPoints_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "AI/FGEnvQueryGenerator_ForAngle.h" },
		{ "ToolTip", "Should we also generate points for the negative angle value?" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mGenerateMirroredPoints = { "mGenerateMirroredPoints", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGEnvQueryGenerator_ForAngle, mGenerateMirroredPoints), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mGenerateMirroredPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mGenerateMirroredPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mStepSize_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "AI/FGEnvQueryGenerator_ForAngle.h" },
		{ "ToolTip", "The step of the angle increase. Angle step must be >=1\nSmaller values generate less items" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mStepSize = { "mStepSize", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGEnvQueryGenerator_ForAngle, mStepSize), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mStepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mAngle_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "AI/FGEnvQueryGenerator_ForAngle.h" },
		{ "ToolTip", "Angle to generate points for" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mAngle = { "mAngle", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGEnvQueryGenerator_ForAngle, mAngle), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mDistance_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "AI/FGEnvQueryGenerator_ForAngle.h" },
		{ "ToolTip", "Total distance for point generation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mDistance = { "mDistance", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGEnvQueryGenerator_ForAngle, mDistance), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mCenterActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mGenerateMirroredPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::NewProp_mDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGEnvQueryGenerator_ForAngle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::ClassParams = {
		&UFGEnvQueryGenerator_ForAngle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGEnvQueryGenerator_ForAngle, 534384126);
	template<> FACTORYGAME_API UClass* StaticClass<UFGEnvQueryGenerator_ForAngle>()
	{
		return UFGEnvQueryGenerator_ForAngle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGEnvQueryGenerator_ForAngle(Z_Construct_UClass_UFGEnvQueryGenerator_ForAngle, &UFGEnvQueryGenerator_ForAngle::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGEnvQueryGenerator_ForAngle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGEnvQueryGenerator_ForAngle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
