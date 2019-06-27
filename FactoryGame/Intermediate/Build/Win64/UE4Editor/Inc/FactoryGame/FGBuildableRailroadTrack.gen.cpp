// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSplinePointData();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSplineComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FRailroadTrackPosition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FRailroadTrackPosition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRailroadTrackPosition, Z_Construct_UPackage__Script_FactoryGame(), TEXT("RailroadTrackPosition"), sizeof(FRailroadTrackPosition), Get_Z_Construct_UScriptStruct_FRailroadTrackPosition_CRC());
	}
	return Singleton;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Forward = { UE4CodeGen_Private::EPropertyClass::Float, "Forward", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRailroadTrackPosition, Forward), METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Forward_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Forward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "Offset along the track." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Float, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRailroadTrackPosition, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Track_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "This is the track segment this position is on.\nIf null then this is not a valid position." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Track = { UE4CodeGen_Private::EPropertyClass::WeakObject, "Track", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FRailroadTrackPosition, Track), Z_Construct_UClass_AFGBuildableRailroadTrack_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Track_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::NewProp_Track_MetaData)) };
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
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRailroadTrackPosition),
		alignof(FRailroadTrackPosition),
		Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRailroadTrackPosition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRailroadTrackPosition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RailroadTrackPosition"), sizeof(FRailroadTrackPosition), Get_Z_Construct_UScriptStruct_FRailroadTrackPosition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRailroadTrackPosition_CRC() { return 2014655983U; }
	void AFGBuildableRailroadTrack::StaticRegisterNativesAFGBuildableRailroadTrack()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableRailroadTrack_NoRegister()
	{
		return AFGBuildableRailroadTrack::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableRailroadTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRailroadInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mRailroadInterfaces;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mRailroadInterfaces_Inner;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "A piece of train track, it has a spline and to ends." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mRailroadInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "Objects registered on this track in the order they're placed on the track beginning from the start, offset 0." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mRailroadInterfaces = { UE4CodeGen_Private::EPropertyClass::Array, "mRailroadInterfaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadTrack, mRailroadInterfaces), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mRailroadInterfaces_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mRailroadInterfaces_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mRailroadInterfaces_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mRailroadInterfaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mConnections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "This tracks connection component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mConnections = { UE4CodeGen_Private::EPropertyClass::Object, "mConnections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001080008, CPP_ARRAY_DIM(mConnections, AFGBuildableRailroadTrack), nullptr, STRUCT_OFFSET(AFGBuildableRailroadTrack, mConnections), Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mConnections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Spline data saved in a compact form for saving and replicating. All the vectors are in local space." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData = { UE4CodeGen_Private::EPropertyClass::Array, "mSplineData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadTrack, mSplineData), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mSplineData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSplinePointData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineComponent_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadTrack.h" },
		{ "ToolTip", "The spline component for this train track." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mSplineComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadTrack, mSplineComponent), Z_Construct_UClass_UFGSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mRailroadInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mRailroadInterfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::NewProp_mSplineComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableRailroadTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::ClassParams = {
		&AFGBuildableRailroadTrack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A5u,
		nullptr, 0,
		Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadTrack_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AFGBuildableRailroadTrack, 2478173403);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableRailroadTrack(Z_Construct_UClass_AFGBuildableRailroadTrack, &AFGBuildableRailroadTrack::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableRailroadTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableRailroadTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
