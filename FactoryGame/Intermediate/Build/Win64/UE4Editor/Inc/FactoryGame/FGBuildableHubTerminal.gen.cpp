// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableHubTerminal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableHubTerminal() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHubTerminal_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHubTerminal();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableTradingPost_NoRegister();
// End Cross Module References
	void AFGBuildableHubTerminal::StaticRegisterNativesAFGBuildableHubTerminal()
	{
		UClass* Class = AFGBuildableHubTerminal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTradingPost", &AFGBuildableHubTerminal::execGetTradingPost },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost_Statics
	{
		struct FGBuildableHubTerminal_eventGetTradingPost_Parms
		{
			AFGBuildableTradingPost* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableHubTerminal_eventGetTradingPost_Parms, ReturnValue), Z_Construct_UClass_AFGBuildableTradingPost_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hub Terminal" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableHubTerminal.h" },
		{ "ToolTip", "Get the trading post" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableHubTerminal, nullptr, "GetTradingPost", sizeof(FGBuildableHubTerminal_eventGetTradingPost_Parms), Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableHubTerminal_NoRegister()
	{
		return AFGBuildableHubTerminal::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableHubTerminal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTradingPost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTradingPost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableHubTerminal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableHubTerminal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableHubTerminal_GetTradingPost, "GetTradingPost" }, // 639001521
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableHubTerminal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableHubTerminal.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableHubTerminal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableHubTerminal_Statics::NewProp_mTradingPost_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableHubTerminal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableHubTerminal_Statics::NewProp_mTradingPost = { "mTradingPost", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableHubTerminal, mTradingPost), Z_Construct_UClass_AFGBuildableTradingPost_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableHubTerminal_Statics::NewProp_mTradingPost_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableHubTerminal_Statics::NewProp_mTradingPost_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableHubTerminal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableHubTerminal_Statics::NewProp_mTradingPost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableHubTerminal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableHubTerminal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableHubTerminal_Statics::ClassParams = {
		&AFGBuildableHubTerminal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableHubTerminal_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableHubTerminal_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableHubTerminal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableHubTerminal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableHubTerminal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableHubTerminal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableHubTerminal, 1294261058);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableHubTerminal>()
	{
		return AFGBuildableHubTerminal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableHubTerminal(Z_Construct_UClass_AFGBuildableHubTerminal, &AFGBuildableHubTerminal::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableHubTerminal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableHubTerminal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
