// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Buildables/FGBuildableFactoryBuilding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableFactoryBuilding() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFoundationSideSelectionFlags();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactoryBuilding_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactoryBuilding();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister();
// End Cross Module References
class UScriptStruct* FFoundationSideSelectionFlags::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FoundationSideSelectionFlags"), sizeof(FFoundationSideSelectionFlags), Get_Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FFoundationSideSelectionFlags>()
{
	return FFoundationSideSelectionFlags::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFoundationSideSelectionFlags(FFoundationSideSelectionFlags::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FoundationSideSelectionFlags"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFoundationSideSelectionFlags
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFoundationSideSelectionFlags()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FoundationSideSelectionFlags")),new UScriptStruct::TCppStructOps<FFoundationSideSelectionFlags>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFoundationSideSelectionFlags;
	struct Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[];
#endif
		static void NewProp_Bottom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[];
#endif
		static void NewProp_Top_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Top;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static void NewProp_Left_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Back_MetaData[];
#endif
		static void NewProp_Back_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Back;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static void NewProp_Right_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_MetaData[];
#endif
		static void NewProp_Front_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Front;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableFactoryBuilding.h" },
		{ "ToolTip", "Disable snapping on specific sides." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoundationSideSelectionFlags>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Bottom_MetaData[] = {
		{ "Category", "Sides" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableFactoryBuilding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Bottom_SetBit(void* Obj)
	{
		((FFoundationSideSelectionFlags*)Obj)->Bottom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFoundationSideSelectionFlags), &Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Bottom_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Bottom_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Bottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Top_MetaData[] = {
		{ "Category", "Sides" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableFactoryBuilding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Top_SetBit(void* Obj)
	{
		((FFoundationSideSelectionFlags*)Obj)->Top = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFoundationSideSelectionFlags), &Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Top_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Top_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Top_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Sides" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableFactoryBuilding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Left_SetBit(void* Obj)
	{
		((FFoundationSideSelectionFlags*)Obj)->Left = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFoundationSideSelectionFlags), &Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Left_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Left_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Back_MetaData[] = {
		{ "Category", "Sides" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableFactoryBuilding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Back_SetBit(void* Obj)
	{
		((FFoundationSideSelectionFlags*)Obj)->Back = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Back = { "Back", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFoundationSideSelectionFlags), &Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Back_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Back_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Back_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Sides" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableFactoryBuilding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Right_SetBit(void* Obj)
	{
		((FFoundationSideSelectionFlags*)Obj)->Right = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFoundationSideSelectionFlags), &Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Right_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Right_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Front_MetaData[] = {
		{ "Category", "Sides" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableFactoryBuilding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Front_SetBit(void* Obj)
	{
		((FFoundationSideSelectionFlags*)Obj)->Front = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Front = { "Front", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFoundationSideSelectionFlags), &Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Front_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Front_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Front_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Bottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Top,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Back,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::NewProp_Front,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FoundationSideSelectionFlags",
		sizeof(FFoundationSideSelectionFlags),
		alignof(FFoundationSideSelectionFlags),
		Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFoundationSideSelectionFlags()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FoundationSideSelectionFlags"), sizeof(FFoundationSideSelectionFlags), Get_Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFoundationSideSelectionFlags_Hash() { return 362555301U; }
	void AFGBuildableFactoryBuilding::StaticRegisterNativesAFGBuildableFactoryBuilding()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableFactoryBuilding_NoRegister()
	{
		return AFGBuildableFactoryBuilding::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMeshComponentProxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMeshComponentProxy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableFactoryBuilding.h" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableFactoryBuilding.h" },
		{ "ToolTip", "Base for all kinds of factory building parts, like foundations, walls etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::NewProp_mMeshComponentProxy_MetaData[] = {
		{ "Category", "FGBuildableFactoryBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/FGBuildableFactoryBuilding.h" },
		{ "ToolTip", "Mesh component for the factory building." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::NewProp_mMeshComponentProxy = { "mMeshComponentProxy", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableFactoryBuilding, mMeshComponentProxy), Z_Construct_UClass_UFGColoredInstanceMeshProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::NewProp_mMeshComponentProxy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::NewProp_mMeshComponentProxy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::NewProp_mMeshComponentProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableFactoryBuilding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::ClassParams = {
		&AFGBuildableFactoryBuilding::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::PropPointers),
		0,
		0x009002A5u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableFactoryBuilding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableFactoryBuilding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableFactoryBuilding, 2761833762);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableFactoryBuilding>()
	{
		return AFGBuildableFactoryBuilding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableFactoryBuilding(Z_Construct_UClass_AFGBuildableFactoryBuilding, &AFGBuildableFactoryBuilding::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableFactoryBuilding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableFactoryBuilding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
