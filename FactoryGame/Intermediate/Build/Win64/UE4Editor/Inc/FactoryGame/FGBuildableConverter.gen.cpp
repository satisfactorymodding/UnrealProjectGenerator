// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableConverter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableConverter() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConverter_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConverter();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableManufacturer();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableConverter_SetupItemFilter();
// End Cross Module References
	void AFGBuildableConverter::StaticRegisterNativesAFGBuildableConverter()
	{
		UClass* Class = AFGBuildableConverter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FilterIngredientClasses", &AFGBuildableConverter::execFilterIngredientClasses },
			{ "GetNumberOfInputs", &AFGBuildableConverter::execGetNumberOfInputs },
			{ "SetupItemFilter", &AFGBuildableConverter::execSetupItemFilter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics
	{
		struct FGBuildableConverter_eventFilterIngredientClasses_Parms
		{
			TSubclassOf<UObject>  object;
			int32 idx;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_idx;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableConverter_eventFilterIngredientClasses_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildableConverter_eventFilterIngredientClasses_Parms), &Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::NewProp_idx = { "idx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableConverter_eventFilterIngredientClasses_Parms, idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableConverter_eventFilterIngredientClasses_Parms, object), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::NewProp_idx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::NewProp_object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConverter.h" },
		{ "ToolTip", "Bound to mItemFilter to filter what items can be used in the item slots." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableConverter, nullptr, "FilterIngredientClasses", sizeof(FGBuildableConverter_eventFilterIngredientClasses_Parms), Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs_Statics
	{
		struct FGBuildableConverter_eventGetNumberOfInputs_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableConverter_eventGetNumberOfInputs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Converter" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConverter.h" },
		{ "ToolTip", "@todo Converter can maybe use a recipe with the wildcard resource so the UI does not need to cast and take different path depending on if it's a converter or manufacturer, or move this to base.\nGet number of input connections" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableConverter, nullptr, "GetNumberOfInputs", sizeof(FGBuildableConverter_eventGetNumberOfInputs_Parms), Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableConverter_SetupItemFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableConverter_SetupItemFilter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConverter.h" },
		{ "ToolTip", "Setups the item filter without crashing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableConverter_SetupItemFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableConverter, nullptr, "SetupItemFilter", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableConverter_SetupItemFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableConverter_SetupItemFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableConverter_SetupItemFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableConverter_SetupItemFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableConverter_NoRegister()
	{
		return AFGBuildableConverter::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableConverter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNumberOfIngredientsNeeded_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mNumberOfIngredientsNeeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableConverter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableManufacturer,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableConverter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableConverter_FilterIngredientClasses, "FilterIngredientClasses" }, // 3936740323
		{ &Z_Construct_UFunction_AFGBuildableConverter_GetNumberOfInputs, "GetNumberOfInputs" }, // 2975806410
		{ &Z_Construct_UFunction_AFGBuildableConverter_SetupItemFilter, "SetupItemFilter" }, // 3484300764
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConverter_Statics::Class_MetaDataParams[] = {
		{ "AutoJson", "FALSE" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Buildables/FGBuildableConverter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConverter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConverter_Statics::NewProp_mNumberOfIngredientsNeeded_MetaData[] = {
		{ "Category", "Converter" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableConverter.h" },
		{ "ToolTip", "Number of ingredients needed to consume to produce" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableConverter_Statics::NewProp_mNumberOfIngredientsNeeded = { "mNumberOfIngredientsNeeded", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableConverter, mNumberOfIngredientsNeeded), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConverter_Statics::NewProp_mNumberOfIngredientsNeeded_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConverter_Statics::NewProp_mNumberOfIngredientsNeeded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableConverter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConverter_Statics::NewProp_mNumberOfIngredientsNeeded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableConverter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableConverter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableConverter_Statics::ClassParams = {
		&AFGBuildableConverter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableConverter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConverter_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConverter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConverter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableConverter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableConverter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableConverter, 2060893242);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableConverter>()
	{
		return AFGBuildableConverter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableConverter(Z_Construct_UClass_AFGBuildableConverter, &AFGBuildableConverter::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableConverter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableConverter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
