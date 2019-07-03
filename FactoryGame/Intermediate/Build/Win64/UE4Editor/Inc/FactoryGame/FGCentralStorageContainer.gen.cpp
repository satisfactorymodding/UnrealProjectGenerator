// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGCentralStorageContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCentralStorageContainer() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCentralStorageContainer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCentralStorageContainer();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableStorage();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCentralStorageContainer_AddToCentralStorageSubsystem();
// End Cross Module References
	void AFGCentralStorageContainer::StaticRegisterNativesAFGCentralStorageContainer()
	{
		UClass* Class = AFGCentralStorageContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToCentralStorageSubsystem", &AFGCentralStorageContainer::execAddToCentralStorageSubsystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGCentralStorageContainer_AddToCentralStorageSubsystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCentralStorageContainer_AddToCentralStorageSubsystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGCentralStorageContainer.h" },
		{ "ToolTip", "Recalled if the storage subsystem isn't created" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCentralStorageContainer_AddToCentralStorageSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCentralStorageContainer, "AddToCentralStorageSubsystem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCentralStorageContainer_AddToCentralStorageSubsystem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCentralStorageContainer_AddToCentralStorageSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCentralStorageContainer_AddToCentralStorageSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCentralStorageContainer_AddToCentralStorageSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGCentralStorageContainer_NoRegister()
	{
		return AFGCentralStorageContainer::StaticClass();
	}
	struct Z_Construct_UClass_AFGCentralStorageContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGCentralStorageContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableStorage,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGCentralStorageContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGCentralStorageContainer_AddToCentralStorageSubsystem, "AddToCentralStorageSubsystem" }, // 1328224403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCentralStorageContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGCentralStorageContainer.h" },
		{ "ModuleRelativePath", "Buildables/FGCentralStorageContainer.h" },
		{ "ToolTip", "Storage container connected to the central storage interface." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGCentralStorageContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGCentralStorageContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGCentralStorageContainer_Statics::ClassParams = {
		&AFGCentralStorageContainer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGCentralStorageContainer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGCentralStorageContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGCentralStorageContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGCentralStorageContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGCentralStorageContainer, 141070704);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGCentralStorageContainer(Z_Construct_UClass_AFGCentralStorageContainer, &AFGCentralStorageContainer::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGCentralStorageContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGCentralStorageContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
