// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGMapAreaZoneDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMapAreaZoneDescriptor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapAreaZoneDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapAreaZoneDescriptor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType();
// End Cross Module References
	void UFGMapAreaZoneDescriptor::StaticRegisterNativesUFGMapAreaZoneDescriptor()
	{
		UClass* Class = UFGMapAreaZoneDescriptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetZoneType", &UFGMapAreaZoneDescriptor::execGetZoneType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType_Statics
	{
		struct FGMapAreaZoneDescriptor_eventGetZoneType_Parms
		{
			FString out_zoneType;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_out_zoneType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType_Statics::NewProp_out_zoneType = { UE4CodeGen_Private::EPropertyClass::Str, "out_zoneType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGMapAreaZoneDescriptor_eventGetZoneType_Parms, out_zoneType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType_Statics::NewProp_out_zoneType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType_Statics::Function_MetaDataParams[] = {
		{ "Category", "MapAreaZone" },
		{ "ModuleRelativePath", "FGMapAreaZoneDescriptor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapAreaZoneDescriptor, "GetZoneType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(FGMapAreaZoneDescriptor_eventGetZoneType_Parms), Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMapAreaZoneDescriptor_NoRegister()
	{
		return UFGMapAreaZoneDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mZoneType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mZoneType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMapAreaZoneDescriptor_GetZoneType, "GetZoneType" }, // 4080582481
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGMapAreaZoneDescriptor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGMapAreaZoneDescriptor.h" },
		{ "ToolTip", "Used by different zones so that different zones can have different audio" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::NewProp_mZoneType_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "FGMapAreaZoneDescriptor.h" },
		{ "ToolTip", "Descriptive name of the zone type, this will be sent to music so that it can depend on it" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::NewProp_mZoneType = { UE4CodeGen_Private::EPropertyClass::Str, "mZoneType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGMapAreaZoneDescriptor, mZoneType), METADATA_PARAMS(Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::NewProp_mZoneType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::NewProp_mZoneType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::NewProp_mZoneType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMapAreaZoneDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::ClassParams = {
		&UFGMapAreaZoneDescriptor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMapAreaZoneDescriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMapAreaZoneDescriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMapAreaZoneDescriptor, 3563247040);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMapAreaZoneDescriptor(Z_Construct_UClass_UFGMapAreaZoneDescriptor, &UFGMapAreaZoneDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMapAreaZoneDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMapAreaZoneDescriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
