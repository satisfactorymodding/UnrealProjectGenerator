// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGWeaponChild.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWeaponChild() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponChild_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponChild();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentChild();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyBeginPrimaryFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyBeginSecondaryFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyEndPrimaryFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyEndSecondaryFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyFailedToFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyPrimaryFireExecuted();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyReloadComplete();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyReloading();
// End Cross Module References
	static FName NAME_AFGWeaponChild_NotifyBeginPrimaryFire = FName(TEXT("NotifyBeginPrimaryFire"));
	void AFGWeaponChild::NotifyBeginPrimaryFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponChild_NotifyBeginPrimaryFire),NULL);
	}
	static FName NAME_AFGWeaponChild_NotifyBeginSecondaryFire = FName(TEXT("NotifyBeginSecondaryFire"));
	void AFGWeaponChild::NotifyBeginSecondaryFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponChild_NotifyBeginSecondaryFire),NULL);
	}
	static FName NAME_AFGWeaponChild_NotifyEndPrimaryFire = FName(TEXT("NotifyEndPrimaryFire"));
	void AFGWeaponChild::NotifyEndPrimaryFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponChild_NotifyEndPrimaryFire),NULL);
	}
	static FName NAME_AFGWeaponChild_NotifyEndSecondaryFire = FName(TEXT("NotifyEndSecondaryFire"));
	void AFGWeaponChild::NotifyEndSecondaryFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponChild_NotifyEndSecondaryFire),NULL);
	}
	static FName NAME_AFGWeaponChild_NotifyFailedToFire = FName(TEXT("NotifyFailedToFire"));
	void AFGWeaponChild::NotifyFailedToFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponChild_NotifyFailedToFire),NULL);
	}
	static FName NAME_AFGWeaponChild_NotifyPrimaryFireExecuted = FName(TEXT("NotifyPrimaryFireExecuted"));
	void AFGWeaponChild::NotifyPrimaryFireExecuted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponChild_NotifyPrimaryFireExecuted),NULL);
	}
	static FName NAME_AFGWeaponChild_NotifyReloadComplete = FName(TEXT("NotifyReloadComplete"));
	void AFGWeaponChild::NotifyReloadComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponChild_NotifyReloadComplete),NULL);
	}
	static FName NAME_AFGWeaponChild_NotifyReloading = FName(TEXT("NotifyReloading"));
	void AFGWeaponChild::NotifyReloading()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeaponChild_NotifyReloading),NULL);
	}
	void AFGWeaponChild::StaticRegisterNativesAFGWeaponChild()
	{
		UClass* Class = AFGWeaponChild::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyBeginPrimaryFire", &AFGWeaponChild::execNotifyBeginPrimaryFire },
			{ "NotifyBeginSecondaryFire", &AFGWeaponChild::execNotifyBeginSecondaryFire },
			{ "NotifyEndPrimaryFire", &AFGWeaponChild::execNotifyEndPrimaryFire },
			{ "NotifyEndSecondaryFire", &AFGWeaponChild::execNotifyEndSecondaryFire },
			{ "NotifyFailedToFire", &AFGWeaponChild::execNotifyFailedToFire },
			{ "NotifyPrimaryFireExecuted", &AFGWeaponChild::execNotifyPrimaryFireExecuted },
			{ "NotifyReloadComplete", &AFGWeaponChild::execNotifyReloadComplete },
			{ "NotifyReloading", &AFGWeaponChild::execNotifyReloading },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGWeaponChild_NotifyBeginPrimaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponChild_NotifyBeginPrimaryFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/FGWeaponChild.h" },
		{ "ToolTip", "Start AFGWeapon Event notify calls" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponChild_NotifyBeginPrimaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponChild, "NotifyBeginPrimaryFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponChild_NotifyBeginPrimaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponChild_NotifyBeginPrimaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyBeginPrimaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponChild_NotifyBeginPrimaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeaponChild_NotifyBeginSecondaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponChild_NotifyBeginSecondaryFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/FGWeaponChild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponChild_NotifyBeginSecondaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponChild, "NotifyBeginSecondaryFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponChild_NotifyBeginSecondaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponChild_NotifyBeginSecondaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyBeginSecondaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponChild_NotifyBeginSecondaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeaponChild_NotifyEndPrimaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponChild_NotifyEndPrimaryFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/FGWeaponChild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponChild_NotifyEndPrimaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponChild, "NotifyEndPrimaryFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponChild_NotifyEndPrimaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponChild_NotifyEndPrimaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyEndPrimaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponChild_NotifyEndPrimaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeaponChild_NotifyEndSecondaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponChild_NotifyEndSecondaryFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/FGWeaponChild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponChild_NotifyEndSecondaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponChild, "NotifyEndSecondaryFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponChild_NotifyEndSecondaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponChild_NotifyEndSecondaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyEndSecondaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponChild_NotifyEndSecondaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeaponChild_NotifyFailedToFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponChild_NotifyFailedToFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/FGWeaponChild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponChild_NotifyFailedToFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponChild, "NotifyFailedToFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponChild_NotifyFailedToFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponChild_NotifyFailedToFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyFailedToFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponChild_NotifyFailedToFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeaponChild_NotifyPrimaryFireExecuted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponChild_NotifyPrimaryFireExecuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/FGWeaponChild.h" },
		{ "ToolTip", "For instances when the actual fire happens after a delay on ending primary fire\n     This could be an anim notify or set by a timer etc.\n     This is special behavior and must be hooked up on a per weapon basis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponChild_NotifyPrimaryFireExecuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponChild, "NotifyPrimaryFireExecuted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponChild_NotifyPrimaryFireExecuted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponChild_NotifyPrimaryFireExecuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyPrimaryFireExecuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponChild_NotifyPrimaryFireExecuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeaponChild_NotifyReloadComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponChild_NotifyReloadComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/FGWeaponChild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponChild_NotifyReloadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponChild, "NotifyReloadComplete", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponChild_NotifyReloadComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponChild_NotifyReloadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyReloadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponChild_NotifyReloadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeaponChild_NotifyReloading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeaponChild_NotifyReloading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/FGWeaponChild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeaponChild_NotifyReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeaponChild, "NotifyReloading", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeaponChild_NotifyReloading_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeaponChild_NotifyReloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeaponChild_NotifyReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeaponChild_NotifyReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGWeaponChild_NoRegister()
	{
		return AFGWeaponChild::StaticClass();
	}
	struct Z_Construct_UClass_AFGWeaponChild_Statics
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
	UObject* (*const Z_Construct_UClass_AFGWeaponChild_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipmentChild,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGWeaponChild_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGWeaponChild_NotifyBeginPrimaryFire, "NotifyBeginPrimaryFire" }, // 3727335768
		{ &Z_Construct_UFunction_AFGWeaponChild_NotifyBeginSecondaryFire, "NotifyBeginSecondaryFire" }, // 1320719117
		{ &Z_Construct_UFunction_AFGWeaponChild_NotifyEndPrimaryFire, "NotifyEndPrimaryFire" }, // 2737031582
		{ &Z_Construct_UFunction_AFGWeaponChild_NotifyEndSecondaryFire, "NotifyEndSecondaryFire" }, // 3035334606
		{ &Z_Construct_UFunction_AFGWeaponChild_NotifyFailedToFire, "NotifyFailedToFire" }, // 2396236214
		{ &Z_Construct_UFunction_AFGWeaponChild_NotifyPrimaryFireExecuted, "NotifyPrimaryFireExecuted" }, // 589229054
		{ &Z_Construct_UFunction_AFGWeaponChild_NotifyReloadComplete, "NotifyReloadComplete" }, // 384971687
		{ &Z_Construct_UFunction_AFGWeaponChild_NotifyReloading, "NotifyReloading" }, // 4263102976
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeaponChild_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGWeaponChild.h" },
		{ "ModuleRelativePath", "Public/FGWeaponChild.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeaponChild_Statics::NewProp_mIsLoaded_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/FGWeaponChild.h" },
		{ "ToolTip", "Keeps track of whether our parent equipable is loaded" },
	};
#endif
	void Z_Construct_UClass_AFGWeaponChild_Statics::NewProp_mIsLoaded_SetBit(void* Obj)
	{
		((AFGWeaponChild*)Obj)->mIsLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGWeaponChild_Statics::NewProp_mIsLoaded = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsLoaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGWeaponChild), &Z_Construct_UClass_AFGWeaponChild_Statics::NewProp_mIsLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGWeaponChild_Statics::NewProp_mIsLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeaponChild_Statics::NewProp_mIsLoaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGWeaponChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeaponChild_Statics::NewProp_mIsLoaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGWeaponChild_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGWeaponChild>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGWeaponChild_Statics::ClassParams = {
		&AFGWeaponChild::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGWeaponChild_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGWeaponChild_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGWeaponChild_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGWeaponChild_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGWeaponChild()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGWeaponChild_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGWeaponChild, 1695780630);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGWeaponChild(Z_Construct_UClass_AFGWeaponChild, &AFGWeaponChild::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGWeaponChild"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGWeaponChild);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
