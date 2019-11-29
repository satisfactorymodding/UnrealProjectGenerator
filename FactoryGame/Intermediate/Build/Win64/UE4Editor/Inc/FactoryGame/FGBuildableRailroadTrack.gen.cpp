// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableRailroadTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableRailroadTrack() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadTrackPosition();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadTrack_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadTrack();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSplinePointData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FRailroadTrackPosition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FRailroadTrackPosition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRailroadTrackPosition, Z_Construct_UPackage__Script_FactoryGame(), TEXT("RailroadTrackPosition"), sizeof(FRailroadTrackPosition), Get_Z_Construct_UScriptStruct_FRailroadTrackPosition_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FRailroadTrackPosition>()
{
	return FRailroadTrackPosition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRailroadTrackPosition(FRailroadTrackPosition::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("RailroadTrackPosition"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFRailroadTrackPosition
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFRailroadTrackPosition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RailroadTrackPosition")),new UScriptStruct::TCppStructOps<FRailroadTrackPosition>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFRailroadTrackPosition;
	struct Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Forward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Forward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Track;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "This is a way to represent a position on the railroad." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRailroadTrackPosition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Forward_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "How are we rotated on this segment.\n 1: We travel forward by increasing the offset (Along the spline).\n-1: We travel forward by decreasing the offset (Against the spine)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRailroadTrackPosition, Forward), METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Forward_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Forward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "Offset along the track." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRailroadTrackPosition, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Track_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "This is the track segment this position is on.\nIf null then this is not a valid position." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRailroadTrackPosition, Track), Z_Construct_UClass_AFGBuildableRailroadTrack_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Track_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Track_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Forward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Track,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"RailroadTrackPosition",
		sizeof(FRailroadTrackPosition),
		alignof(FRailroadTrackPosition),
		Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRailroadTrackPosition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRailroadTrackPosition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RailroadTrackPosition"), sizeof(FRailroadTrackPosition), Get_Z_Construct_UScriptStruct_FRailroadTrackPosition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRailroadTrackPosition_Hash() { return 3137954858U; }
	void AFGBuildableRailroadTrack::StaticRegisterNativesAFGBuildableRailroadTrack()
	{
		UClass* Class = AFGBuildableRailroadTrack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLength", &AFGBuildableRailroadTrack::execGetLength },
			{ "GetSplineComponent", &AFGBuildableRailroadTrack::execGetSplineComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength_Statics
	{
		struct FGBuildableRailroadTrack_eventGetLength_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableRailroadTrack_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Track" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "Get the length of this track." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadTrack, nullptr, "GetLength", sizeof(FGBuildableRailroadTrack_eventGetLength_Parms), Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics
	{
		struct FGBuildableRailroadTrack_eventGetSplineComponent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableRailroadTrack_eventGetSplineComponent_Parms, ReturnValue), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Track" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "Get the spline for this track." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadTrack, nullptr, "GetSplineComponent", sizeof(FGBuildableRailroadTrack_eventGetSplineComponent_Parms), Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableRailroadTrack_NoRegister()
	{
		return AFGBuildableRailroadTrack::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableRailroadTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsOwnedByPlatform_MetaData[];
#endif
		static void NewProp_mIsOwnedByPlatform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsOwnedByPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSplineData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSplineData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMeshLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMeshLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableRailroadTrack_GetLength, "GetLength" }, // 729292308
		{ &Z_Construct_UFunction_AFGBuildableRailroadTrack_GetSplineComponent, "GetSplineComponent" }, // 225020497
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "A piece of train track, it has a spline and to ends." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mIsOwnedByPlatform_MetaData[] = {
		{ "Category", "Track" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "Was this track created and is owned by a platform." },
	};
#endif
	void Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mIsOwnedByPlatform_SetBit(void* Obj)
	{
		((AFGBuildableRailroadTrack*)Obj)->mIsOwnedByPlatform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mIsOwnedByPlatform = { "mIsOwnedByPlatform", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGBuildableRailroadTrack), &Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mIsOwnedByPlatform_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mIsOwnedByPlatform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mIsOwnedByPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mConnections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "This tracks connection component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mConnections = { "mConnections", nullptr, (EPropertyFlags)0x0040000001080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(mConnections, AFGBuildableRailroadTrack), STRUCT_OFFSET(AFGBuildableRailroadTrack, mConnections), Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mConnections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Spline data saved in a compact form for saving and replicating. All the vectors are in local space." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData = { "mSplineData", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRailroadTrack, mSplineData), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData_Inner = { "mSplineData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSplinePointData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineComponent_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "The spline component for this train track." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineComponent = { "mSplineComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRailroadTrack, mSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mMeshLength_MetaData[] = {
		{ "Category", "Track" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "Length of the mesh to use for this track" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mMeshLength = { "mMeshLength", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRailroadTrack, mMeshLength), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mMeshLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mMeshLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mMesh_MetaData[] = {
		{ "Category", "Track" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "Mesh to use for his track." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mMesh = { "mMesh", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRailroadTrack, mMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mIsOwnedByPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mMeshLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableRailroadTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::ClassParams = {
		&AFGBuildableRailroadTrack::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableRailroadTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableRailroadTrack, 4121056373);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableRailroadTrack>()
	{
		return AFGBuildableRailroadTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableRailroadTrack(Z_Construct_UClass_AFGBuildableRailroadTrack, &AFGBuildableRailroadTrack::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableRailroadTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableRailroadTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
