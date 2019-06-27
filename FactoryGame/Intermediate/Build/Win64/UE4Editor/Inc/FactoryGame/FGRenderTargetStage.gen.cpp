// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGRenderTargetStage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRenderTargetStage() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRenderTargetStage_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRenderTargetStage();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRenderTargetStage_BeginCapture();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRenderTargetStage_CaptureOnce();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRenderTargetStage_EndCapture();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRenderTargetStage_GetStage();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRenderTargetStage_SetView();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemView();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRenderTargetStage_UpdateRenderedComponents();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
// End Cross Module References
	void AFGRenderTargetStage::StaticRegisterNativesAFGRenderTargetStage()
	{
		UClass* Class = AFGRenderTargetStage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginCapture", &AFGRenderTargetStage::execBeginCapture },
			{ "CaptureOnce", &AFGRenderTargetStage::execCaptureOnce },
			{ "EndCapture", &AFGRenderTargetStage::execEndCapture },
			{ "GetRenderTarget", &AFGRenderTargetStage::execGetRenderTarget },
			{ "GetStage", &AFGRenderTargetStage::execGetStage },
			{ "SetPreviewDistance", &AFGRenderTargetStage::execSetPreviewDistance },
			{ "SetView", &AFGRenderTargetStage::execSetView },
			{ "UpdateRenderedComponents", &AFGRenderTargetStage::execUpdateRenderedComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGRenderTargetStage_BeginCapture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRenderTargetStage_BeginCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
		{ "ToolTip", "Starts the rendering of the rendertarget scene" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRenderTargetStage_BeginCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRenderTargetStage, "BeginCapture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRenderTargetStage_BeginCapture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_BeginCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRenderTargetStage_BeginCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRenderTargetStage_BeginCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRenderTargetStage_CaptureOnce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRenderTargetStage_CaptureOnce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
		{ "ToolTip", "Capture a picture once" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRenderTargetStage_CaptureOnce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRenderTargetStage, "CaptureOnce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRenderTargetStage_CaptureOnce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_CaptureOnce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRenderTargetStage_CaptureOnce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRenderTargetStage_CaptureOnce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRenderTargetStage_EndCapture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRenderTargetStage_EndCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
		{ "ToolTip", "Stops the rendering of the rendertarget scene" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRenderTargetStage_EndCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRenderTargetStage, "EndCapture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRenderTargetStage_EndCapture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_EndCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRenderTargetStage_EndCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRenderTargetStage_EndCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget_Statics
	{
		struct FGRenderTargetStage_eventGetRenderTarget_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRenderTargetStage_eventGetRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
		{ "ToolTip", "Get the render target that this stage renders to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRenderTargetStage, "GetRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRenderTargetStage_eventGetRenderTarget_Parms), Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics
	{
		struct FGRenderTargetStage_eventGetStage_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGRenderTargetStage_eventGetStage_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
		{ "ToolTip", "Get the stage of this preview scene" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRenderTargetStage, "GetStage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGRenderTargetStage_eventGetStage_Parms), Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRenderTargetStage_GetStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRenderTargetStage_GetStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance_Statics
	{
		struct FGRenderTargetStage_eventSetPreviewDistance_Parms
		{
			float distance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance_Statics::NewProp_distance = { UE4CodeGen_Private::EPropertyClass::Float, "distance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGRenderTargetStage_eventSetPreviewDistance_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SetPreviewDistance has been replaced by SetView" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRenderTargetStage, "SetPreviewDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGRenderTargetStage_eventSetPreviewDistance_Parms), Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics
	{
		struct FGRenderTargetStage_eventSetView_Parms
		{
			FItemView view;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_view_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_view;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics::NewProp_view_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics::NewProp_view = { UE4CodeGen_Private::EPropertyClass::Struct, "view", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGRenderTargetStage_eventSetView_Parms, view), Z_Construct_UScriptStruct_FItemView, METADATA_PARAMS(Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics::NewProp_view_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics::NewProp_view_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics::NewProp_view,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
		{ "ToolTip", "Move the camera so it looks at the stage from this view" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRenderTargetStage, "SetView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGRenderTargetStage_eventSetView_Parms), Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRenderTargetStage_SetView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRenderTargetStage_SetView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRenderTargetStage_UpdateRenderedComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRenderTargetStage_UpdateRenderedComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
		{ "ToolTip", "Call this when you have attached/detached components from our stage, this will make sure only they get rendered" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRenderTargetStage_UpdateRenderedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRenderTargetStage, "UpdateRenderedComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRenderTargetStage_UpdateRenderedComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRenderTargetStage_UpdateRenderedComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRenderTargetStage_UpdateRenderedComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRenderTargetStage_UpdateRenderedComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGRenderTargetStage_NoRegister()
	{
		return AFGRenderTargetStage::StaticClass();
	}
	struct Z_Construct_UClass_AFGRenderTargetStage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicRenderTarget_MetaData[];
#endif
		static void NewProp_mDynamicRenderTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mDynamicRenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mStage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSceneCaptureComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSceneCaptureComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicPixelFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mDynamicPixelFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicRenderTargetSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mDynamicRenderTargetSizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicRenderTargetSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mDynamicRenderTargetSizeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRenderTargetStage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGRenderTargetStage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGRenderTargetStage_BeginCapture, "BeginCapture" }, // 119699516
		{ &Z_Construct_UFunction_AFGRenderTargetStage_CaptureOnce, "CaptureOnce" }, // 2557172553
		{ &Z_Construct_UFunction_AFGRenderTargetStage_EndCapture, "EndCapture" }, // 4042506707
		{ &Z_Construct_UFunction_AFGRenderTargetStage_GetRenderTarget, "GetRenderTarget" }, // 3971467353
		{ &Z_Construct_UFunction_AFGRenderTargetStage_GetStage, "GetStage" }, // 3405541675
		{ &Z_Construct_UFunction_AFGRenderTargetStage_SetPreviewDistance, "SetPreviewDistance" }, // 525641
		{ &Z_Construct_UFunction_AFGRenderTargetStage_SetView, "SetView" }, // 402198405
		{ &Z_Construct_UFunction_AFGRenderTargetStage_UpdateRenderedComponents, "UpdateRenderedComponents" }, // 4026830721
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRenderTargetStage_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Actor" },
		{ "IncludePath", "FGRenderTargetStage.h" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTarget_MetaData[] = {
		{ "Category", "Stage|RenderTarget" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
		{ "ToolTip", "If true, then we create our own render target every time we want to play" },
	};
#endif
	void Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTarget_SetBit(void* Obj)
	{
		((AFGRenderTargetStage*)Obj)->mDynamicRenderTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTarget = { UE4CodeGen_Private::EPropertyClass::Bool, "mDynamicRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AFGRenderTargetStage), &Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mStage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
		{ "ToolTip", "The stage we want to change to preview the mesh when we do our preview, this is where the components will get attached when\nthey get set" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mStage = { UE4CodeGen_Private::EPropertyClass::Object, "mStage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AFGRenderTargetStage, mStage), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mStage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mStage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mSceneCaptureComponent_MetaData[] = {
		{ "Category", "FGRenderTargetStage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
		{ "ToolTip", "The scene captor component that will generate the result of our render target" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mSceneCaptureComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mSceneCaptureComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000b0009, 1, nullptr, STRUCT_OFFSET(AFGRenderTargetStage, mSceneCaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mSceneCaptureComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mSceneCaptureComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicPixelFormat_MetaData[] = {
		{ "Category", "Stage|RenderTarget" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
		{ "ToolTip", "Set the pixel format of a dynamic rendertarget" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicPixelFormat = { UE4CodeGen_Private::EPropertyClass::Byte, "mDynamicPixelFormat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGRenderTargetStage, mDynamicPixelFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicPixelFormat_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicPixelFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTargetSizeY_MetaData[] = {
		{ "Category", "Stage|RenderTarget" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
		{ "ToolTip", "If we create a dynamic render target (that is, a new one every time), then this is it's y size" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTargetSizeY = { UE4CodeGen_Private::EPropertyClass::Int, "mDynamicRenderTargetSizeY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGRenderTargetStage, mDynamicRenderTargetSizeY), METADATA_PARAMS(Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTargetSizeY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTargetSizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTargetSizeX_MetaData[] = {
		{ "Category", "Stage|RenderTarget" },
		{ "ModuleRelativePath", "FGRenderTargetStage.h" },
		{ "ToolTip", "If we create a dynamic render target (that is, a new one every time), then this is it's x size" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTargetSizeX = { UE4CodeGen_Private::EPropertyClass::Int, "mDynamicRenderTargetSizeX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGRenderTargetStage, mDynamicRenderTargetSizeX), METADATA_PARAMS(Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTargetSizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTargetSizeX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRenderTargetStage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mSceneCaptureComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicPixelFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTargetSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRenderTargetStage_Statics::NewProp_mDynamicRenderTargetSizeX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRenderTargetStage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRenderTargetStage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRenderTargetStage_Statics::ClassParams = {
		&AFGRenderTargetStage::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGRenderTargetStage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGRenderTargetStage_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGRenderTargetStage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRenderTargetStage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRenderTargetStage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRenderTargetStage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRenderTargetStage, 3136013938);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRenderTargetStage(Z_Construct_UClass_AFGRenderTargetStage, &AFGRenderTargetStage::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRenderTargetStage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRenderTargetStage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
