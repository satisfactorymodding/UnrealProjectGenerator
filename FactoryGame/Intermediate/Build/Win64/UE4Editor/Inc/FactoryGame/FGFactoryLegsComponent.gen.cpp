// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGFactoryLegsComponent.h"
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
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFeetOffset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeetOffset, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FeetOffset"), sizeof(FFeetOffset), Get_Z_Construct_UScriptStruct_FFeetOffset_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FFeetOffset>()
{
	return FFeetOffset::StaticStruct();
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
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeetOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeetOffset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_IsValidOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
		{ "ToolTip", "Does this foot have a valid offset, only used during hologram placement." },
	};
#endif
	void Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_IsValidOffset_SetBit(void* Obj)
	{
		((FFeetOffset*)Obj)->IsValidOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_IsValidOffset = { "IsValidOffset", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFeetOffset), &Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_IsValidOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_IsValidOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_IsValidOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_OffsetZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
		{ "ToolTip", "The offset along the Z axis from the parent mesh origo." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_OffsetZ = { "OffsetZ", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeetOffset, OffsetZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_OffsetZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_OffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_FeetIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
		{ "ToolTip", "The name of the foot's socket." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_FeetIndex = { "FeetIndex", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeetOffset, FeetIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_FeetIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetOffset_Statics::NewProp_FeetIndex_MetaData)) };
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
		sizeof(FFeetOffset),
		alignof(FFeetOffset),
		Z_Construct_UScriptStruct_FFeetOffset_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFeetOffset_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFeetOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFeetOffset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFeetOffset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FeetOffset"), sizeof(FFeetOffset), Get_Z_Construct_UScriptStruct_FFeetOffset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFeetOffset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFeetOffset_Hash() { return 285591064U; }
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFactoryLegsComponent_eventGetFootMeshComponents_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
		{ "ToolTip", "Get all the foot meshes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactoryLegsComponent, nullptr, "GetFootMeshComponents", sizeof(FGFactoryLegsComponent_eventGetFootMeshComponents_Parms), Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGFactoryLegsComponent_eventGetLegMeshComponents_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
		{ "ToolTip", "Get all the leg meshes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGFactoryLegsComponent, nullptr, "GetLegMeshComponents", sizeof(FGFactoryLegsComponent_eventGetLegMeshComponents_Parms), Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UFGFactoryLegsComponent_GetFootMeshComponents, "GetFootMeshComponents" }, // 3085104218
		{ &Z_Construct_UFunction_UFGFactoryLegsComponent_GetLegMeshComponents, "GetLegMeshComponents" }, // 2129967473
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGFactoryLegsComponent.h" },
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mCachedFeetOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
		{ "ToolTip", "Stored so that we know the offset of the feet" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mCachedFeetOffset = { "mCachedFeetOffset", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactoryLegsComponent, mCachedFeetOffset), METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mCachedFeetOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mCachedFeetOffset_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mCachedFeetOffset_Inner = { "mCachedFeetOffset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFeetOffset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
		{ "ToolTip", "The created foot components for this building" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshComponents = { "mFootMeshComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactoryLegsComponent, mFootMeshComponents), METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshComponents_Inner = { "mFootMeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
		{ "ToolTip", "The created leg components for this building" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshComponents = { "mLegMeshComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactoryLegsComponent, mLegMeshComponents), METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshComponents_Inner = { "mLegMeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mMaxLegLengthOverride_MetaData[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
		{ "ToolTip", "The maximum length the legs can be." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mMaxLegLengthOverride = { "mMaxLegLengthOverride", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactoryLegsComponent, mMaxLegLengthOverride), METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mMaxLegLengthOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mMaxLegLengthOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshOverride_MetaData[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
		{ "ToolTip", "The mesh to be used as foots on factories" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshOverride = { "mFootMeshOverride", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactoryLegsComponent, mFootMeshOverride), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mFootMeshOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshOverride_MetaData[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
		{ "ToolTip", "The mesh to be used as legs on factories" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshOverride = { "mLegMeshOverride", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactoryLegsComponent, mLegMeshOverride), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegMeshOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegSocketNames_MetaData[] = {
		{ "Category", "Legs" },
		{ "ModuleRelativePath", "Public/FGFactoryLegsComponent.h" },
		{ "ToolTip", "Socket names on the parent mesh" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegSocketNames = { "mLegSocketNames", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFactoryLegsComponent, mLegSocketNames), METADATA_PARAMS(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegSocketNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegSocketNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFGFactoryLegsComponent_Statics::NewProp_mLegSocketNames_Inner = { "mLegSocketNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
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
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGFactoryLegsComponent_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGFactoryLegsComponent_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
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
	IMPLEMENT_CLASS(UFGFactoryLegsComponent, 427041682);
	template<> FACTORYGAME_API UClass* StaticClass<UFGFactoryLegsComponent>()
	{
		return UFGFactoryLegsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGFactoryLegsComponent(Z_Construct_UClass_UFGFactoryLegsComponent, &UFGFactoryLegsComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGFactoryLegsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGFactoryLegsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
