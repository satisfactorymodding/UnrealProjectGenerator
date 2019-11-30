// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGNobeliskDetonatorAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGNobeliskDetonatorAttachment() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGNobeliskDetonatorAttachment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGNobeliskDetonatorAttachment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponAttachment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_OnIsLoadedSet();
// End Cross Module References
	static FName NAME_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded = FName(TEXT("Multicast_SetIsLoaded"));
	void AFGNobeliskDetonatorAttachment::Multicast_SetIsLoaded(bool isLoaded)
	{
		FGNobeliskDetonatorAttachment_eventMulticast_SetIsLoaded_Parms Parms;
		Parms.isLoaded=isLoaded ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded),&Parms);
	}
	static FName NAME_AFGNobeliskDetonatorAttachment_OnIsLoadedSet = FName(TEXT("OnIsLoadedSet"));
	void AFGNobeliskDetonatorAttachment::OnIsLoadedSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGNobeliskDetonatorAttachment_OnIsLoadedSet),NULL);
	}
	void AFGNobeliskDetonatorAttachment::StaticRegisterNativesAFGNobeliskDetonatorAttachment()
	{
		UClass* Class = AFGNobeliskDetonatorAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_SetIsLoaded", &AFGNobeliskDetonatorAttachment::execMulticast_SetIsLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded_Statics
	{
		static void NewProp_isLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLoaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded_Statics::NewProp_isLoaded_SetBit(void* Obj)
	{
		((FGNobeliskDetonatorAttachment_eventMulticast_SetIsLoaded_Parms*)Obj)->isLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded_Statics::NewProp_isLoaded = { "isLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGNobeliskDetonatorAttachment_eventMulticast_SetIsLoaded_Parms), &Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded_Statics::NewProp_isLoaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded_Statics::NewProp_isLoaded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonatorAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskDetonatorAttachment, nullptr, "Multicast_SetIsLoaded", sizeof(FGNobeliskDetonatorAttachment_eventMulticast_SetIsLoaded_Parms), Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_OnIsLoadedSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_OnIsLoadedSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonatorAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_OnIsLoadedSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskDetonatorAttachment, nullptr, "OnIsLoadedSet", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_OnIsLoadedSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_OnIsLoadedSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_OnIsLoadedSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_OnIsLoadedSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGNobeliskDetonatorAttachment_NoRegister()
	{
		return AFGNobeliskDetonatorAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsLoaded_MetaData[];
#endif
		static void NewProp_mIsLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsLoaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGWeaponAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_Multicast_SetIsLoaded, "Multicast_SetIsLoaded" }, // 378077594
		{ &Z_Construct_UFunction_AFGNobeliskDetonatorAttachment_OnIsLoadedSet, "OnIsLoadedSet" }, // 2144805124
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGNobeliskDetonatorAttachment.h" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonatorAttachment.h" },
		{ "ToolTip", "Specialty Attachment class for handling the unique two-part behaviour of FGNobeliskDetonator Equipment.\nThis is the 3rd person attachment representing the FGWeapon : FGNobeliskDetonator" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::NewProp_mIsLoaded_MetaData[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonatorAttachment.h" },
	};
#endif
	void Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::NewProp_mIsLoaded_SetBit(void* Obj)
	{
		((AFGNobeliskDetonatorAttachment*)Obj)->mIsLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::NewProp_mIsLoaded = { "mIsLoaded", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGNobeliskDetonatorAttachment), &Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::NewProp_mIsLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::NewProp_mIsLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::NewProp_mIsLoaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::NewProp_mIsLoaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGNobeliskDetonatorAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::ClassParams = {
		&AFGNobeliskDetonatorAttachment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGNobeliskDetonatorAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGNobeliskDetonatorAttachment, 2931821250);
	template<> FACTORYGAME_API UClass* StaticClass<AFGNobeliskDetonatorAttachment>()
	{
		return AFGNobeliskDetonatorAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGNobeliskDetonatorAttachment(Z_Construct_UClass_AFGNobeliskDetonatorAttachment, &AFGNobeliskDetonatorAttachment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGNobeliskDetonatorAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGNobeliskDetonatorAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
