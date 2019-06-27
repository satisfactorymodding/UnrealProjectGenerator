// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGManta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGManta() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGManta_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGManta();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGManta_GetCurrentTime();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGManta_GetSpline();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSplinePath_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister();
// End Cross Module References
	void AFGManta::StaticRegisterNativesAFGManta()
	{
		UClass* Class = AFGManta::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentTime", &AFGManta::execGetCurrentTime },
			{ "GetSpline", &AFGManta::execGetSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGManta_GetCurrentTime_Statics
	{
		struct FGManta_eventGetCurrentTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGManta_GetCurrentTime_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGManta_eventGetCurrentTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGManta_GetCurrentTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGManta_GetCurrentTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGManta_GetCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manta" },
		{ "ModuleRelativePath", "FGManta.h" },
		{ "ToolTip", "Gets time variable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGManta_GetCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGManta, "GetCurrentTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGManta_eventGetCurrentTime_Parms), Z_Construct_UFunction_AFGManta_GetCurrentTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGManta_GetCurrentTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGManta_GetCurrentTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGManta_GetCurrentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGManta_GetCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGManta_GetCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGManta_GetSpline_Statics
	{
		struct FGManta_eventGetSpline_Parms
		{
			USplineComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGManta_GetSpline_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGManta_GetSpline_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGManta_eventGetSpline_Parms, ReturnValue), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGManta_GetSpline_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGManta_GetSpline_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGManta_GetSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGManta_GetSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGManta_GetSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manta" },
		{ "ModuleRelativePath", "FGManta.h" },
		{ "ToolTip", "Gets spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGManta_GetSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGManta, "GetSpline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGManta_eventGetSpline_Parms), Z_Construct_UFunction_AFGManta_GetSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGManta_GetSpline_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGManta_GetSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGManta_GetSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGManta_GetSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGManta_GetSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGManta_NoRegister()
	{
		return AFGManta::StaticClass();
	}
	struct Z_Construct_UClass_AFGManta_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsClosedSplineLoop_MetaData[];
#endif
		static void NewProp_mIsClosedSplineLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsClosedSplineLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTickTransform_MetaData[];
#endif
		static void NewProp_mTickTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mTickTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSignificanceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSignificanceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSecondsPerLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSecondsPerLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOffsetMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mOffsetMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCurrentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplinePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSplinePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedSpline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGManta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGManta_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGManta_GetCurrentTime, "GetCurrentTime" }, // 370763588
		{ &Z_Construct_UFunction_AFGManta_GetSpline, "GetSpline" }, // 2709165835
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGManta_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGManta.h" },
		{ "ModuleRelativePath", "FGManta.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGManta_Statics::NewProp_mIsClosedSplineLoop_MetaData[] = {
		{ "Category", "Manta" },
		{ "ModuleRelativePath", "FGManta.h" },
		{ "ToolTip", "Is the spline loop closed" },
	};
#endif
	void Z_Construct_UClass_AFGManta_Statics::NewProp_mIsClosedSplineLoop_SetBit(void* Obj)
	{
		((AFGManta*)Obj)->mIsClosedSplineLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGManta_Statics::NewProp_mIsClosedSplineLoop = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsClosedSplineLoop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGManta), &Z_Construct_UClass_AFGManta_Statics::NewProp_mIsClosedSplineLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGManta_Statics::NewProp_mIsClosedSplineLoop_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGManta_Statics::NewProp_mIsClosedSplineLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGManta_Statics::NewProp_mTickTransform_MetaData[] = {
		{ "Category", "Manta" },
		{ "ModuleRelativePath", "FGManta.h" },
		{ "ToolTip", "Should we tick this mesh" },
	};
#endif
	void Z_Construct_UClass_AFGManta_Statics::NewProp_mTickTransform_SetBit(void* Obj)
	{
		((AFGManta*)Obj)->mTickTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGManta_Statics::NewProp_mTickTransform = { UE4CodeGen_Private::EPropertyClass::Bool, "mTickTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGManta), &Z_Construct_UClass_AFGManta_Statics::NewProp_mTickTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGManta_Statics::NewProp_mTickTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGManta_Statics::NewProp_mTickTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGManta_Statics::NewProp_mSignificanceRange_MetaData[] = {
		{ "Category", "Significance" },
		{ "ModuleRelativePath", "FGManta.h" },
		{ "ToolTip", "Range that this volume should be significant within" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGManta_Statics::NewProp_mSignificanceRange = { UE4CodeGen_Private::EPropertyClass::Float, "mSignificanceRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGManta, mSignificanceRange), METADATA_PARAMS(Z_Construct_UClass_AFGManta_Statics::NewProp_mSignificanceRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGManta_Statics::NewProp_mSignificanceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGManta_Statics::NewProp_mSecondsPerLoop_MetaData[] = {
		{ "Category", "Manta" },
		{ "ModuleRelativePath", "FGManta.h" },
		{ "ToolTip", "How many seconds a complete loop should take ( defaults to 900 ie 15 minutes )" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGManta_Statics::NewProp_mSecondsPerLoop = { UE4CodeGen_Private::EPropertyClass::Float, "mSecondsPerLoop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000801, 1, nullptr, STRUCT_OFFSET(AFGManta, mSecondsPerLoop), METADATA_PARAMS(Z_Construct_UClass_AFGManta_Statics::NewProp_mSecondsPerLoop_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGManta_Statics::NewProp_mSecondsPerLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGManta_Statics::NewProp_mOffsetMagnitude_MetaData[] = {
		{ "Category", "Manta" },
		{ "ModuleRelativePath", "FGManta.h" },
		{ "ToolTip", "Magnitude of the offset to add" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGManta_Statics::NewProp_mOffsetMagnitude = { UE4CodeGen_Private::EPropertyClass::Float, "mOffsetMagnitude", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGManta, mOffsetMagnitude), METADATA_PARAMS(Z_Construct_UClass_AFGManta_Statics::NewProp_mOffsetMagnitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGManta_Statics::NewProp_mOffsetMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGManta_Statics::NewProp_mCurrentTime_MetaData[] = {
		{ "ModuleRelativePath", "FGManta.h" },
		{ "ToolTip", "Current time ( value between 0.0 and mSecondsPerLoop" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGManta_Statics::NewProp_mCurrentTime = { UE4CodeGen_Private::EPropertyClass::Float, "mCurrentTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(AFGManta, mCurrentTime), METADATA_PARAMS(Z_Construct_UClass_AFGManta_Statics::NewProp_mCurrentTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGManta_Statics::NewProp_mCurrentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGManta_Statics::NewProp_mCachedMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGManta.h" },
		{ "ToolTip", "Reference to the skel mesh that was added in BP" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGManta_Statics::NewProp_mCachedMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mCachedMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AFGManta, mCachedMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGManta_Statics::NewProp_mCachedMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGManta_Statics::NewProp_mCachedMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGManta_Statics::NewProp_mSplinePath_MetaData[] = {
		{ "Category", "Manta" },
		{ "ModuleRelativePath", "FGManta.h" },
		{ "ToolTip", "Path spline that this actor should set to follow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGManta_Statics::NewProp_mSplinePath = { UE4CodeGen_Private::EPropertyClass::Object, "mSplinePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AFGManta, mSplinePath), Z_Construct_UClass_AFGSplinePath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGManta_Statics::NewProp_mSplinePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGManta_Statics::NewProp_mSplinePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGManta_Statics::NewProp_mCachedSpline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGManta.h" },
		{ "ToolTip", "Reference to the spline that was added in BP" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGManta_Statics::NewProp_mCachedSpline = { UE4CodeGen_Private::EPropertyClass::Object, "mCachedSpline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AFGManta, mCachedSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGManta_Statics::NewProp_mCachedSpline_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGManta_Statics::NewProp_mCachedSpline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGManta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGManta_Statics::NewProp_mIsClosedSplineLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGManta_Statics::NewProp_mTickTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGManta_Statics::NewProp_mSignificanceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGManta_Statics::NewProp_mSecondsPerLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGManta_Statics::NewProp_mOffsetMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGManta_Statics::NewProp_mCurrentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGManta_Statics::NewProp_mCachedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGManta_Statics::NewProp_mSplinePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGManta_Statics::NewProp_mCachedSpline,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGManta_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSignificanceInterface_NoRegister, (int32)VTABLE_OFFSET(AFGManta, IFGSignificanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGManta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGManta>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGManta_Statics::ClassParams = {
		&AFGManta::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGManta_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGManta_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGManta_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGManta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGManta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGManta_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGManta, 3249508902);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGManta(Z_Construct_UClass_AFGManta, &AFGManta::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGManta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGManta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
