// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGAnimPlayer.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAnimPlayer() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAnimPlayer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAnimPlayer();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCharacterAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EBackEquipment();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EArmEquipment();
// End Cross Module References
	void UFGAnimPlayer::StaticRegisterNativesUFGAnimPlayer()
	{
	}
	UClass* Z_Construct_UClass_UFGAnimPlayer_NoRegister()
	{
		return UFGAnimPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UFGAnimPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBacklotType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mBacklotType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mBacklotType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mArmSlotType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mArmSlotType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mArmSlotType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsFirstPerson_MetaData[];
#endif
		static void NewProp_mIsFirstPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsFirstPerson;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAnimPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGCharacterAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "FGAnimPlayer.h" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mCharacter_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
		{ "ToolTip", "Character this anim belongs to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "mCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGAnimPlayer, mCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBacklotType_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
		{ "ToolTip", "Saved value of back equipment" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBacklotType = { UE4CodeGen_Private::EPropertyClass::Enum, "mBacklotType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGAnimPlayer, mBacklotType), Z_Construct_UEnum_FactoryGame_EBackEquipment, METADATA_PARAMS(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBacklotType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBacklotType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBacklotType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotType_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
		{ "ToolTip", "Saved value of arm equipment" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotType = { UE4CodeGen_Private::EPropertyClass::Enum, "mArmSlotType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGAnimPlayer, mArmSlotType), Z_Construct_UEnum_FactoryGame_EArmEquipment, METADATA_PARAMS(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mIsFirstPerson_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
		{ "ToolTip", "Is first or third person mesh?" },
	};
#endif
	void Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mIsFirstPerson_SetBit(void* Obj)
	{
		((UFGAnimPlayer*)Obj)->mIsFirstPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mIsFirstPerson = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsFirstPerson", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGAnimPlayer), &Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mIsFirstPerson_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mIsFirstPerson_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mIsFirstPerson_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGAnimPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBacklotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBacklotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mIsFirstPerson,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAnimPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAnimPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAnimPlayer_Statics::ClassParams = {
		&UFGAnimPlayer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		nullptr, 0,
		Z_Construct_UClass_UFGAnimPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGAnimPlayer_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGAnimPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGAnimPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAnimPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAnimPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAnimPlayer, 3060952701);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAnimPlayer(Z_Construct_UClass_UFGAnimPlayer, &UFGAnimPlayer::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGAnimPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAnimPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
