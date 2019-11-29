// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGBuildGuide.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildGuide() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EGuideLineType();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildGuide_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildGuide();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EGuideLineType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EGuideLineType, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EGuideLineType"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EGuideLineType>()
	{
		return EGuideLineType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGuideLineType(EGuideLineType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EGuideLineType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EGuideLineType_Hash() { return 1541542523U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EGuideLineType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGuideLineType"), 0, Get_Z_Construct_UEnum_FactoryGame_EGuideLineType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGuideLineType::GLT_Default", (int64)EGuideLineType::GLT_Default },
				{ "EGuideLineType::GLT_ConveyorBelt", (int64)EGuideLineType::GLT_ConveyorBelt },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "GLT_ConveyorBelt.DisplayName", "Conveyor Belt" },
				{ "GLT_Default.DisplayName", "Default" },
				{ "ModuleRelativePath", "Hologram/FGBuildGuide.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EGuideLineType",
				"EGuideLineType",
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
	void AFGBuildGuide::StaticRegisterNativesAFGBuildGuide()
	{
		UClass* Class = AFGBuildGuide::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBuildGuideStartEnd", &AFGBuildGuide::execSetBuildGuideStartEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics
	{
		struct FGBuildGuide_eventSetBuildGuideStartEnd_Parms
		{
			FVector startPoint;
			FVector endPoint;
			float meshSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_meshSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::NewProp_meshSize = { "meshSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGuide_eventSetBuildGuideStartEnd_Parms, meshSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::NewProp_endPoint = { "endPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGuide_eventSetBuildGuideStartEnd_Parms, endPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::NewProp_startPoint = { "startPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGuide_eventSetBuildGuideStartEnd_Parms, startPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::NewProp_meshSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::NewProp_endPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::NewProp_startPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGuides" },
		{ "CPP_Default_meshSize", "30.000000" },
		{ "ModuleRelativePath", "Hologram/FGBuildGuide.h" },
		{ "ToolTip", "Sets the start and end points of the build guide, similar to DrawDebugLines()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildGuide, nullptr, "SetBuildGuideStartEnd", sizeof(FGBuildGuide_eventSetBuildGuideStartEnd_Parms), Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildGuide_NoRegister()
	{
		return AFGBuildGuide::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildGuide_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGuideLineType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mGuideLineType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mGuideLineType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildGuide_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildGuide_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildGuide_SetBuildGuideStartEnd, "SetBuildGuideStartEnd" }, // 3090377462
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildGuide_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Hologram/FGBuildGuide.h" },
		{ "ModuleRelativePath", "Hologram/FGBuildGuide.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildGuide_Statics::NewProp_mGuideLineType_MetaData[] = {
		{ "Category", "BuildGuides" },
		{ "ModuleRelativePath", "Hologram/FGBuildGuide.h" },
		{ "ToolTip", "Defines what type of build guide line this is." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGBuildGuide_Statics::NewProp_mGuideLineType = { "mGuideLineType", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildGuide, mGuideLineType), Z_Construct_UEnum_FactoryGame_EGuideLineType, METADATA_PARAMS(Z_Construct_UClass_AFGBuildGuide_Statics::NewProp_mGuideLineType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildGuide_Statics::NewProp_mGuideLineType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGBuildGuide_Statics::NewProp_mGuideLineType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildGuide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildGuide_Statics::NewProp_mGuideLineType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildGuide_Statics::NewProp_mGuideLineType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildGuide_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildGuide>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildGuide_Statics::ClassParams = {
		&AFGBuildGuide::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildGuide_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildGuide_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildGuide_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildGuide_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildGuide()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildGuide_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildGuide, 2984544916);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildGuide>()
	{
		return AFGBuildGuide::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildGuide(Z_Construct_UClass_AFGBuildGuide, &AFGBuildGuide::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildGuide"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildGuide);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
