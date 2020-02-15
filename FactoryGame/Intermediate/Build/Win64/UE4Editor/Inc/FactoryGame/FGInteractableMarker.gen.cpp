// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGInteractableMarker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGInteractableMarker() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGInteractableMarker_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGInteractableMarker();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGInteractableMarker_OnSetActorTracked();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	static FName NAME_AFGInteractableMarker_OnSetActorTracked = FName(TEXT("OnSetActorTracked"));
	void AFGInteractableMarker::OnSetActorTracked()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGInteractableMarker_OnSetActorTracked),NULL);
	}
	void AFGInteractableMarker::StaticRegisterNativesAFGInteractableMarker()
	{
		UClass* Class = AFGInteractableMarker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTrackedActor", &AFGInteractableMarker::execGetTrackedActor },
			{ "SetTrackedActor", &AFGInteractableMarker::execSetTrackedActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor_Statics
	{
		struct FGInteractableMarker_eventGetTrackedActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInteractableMarker_eventGetTrackedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractableMarker" },
		{ "ModuleRelativePath", "Public/FGInteractableMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGInteractableMarker, nullptr, "GetTrackedActor", sizeof(FGInteractableMarker_eventGetTrackedActor_Parms), Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGInteractableMarker_OnSetActorTracked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGInteractableMarker_OnSetActorTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractableMarker" },
		{ "ModuleRelativePath", "Public/FGInteractableMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGInteractableMarker_OnSetActorTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGInteractableMarker, nullptr, "OnSetActorTracked", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGInteractableMarker_OnSetActorTracked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGInteractableMarker_OnSetActorTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGInteractableMarker_OnSetActorTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGInteractableMarker_OnSetActorTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor_Statics
	{
		struct FGInteractableMarker_eventSetTrackedActor_Parms
		{
			AActor* trackedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor_Statics::NewProp_trackedActor = { "trackedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGInteractableMarker_eventSetTrackedActor_Parms, trackedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor_Statics::NewProp_trackedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractableMarker" },
		{ "ModuleRelativePath", "Public/FGInteractableMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGInteractableMarker, nullptr, "SetTrackedActor", sizeof(FGInteractableMarker_eventSetTrackedActor_Parms), Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGInteractableMarker_NoRegister()
	{
		return AFGInteractableMarker::StaticClass();
	}
	struct Z_Construct_UClass_AFGInteractableMarker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachePlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachePlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTrackedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTrackedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDesiredScreenRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDesiredScreenRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSplineMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIconWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mIconWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGInteractableMarker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGInteractableMarker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGInteractableMarker_GetTrackedActor, "GetTrackedActor" }, // 3733549736
		{ &Z_Construct_UFunction_AFGInteractableMarker_OnSetActorTracked, "OnSetActorTracked" }, // 2865795509
		{ &Z_Construct_UFunction_AFGInteractableMarker_SetTrackedActor, "SetTrackedActor" }, // 68901217
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGInteractableMarker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGInteractableMarker.h" },
		{ "ModuleRelativePath", "Public/FGInteractableMarker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mCachePlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGInteractableMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mCachePlayerController = { "mCachePlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGInteractableMarker, mCachePlayerController), Z_Construct_UClass_AFGPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mCachePlayerController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mCachePlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mTrackedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGInteractableMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mTrackedActor = { "mTrackedActor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGInteractableMarker, mTrackedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mTrackedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mTrackedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mDesiredScreenRadius_MetaData[] = {
		{ "Category", "InteractableMarker" },
		{ "ModuleRelativePath", "Public/FGInteractableMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mDesiredScreenRadius = { "mDesiredScreenRadius", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGInteractableMarker, mDesiredScreenRadius), METADATA_PARAMS(Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mDesiredScreenRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mDesiredScreenRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mSplineMesh_MetaData[] = {
		{ "Category", "InteractableMarker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGInteractableMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mSplineMesh = { "mSplineMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGInteractableMarker, mSplineMesh), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mSplineMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mSplineMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mIconWidget_MetaData[] = {
		{ "Category", "InteractableMarker" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGInteractableMarker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mIconWidget = { "mIconWidget", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGInteractableMarker, mIconWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mIconWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mIconWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGInteractableMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mCachePlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mTrackedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mDesiredScreenRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mSplineMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGInteractableMarker_Statics::NewProp_mIconWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGInteractableMarker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGInteractableMarker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGInteractableMarker_Statics::ClassParams = {
		&AFGInteractableMarker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGInteractableMarker_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGInteractableMarker_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGInteractableMarker_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGInteractableMarker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGInteractableMarker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGInteractableMarker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGInteractableMarker, 1599039659);
	template<> FACTORYGAME_API UClass* StaticClass<AFGInteractableMarker>()
	{
		return AFGInteractableMarker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGInteractableMarker(Z_Construct_UClass_AFGInteractableMarker, &AFGInteractableMarker::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGInteractableMarker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGInteractableMarker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
