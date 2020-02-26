// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Resources/FGItemDescriptorNuclearFuel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGItemDescriptorNuclearFuel() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptorNuclearFuel_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptorNuclearFuel();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
// End Cross Module References
	void UFGItemDescriptorNuclearFuel::StaticRegisterNativesUFGItemDescriptorNuclearFuel()
	{
		UClass* Class = UFGItemDescriptorNuclearFuel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAmountWasteCreated", &UFGItemDescriptorNuclearFuel::execGetAmountWasteCreated },
			{ "GetSpentFuelClass", &UFGItemDescriptorNuclearFuel::execGetSpentFuelClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated_Statics
	{
		struct FGItemDescriptorNuclearFuel_eventGetAmountWasteCreated_Parms
		{
			TSubclassOf<UFGItemDescriptorNuclearFuel>  inClass;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptorNuclearFuel_eventGetAmountWasteCreated_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptorNuclearFuel_eventGetAmountWasteCreated_Parms, inClass), Z_Construct_UClass_UFGItemDescriptorNuclearFuel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|NuclearFuel" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptorNuclearFuel.h" },
		{ "ToolTip", "@return The amount of waste to create" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptorNuclearFuel, nullptr, "GetAmountWasteCreated", sizeof(FGItemDescriptorNuclearFuel_eventGetAmountWasteCreated_Parms), Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass_Statics
	{
		struct FGItemDescriptorNuclearFuel_eventGetSpentFuelClass_Parms
		{
			TSubclassOf<UFGItemDescriptorNuclearFuel>  inClass;
			TSubclassOf<UFGItemDescriptor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptorNuclearFuel_eventGetSpentFuelClass_Parms, ReturnValue), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemDescriptorNuclearFuel_eventGetSpentFuelClass_Parms, inClass), Z_Construct_UClass_UFGItemDescriptorNuclearFuel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|NuclearFuel" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptorNuclearFuel.h" },
		{ "ToolTip", "@return The descriptor to use when the fuel is removed from the reactor (waste)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGItemDescriptorNuclearFuel, nullptr, "GetSpentFuelClass", sizeof(FGItemDescriptorNuclearFuel_eventGetSpentFuelClass_Parms), Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGItemDescriptorNuclearFuel_NoRegister()
	{
		return UFGItemDescriptorNuclearFuel::StaticClass();
	}
	struct Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAmountOfWaste_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mAmountOfWaste;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpentFuelClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mSpentFuelClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGItemDescriptor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetAmountWasteCreated, "GetAmountWasteCreated" }, // 818660317
		{ &Z_Construct_UFunction_UFGItemDescriptorNuclearFuel_GetSpentFuelClass, "GetSpentFuelClass" }, // 1416512160
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGItemDescriptorNuclearFuel.h" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptorNuclearFuel.h" },
		{ "ToolTip", "Base descriptor for nuclear fuel." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::NewProp_mAmountOfWaste_MetaData[] = {
		{ "Category", "Nuclear Fuel" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptorNuclearFuel.h" },
		{ "ToolTip", "How much waste to produce" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::NewProp_mAmountOfWaste = { "mAmountOfWaste", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptorNuclearFuel, mAmountOfWaste), METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::NewProp_mAmountOfWaste_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::NewProp_mAmountOfWaste_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::NewProp_mSpentFuelClass_MetaData[] = {
		{ "Category", "Nuclear Fuel" },
		{ "ModuleRelativePath", "Public/Resources/FGItemDescriptorNuclearFuel.h" },
		{ "ToolTip", "The descriptor to use when the fuel is removed from the reactor (waste)." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::NewProp_mSpentFuelClass = { "mSpentFuelClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGItemDescriptorNuclearFuel, mSpentFuelClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::NewProp_mSpentFuelClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::NewProp_mSpentFuelClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::NewProp_mAmountOfWaste,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::NewProp_mSpentFuelClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGItemDescriptorNuclearFuel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::ClassParams = {
		&UFGItemDescriptorNuclearFuel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGItemDescriptorNuclearFuel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGItemDescriptorNuclearFuel, 3910260857);
	template<> FACTORYGAME_API UClass* StaticClass<UFGItemDescriptorNuclearFuel>()
	{
		return UFGItemDescriptorNuclearFuel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGItemDescriptorNuclearFuel(Z_Construct_UClass_UFGItemDescriptorNuclearFuel, &UFGItemDescriptorNuclearFuel::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGItemDescriptorNuclearFuel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGItemDescriptorNuclearFuel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
