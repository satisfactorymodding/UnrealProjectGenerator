// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableConveyorAttachment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableConveyorAttachment() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorAttachment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorAttachment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
// End Cross Module References
	void AFGBuildableConveyorAttachment::StaticRegisterNativesAFGBuildableConveyorAttachment()
	{
	}
	UClass* Z_Construct_UClass_AFGBuildableConveyorAttachment_NoRegister()
	{
		return AFGBuildableConveyorAttachment::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBufferInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBufferInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableConveyorAttachment.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::NewProp_mBufferInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorAttachment.h" },
		{ "ToolTip", "The inventory to store everything in. Don't use this directly, use mStorageInventoryHandler->GetActiveInventoryComponent()" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::NewProp_mBufferInventory = { UE4CodeGen_Private::EPropertyClass::Object, "mBufferInventory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001080008, 1, nullptr, STRUCT_OFFSET(AFGBuildableConveyorAttachment, mBufferInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::NewProp_mBufferInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::NewProp_mBufferInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::NewProp_mBufferInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableConveyorAttachment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::ClassParams = {
		&AFGBuildableConveyorAttachment::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableConveyorAttachment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableConveyorAttachment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableConveyorAttachment, 381181096);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableConveyorAttachment(Z_Construct_UClass_AFGBuildableConveyorAttachment, &AFGBuildableConveyorAttachment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableConveyorAttachment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableConveyorAttachment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
