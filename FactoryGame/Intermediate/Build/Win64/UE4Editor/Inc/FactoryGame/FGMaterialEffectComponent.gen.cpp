// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGMaterialEffectComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMaterialEffectComponent() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMaterialEffectComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMaterialEffectComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_OnEnded();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_OnStarted();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_PreStarted();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FCostIngredientEffectActorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo, Z_Construct_UPackage__Script_FactoryGame(), TEXT("CostIngredientEffectActorInfo"), sizeof(FCostIngredientEffectActorInfo), Get_Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCostIngredientEffectActorInfo(FCostIngredientEffectActorInfo::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("CostIngredientEffectActorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFCostIngredientEffectActorInfo
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFCostIngredientEffectActorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CostIngredientEffectActorInfo")),new UScriptStruct::TCppStructOps<FCostIngredientEffectActorInfo>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFCostIngredientEffectActorInfo;
	struct Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCostIngredientEffectActorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "CostIngredientEffectActorInfo" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Where this cost actor should travel to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_TargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FCostIngredientEffectActorInfo, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_SpawnDelay_MetaData[] = {
		{ "Category", "CostIngredientEffectActorInfo" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Delay between this and the previous cost actor spawned" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_SpawnDelay = { UE4CodeGen_Private::EPropertyClass::Float, "SpawnDelay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FCostIngredientEffectActorInfo, SpawnDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_SpawnDelay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_SpawnDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "CostIngredientEffectActorInfo" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "What class is this cost of" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_ItemClass = { UE4CodeGen_Private::EPropertyClass::Class, "ItemClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000004, 1, nullptr, STRUCT_OFFSET(FCostIngredientEffectActorInfo, ItemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_ItemClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_ItemClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_SpawnDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_ItemClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"CostIngredientEffectActorInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCostIngredientEffectActorInfo),
		alignof(FCostIngredientEffectActorInfo),
		Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CostIngredientEffectActorInfo"), sizeof(FCostIngredientEffectActorInfo), Get_Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_CRC() { return 1785323920U; }
	static FName NAME_UFGMaterialEffectComponent_OnEnded = FName(TEXT("OnEnded"));
	void UFGMaterialEffectComponent::OnEnded()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGMaterialEffectComponent_OnEnded),NULL);
	}
	static FName NAME_UFGMaterialEffectComponent_OnStarted = FName(TEXT("OnStarted"));
	void UFGMaterialEffectComponent::OnStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGMaterialEffectComponent_OnStarted),NULL);
	}
	static FName NAME_UFGMaterialEffectComponent_OnUpdate = FName(TEXT("OnUpdate"));
	void UFGMaterialEffectComponent::OnUpdate(float deltaTime)
	{
		FGMaterialEffectComponent_eventOnUpdate_Parms Parms;
		Parms.deltaTime=deltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UFGMaterialEffectComponent_OnUpdate),&Parms);
	}
	static FName NAME_UFGMaterialEffectComponent_PreStarted = FName(TEXT("PreStarted"));
	void UFGMaterialEffectComponent::PreStarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGMaterialEffectComponent_PreStarted),NULL);
	}
	void UFGMaterialEffectComponent::StaticRegisterNativesUFGMaterialEffectComponent()
	{
		UClass* Class = UFGMaterialEffectComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDuration", &UFGMaterialEffectComponent::execGetDuration },
			{ "GetMeshes", &UFGMaterialEffectComponent::execGetMeshes },
			{ "GetMeshesBounds", &UFGMaterialEffectComponent::execGetMeshesBounds },
			{ "OnEnded", &UFGMaterialEffectComponent::execOnEnded },
			{ "OnStarted", &UFGMaterialEffectComponent::execOnStarted },
			{ "OnUpdate", &UFGMaterialEffectComponent::execOnUpdate },
			{ "PreStarted", &UFGMaterialEffectComponent::execPreStarted },
			{ "SetDuration", &UFGMaterialEffectComponent::execSetDuration },
			{ "SetMaterialScalarParameterValue", &UFGMaterialEffectComponent::execSetMaterialScalarParameterValue },
			{ "SetMeshes", &UFGMaterialEffectComponent::execSetMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics
	{
		struct FGMaterialEffectComponent_eventGetDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMaterialEffectComponent_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Get the duration for this effect. [seconds]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, "GetDuration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGMaterialEffectComponent_eventGetDuration_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics
	{
		struct FGMaterialEffectComponent_eventGetMeshes_Parms
		{
			TArray<UMeshComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000588, 1, nullptr, STRUCT_OFFSET(FGMaterialEffectComponent_eventGetMeshes_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Get the meshes which have the overridden material." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, "GetMeshes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44020401, sizeof(FGMaterialEffectComponent_eventGetMeshes_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics
	{
		struct FGMaterialEffectComponent_eventGetMeshesBounds_Parms
		{
			bool onlyVisible;
			bool onlyColliding;
			FVector out_origin;
			FVector out_boxExtent;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_boxExtent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_origin;
		static void NewProp_onlyColliding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_onlyColliding;
		static void NewProp_onlyVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_onlyVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_out_boxExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "out_boxExtent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGMaterialEffectComponent_eventGetMeshesBounds_Parms, out_boxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_out_origin = { UE4CodeGen_Private::EPropertyClass::Struct, "out_origin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGMaterialEffectComponent_eventGetMeshesBounds_Parms, out_origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyColliding_SetBit(void* Obj)
	{
		((FGMaterialEffectComponent_eventGetMeshesBounds_Parms*)Obj)->onlyColliding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyColliding = { UE4CodeGen_Private::EPropertyClass::Bool, "onlyColliding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGMaterialEffectComponent_eventGetMeshesBounds_Parms), &Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyColliding_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyVisible_SetBit(void* Obj)
	{
		((FGMaterialEffectComponent_eventGetMeshesBounds_Parms*)Obj)->onlyVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "onlyVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGMaterialEffectComponent_eventGetMeshesBounds_Parms), &Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_out_boxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_out_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyColliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Get the bounds of the meshes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, "GetMeshesBounds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44C20401, sizeof(FGMaterialEffectComponent_eventGetMeshesBounds_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMaterialEffectComponent_OnEnded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_OnEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Material Effect" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Called when the effect has ended and the material overrides have been cleared." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_OnEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, "OnEnded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_OnEnded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_OnEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_OnEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialEffectComponent_OnEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMaterialEffectComponent_OnStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_OnStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Material Effect" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Called when the effect has been started and the materials have been overridden." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_OnStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, "OnStarted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_OnStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_OnStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_OnStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialEffectComponent_OnStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::NewProp_deltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "deltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMaterialEffectComponent_eventOnUpdate_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Material Effect" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Called when the effect is updated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, "OnUpdate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, sizeof(FGMaterialEffectComponent_eventOnUpdate_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMaterialEffectComponent_PreStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_PreStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Material Effect" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Called prior to the build effect starting and before the materials have been overridden." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_PreStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, "PreStarted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_PreStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_PreStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_PreStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialEffectComponent_PreStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics
	{
		struct FGMaterialEffectComponent_eventSetDuration_Parms
		{
			float duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::NewProp_duration = { UE4CodeGen_Private::EPropertyClass::Float, "duration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMaterialEffectComponent_eventSetDuration_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::NewProp_duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Set the duration for this effect [seconds]. This is not replicated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, "SetDuration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGMaterialEffectComponent_eventSetDuration_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics
	{
		struct FGMaterialEffectComponent_eventSetMaterialScalarParameterValue_Parms
		{
			FName name;
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMaterialEffectComponent_eventSetMaterialScalarParameterValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Name, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMaterialEffectComponent_eventSetMaterialScalarParameterValue_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Material Effect Parameter" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Set a scalar parameter on the effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, "SetMaterialScalarParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(FGMaterialEffectComponent_eventSetMaterialScalarParameterValue_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics
	{
		struct FGMaterialEffectComponent_eventSetMeshes_Parms
		{
			TArray<UMeshComponent*> meshes;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_meshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::NewProp_meshes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::NewProp_meshes = { UE4CodeGen_Private::EPropertyClass::Array, "meshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000080, 1, nullptr, STRUCT_OFFSET(FGMaterialEffectComponent_eventSetMeshes_Parms, meshes), METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::NewProp_meshes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::NewProp_meshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::NewProp_meshes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "meshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::NewProp_meshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::NewProp_meshes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Set the meshes to override material on, cannot be called after PreStarted." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, "SetMeshes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGMaterialEffectComponent_eventSetMeshes_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMaterialEffectComponent_NoRegister()
	{
		return UFGMaterialEffectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGMaterialEffectComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mMids;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAutoDestroy_MetaData[];
#endif
		static void NewProp_mAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMeshes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMaterialEffectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMaterialEffectComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration, "GetDuration" }, // 4151485523
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes, "GetMeshes" }, // 3356733658
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds, "GetMeshesBounds" }, // 515584983
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_OnEnded, "OnEnded" }, // 373141508
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_OnStarted, "OnStarted" }, // 1512385406
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate, "OnUpdate" }, // 960112517
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_PreStarted, "PreStarted" }, // 3827831485
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration, "SetDuration" }, // 3151098321
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue, "SetMaterialScalarParameterValue" }, // 1084948140
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes, "SetMeshes" }, // 3243483448
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Component Tick Collision" },
		{ "IncludePath", "FGMaterialEffectComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Base class for material based effects on actors." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMids_MetaData[] = {
		{ "Category", "FGMaterialEffectComponent" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "The cached mids we apply effects to." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMids = { UE4CodeGen_Private::EPropertyClass::Array, "mMids", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UFGMaterialEffectComponent, mMids), METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMids_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMids_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMids_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mMids", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mAutoDestroy_MetaData[] = {
		{ "Category", "Material Effect" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Should this effect be auto destroyed on finish." },
	};
#endif
	void Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mAutoDestroy_SetBit(void* Obj)
	{
		((UFGMaterialEffectComponent*)Obj)->mAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mAutoDestroy = { UE4CodeGen_Private::EPropertyClass::Bool, "mAutoDestroy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGMaterialEffectComponent), &Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mAutoDestroy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMaterial_MetaData[] = {
		{ "Category", "Material Effect" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Material to display." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "mMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGMaterialEffectComponent, mMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGMaterialEffectComponent.h" },
		{ "ToolTip", "Meshes affected by the material effect." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMeshes = { UE4CodeGen_Private::EPropertyClass::Array, "mMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088000000008, 1, nullptr, STRUCT_OFFSET(UFGMaterialEffectComponent, mMeshes), METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMeshes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGMaterialEffectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMeshes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMaterialEffectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMaterialEffectComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::ClassParams = {
		&UFGMaterialEffectComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGMaterialEffectComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMaterialEffectComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMaterialEffectComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMaterialEffectComponent, 1971414321);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMaterialEffectComponent(Z_Construct_UClass_UFGMaterialEffectComponent, &UFGMaterialEffectComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMaterialEffectComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMaterialEffectComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
