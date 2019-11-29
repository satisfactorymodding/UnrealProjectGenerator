// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGNobeliskExplosive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGNobeliskExplosive() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGNobeliskExplosive_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGNobeliskExplosive();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDestructiveProjectile();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskExplosive_OnRep_DetonateIn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
// End Cross Module References
	void AFGNobeliskExplosive::StaticRegisterNativesAFGNobeliskExplosive()
	{
		UClass* Class = AFGNobeliskExplosive::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_DetonateIn", &AFGNobeliskExplosive::execOnRep_DetonateIn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGNobeliskExplosive_OnRep_DetonateIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskExplosive_OnRep_DetonateIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGNobeliskExplosive.h" },
		{ "ToolTip", "Called when the server has blown this explosive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskExplosive_OnRep_DetonateIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskExplosive, nullptr, "OnRep_DetonateIn", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskExplosive_OnRep_DetonateIn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskExplosive_OnRep_DetonateIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskExplosive_OnRep_DetonateIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskExplosive_OnRep_DetonateIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGNobeliskExplosive_NoRegister()
	{
		return AFGNobeliskExplosive::StaticClass();
	}
	struct Z_Construct_UClass_AFGNobeliskExplosive_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mThrowRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mThrowRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEnvironmentDestructionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mEnvironmentDestructionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDetonateIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDetonateIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRotatingMovementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mRotatingMovementComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGNobeliskExplosive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGDestructiveProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGNobeliskExplosive_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGNobeliskExplosive_OnRep_DetonateIn, "OnRep_DetonateIn" }, // 658407887
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskExplosive_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGNobeliskExplosive.h" },
		{ "ModuleRelativePath", "FGNobeliskExplosive.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mThrowRotation_MetaData[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "FGNobeliskExplosive.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mThrowRotation = { "mThrowRotation", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNobeliskExplosive, mThrowRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mThrowRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mThrowRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mEnvironmentDestructionSphere_MetaData[] = {
		{ "Category", "FGNobeliskExplosive" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGNobeliskExplosive.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mEnvironmentDestructionSphere = { "mEnvironmentDestructionSphere", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNobeliskExplosive, mEnvironmentDestructionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mEnvironmentDestructionSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mEnvironmentDestructionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mDetonateIn_MetaData[] = {
		{ "ModuleRelativePath", "FGNobeliskExplosive.h" },
		{ "ToolTip", "Tells client to mark this to explode after a certain time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mDetonateIn = { "mDetonateIn", "OnRep_DetonateIn", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNobeliskExplosive, mDetonateIn), METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mDetonateIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mDetonateIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mRotatingMovementComp_MetaData[] = {
		{ "Category", "Nobelisk" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGNobeliskExplosive.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mRotatingMovementComp = { "mRotatingMovementComp", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNobeliskExplosive, mRotatingMovementComp), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mRotatingMovementComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mRotatingMovementComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGNobeliskExplosive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mThrowRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mEnvironmentDestructionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mDetonateIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskExplosive_Statics::NewProp_mRotatingMovementComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGNobeliskExplosive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGNobeliskExplosive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGNobeliskExplosive_Statics::ClassParams = {
		&AFGNobeliskExplosive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGNobeliskExplosive_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskExplosive_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskExplosive_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskExplosive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGNobeliskExplosive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGNobeliskExplosive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGNobeliskExplosive, 2144777333);
	template<> FACTORYGAME_API UClass* StaticClass<AFGNobeliskExplosive>()
	{
		return AFGNobeliskExplosive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGNobeliskExplosive(Z_Construct_UClass_AFGNobeliskExplosive, &AFGNobeliskExplosive::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGNobeliskExplosive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGNobeliskExplosive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
