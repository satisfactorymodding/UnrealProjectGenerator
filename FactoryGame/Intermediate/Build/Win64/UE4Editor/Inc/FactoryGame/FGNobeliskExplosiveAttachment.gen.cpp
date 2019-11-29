// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGNobeliskExplosiveAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGNobeliskExplosiveAttachment() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGNobeliskExplosiveAttachment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGNobeliskExplosiveAttachment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponAttachment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnIsLoadedSet();
// End Cross Module References
	static FName NAME_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect = FName(TEXT("Multicast_PlayBeginFireEffect"));
	void AFGNobeliskExplosiveAttachment::Multicast_PlayBeginFireEffect(FVector const& location)
	{
		FGNobeliskExplosiveAttachment_eventMulticast_PlayBeginFireEffect_Parms Parms;
		Parms.location=location;
		ProcessEvent(FindFunctionChecked(NAME_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect),&Parms);
	}
	static FName NAME_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded = FName(TEXT("Multicast_SetIsLoaded"));
	void AFGNobeliskExplosiveAttachment::Multicast_SetIsLoaded(bool isLoaded)
	{
		FGNobeliskExplosiveAttachment_eventMulticast_SetIsLoaded_Parms Parms;
		Parms.isLoaded=isLoaded ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded),&Parms);
	}
	static FName NAME_AFGNobeliskExplosiveAttachment_OnBeginFireEffect = FName(TEXT("OnBeginFireEffect"));
	void AFGNobeliskExplosiveAttachment::OnBeginFireEffect(FVector location)
	{
		FGNobeliskExplosiveAttachment_eventOnBeginFireEffect_Parms Parms;
		Parms.location=location;
		ProcessEvent(FindFunctionChecked(NAME_AFGNobeliskExplosiveAttachment_OnBeginFireEffect),&Parms);
	}
	static FName NAME_AFGNobeliskExplosiveAttachment_OnIsLoadedSet = FName(TEXT("OnIsLoadedSet"));
	void AFGNobeliskExplosiveAttachment::OnIsLoadedSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGNobeliskExplosiveAttachment_OnIsLoadedSet),NULL);
	}
	void AFGNobeliskExplosiveAttachment::StaticRegisterNativesAFGNobeliskExplosiveAttachment()
	{
		UClass* Class = AFGNobeliskExplosiveAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_PlayBeginFireEffect", &AFGNobeliskExplosiveAttachment::execMulticast_PlayBeginFireEffect },
			{ "Multicast_SetIsLoaded", &AFGNobeliskExplosiveAttachment::execMulticast_SetIsLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGNobeliskExplosiveAttachment_eventMulticast_PlayBeginFireEffect_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics::NewProp_location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "FGNobeliskExplosiveAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskExplosiveAttachment, nullptr, "Multicast_PlayBeginFireEffect", sizeof(FGNobeliskExplosiveAttachment_eventMulticast_PlayBeginFireEffect_Parms), Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded_Statics
	{
		static void NewProp_isLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLoaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded_Statics::NewProp_isLoaded_SetBit(void* Obj)
	{
		((FGNobeliskExplosiveAttachment_eventMulticast_SetIsLoaded_Parms*)Obj)->isLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded_Statics::NewProp_isLoaded = { "isLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGNobeliskExplosiveAttachment_eventMulticast_SetIsLoaded_Parms), &Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded_Statics::NewProp_isLoaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded_Statics::NewProp_isLoaded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "FGNobeliskExplosiveAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskExplosiveAttachment, nullptr, "Multicast_SetIsLoaded", sizeof(FGNobeliskExplosiveAttachment_eventMulticast_SetIsLoaded_Parms), Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGNobeliskExplosiveAttachment_eventOnBeginFireEffect_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "FGNobeliskExplosiveAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskExplosiveAttachment, nullptr, "OnBeginFireEffect", sizeof(FGNobeliskExplosiveAttachment_eventOnBeginFireEffect_Parms), Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnIsLoadedSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnIsLoadedSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "FGNobeliskExplosiveAttachment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnIsLoadedSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskExplosiveAttachment, nullptr, "OnIsLoadedSet", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnIsLoadedSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnIsLoadedSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnIsLoadedSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnIsLoadedSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGNobeliskExplosiveAttachment_NoRegister()
	{
		return AFGNobeliskExplosiveAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics
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
	UObject* (*const Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGWeaponAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_PlayBeginFireEffect, "Multicast_PlayBeginFireEffect" }, // 672969849
		{ &Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_Multicast_SetIsLoaded, "Multicast_SetIsLoaded" }, // 2698246752
		{ &Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnBeginFireEffect, "OnBeginFireEffect" }, // 1249452527
		{ &Z_Construct_UFunction_AFGNobeliskExplosiveAttachment_OnIsLoadedSet, "OnIsLoadedSet" }, // 1460136484
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGNobeliskExplosiveAttachment.h" },
		{ "ModuleRelativePath", "FGNobeliskExplosiveAttachment.h" },
		{ "ToolTip", "Specialty Attachment class for handling the unique two-part behaviour of FGNobeliskDetonator Equipment.\nThis is the 3rd person attachment representing the FGWeaponChild of FGNobeliskDetonator Explosive" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::NewProp_mIsLoaded_MetaData[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "FGNobeliskExplosiveAttachment.h" },
	};
#endif
	void Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::NewProp_mIsLoaded_SetBit(void* Obj)
	{
		((AFGNobeliskExplosiveAttachment*)Obj)->mIsLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::NewProp_mIsLoaded = { "mIsLoaded", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGNobeliskExplosiveAttachment), &Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::NewProp_mIsLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::NewProp_mIsLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::NewProp_mIsLoaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::NewProp_mIsLoaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGNobeliskExplosiveAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::ClassParams = {
		&AFGNobeliskExplosiveAttachment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGNobeliskExplosiveAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGNobeliskExplosiveAttachment, 3699915562);
	template<> FACTORYGAME_API UClass* StaticClass<AFGNobeliskExplosiveAttachment>()
	{
		return AFGNobeliskExplosiveAttachment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGNobeliskExplosiveAttachment(Z_Construct_UClass_AFGNobeliskExplosiveAttachment, &AFGNobeliskExplosiveAttachment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGNobeliskExplosiveAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGNobeliskExplosiveAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
