// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGPoleHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPoleHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPoleHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPoleHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFactoryHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPoleHologram_OnRep_PoleMesh();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPoleHeightMesh();
// End Cross Module References
	void AFGPoleHologram::StaticRegisterNativesAFGPoleHologram()
	{
		UClass* Class = AFGPoleHologram::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_PoleMesh", &AFGPoleHologram::execOnRep_PoleMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGPoleHologram_OnRep_PoleMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPoleHologram_OnRep_PoleMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGPoleHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPoleHologram_OnRep_PoleMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPoleHologram, nullptr, "OnRep_PoleMesh", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPoleHologram_OnRep_PoleMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPoleHologram_OnRep_PoleMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPoleHologram_OnRep_PoleMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPoleHologram_OnRep_PoleMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGPoleHologram_NoRegister()
	{
		return AFGPoleHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGPoleHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPoleHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPoleHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPoleHeightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPoleHeightComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPoleMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPoleMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPoleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPoleMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGPoleHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGFactoryHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGPoleHologram_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGPoleHologram_OnRep_PoleMesh, "OnRep_PoleMesh" }, // 2494140170
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPoleHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGPoleHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGPoleHologram.h" },
		{ "ToolTip", "Base for holograms that can be raised/lowered, e.g. conveyor poles." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGPoleHologram.h" },
		{ "ToolTip", "CustomSerialization" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleHeight = { "mPoleHeight", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPoleHologram, mPoleHeight), METADATA_PARAMS(Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleHeightComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGPoleHologram.h" },
		{ "ToolTip", "The scene component for adjusting the height of the pole." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleHeightComponent = { "mPoleHeightComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPoleHologram, mPoleHeightComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleHeightComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleHeightComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGPoleHologram.h" },
		{ "ToolTip", "The pole mesh." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleMeshComponent = { "mPoleMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPoleHologram, mPoleMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGPoleHologram.h" },
		{ "ToolTip", "The most fitting mesh for our aim height." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleMesh = { "mPoleMesh", "OnRep_PoleMesh", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPoleHologram, mPoleMesh), Z_Construct_UScriptStruct_FPoleHeightMesh, METADATA_PARAMS(Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGPoleHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleHeightComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPoleHologram_Statics::NewProp_mPoleMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGPoleHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGPoleHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGPoleHologram_Statics::ClassParams = {
		&AFGPoleHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGPoleHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGPoleHologram_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGPoleHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGPoleHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGPoleHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGPoleHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGPoleHologram, 3866593618);
	template<> FACTORYGAME_API UClass* StaticClass<AFGPoleHologram>()
	{
		return AFGPoleHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGPoleHologram(Z_Construct_UClass_AFGPoleHologram, &AFGPoleHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGPoleHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGPoleHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
