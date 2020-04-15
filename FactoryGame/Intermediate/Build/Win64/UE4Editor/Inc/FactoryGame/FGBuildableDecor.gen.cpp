// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableDecor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableDecor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableDecor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableDecor();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh();
// End Cross Module References
	void AFGBuildableDecor::StaticRegisterNativesAFGBuildableDecor()
	{
		UClass* Class = AFGBuildableDecor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDecorMesh", &AFGBuildableDecor::execGetDecorMesh },
			{ "SetDecorMesh", &AFGBuildableDecor::execSetDecorMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh_Statics
	{
		struct FGBuildableDecor_eventGetDecorMesh_Parms
		{
			UStaticMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableDecor_eventGetDecorMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Decor" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDecor.h" },
		{ "ToolTip", "Get the mesh of the decor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDecor, nullptr, "GetDecorMesh", sizeof(FGBuildableDecor_eventGetDecorMesh_Parms), Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh_Statics
	{
		struct FGBuildableDecor_eventSetDecorMesh_Parms
		{
			UStaticMesh* mesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableDecor_eventSetDecorMesh_Parms, mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh_Statics::NewProp_mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Decor" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDecor.h" },
		{ "ToolTip", "Set the mesh for this decor, should not be called after it has been properly replicated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableDecor, nullptr, "SetDecorMesh", sizeof(FGBuildableDecor_eventSetDecorMesh_Parms), Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableDecor_NoRegister()
	{
		return AFGBuildableDecor::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableDecor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDecorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDecorMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableDecor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableDecor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableDecor_GetDecorMesh, "GetDecorMesh" }, // 2131151454
		{ &Z_Construct_UFunction_AFGBuildableDecor_SetDecorMesh, "SetDecorMesh" }, // 1244720044
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDecor_Statics::Class_MetaDataParams[] = {
		{ "AutoJson", "FALSE" },
		{ "IncludePath", "Buildables/FGBuildableDecor.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDecor.h" },
		{ "ToolTip", "Base for static non-interactable decor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableDecor_Statics::NewProp_mDecorMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableDecor.h" },
		{ "ToolTip", "The mesh we want to have for the decor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableDecor_Statics::NewProp_mDecorMesh = { "mDecorMesh", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableDecor, mDecorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDecor_Statics::NewProp_mDecorMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDecor_Statics::NewProp_mDecorMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableDecor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableDecor_Statics::NewProp_mDecorMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableDecor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableDecor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableDecor_Statics::ClassParams = {
		&AFGBuildableDecor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableDecor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDecor_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableDecor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableDecor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableDecor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableDecor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableDecor, 2061329443);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableDecor>()
	{
		return AFGBuildableDecor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableDecor(Z_Construct_UClass_AFGBuildableDecor, &AFGBuildableDecor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableDecor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableDecor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
