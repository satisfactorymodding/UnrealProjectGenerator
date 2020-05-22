// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Resources/FGBuildingDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildingDescriptor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildingDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildingDescriptor();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildDescriptor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass();
// End Cross Module References
	void UFGBuildingDescriptor::StaticRegisterNativesUFGBuildingDescriptor()
	{
		UClass* Class = UFGBuildingDescriptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBuildableClass", &UFGBuildingDescriptor::execGetBuildableClass },
			{ "GetPowerConsumption", &UFGBuildingDescriptor::execGetPowerConsumption },
			{ "GetPowerProduction", &UFGBuildingDescriptor::execGetPowerProduction },
#if WITH_EDITOR
			{ "SetBuildableClass", &UFGBuildingDescriptor::execSetBuildableClass },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics
	{
		struct FGBuildingDescriptor_eventGetBuildableClass_Parms
		{
			TSubclassOf<UFGBuildingDescriptor>  inClass;
			TSubclassOf<AFGBuildable>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildingDescriptor_eventGetBuildableClass_Parms, ReturnValue), Z_Construct_UClass_AFGBuildable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildingDescriptor_eventGetBuildableClass_Parms, inClass), Z_Construct_UClass_UFGBuildingDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Building" },
		{ "ModuleRelativePath", "Public/Resources/FGBuildingDescriptor.h" },
		{ "ToolTip", "Get the buildable class for this building descriptor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildingDescriptor, nullptr, "GetBuildableClass", sizeof(FGBuildingDescriptor_eventGetBuildableClass_Parms), Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics
	{
		struct FGBuildingDescriptor_eventGetPowerConsumption_Parms
		{
			TSubclassOf<UFGBuildingDescriptor>  inClass;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildingDescriptor_eventGetPowerConsumption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildingDescriptor_eventGetPowerConsumption_Parms, inClass), Z_Construct_UClass_UFGBuildingDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Building" },
		{ "ModuleRelativePath", "Public/Resources/FGBuildingDescriptor.h" },
		{ "ToolTip", "Get the the power consumption of buildable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildingDescriptor, nullptr, "GetPowerConsumption", sizeof(FGBuildingDescriptor_eventGetPowerConsumption_Parms), Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics
	{
		struct FGBuildingDescriptor_eventGetPowerProduction_Parms
		{
			TSubclassOf<UFGBuildingDescriptor>  inClass;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildingDescriptor_eventGetPowerProduction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildingDescriptor_eventGetPowerProduction_Parms, inClass), Z_Construct_UClass_UFGBuildingDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Building" },
		{ "ModuleRelativePath", "Public/Resources/FGBuildingDescriptor.h" },
		{ "ToolTip", "Get the the power production of buildable, 0 for non-producers." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildingDescriptor, nullptr, "GetPowerProduction", sizeof(FGBuildingDescriptor_eventGetPowerProduction_Parms), Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass_Statics
	{
		struct FGBuildingDescriptor_eventSetBuildableClass_Parms
		{
			TSubclassOf<UFGBuildingDescriptor>  inClass;
			TSubclassOf<AFGBuildable>  buildableClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_buildableClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass_Statics::NewProp_buildableClass = { "buildableClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildingDescriptor_eventSetBuildableClass_Parms, buildableClass), Z_Construct_UClass_AFGBuildable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildingDescriptor_eventSetBuildableClass_Parms, inClass), Z_Construct_UClass_UFGBuildingDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass_Statics::NewProp_buildableClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor|Descriptor|Building" },
		{ "ModuleRelativePath", "Public/Resources/FGBuildingDescriptor.h" },
		{ "ToolTip", "Sets the class this buidling descriptor builds. Only for editor use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildingDescriptor, nullptr, "SetBuildableClass", sizeof(FGBuildingDescriptor_eventSetBuildableClass_Parms), Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UFGBuildingDescriptor_NoRegister()
	{
		return UFGBuildingDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UFGBuildingDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mBuildableClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGBuildingDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGBuildDescriptor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGBuildingDescriptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGBuildingDescriptor_GetBuildableClass, "GetBuildableClass" }, // 3477844505
		{ &Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerConsumption, "GetPowerConsumption" }, // 2100266268
		{ &Z_Construct_UFunction_UFGBuildingDescriptor_GetPowerProduction, "GetPowerProduction" }, // 1327456695
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UFGBuildingDescriptor_SetBuildableClass, "SetBuildableClass" }, // 984989586
#endif //WITH_EDITOR
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildingDescriptor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGBuildingDescriptor.h" },
		{ "ModuleRelativePath", "Public/Resources/FGBuildingDescriptor.h" },
		{ "ToolTip", "Build descriptor for buildables." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildingDescriptor_Statics::NewProp_mBuildableClass_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/Resources/FGBuildingDescriptor.h" },
		{ "ToolTip", "The class to build." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGBuildingDescriptor_Statics::NewProp_mBuildableClass = { "mBuildableClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildingDescriptor, mBuildableClass), Z_Construct_UClass_AFGBuildable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGBuildingDescriptor_Statics::NewProp_mBuildableClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildingDescriptor_Statics::NewProp_mBuildableClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGBuildingDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildingDescriptor_Statics::NewProp_mBuildableClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGBuildingDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGBuildingDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGBuildingDescriptor_Statics::ClassParams = {
		&UFGBuildingDescriptor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGBuildingDescriptor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGBuildingDescriptor_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGBuildingDescriptor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGBuildingDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGBuildingDescriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGBuildingDescriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGBuildingDescriptor, 1311049775);
	template<> FACTORYGAME_API UClass* StaticClass<UFGBuildingDescriptor>()
	{
		return UFGBuildingDescriptor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGBuildingDescriptor(Z_Construct_UClass_UFGBuildingDescriptor, &UFGBuildingDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGBuildingDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGBuildingDescriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
