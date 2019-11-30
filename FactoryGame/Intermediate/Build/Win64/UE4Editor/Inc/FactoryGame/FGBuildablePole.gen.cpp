// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildablePole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildablePole() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildablePole_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildablePole();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister();
// End Cross Module References
	void AFGBuildablePole::StaticRegisterNativesAFGBuildablePole()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildablePole_NoRegister()
	{
		return AFGBuildablePole::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildablePole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseStaticHeight_MetaData[];
#endif
		static void NewProp_mUseStaticHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseStaticHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPoleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPoleMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnapOnly0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnapOnly0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPoleComponentProxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPoleComponentProxy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStackHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mStackHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCanStack_MetaData[];
#endif
		static void NewProp_mCanStack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCanStack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildablePole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePole_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildablePole.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePole.h" },
		{ "ToolTip", "An arbitrarily high pole." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mUseStaticHeight_MetaData[] = {
		{ "Category", "Pole" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePole.h" },
		{ "ToolTip", "Should the stack height only be calculated using the mStackHeight?" },
	};
#endif
	void Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mUseStaticHeight_SetBit(void* Obj)
	{
		((AFGBuildablePole*)Obj)->mUseStaticHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mUseStaticHeight = { UE4CodeGen_Private::EPropertyClass::Bool, "mUseStaticHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGBuildablePole), &Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mUseStaticHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mUseStaticHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mUseStaticHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mPoleMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePole.h" },
		{ "ToolTip", "This poles mesh. @save 2018-10-24, this is here so old poles < alpha 2 path will still have a correct mesh, resaving an old save" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mPoleMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mPoleMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000020, 1, nullptr, STRUCT_OFFSET(AFGBuildablePole, mPoleMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mPoleMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mPoleMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mSnapOnly0_MetaData[] = {
		{ "Category", "Pole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePole.h" },
		{ "ToolTip", "Connection component used" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mSnapOnly0 = { UE4CodeGen_Private::EPropertyClass::Object, "mSnapOnly0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildablePole, mSnapOnly0), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mSnapOnly0_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mSnapOnly0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mPoleComponentProxy_MetaData[] = {
		{ "Category", "Pole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePole.h" },
		{ "ToolTip", "The component we want to use with the pole" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mPoleComponentProxy = { UE4CodeGen_Private::EPropertyClass::Object, "mPoleComponentProxy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildablePole, mPoleComponentProxy), Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mPoleComponentProxy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mPoleComponentProxy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mStackHeight_MetaData[] = {
		{ "Category", "Pole" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePole.h" },
		{ "ToolTip", "Height between two stacked poles excluding the poles height." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mStackHeight = { UE4CodeGen_Private::EPropertyClass::Float, "mStackHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildablePole, mStackHeight), METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mStackHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mStackHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mCanStack_MetaData[] = {
		{ "Category", "Pole" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePole.h" },
		{ "ToolTip", "Can this pole stack." },
	};
#endif
	void Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mCanStack_SetBit(void* Obj)
	{
		((AFGBuildablePole*)Obj)->mCanStack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mCanStack = { UE4CodeGen_Private::EPropertyClass::Bool, "mCanStack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGBuildablePole), &Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mCanStack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mCanStack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mCanStack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/FGBuildablePole.h" },
		{ "ToolTip", "This poles height." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mHeight = { UE4CodeGen_Private::EPropertyClass::Float, "mHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000020, 1, nullptr, STRUCT_OFFSET(AFGBuildablePole, mHeight), METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildablePole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mUseStaticHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mPoleMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mSnapOnly0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mPoleComponentProxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mStackHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mCanStack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildablePole_Statics::NewProp_mHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildablePole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildablePole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildablePole_Statics::ClassParams = {
		&AFGBuildablePole::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A5u,
		nullptr, 0,
		Z_Construct_UClass_AFGBuildablePole_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePole_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildablePole_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildablePole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildablePole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildablePole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildablePole, 3958910391);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildablePole(Z_Construct_UClass_AFGBuildablePole, &AFGBuildablePole::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildablePole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildablePole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
