// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGMaterialEffectComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMaterialEffectComponent() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCachedMaterialArray();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo();
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
// End Cross Module References
class UScriptStruct* FCachedMaterialArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FCachedMaterialArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedMaterialArray, Z_Construct_UPackage__Script_FactoryGame(), TEXT("CachedMaterialArray"), sizeof(FCachedMaterialArray), Get_Z_Construct_UScriptStruct_FCachedMaterialArray_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FCachedMaterialArray>()
{
	return FCachedMaterialArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedMaterialArray(FCachedMaterialArray::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("CachedMaterialArray"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFCachedMaterialArray
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFCachedMaterialArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedMaterialArray")),new UScriptStruct::TCppStructOps<FCachedMaterialArray>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFCachedMaterialArray;
	struct Z_Construct_UScriptStruct_FCachedMaterialArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshFNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshFNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MeshFNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialInterfaces;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInterfaces_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedMaterialArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MeshFNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Component FName for each material interface" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MeshFNames = { "MeshFNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCachedMaterialArray, MeshFNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MeshFNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MeshFNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MeshFNames_Inner = { "MeshFNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MaterialInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MaterialInterfaces = { "MaterialInterfaces", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCachedMaterialArray, MaterialInterfaces), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MaterialInterfaces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MaterialInterfaces_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MaterialInterfaces_Inner = { "MaterialInterfaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MeshFNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MeshFNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MaterialInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::NewProp_MaterialInterfaces_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"CachedMaterialArray",
		sizeof(FCachedMaterialArray),
		alignof(FCachedMaterialArray),
		Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedMaterialArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedMaterialArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedMaterialArray"), sizeof(FCachedMaterialArray), Get_Z_Construct_UScriptStruct_FCachedMaterialArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedMaterialArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedMaterialArray_Hash() { return 342873891U; }
class UScriptStruct* FCostIngredientEffectActorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo, Z_Construct_UPackage__Script_FactoryGame(), TEXT("CostIngredientEffectActorInfo"), sizeof(FCostIngredientEffectActorInfo), Get_Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FCostIngredientEffectActorInfo>()
{
	return FCostIngredientEffectActorInfo::StaticStruct();
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
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCostIngredientEffectActorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "CostIngredientEffectActorInfo" },
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Where this cost actor should travel to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCostIngredientEffectActorInfo, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_SpawnDelay_MetaData[] = {
		{ "Category", "CostIngredientEffectActorInfo" },
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Delay between this and the previous cost actor spawned" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_SpawnDelay = { "SpawnDelay", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCostIngredientEffectActorInfo, SpawnDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_SpawnDelay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_SpawnDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "CostIngredientEffectActorInfo" },
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "What class is this cost of" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCostIngredientEffectActorInfo, ItemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_ItemClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::NewProp_ItemClass_MetaData)) };
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
		sizeof(FCostIngredientEffectActorInfo),
		alignof(FCostIngredientEffectActorInfo),
		Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CostIngredientEffectActorInfo"), sizeof(FCostIngredientEffectActorInfo), Get_Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCostIngredientEffectActorInfo_Hash() { return 2952428514U; }
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMaterialEffectComponent_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Get the duration for this effect. [seconds]" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, nullptr, "GetDuration", sizeof(FGMaterialEffectComponent_eventGetDuration_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMaterialEffectComponent_eventGetMeshes_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Get the meshes which have the overridden material." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, nullptr, "GetMeshes", sizeof(FGMaterialEffectComponent_eventGetMeshes_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_out_boxExtent = { "out_boxExtent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMaterialEffectComponent_eventGetMeshesBounds_Parms, out_boxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_out_origin = { "out_origin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMaterialEffectComponent_eventGetMeshesBounds_Parms, out_origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyColliding_SetBit(void* Obj)
	{
		((FGMaterialEffectComponent_eventGetMeshesBounds_Parms*)Obj)->onlyColliding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyColliding = { "onlyColliding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGMaterialEffectComponent_eventGetMeshesBounds_Parms), &Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyColliding_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyVisible_SetBit(void* Obj)
	{
		((FGMaterialEffectComponent_eventGetMeshesBounds_Parms*)Obj)->onlyVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyVisible = { "onlyVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGMaterialEffectComponent_eventGetMeshesBounds_Parms), &Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_out_boxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_out_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyColliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::NewProp_onlyVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Get the bounds of the meshes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, nullptr, "GetMeshesBounds", sizeof(FGMaterialEffectComponent_eventGetMeshesBounds_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Called when the effect has ended and the material overrides have been cleared." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_OnEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, nullptr, "OnEnded", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_OnEnded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_OnEnded_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Called when the effect has been started and the materials have been overridden." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_OnStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, nullptr, "OnStarted", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_OnStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_OnStarted_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMaterialEffectComponent_eventOnUpdate_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Material Effect" },
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Called when the effect is updated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, nullptr, "OnUpdate", sizeof(FGMaterialEffectComponent_eventOnUpdate_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Called prior to the build effect starting and before the materials have been overridden." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_PreStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, nullptr, "PreStarted", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_PreStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_PreStarted_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMaterialEffectComponent_eventSetDuration_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::NewProp_duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Set the duration for this effect [seconds]. This is not replicated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, nullptr, "SetDuration", sizeof(FGMaterialEffectComponent_eventSetDuration_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMaterialEffectComponent_eventSetMaterialScalarParameterValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMaterialEffectComponent_eventSetMaterialScalarParameterValue_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Material Effect Parameter" },
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Set a scalar parameter on the effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, nullptr, "SetMaterialScalarParameterValue", sizeof(FGMaterialEffectComponent_eventSetMaterialScalarParameterValue_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::NewProp_meshes = { "meshes", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMaterialEffectComponent_eventSetMeshes_Parms, meshes), METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::NewProp_meshes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::NewProp_meshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::NewProp_meshes_Inner = { "meshes", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::NewProp_meshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::NewProp_meshes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Set the meshes to override material on, cannot be called after PreStarted." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMaterialEffectComponent, nullptr, "SetMeshes", sizeof(FGMaterialEffectComponent_eventSetMeshes_Parms), Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOverrideMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mOverrideMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mOverrideMaterials_Inner;
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
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_GetDuration, "GetDuration" }, // 1456336486
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshes, "GetMeshes" }, // 560456505
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_GetMeshesBounds, "GetMeshesBounds" }, // 4062434011
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_OnEnded, "OnEnded" }, // 3952789802
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_OnStarted, "OnStarted" }, // 3443395619
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_OnUpdate, "OnUpdate" }, // 1210841110
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_PreStarted, "PreStarted" }, // 462502068
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_SetDuration, "SetDuration" }, // 1013934380
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_SetMaterialScalarParameterValue, "SetMaterialScalarParameterValue" }, // 273286206
		{ &Z_Construct_UFunction_UFGMaterialEffectComponent_SetMeshes, "SetMeshes" }, // 2945065323
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Component Tick Collision" },
		{ "IncludePath", "FGMaterialEffectComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Base class for material based effects on actors." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mOverrideMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "The cached override materials present before initializing (Takes into account custom override materials on meshes)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mOverrideMaterials = { "mOverrideMaterials", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMaterialEffectComponent, mOverrideMaterials), METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mOverrideMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mOverrideMaterials_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mOverrideMaterials_Inner = { "mOverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCachedMaterialArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMids_MetaData[] = {
		{ "Category", "FGMaterialEffectComponent" },
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "The cached mids we apply effects to." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMids = { "mMids", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMaterialEffectComponent, mMids), METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMids_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMids_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMids_Inner = { "mMids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mAutoDestroy_MetaData[] = {
		{ "Category", "Material Effect" },
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Should this effect be auto destroyed on finish." },
	};
#endif
	void Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mAutoDestroy_SetBit(void* Obj)
	{
		((UFGMaterialEffectComponent*)Obj)->mAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mAutoDestroy = { "mAutoDestroy", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGMaterialEffectComponent), &Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mAutoDestroy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMaterial_MetaData[] = {
		{ "Category", "Material Effect" },
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Material to display." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMaterial = { "mMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMaterialEffectComponent, mMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGMaterialEffectComponent.h" },
		{ "ToolTip", "Meshes affected by the material effect." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMeshes = { "mMeshes", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMaterialEffectComponent, mMeshes), METADATA_PARAMS(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mMeshes_Inner = { "mMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGMaterialEffectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mOverrideMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMaterialEffectComponent_Statics::NewProp_mOverrideMaterials_Inner,
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
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGMaterialEffectComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGMaterialEffectComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
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
	IMPLEMENT_CLASS(UFGMaterialEffectComponent, 4056493854);
	template<> FACTORYGAME_API UClass* StaticClass<UFGMaterialEffectComponent>()
	{
		return UFGMaterialEffectComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMaterialEffectComponent(Z_Construct_UClass_UFGMaterialEffectComponent, &UFGMaterialEffectComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMaterialEffectComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMaterialEffectComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
