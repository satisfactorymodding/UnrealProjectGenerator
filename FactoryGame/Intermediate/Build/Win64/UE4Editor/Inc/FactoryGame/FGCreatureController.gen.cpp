// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/AI/FGCreatureController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCreatureController() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCreatureController_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCreatureController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreatureController_SetEnabled();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreatureController_StartPanic();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreatureController_StopPanic();
// End Cross Module References
	static FName NAME_AFGCreatureController_StartPanic = FName(TEXT("StartPanic"));
	void AFGCreatureController::StartPanic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGCreatureController_StartPanic),NULL);
	}
	static FName NAME_AFGCreatureController_StopPanic = FName(TEXT("StopPanic"));
	void AFGCreatureController::StopPanic()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGCreatureController_StopPanic),NULL);
	}
	void AFGCreatureController::StaticRegisterNativesAFGCreatureController()
	{
		UClass* Class = AFGCreatureController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetPerceptionUpdated", &AFGCreatureController::execOnTargetPerceptionUpdated },
			{ "SetEnabled", &AFGCreatureController::execSetEnabled },
			{ "StartPanic", &AFGCreatureController::execStartPanic },
			{ "StopPanic", &AFGCreatureController::execStopPanic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated_Statics
	{
		struct FGCreatureController_eventOnTargetPerceptionUpdated_Parms
		{
			AActor* inActor;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreatureController_eventOnTargetPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated_Statics::NewProp_inActor = { "inActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreatureController_eventOnTargetPerceptionUpdated_Parms, inActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated_Statics::NewProp_Stimulus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated_Statics::NewProp_inActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/FGCreatureController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreatureController, nullptr, "OnTargetPerceptionUpdated", sizeof(FGCreatureController_eventOnTargetPerceptionUpdated_Parms), Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreatureController_SetEnabled_Statics
	{
		struct FGCreatureController_eventSetEnabled_Parms
		{
			bool enabled;
		};
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGCreatureController_SetEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((FGCreatureController_eventSetEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCreatureController_SetEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCreatureController_eventSetEnabled_Parms), &Z_Construct_UFunction_AFGCreatureController_SetEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreatureController_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreatureController_SetEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreatureController_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Optimization" },
		{ "ModuleRelativePath", "Public/AI/FGCreatureController.h" },
		{ "ToolTip", "toggles if the ai should be active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreatureController_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreatureController, nullptr, "SetEnabled", sizeof(FGCreatureController_eventSetEnabled_Parms), Z_Construct_UFunction_AFGCreatureController_SetEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureController_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreatureController_SetEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureController_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreatureController_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreatureController_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreatureController_StartPanic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreatureController_StartPanic_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI" },
		{ "ModuleRelativePath", "Public/AI/FGCreatureController.h" },
		{ "ToolTip", "Started panicking for some reason" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreatureController_StartPanic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreatureController, nullptr, "StartPanic", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreatureController_StartPanic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureController_StartPanic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreatureController_StartPanic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreatureController_StartPanic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreatureController_StopPanic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreatureController_StopPanic_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI" },
		{ "ModuleRelativePath", "Public/AI/FGCreatureController.h" },
		{ "ToolTip", "now chilling tha grill" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreatureController_StopPanic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreatureController, nullptr, "StopPanic", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreatureController_StopPanic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureController_StopPanic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreatureController_StopPanic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreatureController_StopPanic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGCreatureController_NoRegister()
	{
		return AFGCreatureController::StaticClass();
	}
	struct Z_Construct_UClass_AFGCreatureController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGCreatureController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGCreatureController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGCreatureController_OnTargetPerceptionUpdated, "OnTargetPerceptionUpdated" }, // 909324379
		{ &Z_Construct_UFunction_AFGCreatureController_SetEnabled, "SetEnabled" }, // 2545143883
		{ &Z_Construct_UFunction_AFGCreatureController_StartPanic, "StartPanic" }, // 865418031
		{ &Z_Construct_UFunction_AFGCreatureController_StopPanic, "StopPanic" }, // 316934372
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI/FGCreatureController.h" },
		{ "ModuleRelativePath", "Public/AI/FGCreatureController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGCreatureController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGCreatureController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGCreatureController_Statics::ClassParams = {
		&AFGCreatureController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGCreatureController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGCreatureController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGCreatureController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGCreatureController, 522150409);
	template<> FACTORYGAME_API UClass* StaticClass<AFGCreatureController>()
	{
		return AFGCreatureController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGCreatureController(Z_Construct_UClass_AFGCreatureController, &AFGCreatureController::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGCreatureController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGCreatureController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
