// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGCameraModifierLimitLook.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCameraModifierLimitLook() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCameraModifierLimitLook_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCameraModifierLimitLook();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator();
// End Cross Module References
	void UFGCameraModifierLimitLook::StaticRegisterNativesUFGCameraModifierLimitLook()
	{
		UClass* Class = UFGCameraModifierLimitLook::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultLookRotator", &UFGCameraModifierLimitLook::execGetDefaultLookRotator },
			{ "SetDefaultLookRotator", &UFGCameraModifierLimitLook::execSetDefaultLookRotator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator_Statics
	{
		struct FGCameraModifierLimitLook_eventGetDefaultLookRotator_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCameraModifierLimitLook_eventGetDefaultLookRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Limited Look" },
		{ "ModuleRelativePath", "Public/FGCameraModifierLimitLook.h" },
		{ "ToolTip", "Gets the default rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCameraModifierLimitLook, "GetDefaultLookRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(FGCameraModifierLimitLook_eventGetDefaultLookRotator_Parms), Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator_Statics
	{
		struct FGCameraModifierLimitLook_eventSetDefaultLookRotator_Parms
		{
			FRotator inRotator;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator_Statics::NewProp_inRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "inRotator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCameraModifierLimitLook_eventSetDefaultLookRotator_Parms, inRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator_Statics::NewProp_inRotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Limited Look" },
		{ "ModuleRelativePath", "Public/FGCameraModifierLimitLook.h" },
		{ "ToolTip", "Sets the default rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCameraModifierLimitLook, "SetDefaultLookRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGCameraModifierLimitLook_eventSetDefaultLookRotator_Parms), Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGCameraModifierLimitLook_NoRegister()
	{
		return UFGCameraModifierLimitLook::StaticClass();
	}
	struct Z_Construct_UClass_UFGCameraModifierLimitLook_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxPitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGCameraModifierLimitLook_GetDefaultLookRotator, "GetDefaultLookRotator" }, // 1582478347
		{ &Z_Construct_UFunction_UFGCameraModifierLimitLook_SetDefaultLookRotator, "SetDefaultLookRotator" }, // 386575734
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGCameraModifierLimitLook.h" },
		{ "ModuleRelativePath", "Public/FGCameraModifierLimitLook.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::NewProp_mMaxYaw_MetaData[] = {
		{ "Category", "Limited Look" },
		{ "ModuleRelativePath", "Public/FGCameraModifierLimitLook.h" },
		{ "ToolTip", "The max rotation in yaw ( abs value )" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::NewProp_mMaxYaw = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGCameraModifierLimitLook, mMaxYaw), METADATA_PARAMS(Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::NewProp_mMaxYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::NewProp_mMaxYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::NewProp_mMaxPitch_MetaData[] = {
		{ "Category", "Limited Look" },
		{ "ModuleRelativePath", "Public/FGCameraModifierLimitLook.h" },
		{ "ToolTip", "The max rotation in pitch ( abs value )" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::NewProp_mMaxPitch = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGCameraModifierLimitLook, mMaxPitch), METADATA_PARAMS(Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::NewProp_mMaxPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::NewProp_mMaxPitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::NewProp_mMaxYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::NewProp_mMaxPitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGCameraModifierLimitLook>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::ClassParams = {
		&UFGCameraModifierLimitLook::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGCameraModifierLimitLook()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGCameraModifierLimitLook_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGCameraModifierLimitLook, 424967346);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGCameraModifierLimitLook(Z_Construct_UClass_UFGCameraModifierLimitLook, &UFGCameraModifierLimitLook::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGCameraModifierLimitLook"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGCameraModifierLimitLook);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
