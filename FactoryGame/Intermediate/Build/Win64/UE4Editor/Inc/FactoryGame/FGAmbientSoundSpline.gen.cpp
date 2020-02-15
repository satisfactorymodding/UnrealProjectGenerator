// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGAmbientSoundSpline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAmbientSoundSpline() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAmbientSoundSpline_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAmbientSoundSpline();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSoundSplineComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister();
// End Cross Module References
	void AFGAmbientSoundSpline::StaticRegisterNativesAFGAmbientSoundSpline()
	{
		UClass* Class = AFGAmbientSoundSpline::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSplineComponent", &AFGAmbientSoundSpline::execGetSplineComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics
	{
		struct FGAmbientSoundSpline_eventGetSplineComponent_Parms
		{
			USplineComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGAmbientSoundSpline_eventGetSplineComponent_Parms, ReturnValue), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGAmbientSoundSpline.h" },
		{ "ToolTip", "Gets the spline component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGAmbientSoundSpline, nullptr, "GetSplineComponent", sizeof(FGAmbientSoundSpline_eventGetSplineComponent_Parms), Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGAmbientSoundSpline_NoRegister()
	{
		return AFGAmbientSoundSpline::StaticClass();
	}
	struct Z_Construct_UClass_AFGAmbientSoundSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSignificanceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSignificanceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSoundSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSoundSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSpline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGAmbientSoundSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGAmbientSoundSpline_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGAmbientSoundSpline_GetSplineComponent, "GetSplineComponent" }, // 549519231
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAmbientSoundSpline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGAmbientSoundSpline.h" },
		{ "ModuleRelativePath", "Public/FGAmbientSoundSpline.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSignificanceRange_MetaData[] = {
		{ "Category", "Significance" },
		{ "ModuleRelativePath", "Public/FGAmbientSoundSpline.h" },
		{ "ToolTip", "Range that this volume should be significant within" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSignificanceRange = { "mSignificanceRange", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGAmbientSoundSpline, mSignificanceRange), METADATA_PARAMS(Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSignificanceRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSignificanceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSoundSpline_MetaData[] = {
		{ "Category", "Ambient Sound Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGAmbientSoundSpline.h" },
		{ "ToolTip", "AkComponent that plays the sound on the spline." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSoundSpline = { "mSoundSpline", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGAmbientSoundSpline, mSoundSpline), Z_Construct_UClass_UFGSoundSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSoundSpline_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSoundSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSpline_MetaData[] = {
		{ "Category", "Ambient Sound Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGAmbientSoundSpline.h" },
		{ "ToolTip", "Spline to put multiple positions along." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSpline = { "mSpline", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGAmbientSoundSpline, mSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSpline_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSpline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGAmbientSoundSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSignificanceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSoundSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGAmbientSoundSpline_Statics::NewProp_mSpline,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGAmbientSoundSpline_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSignificanceInterface_NoRegister, (int32)VTABLE_OFFSET(AFGAmbientSoundSpline, IFGSignificanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGAmbientSoundSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGAmbientSoundSpline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGAmbientSoundSpline_Statics::ClassParams = {
		&AFGAmbientSoundSpline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGAmbientSoundSpline_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGAmbientSoundSpline_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGAmbientSoundSpline_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGAmbientSoundSpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGAmbientSoundSpline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGAmbientSoundSpline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGAmbientSoundSpline, 3387617773);
	template<> FACTORYGAME_API UClass* StaticClass<AFGAmbientSoundSpline>()
	{
		return AFGAmbientSoundSpline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGAmbientSoundSpline(Z_Construct_UClass_AFGAmbientSoundSpline, &AFGAmbientSoundSpline::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGAmbientSoundSpline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGAmbientSoundSpline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
