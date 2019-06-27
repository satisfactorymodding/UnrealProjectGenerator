// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGMaterialEffect_Build.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMaterialEffect_Build() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMaterialEffect_Build_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMaterialEffect_Build();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMaterialEffectComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed();
// End Cross Module References
	void UFGMaterialEffect_Build::StaticRegisterNativesUFGMaterialEffect_Build()
	{
		UClass* Class = UFGMaterialEffect_Build::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCost", &UFGMaterialEffect_Build::execGetCost },
			{ "GetInstigator", &UFGMaterialEffect_Build::execGetInstigator },
			{ "GetSpeed", &UFGMaterialEffect_Build::execGetSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost_Statics
	{
		struct FGMaterialEffect_Build_eventGetCost_Parms
		{
			TArray<FItemAmount> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMaterialEffect_Build_eventGetCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMaterialEffect_Build.h" },
		{ "ToolTip", "How much did the thing cost." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffect_Build, "GetCost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44020401, sizeof(FGMaterialEffect_Build_eventGetCost_Parms), Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator_Statics
	{
		struct FGMaterialEffect_Build_eventGetInstigator_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMaterialEffect_Build_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMaterialEffect_Build.h" },
		{ "ToolTip", "Who build the thing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffect_Build, "GetInstigator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGMaterialEffect_Build_eventGetInstigator_Parms), Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed_Statics
	{
		struct FGMaterialEffect_Build_eventGetSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMaterialEffect_Build_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMaterialEffect_Build.h" },
		{ "ToolTip", "How fast is the thing built. [cm/s]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffect_Build, "GetSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGMaterialEffect_Build_eventGetSpeed_Parms), Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMaterialEffect_Build_NoRegister()
	{
		return UFGMaterialEffect_Build::StaticClass();
	}
	struct Z_Construct_UClass_UFGMaterialEffect_Build_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCost;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCost_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInstigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMaterialEffect_Build_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGMaterialEffectComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMaterialEffect_Build_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMaterialEffect_Build_GetCost, "GetCost" }, // 2599726790
		{ &Z_Construct_UFunction_UFGMaterialEffect_Build_GetInstigator, "GetInstigator" }, // 1351004246
		{ &Z_Construct_UFunction_UFGMaterialEffect_Build_GetSpeed, "GetSpeed" }, // 3961213222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffect_Build_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Component Tick Collision" },
		{ "IncludePath", "FGMaterialEffect_Build.h" },
		{ "ModuleRelativePath", "FGMaterialEffect_Build.h" },
		{ "ToolTip", "Material effect for building." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mSpeed_MetaData[] = {
		{ "ModuleRelativePath", "FGMaterialEffect_Build.h" },
		{ "ToolTip", "The speed of this effect." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "mSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGMaterialEffect_Build, mSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mCost_MetaData[] = {
		{ "ModuleRelativePath", "FGMaterialEffect_Build.h" },
		{ "ToolTip", "How much did this cost" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mCost = { UE4CodeGen_Private::EPropertyClass::Array, "mCost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGMaterialEffect_Build, mCost), METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mCost_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mCost_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mCost_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mCost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mInstigator_MetaData[] = {
		{ "ModuleRelativePath", "FGMaterialEffect_Build.h" },
		{ "ToolTip", "Who built this" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mInstigator = { UE4CodeGen_Private::EPropertyClass::Object, "mInstigator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGMaterialEffect_Build, mInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mInstigator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mInstigator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGMaterialEffect_Build_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mCost_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMaterialEffect_Build_Statics::NewProp_mInstigator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMaterialEffect_Build_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMaterialEffect_Build>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMaterialEffect_Build_Statics::ClassParams = {
		&UFGMaterialEffect_Build::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGMaterialEffect_Build_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffect_Build_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffect_Build_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffect_Build_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMaterialEffect_Build()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMaterialEffect_Build_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMaterialEffect_Build, 3235547855);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMaterialEffect_Build(Z_Construct_UClass_UFGMaterialEffect_Build, &UFGMaterialEffect_Build::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMaterialEffect_Build"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMaterialEffect_Build);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
