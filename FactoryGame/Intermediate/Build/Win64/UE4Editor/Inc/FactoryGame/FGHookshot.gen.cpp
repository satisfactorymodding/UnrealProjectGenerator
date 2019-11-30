// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Equipment/FGHookshot.h"
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
		{ "ModuleRelativePath", "Public/Equipment/FGHookshot.h" },
		{ "ToolTip", "Move the audio in fron of the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHookshot_MoveAudioSourceInFrontOfPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHookshot, nullptr, "MoveAudioSourceInFrontOfPlayer", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_MoveAudioSourceInFrontOfPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_MoveAudioSourceInFrontOfPlayer_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_hitResult = { "hitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHookshot_eventOnFire_Parms, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_hitResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_hitResult_MetaData)) };
	void Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_attachedToSomething_SetBit(void* Obj)
	{
		((FGHookshot_eventOnFire_Parms*)Obj)->attachedToSomething = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_attachedToSomething = { "attachedToSomething", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHookshot_eventOnFire_Parms), &Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_attachedToSomething_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHookshot_OnFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_hitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHookshot_OnFire_Statics::NewProp_attachedToSomething,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHookshot_OnFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGHookshot.h" },
		{ "ToolTip", "Called locally when a player shoots the hookshot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHookshot_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHookshot, nullptr, "OnFire", sizeof(FGHookshot_eventOnFire_Parms), Z_Construct_UFunction_AFGHookshot_OnFire_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OnFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_OnFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OnFire_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/Equipment/FGHookshot.h" },
		{ "ToolTip", "Called whenever the wire is detached" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHookshot_OnWireDetach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHookshot, nullptr, "OnWireDetach", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_OnWireDetach_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OnWireDetach_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHookshot_eventOwnerLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGHookshot.h" },
		{ "ToolTip", "Called whenever the actor we are attached to landed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHookshot, nullptr, "OwnerLanded", sizeof(FGHookshot_eventOwnerLanded_Parms), Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_OwnerLanded_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/Equipment/FGHookshot.h" },
		{ "ToolTip", "Stop updating position in front of the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHookshot_RestoreAudioSourceToOriginalLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHookshot, nullptr, "RestoreAudioSourceToOriginalLocation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHookshot_RestoreAudioSourceToOriginalLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHookshot_RestoreAudioSourceToOriginalLocation_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AFGHookshot_MoveAudioSourceInFrontOfPlayer, "MoveAudioSourceInFrontOfPlayer" }, // 3629199702
		{ &Z_Construct_UFunction_AFGHookshot_OnFire, "OnFire" }, // 422509328
		{ &Z_Construct_UFunction_AFGHookshot_OnWireDetach, "OnWireDetach" }, // 3759223106
		{ &Z_Construct_UFunction_AFGHookshot_OwnerLanded, "OwnerLanded" }, // 243862785
		{ &Z_Construct_UFunction_AFGHookshot_RestoreAudioSourceToOriginalLocation, "RestoreAudioSourceToOriginalLocation" }, // 497013972
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHookshot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGHookshot.h" },
		{ "ModuleRelativePath", "Public/Equipment/FGHookshot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHookshot_Statics::NewProp_mHookshotAudio_MetaData[] = {
		{ "Category", "Equipment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/FGHookshot.h" },
		{ "ToolTip", "Component handling our hookshot sounds" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHookshot_Statics::NewProp_mHookshotAudio = { "mHookshotAudio", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHookshot, mHookshotAudio), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mHookshotAudio_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mHookshotAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHookshot_Statics::NewProp_mBrakeAccelRate_MetaData[] = {
		{ "Category", "FGHookshot" },
		{ "ModuleRelativePath", "Public/Equipment/FGHookshot.h" },
		{ "ToolTip", "Accel bonus added when we are moving away from the grappled target." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGHookshot_Statics::NewProp_mBrakeAccelRate = { "mBrakeAccelRate", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHookshot, mBrakeAccelRate), METADATA_PARAMS(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mBrakeAccelRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mBrakeAccelRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHookshot_Statics::NewProp_mAccelRate_MetaData[] = {
		{ "Category", "FGHookshot" },
		{ "ModuleRelativePath", "Public/Equipment/FGHookshot.h" },
		{ "ToolTip", "How fast do we accellerate toward the grappled target." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGHookshot_Statics::NewProp_mAccelRate = { "mAccelRate", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHookshot, mAccelRate), METADATA_PARAMS(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mAccelRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mAccelRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHookshot_Statics::NewProp_mMaxHookDistance_MetaData[] = {
		{ "Category", "FGHookshot" },
		{ "ModuleRelativePath", "Public/Equipment/FGHookshot.h" },
		{ "ToolTip", "How far we will trace to try and find something to attach to" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGHookshot_Statics::NewProp_mMaxHookDistance = { "mMaxHookDistance", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHookshot, mMaxHookDistance), METADATA_PARAMS(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mMaxHookDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHookshot_Statics::NewProp_mMaxHookDistance_MetaData)) };
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
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGHookshot_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGHookshot_Statics::PropPointers),
		0,
		0x009000A0u,
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
	IMPLEMENT_CLASS(AFGHookshot, 237216480);
	template<> FACTORYGAME_API UClass* StaticClass<AFGHookshot>()
	{
		return AFGHookshot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGHookshot(Z_Construct_UClass_AFGHookshot, &AFGHookshot::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGHookshot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGHookshot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
