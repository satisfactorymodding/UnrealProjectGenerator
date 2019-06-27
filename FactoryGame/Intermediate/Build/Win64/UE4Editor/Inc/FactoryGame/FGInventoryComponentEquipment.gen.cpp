// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGInventoryComponentEquipment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGInventoryComponentEquipment() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponentEquipment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponentEquipment();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EEquipmentSlot();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment_NoRegister();
// End Cross Module References
	void UFGInventoryComponentEquipment::StaticRegisterNativesUFGInventoryComponentEquipment()
	{
		UClass* Class = UFGInventoryComponentEquipment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveIndex", &UFGInventoryComponentEquipment::execGetActiveIndex },
			{ "GetEquipmentSlotEnum", &UFGInventoryComponentEquipment::execGetEquipmentSlotEnum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex_Statics
	{
		struct FGInventoryComponentEquipment_eventGetActiveIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInventoryComponentEquipment_eventGetActiveIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "FGInventoryComponentEquipment.h" },
		{ "ToolTip", "Returns the EEquipmentSlost for this inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponentEquipment, "GetActiveIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGInventoryComponentEquipment_eventGetActiveIndex_Parms), Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum_Statics
	{
		struct FGInventoryComponentEquipment_eventGetEquipmentSlotEnum_Parms
		{
			EEquipmentSlot ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGInventoryComponentEquipment_eventGetEquipmentSlotEnum_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EEquipmentSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "FGInventoryComponentEquipment.h" },
		{ "ToolTip", "Returns the EEquipmentSlost for this inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponentEquipment, "GetEquipmentSlotEnum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGInventoryComponentEquipment_eventGetEquipmentSlotEnum_Parms), Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGInventoryComponentEquipment_NoRegister()
	{
		return UFGInventoryComponentEquipment::StaticClass();
	}
	struct Z_Construct_UClass_UFGInventoryComponentEquipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActiveEquipmentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mActiveEquipmentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEquipmentInventorySlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mEquipmentInventorySlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mEquipmentInventorySlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEquipmentInSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mEquipmentInSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOverrideEquipmentInSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOverrideEquipmentInSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGInventoryComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGInventoryComponentEquipment_GetActiveIndex, "GetActiveIndex" }, // 4055828790
		{ &Z_Construct_UFunction_UFGInventoryComponentEquipment_GetEquipmentSlotEnum, "GetEquipmentSlotEnum" }, // 1723625032
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGInventoryComponentEquipment.h" },
		{ "ModuleRelativePath", "FGInventoryComponentEquipment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mActiveEquipmentIndex_MetaData[] = {
		{ "ModuleRelativePath", "FGInventoryComponentEquipment.h" },
		{ "ToolTip", "Index of the active equipment" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mActiveEquipmentIndex = { UE4CodeGen_Private::EPropertyClass::Int, "mActiveEquipmentIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(UFGInventoryComponentEquipment, mActiveEquipmentIndex), METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mActiveEquipmentIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mActiveEquipmentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mEquipmentInventorySlot_MetaData[] = {
		{ "ModuleRelativePath", "FGInventoryComponentEquipment.h" },
		{ "ToolTip", "This inventory will only accept equipments that are supposed to be on this slot" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mEquipmentInventorySlot = { UE4CodeGen_Private::EPropertyClass::Enum, "mEquipmentInventorySlot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(UFGInventoryComponentEquipment, mEquipmentInventorySlot), Z_Construct_UEnum_FactoryGame_EEquipmentSlot, METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mEquipmentInventorySlot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mEquipmentInventorySlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mEquipmentInventorySlot_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mEquipmentInSlot_MetaData[] = {
		{ "ModuleRelativePath", "FGInventoryComponentEquipment.h" },
		{ "ToolTip", "This is the actual equipment in the slot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mEquipmentInSlot = { UE4CodeGen_Private::EPropertyClass::Object, "mEquipmentInSlot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(UFGInventoryComponentEquipment, mEquipmentInSlot), Z_Construct_UClass_AFGEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mEquipmentInSlot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mEquipmentInSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mOverrideEquipmentInSlot_MetaData[] = {
		{ "ModuleRelativePath", "FGInventoryComponentEquipment.h" },
		{ "ToolTip", "If the equipment in the slot has been overridden, this is the equipment.\nNo need to save this, the kinds of equipments that are placed here are not good candidates for saving (e.g. build gun)\nNo need to replicate, this is simulated locally on the client." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mOverrideEquipmentInSlot = { UE4CodeGen_Private::EPropertyClass::Object, "mOverrideEquipmentInSlot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGInventoryComponentEquipment, mOverrideEquipmentInSlot), Z_Construct_UClass_AFGEquipment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mOverrideEquipmentInSlot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mOverrideEquipmentInSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mActiveEquipmentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mEquipmentInventorySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mEquipmentInventorySlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mEquipmentInSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::NewProp_mOverrideEquipmentInSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGInventoryComponentEquipment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::ClassParams = {
		&UFGInventoryComponentEquipment::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGInventoryComponentEquipment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGInventoryComponentEquipment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGInventoryComponentEquipment, 2075548410);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGInventoryComponentEquipment(Z_Construct_UClass_UFGInventoryComponentEquipment, &UFGInventoryComponentEquipment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGInventoryComponentEquipment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGInventoryComponentEquipment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
