// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Resources/FGBuildDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildDescriptor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildDescriptor();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildCategory_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildSubCategory_NoRegister();
// End Cross Module References
	void UFGBuildDescriptor::StaticRegisterNativesUFGBuildDescriptor()
	{
		UClass* Class = UFGBuildDescriptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBuildCategory", &UFGBuildDescriptor::execGetBuildCategory },
			{ "GetBuildMenuPriority", &UFGBuildDescriptor::execGetBuildMenuPriority },
			{ "GetSubCategories", &UFGBuildDescriptor::execGetSubCategories },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory_Statics
	{
		struct FGBuildDescriptor_eventGetBuildCategory_Parms
		{
			TSubclassOf<UFGBuildDescriptor>  inClass;
			TSubclassOf<UFGBuildCategory>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildDescriptor_eventGetBuildCategory_Parms, ReturnValue), Z_Construct_UClass_UFGBuildCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildDescriptor_eventGetBuildCategory_Parms, inClass), Z_Construct_UClass_UFGBuildDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Build" },
		{ "ModuleRelativePath", "Resources/FGBuildDescriptor.h" },
		{ "ToolTip", "Get the category for this building descriptor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildDescriptor, nullptr, "GetBuildCategory", sizeof(FGBuildDescriptor_eventGetBuildCategory_Parms), Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority_Statics
	{
		struct FGBuildDescriptor_eventGetBuildMenuPriority_Parms
		{
			TSubclassOf<UFGBuildDescriptor>  inClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildDescriptor_eventGetBuildMenuPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildDescriptor_eventGetBuildMenuPriority_Parms, inClass), Z_Construct_UClass_UFGBuildDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Build" },
		{ "ModuleRelativePath", "Resources/FGBuildDescriptor.h" },
		{ "ToolTip", "The order we want stuff in the build menu, lower is earlier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildDescriptor, nullptr, "GetBuildMenuPriority", sizeof(FGBuildDescriptor_eventGetBuildMenuPriority_Parms), Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics
	{
		struct FGBuildDescriptor_eventGetSubCategories_Parms
		{
			TSubclassOf<UFGBuildDescriptor>  inClass;
			TArray<TSubclassOf<UFGBuildSubCategory> > out_subCategories;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_subCategories;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_subCategories_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::NewProp_out_subCategories = { "out_subCategories", nullptr, (EPropertyFlags)0x0014000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildDescriptor_eventGetSubCategories_Parms, out_subCategories), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::NewProp_out_subCategories_Inner = { "out_subCategories", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGBuildSubCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildDescriptor_eventGetSubCategories_Parms, inClass), Z_Construct_UClass_UFGBuildDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::NewProp_out_subCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::NewProp_out_subCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Build" },
		{ "ModuleRelativePath", "Resources/FGBuildDescriptor.h" },
		{ "ToolTip", "Get the category for this building descriptor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildDescriptor, nullptr, "GetSubCategories", sizeof(FGBuildDescriptor_eventGetSubCategories_Parms), Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGBuildDescriptor_NoRegister()
	{
		return UFGBuildDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UFGBuildDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildMenuPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBuildMenuPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSubCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSubCategories;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mSubCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mBuildCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGBuildDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGItemDescriptor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGBuildDescriptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGBuildDescriptor_GetBuildCategory, "GetBuildCategory" }, // 710144982
		{ &Z_Construct_UFunction_UFGBuildDescriptor_GetBuildMenuPriority, "GetBuildMenuPriority" }, // 300747160
		{ &Z_Construct_UFunction_UFGBuildDescriptor_GetSubCategories, "GetSubCategories" }, // 2935863628
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildDescriptor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGBuildDescriptor.h" },
		{ "ModuleRelativePath", "Resources/FGBuildDescriptor.h" },
		{ "ToolTip", "Descriptor for things that can be built in the BuildGun." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mBuildMenuPriority_MetaData[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "Resources/FGBuildDescriptor.h" },
		{ "ToolTip", "The order in the Build Menu is decided by this value. Lower values means earlier in menu. Negative values are allowed. [-N..0..N]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mBuildMenuPriority = { "mBuildMenuPriority", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildDescriptor, mBuildMenuPriority), METADATA_PARAMS(Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mBuildMenuPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mBuildMenuPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mSubCategories_MetaData[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "Resources/FGBuildDescriptor.h" },
		{ "ToolTip", "The sub categories in the build menu for this building" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mSubCategories = { "mSubCategories", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildDescriptor, mSubCategories), METADATA_PARAMS(Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mSubCategories_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mSubCategories_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mSubCategories_Inner = { "mSubCategories", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGBuildSubCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mBuildCategory_MetaData[] = {
		{ "Category", "Build" },
		{ "ModuleRelativePath", "Resources/FGBuildDescriptor.h" },
		{ "ToolTip", "The category in the build menu for this building" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mBuildCategory = { "mBuildCategory", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildDescriptor, mBuildCategory), Z_Construct_UClass_UFGBuildCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mBuildCategory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mBuildCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGBuildDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mBuildMenuPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mSubCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mSubCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildDescriptor_Statics::NewProp_mBuildCategory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGBuildDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGBuildDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGBuildDescriptor_Statics::ClassParams = {
		&UFGBuildDescriptor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGBuildDescriptor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGBuildDescriptor_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGBuildDescriptor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGBuildDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGBuildDescriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGBuildDescriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGBuildDescriptor, 2523619103);
	template<> FACTORYGAME_API UClass* StaticClass<UFGBuildDescriptor>()
	{
		return UFGBuildDescriptor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGBuildDescriptor(Z_Construct_UClass_UFGBuildDescriptor, &UFGBuildDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGBuildDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGBuildDescriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
