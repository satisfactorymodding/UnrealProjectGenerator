// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGSplineHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSplineHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSplineHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSplineHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSplinePointData();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void AFGSplineHologram::StaticRegisterNativesAFGSplineHologram()
	{
		UClass* Class = AFGSplineHologram::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_SplineData", &AFGSplineHologram::execOnRep_SplineData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGSplineHologram.h" },
		{ "ToolTip", "Update the spline on the client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSplineHologram, "OnRep_SplineData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGSplineHologram_NoRegister()
	{
		return AFGSplineHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGSplineHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSplineData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSplineData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSplineComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGSplineHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGSplineHologram_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData, "OnRep_SplineData" }, // 306637822
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSplineHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGSplineHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGSplineHologram.h" },
		{ "ToolTip", "Base hologram for all spline type holograms." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGSplineHologram.h" },
		{ "ToolTip", "This is the data needed to create the spline component (local space)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData = { UE4CodeGen_Private::EPropertyClass::Array, "mSplineData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_SplineData", STRUCT_OFFSET(AFGSplineHologram, mSplineData), METADATA_PARAMS(Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mSplineData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSplinePointData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineComponent_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGSplineHologram.h" },
		{ "ToolTip", "The spline component we're placing." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mSplineComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGSplineHologram, mSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGSplineHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSplineHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSplineHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSplineHologram_Statics::ClassParams = {
		&AFGSplineHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGSplineHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGSplineHologram_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGSplineHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGSplineHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGSplineHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGSplineHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGSplineHologram, 1829654185);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSplineHologram(Z_Construct_UClass_AFGSplineHologram, &AFGSplineHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGSplineHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSplineHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
