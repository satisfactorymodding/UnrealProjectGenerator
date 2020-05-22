// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Resources/FGEquipmentDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGEquipmentDescriptor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEquipmentDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGEquipmentDescriptor();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
// End Cross Module References
	void UFGEquipmentDescriptor::StaticRegisterNativesUFGEquipmentDescriptor()
	{
		UClass* Class = UFGEquipmentDescriptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEquipmentClass", &UFGEquipmentDescriptor::execGetEquipmentClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass_Statics
	{
		struct FGEquipmentDescriptor_eventGetEquipmentClass_Parms
		{
			TSubclassOf<UFGItemDescriptor>  inClass;
			TSubclassOf<AFGEquipment>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipmentDescriptor_eventGetEquipmentClass_Parms, ReturnValue), Z_Construct_UClass_AFGEquipment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipmentDescriptor_eventGetEquipmentClass_Parms, inClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Equipment" },
		{ "ModuleRelativePath", "Public/Resources/FGEquipmentDescriptor.h" },
		{ "ToolTip", "Get the equipment that is linked to this descriptor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGEquipmentDescriptor, nullptr, "GetEquipmentClass", sizeof(FGEquipmentDescriptor_eventGetEquipmentClass_Parms), Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGEquipmentDescriptor_NoRegister()
	{
		return UFGEquipmentDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UFGEquipmentDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEquipmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mEquipmentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGEquipmentDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGItemDescriptor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGEquipmentDescriptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGEquipmentDescriptor_GetEquipmentClass, "GetEquipmentClass" }, // 802535858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEquipmentDescriptor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGEquipmentDescriptor.h" },
		{ "ModuleRelativePath", "Public/Resources/FGEquipmentDescriptor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGEquipmentDescriptor_Statics::NewProp_mEquipmentClass_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Public/Resources/FGEquipmentDescriptor.h" },
		{ "ToolTip", "The equipment that is linked to this descriptor." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGEquipmentDescriptor_Statics::NewProp_mEquipmentClass = { "mEquipmentClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGEquipmentDescriptor, mEquipmentClass), Z_Construct_UClass_AFGEquipment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGEquipmentDescriptor_Statics::NewProp_mEquipmentClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGEquipmentDescriptor_Statics::NewProp_mEquipmentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGEquipmentDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGEquipmentDescriptor_Statics::NewProp_mEquipmentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGEquipmentDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGEquipmentDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGEquipmentDescriptor_Statics::ClassParams = {
		&UFGEquipmentDescriptor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGEquipmentDescriptor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGEquipmentDescriptor_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGEquipmentDescriptor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGEquipmentDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGEquipmentDescriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGEquipmentDescriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGEquipmentDescriptor, 3060365854);
	template<> FACTORYGAME_API UClass* StaticClass<UFGEquipmentDescriptor>()
	{
		return UFGEquipmentDescriptor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGEquipmentDescriptor(Z_Construct_UClass_UFGEquipmentDescriptor, &UFGEquipmentDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGEquipmentDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGEquipmentDescriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
