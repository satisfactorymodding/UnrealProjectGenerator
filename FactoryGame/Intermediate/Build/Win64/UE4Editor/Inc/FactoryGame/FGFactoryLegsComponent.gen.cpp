// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGFactoryLegsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFactoryLegsComponent() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFeetOffset();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryLegsComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryLegsComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FFeetOffset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFeetOffset_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeetOffset, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FeetOffset"), sizeof(FFeetOffset), Get_Z_Construct_UScriptStruct_FFeetOffset_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFeetOffset(FFeetOffset::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FeetOffset"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFeetOffset
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFeetOffset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FeetOffset")),new UScriptStruct::TCppStructOps<FFeetOffset>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFeetOffset;
	struct Z_Construct_UScriptStruct_FFeetOffset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValidOffset_MetaData[];
#endif
		static void NewProp_IsValidOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValidOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FeetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeetOffset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeetOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeetOffset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_IsValidOffset_MetaData[] = {
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
		{ "ToolTip", "Does this foot have a valid offset, only used during hologram placement." },
	};
#endif
	void Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_IsValidOffset_SetBit(void* Obj)
	{
		((FFeetOffset*)Obj)->IsValidOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_IsValidOffset = { UE4CodeGen_Private::EPropertyClass::Bool, "IsValidOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFeetOffset), &Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_IsValidOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_IsValidOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_IsValidOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_OffsetZ_MetaData[] = {
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
		{ "ToolTip", "The offset along the Z axis from the parent mesh origo." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_OffsetZ = { UE4CodeGen_Private::EPropertyClass::Float, "OffsetZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000000, 1, nullptr, STRUCT_OFFSET(FFeetOffset, OffsetZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_OffsetZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_OffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_FeetIndex_MetaData[] = {
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
		{ "ToolTip", "The name of the foot's socket." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_FeetIndex = { UE4CodeGen_Private::EPropertyClass::Byte, "FeetIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000000, 1, nullptr, STRUCT_OFFSET(FFeetOffset, FeetIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_FeetIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_FeetIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFeetOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_IsValidOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_OffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_FeetIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeetOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FeetOffset",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FFeetOffset),
		alignof(FFeetOffset),
		Z_Construct_UScriptStruct_FFeetOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetOffset_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetOffset_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFeetOffset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFeetOffset_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FeetOffset"), sizeof(FFeetOffset), Get_Z_Construct_UScriptStruct_FFeetOffset_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFeetOffset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFeetOffset_CRC() { return 2151974912U; }
	void UFGFactoryLegsComponent::StaticRegisterNativesUFGFactoryLegsComponent()
	{
		UClass* Class = UFGFactoryLegsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFootMeshComponents", &UFGFactoryLegsComponent::execGetFootMeshComponents },
			{ "GetLegMeshComponents", &UFGFactoryLegsComponent::execGetLegMeshComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics
	{
		struct FGFactoryLegsComponent_eventGetFootMeshComponents_Parms
		{
			TArray<UStaticMeshComponent*> ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000588, 1, nullptr, STRUCT_OFFSET(FGFactoryLegsComponent_eventGetFootMeshComponents_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
		{ "ToolTip", "Get all the foot meshes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactoryLegsComponent, "GetFootMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGFactoryLegsComponent_eventGetFootMeshComponents_Parms), Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics
	{
		struct FGFactoryLegsComponent_eventGetLegMeshComponents_Parms
		{
			TArray<UStaticMeshComponent*> ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000588, 1, nullptr, STRUCT_OFFSET(FGFactoryLegsComponent_eventGetLegMeshComponents_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
		{ "ToolTip", "Get all the leg meshes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactoryLegsComponent, "GetLegMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGFactoryLegsComponent_eventGetLegMeshComponents_Parms), Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGFactoryLegsComponent_NoRegister()
	{
		return UFGFactoryLegsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGFactoryLegsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedFeetOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCachedFeetOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCachedFeetOffset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFootMeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mFootMeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFootMeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLegMeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mLegMeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mLegMeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxLegLengthOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxLegLengthOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFootMeshOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFootMeshOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLegMeshOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mLegMeshOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLegSocketNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mLegSocketNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mLegSocketNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGFactoryLegsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGFactoryLegsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents, "GetFootMeshComponents" }, // 1439564623
		{ &Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents, "GetLegMeshComponents" }, // 3105949579
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGFactoryLegsComponent.h" },
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mCachedFeetOffset_MetaData[] = {
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
		{ "ToolTip", "Stored so that we know the offset of the feet" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mCachedFeetOffset = { UE4CodeGen_Private::EPropertyClass::Array, "mCachedFeetOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(UFGFactoryLegsComponent, mCachedFeetOffset), METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mCachedFeetOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mCachedFeetOffset_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mCachedFeetOffset_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mCachedFeetOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFeetOffset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
		{ "ToolTip", "The created foot components for this building" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshComponents = { UE4CodeGen_Private::EPropertyClass::Array, "mFootMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000002008, 1, nullptr, STRUCT_OFFSET(UFGFactoryLegsComponent, mFootMeshComponents), METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mFootMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
		{ "ToolTip", "The created leg components for this building" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshComponents = { UE4CodeGen_Private::EPropertyClass::Array, "mLegMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000002008, 1, nullptr, STRUCT_OFFSET(UFGFactoryLegsComponent, mLegMeshComponents), METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mLegMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mMaxLegLengthOverride_MetaData[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
		{ "ToolTip", "The maximum length the legs can be." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mMaxLegLengthOverride = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxLegLengthOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGFactoryLegsComponent, mMaxLegLengthOverride), METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mMaxLegLengthOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mMaxLegLengthOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshOverride_MetaData[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
		{ "ToolTip", "The mesh to be used as foots on factories" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshOverride = { UE4CodeGen_Private::EPropertyClass::Object, "mFootMeshOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGFactoryLegsComponent, mFootMeshOverride), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshOverride_MetaData[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
		{ "ToolTip", "The mesh to be used as legs on factories" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshOverride = { UE4CodeGen_Private::EPropertyClass::Object, "mLegMeshOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGFactoryLegsComponent, mLegMeshOverride), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegSocketNames_MetaData[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "FGFactoryLegsComponent.h" },
		{ "ToolTip", "Socket names on the parent mesh" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegSocketNames = { UE4CodeGen_Private::EPropertyClass::Array, "mLegSocketNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGFactoryLegsComponent, mLegSocketNames), METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegSocketNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegSocketNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegSocketNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "mLegSocketNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGFactoryLegsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mCachedFeetOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mCachedFeetOffset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mMaxLegLengthOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegSocketNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegSocketNames_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(UFGFactoryLegsComponent, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGFactoryLegsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGFactoryLegsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::ClassParams = {
		&UFGFactoryLegsComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGFactoryLegsComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGFactoryLegsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGFactoryLegsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGFactoryLegsComponent, 2540155945);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGFactoryLegsComponent(Z_Construct_UClass_UFGFactoryLegsComponent, &UFGFactoryLegsComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGFactoryLegsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGFactoryLegsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
