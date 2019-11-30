// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGFoliageResourceUserData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFoliageResourceUserData() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFoliageResourceUserData_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFoliageResourceUserData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFoliageIdentifier_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemDropWithChance();
// End Cross Module References
	void UFGFoliageResourceUserData::StaticRegisterNativesUFGFoliageResourceUserData()
	{
	}
	UClass* Z_Construct_UClass_UFGFoliageResourceUserData_NoRegister()
	{
		return UFGFoliageResourceUserData::StaticClass();
	}
	struct Z_Construct_UClass_UFGFoliageResourceUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFoliageIdentifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mFoliageIdentifiers;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mFoliageIdentifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFXPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mFXPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExplosionDestroyedEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mExplosionDestroyedEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mVehicleDestroyedEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mVehicleDestroyedEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mVehicleDestroyedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mVehicleDestroyedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPickupEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPickupEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPickupEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPickupEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPickupItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPickupItems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPickupItems_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGFoliageResourceUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFoliageResourceUserData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGFoliageResourceUserData.h" },
		{ "ModuleRelativePath", "Public/FGFoliageResourceUserData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mFoliageIdentifiers_MetaData[] = {
		{ "Category", "FGFoliageResourceUserData" },
		{ "ModuleRelativePath", "Public/FGFoliageResourceUserData.h" },
		{ "ToolTip", "What does this foliage identify itself as" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mFoliageIdentifiers = { "mFoliageIdentifiers", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFoliageResourceUserData, mFoliageIdentifiers), METADATA_PARAMS(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mFoliageIdentifiers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mFoliageIdentifiers_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mFoliageIdentifiers_Inner = { "mFoliageIdentifiers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGFoliageIdentifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mFXPriority_MetaData[] = {
		{ "Category", "FGFoliageResourceUserData" },
		{ "ModuleRelativePath", "Public/FGFoliageResourceUserData.h" },
		{ "ToolTip", "Specifies priority for spawning against other effects. Must be implemented by the spawning class. ex: FGDestructiveProjectile" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mFXPriority = { "mFXPriority", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFoliageResourceUserData, mFXPriority), METADATA_PARAMS(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mFXPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mFXPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mExplosionDestroyedEffect_MetaData[] = {
		{ "Category", "FGFoliageResourceUserData" },
		{ "ModuleRelativePath", "Public/FGFoliageResourceUserData.h" },
		{ "ToolTip", "The effect to play when destroyed by an explosive. If one is not specified it may fall back to either the vehicle effect or pickup effect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mExplosionDestroyedEffect = { "mExplosionDestroyedEffect", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFoliageResourceUserData, mExplosionDestroyedEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mExplosionDestroyedEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mExplosionDestroyedEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mVehicleDestroyedEffect_MetaData[] = {
		{ "Category", "FGFoliageResourceUserData" },
		{ "ModuleRelativePath", "Public/FGFoliageResourceUserData.h" },
		{ "ToolTip", "The effect to play when run over by a vehicle, @todo: Remove BlueprintReadOnly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mVehicleDestroyedEffect = { "mVehicleDestroyedEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFoliageResourceUserData, mVehicleDestroyedEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mVehicleDestroyedEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mVehicleDestroyedEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mVehicleDestroyedEvent_MetaData[] = {
		{ "Category", "FGFoliageResourceUserData" },
		{ "ModuleRelativePath", "Public/FGFoliageResourceUserData.h" },
		{ "ToolTip", "Audio event to be posted when run over by a vehicle, @todo: Remove BlueprintReadOnly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mVehicleDestroyedEvent = { "mVehicleDestroyedEvent", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFoliageResourceUserData, mVehicleDestroyedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mVehicleDestroyedEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mVehicleDestroyedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupEffect_MetaData[] = {
		{ "Category", "FGFoliageResourceUserData" },
		{ "ModuleRelativePath", "Public/FGFoliageResourceUserData.h" },
		{ "ToolTip", "The effect to play where the pickup was, @todo: Remove BlueprintReadOnly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupEffect = { "mPickupEffect", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFoliageResourceUserData, mPickupEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupEvent_MetaData[] = {
		{ "Category", "FGFoliageResourceUserData" },
		{ "ModuleRelativePath", "Public/FGFoliageResourceUserData.h" },
		{ "ToolTip", "Audio event to be posted when picked up, @todo: Remove BlueprintReadOnly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupEvent = { "mPickupEvent", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFoliageResourceUserData, mPickupEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupItems_MetaData[] = {
		{ "Category", "FGFoliageResourceUserData" },
		{ "ModuleRelativePath", "Public/FGFoliageResourceUserData.h" },
		{ "ToolTip", "Items we should gain when picking up the item, @todo: Remove BlueprintReadOnly" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupItems = { "mPickupItems", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGFoliageResourceUserData, mPickupItems), METADATA_PARAMS(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupItems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupItems_Inner = { "mPickupItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemDropWithChance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGFoliageResourceUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mFoliageIdentifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mFoliageIdentifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mFXPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mExplosionDestroyedEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mVehicleDestroyedEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mVehicleDestroyedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGFoliageResourceUserData_Statics::NewProp_mPickupItems_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGFoliageResourceUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGFoliageResourceUserData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGFoliageResourceUserData_Statics::ClassParams = {
		&UFGFoliageResourceUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGFoliageResourceUserData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGFoliageResourceUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGFoliageResourceUserData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGFoliageResourceUserData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGFoliageResourceUserData, 3462382167);
	template<> FACTORYGAME_API UClass* StaticClass<UFGFoliageResourceUserData>()
	{
		return UFGFoliageResourceUserData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGFoliageResourceUserData(Z_Construct_UClass_UFGFoliageResourceUserData, &UFGFoliageResourceUserData::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGFoliageResourceUserData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGFoliageResourceUserData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
