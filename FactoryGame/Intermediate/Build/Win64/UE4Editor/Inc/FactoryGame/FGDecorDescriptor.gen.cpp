// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Resources/FGDecorDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDecorDescriptor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDecorDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDecorDescriptor();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildingDescriptor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UFGDecorDescriptor::StaticRegisterNativesUFGDecorDescriptor()
	{
		UClass* Class = UFGDecorDescriptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDecorMesh", &UFGDecorDescriptor::execGetDecorMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh_Statics
	{
		struct FGDecorDescriptor_eventGetDecorMesh_Parms
		{
			TSubclassOf<UFGDecorDescriptor>  inClass;
			UStaticMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGDecorDescriptor_eventGetDecorMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGDecorDescriptor_eventGetDecorMesh_Parms, inClass), Z_Construct_UClass_UFGDecorDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Decor" },
		{ "ModuleRelativePath", "Resources/FGDecorDescriptor.h" },
		{ "ToolTip", "Get the mesh of the decor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDecorDescriptor, "GetDecorMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGDecorDescriptor_eventGetDecorMesh_Parms), Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGDecorDescriptor_NoRegister()
	{
		return UFGDecorDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UFGDecorDescriptor_Statics
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
	UObject* (*const Z_Construct_UClass_UFGDecorDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGBuildingDescriptor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGDecorDescriptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGDecorDescriptor_GetDecorMesh, "GetDecorMesh" }, // 3512348685
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDecorDescriptor_Statics::Class_MetaDataParams[] = {
		{ "AutoJson", "FALSE" },
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGDecorDescriptor.h" },
		{ "ModuleRelativePath", "Resources/FGDecorDescriptor.h" },
		{ "ToolTip", "Descriptor for buildable decor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDecorDescriptor_Statics::NewProp_mDecorMesh_MetaData[] = {
		{ "Category", "Decor" },
		{ "ModuleRelativePath", "Resources/FGDecorDescriptor.h" },
		{ "ToolTip", "The static mesh for the decor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGDecorDescriptor_Statics::NewProp_mDecorMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mDecorMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGDecorDescriptor, mDecorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGDecorDescriptor_Statics::NewProp_mDecorMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDecorDescriptor_Statics::NewProp_mDecorMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGDecorDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDecorDescriptor_Statics::NewProp_mDecorMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGDecorDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGDecorDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGDecorDescriptor_Statics::ClassParams = {
		&UFGDecorDescriptor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGDecorDescriptor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGDecorDescriptor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGDecorDescriptor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGDecorDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGDecorDescriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGDecorDescriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGDecorDescriptor, 3740208143);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGDecorDescriptor(Z_Construct_UClass_UFGDecorDescriptor, &UFGDecorDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGDecorDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGDecorDescriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
