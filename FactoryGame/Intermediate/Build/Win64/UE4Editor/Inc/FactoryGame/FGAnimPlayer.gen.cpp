// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGAnimPlayer.h"
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
		{ "ModuleRelativePath", "Public/FGAnimPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mCharacter_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "Public/FGAnimPlayer.h" },
		{ "ToolTip", "Character this anim belongs to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mCharacter = { "mCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAnimPlayer, mCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBacklotType_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "Public/FGAnimPlayer.h" },
		{ "ToolTip", "Saved value of back equipment" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBacklotType = { "mBacklotType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAnimPlayer, mBacklotType), Z_Construct_UEnum_FactoryGame_EBackEquipment, METADATA_PARAMS(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBacklotType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBacklotType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBacklotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotType_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "Public/FGAnimPlayer.h" },
		{ "ToolTip", "Saved value of arm equipment" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotType = { "mArmSlotType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGAnimPlayer, mArmSlotType), Z_Construct_UEnum_FactoryGame_EArmEquipment, METADATA_PARAMS(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mIsFirstPerson_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "Public/FGAnimPlayer.h" },
		{ "ToolTip", "Is first or third person mesh?" },
	};
#endif
	void Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mIsFirstPerson_SetBit(void* Obj)
	{
		((UFGAnimPlayer*)Obj)->mIsFirstPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mIsFirstPerson = { "mIsFirstPerson", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGAnimPlayer), &Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mIsFirstPerson_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mIsFirstPerson_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mIsFirstPerson_MetaData)) };
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
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGAnimPlayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFGAnimPlayer_Statics::PropPointers),
		0,
		0x009000A8u,
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
	IMPLEMENT_CLASS(UFGAnimPlayer, 2726953594);
	template<> FACTORYGAME_API UClass* StaticClass<UFGAnimPlayer>()
	{
		return UFGAnimPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAnimPlayer(Z_Construct_UClass_UFGAnimPlayer, &UFGAnimPlayer::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGAnimPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAnimPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
