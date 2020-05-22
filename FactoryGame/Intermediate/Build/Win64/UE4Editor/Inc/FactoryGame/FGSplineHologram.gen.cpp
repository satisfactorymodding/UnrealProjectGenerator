// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ESplineHologramBuildStep();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSplineHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSplineHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHologram();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplinePointData();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	static UEnum* ESplineHologramBuildStep_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ESplineHologramBuildStep, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ESplineHologramBuildStep"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<ESplineHologramBuildStep>()
	{
		return ESplineHologramBuildStep_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESplineHologramBuildStep(ESplineHologramBuildStep_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ESplineHologramBuildStep"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ESplineHologramBuildStep_Hash() { return 76380210U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ESplineHologramBuildStep()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESplineHologramBuildStep"), 0, Get_Z_Construct_UEnum_FactoryGame_ESplineHologramBuildStep_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESplineHologramBuildStep::SHBS_FindStart", (int64)ESplineHologramBuildStep::SHBS_FindStart },
				{ "ESplineHologramBuildStep::SHBS_PlacePoleOrSnapEnding", (int64)ESplineHologramBuildStep::SHBS_PlacePoleOrSnapEnding },
				{ "ESplineHologramBuildStep::SHBS_AdjustPole", (int64)ESplineHologramBuildStep::SHBS_AdjustPole },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Hologram/FGSplineHologram.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"ESplineHologramBuildStep",
				"ESplineHologramBuildStep",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGSplineHologram, nullptr, "OnRep_SplineData", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mBuildStep;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mBuildStep_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsConnectionSnappedOnConstruction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mIsConnectionSnappedOnConstruction;
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
		{ &Z_Construct_UFunction_AFGSplineHologram_OnRep_SplineData, "OnRep_SplineData" }, // 4256168854
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mBuildStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGSplineHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mBuildStep = { "mBuildStep", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSplineHologram, mBuildStep), Z_Construct_UEnum_FactoryGame_ESplineHologramBuildStep, METADATA_PARAMS(Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mBuildStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mBuildStep_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mBuildStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mIsConnectionSnappedOnConstruction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGSplineHologram.h" },
		{ "ToolTip", "CustomSerialization" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mIsConnectionSnappedOnConstruction = { "mIsConnectionSnappedOnConstruction", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSplineHologram, mIsConnectionSnappedOnConstruction), nullptr, METADATA_PARAMS(Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mIsConnectionSnappedOnConstruction_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mIsConnectionSnappedOnConstruction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGSplineHologram.h" },
		{ "ToolTip", ", CustomSerialization" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData = { "mSplineData", "OnRep_SplineData", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSplineHologram, mSplineData), METADATA_PARAMS(Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData_Inner = { "mSplineData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSplinePointData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineComponent_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGSplineHologram.h" },
		{ "ToolTip", "The spline component we're placing." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineComponent = { "mSplineComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGSplineHologram, mSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGSplineHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mBuildStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mBuildStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mIsConnectionSnappedOnConstruction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGSplineHologram_Statics::NewProp_mSplineComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGSplineHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGSplineHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGSplineHologram_Statics::ClassParams = {
		&AFGSplineHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGSplineHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGSplineHologram_Statics::PropPointers),
		0,
		0x009000A0u,
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
	IMPLEMENT_CLASS(AFGSplineHologram, 1633882524);
	template<> FACTORYGAME_API UClass* StaticClass<AFGSplineHologram>()
	{
		return AFGSplineHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGSplineHologram(Z_Construct_UClass_AFGSplineHologram, &AFGSplineHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGSplineHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGSplineHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
