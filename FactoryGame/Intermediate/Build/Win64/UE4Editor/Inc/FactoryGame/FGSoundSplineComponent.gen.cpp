// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGSoundSplineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSoundSplineComponent() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSoundSplineComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSoundSplineComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval();
// End Cross Module References
	void UFGSoundSplineComponent::StaticRegisterNativesUFGSoundSplineComponent()
	{
		UClass* Class = UFGSoundSplineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEmitterInterval", &UFGSoundSplineComponent::execGetEmitterInterval },
			{ "SetEmitterInterval", &UFGSoundSplineComponent::execSetEmitterInterval },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval_Statics
	{
		struct FGSoundSplineComponent_eventGetEmitterInterval_Parms
		{
			float newEmitterInterval;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newEmitterInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSoundSplineComponent_eventGetEmitterInterval_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval_Statics::NewProp_newEmitterInterval = { UE4CodeGen_Private::EPropertyClass::Float, "newEmitterInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGSoundSplineComponent_eventGetEmitterInterval_Parms, newEmitterInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval_Statics::NewProp_newEmitterInterval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "TRUE" },
		{ "Category", "Audio|Spline" },
		{ "ModuleRelativePath", "FGSoundSplineComponent.h" },
		{ "ToolTip", "Get the distance between each emitter of the spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSoundSplineComponent, "GetEmitterInterval", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGSoundSplineComponent_eventGetEmitterInterval_Parms), Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval_Statics
	{
		struct FGSoundSplineComponent_eventSetEmitterInterval_Parms
		{
			float newEmitterInterval;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newEmitterInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval_Statics::NewProp_newEmitterInterval = { UE4CodeGen_Private::EPropertyClass::Float, "newEmitterInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGSoundSplineComponent_eventSetEmitterInterval_Parms, newEmitterInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval_Statics::NewProp_newEmitterInterval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "TRUE" },
		{ "Category", "Audio|Spline" },
		{ "ModuleRelativePath", "FGSoundSplineComponent.h" },
		{ "ToolTip", "Set the interval of emitters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSoundSplineComponent, "SetEmitterInterval", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGSoundSplineComponent_eventSetEmitterInterval_Parms), Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGSoundSplineComponent_NoRegister()
	{
		return UFGSoundSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGSoundSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEmitterInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mEmitterInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGSoundSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGSoundSplineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGSoundSplineComponent_GetEmitterInterval, "GetEmitterInterval" }, // 4283112658
		{ &Z_Construct_UFunction_UFGSoundSplineComponent_SetEmitterInterval, "SetEmitterInterval" }, // 4157618699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSoundSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "FGSoundSplineComponent.h" },
		{ "ModuleRelativePath", "FGSoundSplineComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSoundSplineComponent_Statics::NewProp_mEmitterInterval_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "50" },
		{ "ModuleRelativePath", "FGSoundSplineComponent.h" },
		{ "ToolTip", "Distance beween each emitter on our parent spline, this might be scaled slightly so that we get a point on both start and end" },
		{ "UIMax", "1000" },
		{ "UIMin", "100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGSoundSplineComponent_Statics::NewProp_mEmitterInterval = { UE4CodeGen_Private::EPropertyClass::Float, "mEmitterInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UFGSoundSplineComponent, mEmitterInterval), METADATA_PARAMS(Z_Construct_UClass_UFGSoundSplineComponent_Statics::NewProp_mEmitterInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSoundSplineComponent_Statics::NewProp_mEmitterInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGSoundSplineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSoundSplineComponent_Statics::NewProp_mEmitterInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGSoundSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGSoundSplineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGSoundSplineComponent_Statics::ClassParams = {
		&UFGSoundSplineComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGSoundSplineComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGSoundSplineComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGSoundSplineComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGSoundSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGSoundSplineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGSoundSplineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGSoundSplineComponent, 1857380269);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGSoundSplineComponent(Z_Construct_UClass_UFGSoundSplineComponent, &UFGSoundSplineComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGSoundSplineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGSoundSplineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
