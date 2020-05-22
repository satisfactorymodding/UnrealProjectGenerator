// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGPlanet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPlanet() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPlanet_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPlanet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPlanet_UpdatePreview();
// End Cross Module References
	static FName NAME_AFGPlanet_UpdatePreview = FName(TEXT("UpdatePreview"));
	void AFGPlanet::UpdatePreview()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGPlanet_UpdatePreview),NULL);
	}
	void AFGPlanet::StaticRegisterNativesAFGPlanet()
	{
	}
	struct Z_Construct_UFunction_AFGPlanet_UpdatePreview_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPlanet_UpdatePreview_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/FGPlanet.h" },
		{ "ToolTip", "Update the preview of the planet in the editor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPlanet_UpdatePreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPlanet, nullptr, "UpdatePreview", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPlanet_UpdatePreview_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPlanet_UpdatePreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPlanet_UpdatePreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPlanet_UpdatePreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGPlanet_NoRegister()
	{
		return AFGPlanet::StaticClass();
	}
	struct Z_Construct_UClass_AFGPlanet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreviewTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPreviewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGPlanet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGPlanet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGPlanet_UpdatePreview, "UpdatePreview" }, // 1426092352
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlanet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGPlanet.h" },
		{ "ModuleRelativePath", "Public/FGPlanet.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPlanet_Statics::NewProp_mPreviewTime_MetaData[] = {
		{ "Category", "Preview" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FGPlanet.h" },
		{ "ToolTip", "How the sunlight changes during the day" },
		{ "UIMax", "24" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGPlanet_Statics::NewProp_mPreviewTime = { "mPreviewTime", nullptr, (EPropertyFlags)0x0040000800000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGPlanet, mPreviewTime), METADATA_PARAMS(Z_Construct_UClass_AFGPlanet_Statics::NewProp_mPreviewTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPlanet_Statics::NewProp_mPreviewTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGPlanet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPlanet_Statics::NewProp_mPreviewTime,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGPlanet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGPlanet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGPlanet_Statics::ClassParams = {
		&AFGPlanet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AFGPlanet_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_AFGPlanet_Statics::PropPointers), 0),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGPlanet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGPlanet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGPlanet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGPlanet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGPlanet, 3248465903);
	template<> FACTORYGAME_API UClass* StaticClass<AFGPlanet>()
	{
		return AFGPlanet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGPlanet(Z_Construct_UClass_AFGPlanet, &AFGPlanet::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGPlanet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGPlanet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
