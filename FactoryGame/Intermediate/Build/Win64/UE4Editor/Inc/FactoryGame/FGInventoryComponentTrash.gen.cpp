// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGInventoryComponentTrash.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGInventoryComponentTrash() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponentTrash_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponentTrash();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
// End Cross Module References
	void UFGInventoryComponentTrash::StaticRegisterNativesUFGInventoryComponentTrash()
	{
		UClass* Class = UFGInventoryComponentTrash::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValidItem", &UFGInventoryComponentTrash::execIsValidItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics
	{
		struct FGInventoryComponentTrash_eventIsValidItem_Parms
		{
			TSubclassOf<UFGItemDescriptor>  resource;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_resource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGInventoryComponentTrash_eventIsValidItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGInventoryComponentTrash_eventIsValidItem_Parms), &Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::NewProp_resource = { UE4CodeGen_Private::EPropertyClass::Class, "resource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGInventoryComponentTrash_eventIsValidItem_Parms, resource), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::NewProp_resource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGInventoryComponentTrash.h" },
		{ "ToolTip", "Can item be trashed?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGInventoryComponentTrash, "IsValidItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x40040401, sizeof(FGInventoryComponentTrash_eventIsValidItem_Parms), Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGInventoryComponentTrash_NoRegister()
	{
		return UFGInventoryComponentTrash::StaticClass();
	}
	struct Z_Construct_UClass_UFGInventoryComponentTrash_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGInventoryComponentTrash_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGInventoryComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGInventoryComponentTrash_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGInventoryComponentTrash_IsValidItem, "IsValidItem" }, // 1646424147
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGInventoryComponentTrash_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGInventoryComponentTrash.h" },
		{ "ModuleRelativePath", "FGInventoryComponentTrash.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGInventoryComponentTrash_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGInventoryComponentTrash>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGInventoryComponentTrash_Statics::ClassParams = {
		&UFGInventoryComponentTrash::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGInventoryComponentTrash_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGInventoryComponentTrash_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGInventoryComponentTrash()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGInventoryComponentTrash_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGInventoryComponentTrash, 973344427);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGInventoryComponentTrash(Z_Construct_UClass_UFGInventoryComponentTrash, &UFGInventoryComponentTrash::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGInventoryComponentTrash"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGInventoryComponentTrash);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
