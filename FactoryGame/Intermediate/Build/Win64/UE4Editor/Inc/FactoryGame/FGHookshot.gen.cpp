// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Equipment/FGHookshot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGHookshot() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHookshot_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHookshot();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHookshot_MoveAudioSourceInFrontOfPlayer();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHookshot_OnFire();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHookshot_OnWireDetach();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHookshot_OwnerLanded();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHookshot_RestoreAudioSourceToOriginalLocation();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
// End Cross Module References
	static FName NAME_AFGHookshot_OnFire = FName(TEXT("OnFire"));
	void AFGHookshot::OnFire(bool attachedToSomething, FHitResult const& hitResult)
	{
		FGHookshot_eventOnFire_Parms Parms;
		Parms.attachedToSomething=attachedToSomething ? true : false;
		Parms.hitResult=hitResult;
		ProcessEvent(FindFunctionChecked(NAME_AFGHookshot_OnFire),&Parms);
	}
	static FName NAME_AFGHookshot_OnWireDetach = FName(TEXT("OnWireDetach"));
	void AFGHookshot::OnWireDetach()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGHookshot_OnWireDetach),NULL);
	}
	static FName NAME_AFGHookshot_OwnerLanded = FName(TEXT("OwnerLanded"));
	void AFGHookshot::OwnerLanded(FHitResult const& Hit)
	{
		FGHookshot_eventOwnerLanded_Parms Parms;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_AFGHookshot_OwnerLanded),&Parms);
	}
	void AFGHookshot::StaticRegisterNativesAFGHookshot()
	{
		UClass* Class = AFGHookshot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveAudioSourceInFrontOfPlayer", &AFGHookshot::execMoveAudioSourceInFrontOfPlayer },
			{ "RestoreAudioSourceToOriginalLocation", &AFGHookshot::execRestoreAudioSourceToOriginalLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGHookshot_MoveAudioSourceInFrontOfPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHookshot_MoveAudioSourceInFrontOfPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/FGHookshot.h" },
		{ "ToolTip", "Move the audio in fron of the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHookshot_MoveAudioSourceInFrontOfPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHookshot, "MoveAudioSourceInFrontOfPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_MoveAudioSourceInFrontOfPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_MoveAudioSourceInFrontOfPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHookshot_MoveAudioSourceInFrontOfPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHookshot_MoveAudioSourceInFrontOfPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHookshot_OnFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitResult;
		static void NewProp_attachedToSomething_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_attachedToSomething;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_hitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_hitResult = { UE4CodeGen_Private::EPropertyClass::Struct, "hitResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(FGHookshot_eventOnFire_Parms, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_hitResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_hitResult_MetaData)) };
	void Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_attachedToSomething_SetBit(void* Obj)
	{
		((FGHookshot_eventOnFire_Parms*)Obj)->attachedToSomething = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_attachedToSomething = { UE4CodeGen_Private::EPropertyClass::Bool, "attachedToSomething", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHookshot_eventOnFire_Parms), &Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_attachedToSomething_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHookshot_OnFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_hitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_attachedToSomething,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHookshot_OnFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/FGHookshot.h" },
		{ "ToolTip", "Called locally when a player shoots the hookshot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHookshot_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHookshot, "OnFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(FGHookshot_eventOnFire_Parms), Z_Construct_UFunction_AFGHookshot_OnFire_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OnFire_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_OnFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHookshot_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHookshot_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHookshot_OnWireDetach_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHookshot_OnWireDetach_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/FGHookshot.h" },
		{ "ToolTip", "Called whenever the wire is detached" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHookshot_OnWireDetach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHookshot, "OnWireDetach", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_OnWireDetach_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OnWireDetach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHookshot_OnWireDetach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHookshot_OnWireDetach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(FGHookshot_eventOwnerLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/FGHookshot.h" },
		{ "ToolTip", "Called whenever the actor we are attached to landed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHookshot, "OwnerLanded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08480800, sizeof(FGHookshot_eventOwnerLanded_Parms), Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHookshot_OwnerLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHookshot_RestoreAudioSourceToOriginalLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHookshot_RestoreAudioSourceToOriginalLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Equipment/FGHookshot.h" },
		{ "ToolTip", "Stop updating position in front of the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHookshot_RestoreAudioSourceToOriginalLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHookshot, "RestoreAudioSourceToOriginalLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_RestoreAudioSourceToOriginalLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_RestoreAudioSourceToOriginalLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHookshot_RestoreAudioSourceToOriginalLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHookshot_RestoreAudioSourceToOriginalLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGHookshot_NoRegister()
	{
		return AFGHookshot::StaticClass();
	}
	struct Z_Construct_UClass_AFGHookshot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHookshotAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mHookshotAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBrakeAccelRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mBrakeAccelRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAccelRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAccelRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxHookDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxHookDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGHookshot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGHookshot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGHookshot_MoveAudioSourceInFrontOfPlayer, "MoveAudioSourceInFrontOfPlayer" }, // 3983236368
		{ &Z_Construct_UFunction_AFGHookshot_OnFire, "OnFire" }, // 556731739
		{ &Z_Construct_UFunction_AFGHookshot_OnWireDetach, "OnWireDetach" }, // 511132148
		{ &Z_Construct_UFunction_AFGHookshot_OwnerLanded, "OwnerLanded" }, // 263848143
		{ &Z_Construct_UFunction_AFGHookshot_RestoreAudioSourceToOriginalLocation, "RestoreAudioSourceToOriginalLocation" }, // 1356239145
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHookshot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGHookshot.h" },
		{ "ModuleRelativePath", "Equipment/FGHookshot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHookshot_Statics::NewProp_mHookshotAudio_MetaData[] = {
		{ "Category", "Equipment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipment/FGHookshot.h" },
		{ "ToolTip", "Component handling our hookshot sounds" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHookshot_Statics::NewProp_mHookshotAudio = { UE4CodeGen_Private::EPropertyClass::Object, "mHookshotAudio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000b001d, 1, nullptr, STRUCT_OFFSET(AFGHookshot, mHookshotAudio), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mHookshotAudio_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mHookshotAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHookshot_Statics::NewProp_mBrakeAccelRate_MetaData[] = {
		{ "Category", "FGHookshot" },
		{ "ModuleRelativePath", "Equipment/FGHookshot.h" },
		{ "ToolTip", "Accel bonus added when we are moving away from the grappled target." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGHookshot_Statics::NewProp_mBrakeAccelRate = { UE4CodeGen_Private::EPropertyClass::Float, "mBrakeAccelRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(AFGHookshot, mBrakeAccelRate), METADATA_PARAMS(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mBrakeAccelRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mBrakeAccelRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHookshot_Statics::NewProp_mAccelRate_MetaData[] = {
		{ "Category", "FGHookshot" },
		{ "ModuleRelativePath", "Equipment/FGHookshot.h" },
		{ "ToolTip", "How fast do we accellerate toward the grappled target." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGHookshot_Statics::NewProp_mAccelRate = { UE4CodeGen_Private::EPropertyClass::Float, "mAccelRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(AFGHookshot, mAccelRate), METADATA_PARAMS(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mAccelRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mAccelRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHookshot_Statics::NewProp_mMaxHookDistance_MetaData[] = {
		{ "Category", "FGHookshot" },
		{ "ModuleRelativePath", "Equipment/FGHookshot.h" },
		{ "ToolTip", "How far we will trace to try and find something to attach to" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGHookshot_Statics::NewProp_mMaxHookDistance = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxHookDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(AFGHookshot, mMaxHookDistance), METADATA_PARAMS(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mMaxHookDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mMaxHookDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGHookshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHookshot_Statics::NewProp_mHookshotAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHookshot_Statics::NewProp_mBrakeAccelRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHookshot_Statics::NewProp_mAccelRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHookshot_Statics::NewProp_mMaxHookDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGHookshot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGHookshot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGHookshot_Statics::ClassParams = {
		&AFGHookshot::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGHookshot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGHookshot_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGHookshot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGHookshot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGHookshot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGHookshot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGHookshot, 599244144);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGHookshot(Z_Construct_UClass_AFGHookshot, &AFGHookshot::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGHookshot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGHookshot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
