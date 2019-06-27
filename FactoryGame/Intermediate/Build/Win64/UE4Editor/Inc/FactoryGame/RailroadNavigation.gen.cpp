// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/RailroadNavigation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRailroadNavigation() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ERailroadPathFindingResult();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadPathFindingResult();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadPathPoint();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* ERailroadPathFindingResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ERailroadPathFindingResult, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ERailroadPathFindingResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERailroadPathFindingResult(ERailroadPathFindingResult_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ERailroadPathFindingResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ERailroadPathFindingResult_CRC() { return 1364942989U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ERailroadPathFindingResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERailroadPathFindingResult"), 0, Get_Z_Construct_UEnum_FactoryGame_ERailroadPathFindingResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERailroadPathFindingResult::RNQR_Error", (int64)ERailroadPathFindingResult::RNQR_Error },
				{ "ERailroadPathFindingResult::RNQR_Unreachable", (int64)ERailroadPathFindingResult::RNQR_Unreachable },
				{ "ERailroadPathFindingResult::RNQR_Success", (int64)ERailroadPathFindingResult::RNQR_Success },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "RailroadNavigation.h" },
				{ "RNQR_Error.DisplayName", "Error" },
				{ "RNQR_Success.DisplayName", "Success" },
				{ "RNQR_Unreachable.DisplayName", "Unreachable" },
				{ "ToolTip", "Pathfinding result." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERailroadPathFindingResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERailroadPathFindingResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRailroadPathFindingResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FRailroadPathFindingResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRailroadPathFindingResult, Z_Construct_UPackage__Script_FactoryGame(), TEXT("RailroadPathFindingResult"), sizeof(FRailroadPathFindingResult), Get_Z_Construct_UScriptStruct_FRailroadPathFindingResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRailroadPathFindingResult(FRailroadPathFindingResult::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("RailroadPathFindingResult"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFRailroadPathFindingResult
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFRailroadPathFindingResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RailroadPathFindingResult")),new UScriptStruct::TCppStructOps<FRailroadPathFindingResult>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFRailroadPathFindingResult;
	struct Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "RailroadNavigation.h" },
		{ "ToolTip", "A navigation result." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRailroadPathFindingResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "RailroadPathFindingResult" },
		{ "ModuleRelativePath", "RailroadNavigation.h" },
		{ "ToolTip", "Is the path valid, partial or invalid." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRailroadPathFindingResult, Result), Z_Construct_UEnum_FactoryGame_ERailroadPathFindingResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::NewProp_Result_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::NewProp_Result_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"RailroadPathFindingResult",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRailroadPathFindingResult),
		alignof(FRailroadPathFindingResult),
		Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRailroadPathFindingResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRailroadPathFindingResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RailroadPathFindingResult"), sizeof(FRailroadPathFindingResult), Get_Z_Construct_UScriptStruct_FRailroadPathFindingResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRailroadPathFindingResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRailroadPathFindingResult_CRC() { return 3394503543U; }
class UScriptStruct* FRailroadPathPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FRailroadPathPoint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRailroadPathPoint, Z_Construct_UPackage__Script_FactoryGame(), TEXT("RailroadPathPoint"), sizeof(FRailroadPathPoint), Get_Z_Construct_UScriptStruct_FRailroadPathPoint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRailroadPathPoint(FRailroadPathPoint::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("RailroadPathPoint"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFRailroadPathPoint
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFRailroadPathPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RailroadPathPoint")),new UScriptStruct::TCppStructOps<FRailroadPathPoint>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFRailroadPathPoint;
	struct Z_Construct_UScriptStruct_FRailroadPathPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "RailroadNavigation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRailroadPathPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "RailroadPathPoint" },
		{ "ModuleRelativePath", "RailroadNavigation.h" },
		{ "ToolTip", "The distance this object is from the end. 0 for the last point." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::NewProp_Distance = { UE4CodeGen_Private::EPropertyClass::Float, "Distance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRailroadPathPoint, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::NewProp_Distance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "RailroadPathPoint" },
		{ "ModuleRelativePath", "RailroadNavigation.h" },
		{ "ToolTip", "Object along the path, may be a connection, switch, stop, signal, sign etc.\nMust implement IFGRailroadInterface." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::NewProp_Object = { UE4CodeGen_Private::EPropertyClass::Object, "Object", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FRailroadPathPoint, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::NewProp_Object,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"RailroadPathPoint",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRailroadPathPoint),
		alignof(FRailroadPathPoint),
		Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRailroadPathPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRailroadPathPoint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RailroadPathPoint"), sizeof(FRailroadPathPoint), Get_Z_Construct_UScriptStruct_FRailroadPathPoint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRailroadPathPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRailroadPathPoint_CRC() { return 4117221554U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
