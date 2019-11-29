// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGVirtualCursorFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGVirtualCursorFunctionLibrary() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGVirtualCursorFunctionLibrary_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGVirtualCursorFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor();
// End Cross Module References
	void UFGVirtualCursorFunctionLibrary::StaticRegisterNativesUFGVirtualCursorFunctionLibrary()
	{
		UClass* Class = UFGVirtualCursorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableVirtualCursor", &UFGVirtualCursorFunctionLibrary::execDisableVirtualCursor },
			{ "EnableVirtualCursor", &UFGVirtualCursorFunctionLibrary::execEnableVirtualCursor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics
	{
		struct FGVirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms
		{
			APlayerController* PC;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "UI/FGVirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGVirtualCursorFunctionLibrary, nullptr, "DisableVirtualCursor", sizeof(FGVirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms), Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics
	{
		struct FGVirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms
		{
			APlayerController* PC;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGVirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "UI/FGVirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGVirtualCursorFunctionLibrary, nullptr, "EnableVirtualCursor", sizeof(FGVirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms), Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGVirtualCursorFunctionLibrary_NoRegister()
	{
		return UFGVirtualCursorFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFGVirtualCursorFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGVirtualCursorFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGVirtualCursorFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_DisableVirtualCursor, "DisableVirtualCursor" }, // 1188857902
		{ &Z_Construct_UFunction_UFGVirtualCursorFunctionLibrary_EnableVirtualCursor, "EnableVirtualCursor" }, // 3261828837
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVirtualCursorFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGVirtualCursorFunctionLibrary.h" },
		{ "ModuleRelativePath", "UI/FGVirtualCursorFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGVirtualCursorFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGVirtualCursorFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGVirtualCursorFunctionLibrary_Statics::ClassParams = {
		&UFGVirtualCursorFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGVirtualCursorFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGVirtualCursorFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGVirtualCursorFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGVirtualCursorFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGVirtualCursorFunctionLibrary, 4049819756);
	template<> FACTORYGAME_API UClass* StaticClass<UFGVirtualCursorFunctionLibrary>()
	{
		return UFGVirtualCursorFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGVirtualCursorFunctionLibrary(Z_Construct_UClass_UFGVirtualCursorFunctionLibrary, &UFGVirtualCursorFunctionLibrary::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGVirtualCursorFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGVirtualCursorFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
