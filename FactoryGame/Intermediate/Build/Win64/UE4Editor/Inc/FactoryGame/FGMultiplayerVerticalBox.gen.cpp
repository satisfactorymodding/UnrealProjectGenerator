// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGMultiplayerVerticalBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMultiplayerVerticalBox() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMultiplayerVerticalBox_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMultiplayerVerticalBox();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMultiplayerVerticalBox_Sort();
// End Cross Module References
	void UFGMultiplayerVerticalBox::StaticRegisterNativesUFGMultiplayerVerticalBox()
	{
		UClass* Class = UFGMultiplayerVerticalBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Sort", &UFGMultiplayerVerticalBox::execSort },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMultiplayerVerticalBox_Sort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMultiplayerVerticalBox_Sort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGMultiplayerVerticalBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMultiplayerVerticalBox_Sort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMultiplayerVerticalBox, "Sort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMultiplayerVerticalBox_Sort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMultiplayerVerticalBox_Sort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMultiplayerVerticalBox_Sort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMultiplayerVerticalBox_Sort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMultiplayerVerticalBox_NoRegister()
	{
		return UFGMultiplayerVerticalBox::StaticClass();
	}
	struct Z_Construct_UClass_UFGMultiplayerVerticalBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMultiplayerVerticalBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVerticalBox,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMultiplayerVerticalBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMultiplayerVerticalBox_Sort, "Sort" }, // 2053258243
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMultiplayerVerticalBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGMultiplayerVerticalBox.h" },
		{ "ModuleRelativePath", "UI/FGMultiplayerVerticalBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMultiplayerVerticalBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMultiplayerVerticalBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMultiplayerVerticalBox_Statics::ClassParams = {
		&UFGMultiplayerVerticalBox::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGMultiplayerVerticalBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMultiplayerVerticalBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMultiplayerVerticalBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMultiplayerVerticalBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMultiplayerVerticalBox, 3829074286);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMultiplayerVerticalBox(Z_Construct_UClass_UFGMultiplayerVerticalBox, &UFGMultiplayerVerticalBox::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMultiplayerVerticalBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMultiplayerVerticalBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
