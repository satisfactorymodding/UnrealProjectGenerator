// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildablePoweredWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildablePoweredWall() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildablePoweredWall_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildablePoweredWall();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableWall();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister();
// End Cross Module References
	static FName NAME_AFGBuildablePoweredWall_GetFoundationConnection = FName(TEXT("GetFoundationConnection"));
	UFGPowerConnectionComponent* AFGBuildablePoweredWall::GetFoundationConnection() const
	{
		FGBuildablePoweredWall_eventGetFoundationConnection_Parms Parms;
		const_cast<AFGBuildablePoweredWall*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFGBuildablePoweredWall_GetFoundationConnection),&Parms);
		return Parms.ReturnValue;
	}
	void AFGBuildablePoweredWall::StaticRegisterNativesAFGBuildablePoweredWall()
	{
	}
	struct Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGBuildablePoweredWall_eventGetFoundationConnection_Parms, ReturnValue), Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoweredWall" },
		{ "ModuleRelativePath", "Buildables/FGBuildablePoweredWall.h" },
		{ "ToolTip", "@return The hidden connection all buildings are supposed to connect to; otherwise nullptr, e.g. if not set up correcly." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildablePoweredWall, "GetFoundationConnection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48080800, sizeof(FGBuildablePoweredWall_eventGetFoundationConnection_Parms), Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildablePoweredWall_NoRegister()
	{
		return AFGBuildablePoweredWall::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildablePoweredWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildablePoweredWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableWall,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildablePoweredWall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildablePoweredWall_GetFoundationConnection, "GetFoundationConnection" }, // 523380483
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePoweredWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildablePoweredWall.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildablePoweredWall.h" },
		{ "ToolTip", "A wall with a power socket, provides the whole building with power." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildablePoweredWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildablePoweredWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildablePoweredWall_Statics::ClassParams = {
		&AFGBuildablePoweredWall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A5u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePoweredWall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePoweredWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildablePoweredWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildablePoweredWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildablePoweredWall, 3194884388);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildablePoweredWall(Z_Construct_UClass_AFGBuildablePoweredWall, &AFGBuildablePoweredWall::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildablePoweredWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildablePoweredWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
