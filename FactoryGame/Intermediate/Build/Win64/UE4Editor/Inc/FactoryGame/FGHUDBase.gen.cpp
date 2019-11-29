// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGHUDBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGHUDBase() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHUDBase_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHUDBase();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUDBase_GetBaseUI();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBaseUI_NoRegister();
// End Cross Module References
	void AFGHUDBase::StaticRegisterNativesAFGHUDBase()
	{
		UClass* Class = AFGHUDBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBaseUI", &AFGHUDBase::execGetBaseUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics
	{
		struct FGHUDBase_eventGetBaseUI_Parms
		{
			UFGBaseUI* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUDBase_eventGetBaseUI_Parms, ReturnValue), Z_Construct_UClass_UFGBaseUI_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUDBase.h" },
		{ "ToolTip", "Returns base ui" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUDBase, nullptr, "GetBaseUI", sizeof(FGHUDBase_eventGetBaseUI_Parms), Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUDBase_GetBaseUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUDBase_GetBaseUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGHUDBase_NoRegister()
	{
		return AFGHUDBase::StaticClass();
	}
	struct Z_Construct_UClass_AFGHUDBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBaseUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBaseUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGHUDBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGHUDBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGHUDBase_GetBaseUI, "GetBaseUI" }, // 1917269598
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUDBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FGHUDBase.h" },
		{ "ModuleRelativePath", "FGHUDBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUDBase_Statics::NewProp_mBaseUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGHUDBase.h" },
		{ "ToolTip", "Reference to the UI widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUDBase_Statics::NewProp_mBaseUI = { "mBaseUI", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUDBase, mBaseUI), Z_Construct_UClass_UFGBaseUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUDBase_Statics::NewProp_mBaseUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUDBase_Statics::NewProp_mBaseUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGHUDBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUDBase_Statics::NewProp_mBaseUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGHUDBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGHUDBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGHUDBase_Statics::ClassParams = {
		&AFGHUDBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGHUDBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGHUDBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFGHUDBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGHUDBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGHUDBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGHUDBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGHUDBase, 612487367);
	template<> FACTORYGAME_API UClass* StaticClass<AFGHUDBase>()
	{
		return AFGHUDBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGHUDBase(Z_Construct_UClass_AFGHUDBase, &AFGHUDBase::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGHUDBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGHUDBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
