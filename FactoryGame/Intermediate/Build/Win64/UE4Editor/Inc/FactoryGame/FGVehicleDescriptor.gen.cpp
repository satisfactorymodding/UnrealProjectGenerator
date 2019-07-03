// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Resources/FGVehicleDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGVehicleDescriptor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGVehicleDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGVehicleDescriptor();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildDescriptor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVehicle_NoRegister();
// End Cross Module References
	void UFGVehicleDescriptor::StaticRegisterNativesUFGVehicleDescriptor()
	{
		UClass* Class = UFGVehicleDescriptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVehicleClass", &UFGVehicleDescriptor::execGetVehicleClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass_Statics
	{
		struct FGVehicleDescriptor_eventGetVehicleClass_Parms
		{
			TSubclassOf<UFGVehicleDescriptor>  inClass;
			TSubclassOf<AFGVehicle>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGVehicleDescriptor_eventGetVehicleClass_Parms, ReturnValue), Z_Construct_UClass_AFGVehicle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGVehicleDescriptor_eventGetVehicleClass_Parms, inClass), Z_Construct_UClass_UFGVehicleDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Vehicle" },
		{ "ModuleRelativePath", "Resources/FGVehicleDescriptor.h" },
		{ "ToolTip", "Get the vehicle class for this descriptor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGVehicleDescriptor, "GetVehicleClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGVehicleDescriptor_eventGetVehicleClass_Parms), Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGVehicleDescriptor_NoRegister()
	{
		return UFGVehicleDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UFGVehicleDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mVehicleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mVehicleClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGVehicleDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGBuildDescriptor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGVehicleDescriptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGVehicleDescriptor_GetVehicleClass, "GetVehicleClass" }, // 799707981
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleDescriptor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGVehicleDescriptor.h" },
		{ "ModuleRelativePath", "Resources/FGVehicleDescriptor.h" },
		{ "ToolTip", "Build descriptor for vehicles." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleDescriptor_Statics::NewProp_mVehicleClass_MetaData[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Resources/FGVehicleDescriptor.h" },
		{ "ToolTip", "The vehicle this descriptor describes." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGVehicleDescriptor_Statics::NewProp_mVehicleClass = { UE4CodeGen_Private::EPropertyClass::Class, "mVehicleClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(UFGVehicleDescriptor, mVehicleClass), Z_Construct_UClass_AFGVehicle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGVehicleDescriptor_Statics::NewProp_mVehicleClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleDescriptor_Statics::NewProp_mVehicleClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGVehicleDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVehicleDescriptor_Statics::NewProp_mVehicleClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGVehicleDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGVehicleDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGVehicleDescriptor_Statics::ClassParams = {
		&UFGVehicleDescriptor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGVehicleDescriptor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleDescriptor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGVehicleDescriptor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGVehicleDescriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGVehicleDescriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGVehicleDescriptor, 3053143550);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGVehicleDescriptor(Z_Construct_UClass_UFGVehicleDescriptor, &UFGVehicleDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGVehicleDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGVehicleDescriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
