// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGFoundationSubsystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFoundationSubsystem() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FBuilding();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoundationSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoundationSubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FBuilding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FBuilding_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuilding, Z_Construct_UPackage__Script_FactoryGame(), TEXT("Building"), sizeof(FBuilding), Get_Z_Construct_UScriptStruct_FBuilding_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuilding(FBuilding::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("Building"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFBuilding
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFBuilding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Building")),new UScriptStruct::TCppStructOps<FBuilding>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFBuilding;
	struct Z_Construct_UScriptStruct_FBuilding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buildables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buildables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Buildables_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuilding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGFoundationSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuilding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuilding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuilding_Statics::NewProp_Buildables_MetaData[] = {
		{ "ModuleRelativePath", "FGFoundationSubsystem.h" },
		{ "ToolTip", "Which buildables belong to this building." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuilding_Statics::NewProp_Buildables = { UE4CodeGen_Private::EPropertyClass::Array, "Buildables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000000, 1, nullptr, STRUCT_OFFSET(FBuilding, Buildables), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuilding_Statics::NewProp_Buildables_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilding_Statics::NewProp_Buildables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBuilding_Statics::NewProp_Buildables_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Buildables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGBuildable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuilding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilding_Statics::NewProp_Buildables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuilding_Statics::NewProp_Buildables_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuilding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"Building",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBuilding),
		alignof(FBuilding),
		Z_Construct_UScriptStruct_FBuilding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilding_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuilding_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBuilding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuilding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuilding_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Building"), sizeof(FBuilding), Get_Z_Construct_UScriptStruct_FBuilding_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBuilding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuilding_CRC() { return 4049208561U; }
	void AFGFoundationSubsystem::StaticRegisterNativesAFGFoundationSubsystem()
	{
	}
	UClass* Z_Construct_UClass_AFGFoundationSubsystem_NoRegister()
	{
		return AFGFoundationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_AFGFoundationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildings_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mBuildings;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mBuildings_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mBuildings_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGFoundationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFoundationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGFoundationSubsystem.h" },
		{ "ModuleRelativePath", "FGFoundationSubsystem.h" },
		{ "SerializeToFArchive", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Class keeping track of which buildables that for a building." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFoundationSubsystem_Statics::NewProp_mBuildings_MetaData[] = {
		{ "ModuleRelativePath", "FGFoundationSubsystem.h" },
		{ "ToolTip", "All the buildings in the game, map with foundation ID and the building struct." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGFoundationSubsystem_Statics::NewProp_mBuildings = { UE4CodeGen_Private::EPropertyClass::Map, "mBuildings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGFoundationSubsystem, mBuildings), METADATA_PARAMS(Z_Construct_UClass_AFGFoundationSubsystem_Statics::NewProp_mBuildings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFoundationSubsystem_Statics::NewProp_mBuildings_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGFoundationSubsystem_Statics::NewProp_mBuildings_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "mBuildings_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGFoundationSubsystem_Statics::NewProp_mBuildings_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "mBuildings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FBuilding, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGFoundationSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFoundationSubsystem_Statics::NewProp_mBuildings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFoundationSubsystem_Statics::NewProp_mBuildings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFoundationSubsystem_Statics::NewProp_mBuildings_ValueProp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGFoundationSubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGFoundationSubsystem, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGFoundationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGFoundationSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGFoundationSubsystem_Statics::ClassParams = {
		&AFGFoundationSubsystem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFGFoundationSubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGFoundationSubsystem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGFoundationSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGFoundationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGFoundationSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGFoundationSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGFoundationSubsystem, 1829511899);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGFoundationSubsystem(Z_Construct_UClass_AFGFoundationSubsystem, &AFGFoundationSubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGFoundationSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGFoundationSubsystem);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFGFoundationSubsystem)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
