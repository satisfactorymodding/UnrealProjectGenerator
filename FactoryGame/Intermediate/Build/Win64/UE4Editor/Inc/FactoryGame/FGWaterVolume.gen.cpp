// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGWaterVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWaterVolume() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWaterVolume_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWaterVolume();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceDescriptor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSharedPostProcessSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWaterAudio_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGExtractableResourceInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister();
// End Cross Module References
	void AFGWaterVolume::StaticRegisterNativesAFGWaterVolume()
	{
		UClass* Class = AFGWaterVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPrimitiveComponentEntered", &AFGWaterVolume::execOnPrimitiveComponentEntered },
			{ "OnPrimitiveComponentExited", &AFGWaterVolume::execOnPrimitiveComponentExited },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics
	{
		struct FGWaterVolume_eventOnPrimitiveComponentEntered_Parms
		{
			UPrimitiveComponent* overlappedComp;
			AActor* other;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool fromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static void NewProp_fromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterVolume_eventOnPrimitiveComponentEntered_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult_MetaData)) };
	void Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_fromSweep_SetBit(void* Obj)
	{
		((FGWaterVolume_eventOnPrimitiveComponentEntered_Parms*)Obj)->fromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_fromSweep = { "fromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGWaterVolume_eventOnPrimitiveComponentEntered_Parms), &Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_fromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterVolume_eventOnPrimitiveComponentEntered_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterVolume_eventOnPrimitiveComponentEntered_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterVolume_eventOnPrimitiveComponentEntered_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterVolume_eventOnPrimitiveComponentEntered_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_sweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_fromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::NewProp_overlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGWaterVolume.h" },
		{ "ToolTip", "Called whenever a primitive component enters the water, used to create effects on the water surface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWaterVolume, nullptr, "OnPrimitiveComponentEntered", sizeof(FGWaterVolume_eventOnPrimitiveComponentEntered_Parms), Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics
	{
		struct FGWaterVolume_eventOnPrimitiveComponentExited_Parms
		{
			UPrimitiveComponent* overlappedComp;
			AActor* other;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterVolume_eventOnPrimitiveComponentExited_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterVolume_eventOnPrimitiveComponentExited_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_otherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterVolume_eventOnPrimitiveComponentExited_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterVolume_eventOnPrimitiveComponentExited_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_overlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_overlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::NewProp_overlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGWaterVolume.h" },
		{ "ToolTip", "Called whenever a primitive component exits the water, used to create effects on the water surface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWaterVolume, nullptr, "OnPrimitiveComponentExited", sizeof(FGWaterVolume_eventOnPrimitiveComponentExited_Parms), Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGWaterVolume_NoRegister()
	{
		return AFGWaterVolume::StaticClass();
	}
	struct Z_Construct_UClass_AFGWaterVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResourceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mResourceClass;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAssociatedPostProcessVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAssociatedPostProcessVolume;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPostProcessSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mPostProcessSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCanPlaceExtractor_MetaData[];
#endif
		static void NewProp_mCanPlaceExtractor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCanPlaceExtractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWaterAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mWaterAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGWaterVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGWaterVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentEntered, "OnPrimitiveComponentEntered" }, // 3809310069
		{ &Z_Construct_UFunction_AFGWaterVolume_OnPrimitiveComponentExited, "OnPrimitiveComponentExited" }, // 3051171573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWaterVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "FGWaterVolume.h" },
		{ "ModuleRelativePath", "Public/FGWaterVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mResourceClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWaterVolume.h" },
		{ "ToolTip", "Reference to the Water Descriptor specified in FGResourceSettings. Assigned in begin play" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mResourceClass = { "mResourceClass", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWaterVolume, mResourceClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mResourceClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mResourceClass_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mAssociatedPostProcessVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWaterVolume.h" },
		{ "ToolTip", "Old deprecated data that isn't used anymore, but we want to be sure that the post process volumes will be deleted" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mAssociatedPostProcessVolume = { "mAssociatedPostProcessVolume", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWaterVolume, mAssociatedPostProcessVolume_DEPRECATED), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mAssociatedPostProcessVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mAssociatedPostProcessVolume_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mPostProcessSettings_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ModuleRelativePath", "Public/FGWaterVolume.h" },
		{ "ToolTip", "A template of settings for our post process settings" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mPostProcessSettings = { "mPostProcessSettings", nullptr, (EPropertyFlags)0x0024080000000801, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWaterVolume, mPostProcessSettings), Z_Construct_UClass_UFGSharedPostProcessSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mPostProcessSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mPostProcessSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mCanPlaceExtractor_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/FGWaterVolume.h" },
	};
#endif
	void Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mCanPlaceExtractor_SetBit(void* Obj)
	{
		((AFGWaterVolume*)Obj)->mCanPlaceExtractor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mCanPlaceExtractor = { "mCanPlaceExtractor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGWaterVolume), &Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mCanPlaceExtractor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mCanPlaceExtractor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mCanPlaceExtractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mWaterAudio_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FGWaterVolume.h" },
		{ "ToolTip", "Audio settings for the this water volume" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mWaterAudio = { "mWaterAudio", nullptr, (EPropertyFlags)0x0024080000000801, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWaterVolume, mWaterAudio), Z_Construct_UClass_UFGWaterAudio_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mWaterAudio_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mWaterAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mAreaClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/FGWaterVolume.h" },
		{ "ToolTip", "Specify what typ of nav area blocker this is ( defaults to null )" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mAreaClass = { "mAreaClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWaterVolume, mAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mAreaClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mAreaClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGWaterVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mResourceClass,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mAssociatedPostProcessVolume,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mPostProcessSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mCanPlaceExtractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mWaterAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWaterVolume_Statics::NewProp_mAreaClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGWaterVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGExtractableResourceInterface_NoRegister, (int32)VTABLE_OFFSET(AFGWaterVolume, IFGExtractableResourceInterface), false },
			{ Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister, (int32)VTABLE_OFFSET(AFGWaterVolume, IInterface_PostProcessVolume), false },
			{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(AFGWaterVolume, INavRelevantInterface), false },
			{ Z_Construct_UClass_UFGSignificanceInterface_NoRegister, (int32)VTABLE_OFFSET(AFGWaterVolume, IFGSignificanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGWaterVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGWaterVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGWaterVolume_Statics::ClassParams = {
		&AFGWaterVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGWaterVolume_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGWaterVolume_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGWaterVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGWaterVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGWaterVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGWaterVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGWaterVolume, 1083526098);
	template<> FACTORYGAME_API UClass* StaticClass<AFGWaterVolume>()
	{
		return AFGWaterVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGWaterVolume(Z_Construct_UClass_AFGWaterVolume, &AFGWaterVolume::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGWaterVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGWaterVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
