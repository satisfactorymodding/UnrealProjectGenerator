// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGGameEngine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGameEngine() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameEngine_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameEngine();
	ENGINE_API UClass* Z_Construct_UClass_UGameEngine();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFGEngineCommon();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWorldCreationInterface_NoRegister();
// End Cross Module References
	void UFGGameEngine::StaticRegisterNativesUFGGameEngine()
	{
	}
	UClass* Z_Construct_UClass_UFGGameEngine_NoRegister()
	{
		return UFGGameEngine::StaticClass();
	}
	struct Z_Construct_UClass_UFGGameEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEngineCommonImp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mEngineCommonImp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGGameEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGGameEngine.h" },
		{ "ModuleRelativePath", "FGGameEngine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameEngine_Statics::NewProp_mEngineCommonImp_MetaData[] = {
		{ "ModuleRelativePath", "FGGameEngine.h" },
		{ "ToolTip", "Shared implementation for world creation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGGameEngine_Statics::NewProp_mEngineCommonImp = { UE4CodeGen_Private::EPropertyClass::Struct, "mEngineCommonImp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UFGGameEngine, mEngineCommonImp), Z_Construct_UScriptStruct_FFGEngineCommon, METADATA_PARAMS(Z_Construct_UClass_UFGGameEngine_Statics::NewProp_mEngineCommonImp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameEngine_Statics::NewProp_mEngineCommonImp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGGameEngine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameEngine_Statics::NewProp_mEngineCommonImp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFGGameEngine_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGWorldCreationInterface_NoRegister, (int32)VTABLE_OFFSET(UFGGameEngine, IFGWorldCreationInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGGameEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGGameEngine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGGameEngine_Statics::ClassParams = {
		&UFGGameEngine::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000AEu,
		nullptr, 0,
		Z_Construct_UClass_UFGGameEngine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGGameEngine_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UFGGameEngine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGGameEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGGameEngine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGGameEngine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGGameEngine, 2655583218);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGGameEngine(Z_Construct_UClass_UFGGameEngine, &UFGGameEngine::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGGameEngine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGGameEngine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
