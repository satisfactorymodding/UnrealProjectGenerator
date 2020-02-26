// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableRailroadBridge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableRailroadBridge() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadBridge_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadBridge();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplinePointData();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSplineComponent_NoRegister();
// End Cross Module References
	void AFGBuildableRailroadBridge::StaticRegisterNativesAFGBuildableRailroadBridge()
	{
		UClass* Class = AFGBuildableRailroadBridge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLength", &AFGBuildableRailroadBridge::execGetLength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength_Statics
	{
		struct FGBuildableRailroadBridge_eventGetLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableRailroadBridge_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Railroad|Bridge" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRailroadBridge.h" },
		{ "ToolTip", "Get the length of the bridge" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadBridge, nullptr, "GetLength", sizeof(FGBuildableRailroadBridge_eventGetLength_Parms), Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableRailroadBridge_NoRegister()
	{
		return AFGBuildableRailroadBridge::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableRailroadBridge_Statics
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
	UObject* (*const Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableRailroadBridge_GetLength, "GetLength" }, // 2249757648
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableRailroadBridge.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRailroadBridge.h" },
		{ "ToolTip", "A spline based bridge for rail roads, it can be built between 2 existing foundations, bridge and track is built separately." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::NewProp_mSplineData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRailroadBridge.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Spline data saved in a compact form for saving and replicating. All the vectors are in local space." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::NewProp_mSplineData = { "mSplineData", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRailroadBridge, mSplineData), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::NewProp_mSplineData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::NewProp_mSplineData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::NewProp_mSplineData_Inner = { "mSplineData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSplinePointData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::NewProp_mSplineComponent_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableRailroadBridge.h" },
		{ "ToolTip", "The spline component for this bridge." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::NewProp_mSplineComponent = { "mSplineComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRailroadBridge, mSplineComponent), Z_Construct_UClass_UFGSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::NewProp_mSplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::NewProp_mSplineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::NewProp_mSplineData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::NewProp_mSplineData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::NewProp_mSplineComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableRailroadBridge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::ClassParams = {
		&AFGBuildableRailroadBridge::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableRailroadBridge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableRailroadBridge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableRailroadBridge, 808672122);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableRailroadBridge>()
	{
		return AFGBuildableRailroadBridge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableRailroadBridge(Z_Construct_UClass_AFGBuildableRailroadBridge, &AFGBuildableRailroadBridge::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableRailroadBridge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableRailroadBridge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
