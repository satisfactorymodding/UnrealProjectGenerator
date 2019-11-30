// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGBuildCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildCategory() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildCategory_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildCategory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildCategory_GetCategoryName();
// End Cross Module References
	void UFGBuildCategory::StaticRegisterNativesUFGBuildCategory()
	{
		UClass* Class = UFGBuildCategory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCategoryIcon", &UFGBuildCategory::execGetCategoryIcon },
			{ "GetCategoryName", &UFGBuildCategory::execGetCategoryName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon_Statics
	{
		struct FGBuildCategory_eventGetCategoryIcon_Parms
		{
			TSubclassOf<UFGBuildCategory>  inClass;
			FSlateBrush ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildCategory_eventGetCategoryIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildCategory_eventGetCategoryIcon_Parms, inClass), Z_Construct_UClass_UFGBuildCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build Category" },
		{ "ModuleRelativePath", "Public/FGBuildCategory.h" },
		{ "ToolTip", "Get the icon for a category" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildCategory, nullptr, "GetCategoryIcon", sizeof(FGBuildCategory_eventGetCategoryIcon_Parms), Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildCategory_GetCategoryName_Statics
	{
		struct FGBuildCategory_eventGetCategoryName_Parms
		{
			TSubclassOf<UFGBuildCategory>  inClass;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGBuildCategory_GetCategoryName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildCategory_eventGetCategoryName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildCategory_GetCategoryName_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildCategory_eventGetCategoryName_Parms, inClass), Z_Construct_UClass_UFGBuildCategory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildCategory_GetCategoryName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildCategory_GetCategoryName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildCategory_GetCategoryName_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildCategory_GetCategoryName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Build Category" },
		{ "ModuleRelativePath", "Public/FGBuildCategory.h" },
		{ "ToolTip", "Used to get the mDisplayName in blueprint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildCategory_GetCategoryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildCategory, nullptr, "GetCategoryName", sizeof(FGBuildCategory_eventGetCategoryName_Parms), Z_Construct_UFunction_UFGBuildCategory_GetCategoryName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildCategory_GetCategoryName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildCategory_GetCategoryName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildCategory_GetCategoryName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildCategory_GetCategoryName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildCategory_GetCategoryName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGBuildCategory_NoRegister()
	{
		return UFGBuildCategory::StaticClass();
	}
	struct Z_Construct_UClass_UFGBuildCategory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCategoryIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCategoryIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mDisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGBuildCategory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGBuildCategory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGBuildCategory_GetCategoryIcon, "GetCategoryIcon" }, // 1637038832
		{ &Z_Construct_UFunction_UFGBuildCategory_GetCategoryName, "GetCategoryName" }, // 3695062889
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildCategory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGBuildCategory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGBuildCategory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildCategory_Statics::NewProp_mCategoryIcon_MetaData[] = {
		{ "Category", "Build Category" },
		{ "ModuleRelativePath", "Public/FGBuildCategory.h" },
		{ "ToolTip", "Icon for the category" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGBuildCategory_Statics::NewProp_mCategoryIcon = { "mCategoryIcon", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildCategory, mCategoryIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UFGBuildCategory_Statics::NewProp_mCategoryIcon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildCategory_Statics::NewProp_mCategoryIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildCategory_Statics::NewProp_mDisplayName_MetaData[] = {
		{ "Category", "Build Category" },
		{ "ModuleRelativePath", "Public/FGBuildCategory.h" },
		{ "ToolTip", "Name of this build category" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGBuildCategory_Statics::NewProp_mDisplayName = { "mDisplayName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildCategory, mDisplayName), METADATA_PARAMS(Z_Construct_UClass_UFGBuildCategory_Statics::NewProp_mDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildCategory_Statics::NewProp_mDisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGBuildCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildCategory_Statics::NewProp_mCategoryIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildCategory_Statics::NewProp_mDisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGBuildCategory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGBuildCategory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGBuildCategory_Statics::ClassParams = {
		&UFGBuildCategory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGBuildCategory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGBuildCategory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGBuildCategory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGBuildCategory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGBuildCategory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGBuildCategory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGBuildCategory, 1023031877);
	template<> FACTORYGAME_API UClass* StaticClass<UFGBuildCategory>()
	{
		return UFGBuildCategory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGBuildCategory(Z_Construct_UClass_UFGBuildCategory, &UFGBuildCategory::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGBuildCategory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGBuildCategory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
