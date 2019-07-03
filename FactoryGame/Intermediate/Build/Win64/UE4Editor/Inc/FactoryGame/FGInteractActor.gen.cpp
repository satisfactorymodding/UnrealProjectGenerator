// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGInteractActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGInteractActor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGInteractActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGInteractActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGInteractActor_OnInteract();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseableInterface_NoRegister();
// End Cross Module References
	static FName NAME_AFGInteractActor_OnInteract = FName(TEXT("OnInteract"));
	void AFGInteractActor::OnInteract(AFGCharacterPlayer* byCharacter)
	{
		FGInteractActor_eventOnInteract_Parms Parms;
		Parms.byCharacter=byCharacter;
		ProcessEvent(FindFunctionChecked(NAME_AFGInteractActor_OnInteract),&Parms);
	}
	void AFGInteractActor::StaticRegisterNativesAFGInteractActor()
	{
	}
	struct Z_Construct_UFunction_AFGInteractActor_OnInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGInteractActor_OnInteract_Statics::NewProp_byCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "byCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGInteractActor_eventOnInteract_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGInteractActor_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGInteractActor_OnInteract_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGInteractActor_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGInteractActor.h" },
		{ "ToolTip", "Called when player interacts with this actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGInteractActor_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGInteractActor, "OnInteract", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGInteractActor_eventOnInteract_Parms), Z_Construct_UFunction_AFGInteractActor_OnInteract_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGInteractActor_OnInteract_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGInteractActor_OnInteract_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGInteractActor_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGInteractActor_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGInteractActor_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGInteractActor_NoRegister()
	{
		return AFGInteractActor::StaticClass();
	}
	struct Z_Construct_UClass_AFGInteractActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGInteractActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGInteractActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGInteractActor_OnInteract, "OnInteract" }, // 109116558
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGInteractActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGInteractActor.h" },
		{ "ModuleRelativePath", "FGInteractActor.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGInteractActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGUseableInterface_NoRegister, (int32)VTABLE_OFFSET(AFGInteractActor, IFGUseableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGInteractActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGInteractActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGInteractActor_Statics::ClassParams = {
		&AFGInteractActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGInteractActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGInteractActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGInteractActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGInteractActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGInteractActor, 2525395912);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGInteractActor(Z_Construct_UClass_AFGInteractActor, &AFGInteractActor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGInteractActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGInteractActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
