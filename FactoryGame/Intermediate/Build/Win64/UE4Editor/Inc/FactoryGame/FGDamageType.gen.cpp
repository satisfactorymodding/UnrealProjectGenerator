// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/DamageTypes/FGDamageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDamageType() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EPlayOnDamageEvent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EOverrideSetting();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDamageType_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	static UEnum* EPlayOnDamageEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EPlayOnDamageEvent, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EPlayOnDamageEvent"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayOnDamageEvent(EPlayOnDamageEvent_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EPlayOnDamageEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EPlayOnDamageEvent_CRC() { return 4073514520U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EPlayOnDamageEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayOnDamageEvent"), 0, Get_Z_Construct_UEnum_FactoryGame_EPlayOnDamageEvent_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PODE_OnTakeAnyDamage", (int64)PODE_OnTakeAnyDamage },
				{ "PODE_OnTakePointDamage", (int64)PODE_OnTakePointDamage },
				{ "PODE_OnTakeRadialDamage", (int64)PODE_OnTakeRadialDamage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "DamageTypes/FGDamageType.h" },
				{ "PODE_OnTakeAnyDamage.DisplayName", "OnTakeAnyDamage" },
				{ "PODE_OnTakePointDamage.DisplayName", "OnTakePointDamage" },
				{ "PODE_OnTakeRadialDamage.DisplayName", "OnTakeRadialDamage" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPlayOnDamageEvent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EPlayOnDamageEvent",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOverrideSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EOverrideSetting, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EOverrideSetting"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOverrideSetting(EOverrideSetting_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EOverrideSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EOverrideSetting_CRC() { return 919718222U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EOverrideSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOverrideSetting"), 0, Get_Z_Construct_UEnum_FactoryGame_EOverrideSetting_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "OS_Additive", (int64)OS_Additive },
				{ "OS_Override", (int64)OS_Override },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "DamageTypes/FGDamageType.h" },
				{ "OS_Additive.DisplayName", "Additive" },
				{ "OS_Override.DisplayName", "Override" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EOverrideSetting",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EOverrideSetting",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UFGDamageType::StaticRegisterNativesUFGDamageType()
	{
	}
	UClass* Z_Construct_UClass_UFGDamageType_NoRegister()
	{
		return UFGDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UFGDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShouldShockEnemy_MetaData[];
#endif
		static void NewProp_mShouldShockEnemy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mShouldShockEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDamageImpulseZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDamageImpulseZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShouldDamageDestructible_MetaData[];
#endif
		static void NewProp_mShouldDamageDestructible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mShouldDamageDestructible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mImpactParticleSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mImpactParticleSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPlayImpactParticleOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mPlayImpactParticleOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mImpactParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mImpactParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mImpactAudioSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mImpactAudioSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPlayImpactAudioOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mPlayImpactAudioOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mImpactAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mImpactAudioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageType_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DamageTypes/FGDamageType.h" },
		{ "ModuleRelativePath", "DamageTypes/FGDamageType.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldShockEnemy_MetaData[] = {
		{ "Category", "DamageType" },
		{ "ModuleRelativePath", "DamageTypes/FGDamageType.h" },
		{ "ToolTip", "Should this damage type shock and scare the enemy, like the stun spear?" },
	};
#endif
	void Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldShockEnemy_SetBit(void* Obj)
	{
		((UFGDamageType*)Obj)->mShouldShockEnemy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldShockEnemy = { UE4CodeGen_Private::EPropertyClass::Bool, "mShouldShockEnemy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGDamageType), &Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldShockEnemy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldShockEnemy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldShockEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageType_Statics::NewProp_mDamageImpulseZ_MetaData[] = {
		{ "Category", "DamageType" },
		{ "ModuleRelativePath", "DamageTypes/FGDamageType.h" },
		{ "ToolTip", "How much extra impulse should be added in Z direction for this damage type" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGDamageType_Statics::NewProp_mDamageImpulseZ = { UE4CodeGen_Private::EPropertyClass::Float, "mDamageImpulseZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UFGDamageType, mDamageImpulseZ), METADATA_PARAMS(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mDamageImpulseZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mDamageImpulseZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldDamageDestructible_MetaData[] = {
		{ "Category", "DamageType" },
		{ "ModuleRelativePath", "DamageTypes/FGDamageType.h" },
		{ "ToolTip", "Should this damage type hurt destrucrible actors?" },
	};
#endif
	void Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldDamageDestructible_SetBit(void* Obj)
	{
		((UFGDamageType*)Obj)->mShouldDamageDestructible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldDamageDestructible = { UE4CodeGen_Private::EPropertyClass::Bool, "mShouldDamageDestructible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGDamageType), &Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldDamageDestructible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldDamageDestructible_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldDamageDestructible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactParticleSetting_MetaData[] = {
		{ "Category", "DamageType|Vfx" },
		{ "ModuleRelativePath", "DamageTypes/FGDamageType.h" },
		{ "ToolTip", "Specify if the audio from this damage type should overrride the damage effect in hit pawn, or add to it" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactParticleSetting = { UE4CodeGen_Private::EPropertyClass::Byte, "mImpactParticleSetting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UFGDamageType, mImpactParticleSetting), Z_Construct_UEnum_FactoryGame_EOverrideSetting, METADATA_PARAMS(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactParticleSetting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactParticleSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageType_Statics::NewProp_mPlayImpactParticleOn_MetaData[] = {
		{ "Category", "DamageType|Vfx" },
		{ "ModuleRelativePath", "DamageTypes/FGDamageType.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGDamageType_Statics::NewProp_mPlayImpactParticleOn = { UE4CodeGen_Private::EPropertyClass::Byte, "mPlayImpactParticleOn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UFGDamageType, mPlayImpactParticleOn), Z_Construct_UEnum_FactoryGame_EPlayOnDamageEvent, METADATA_PARAMS(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mPlayImpactParticleOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mPlayImpactParticleOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactParticle_MetaData[] = {
		{ "Category", "DamageType|Vfx" },
		{ "ModuleRelativePath", "DamageTypes/FGDamageType.h" },
		{ "ToolTip", "When pawn take damage from a source, they play this take damage event" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactParticle = { UE4CodeGen_Private::EPropertyClass::Object, "mImpactParticle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UFGDamageType, mImpactParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactAudioSetting_MetaData[] = {
		{ "Category", "DamageType|Audio" },
		{ "ModuleRelativePath", "DamageTypes/FGDamageType.h" },
		{ "ToolTip", "Specify if the audio from this damage type should overrride the damage sound in hit pawn, or add to it" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactAudioSetting = { UE4CodeGen_Private::EPropertyClass::Byte, "mImpactAudioSetting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UFGDamageType, mImpactAudioSetting), Z_Construct_UEnum_FactoryGame_EOverrideSetting, METADATA_PARAMS(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactAudioSetting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactAudioSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageType_Statics::NewProp_mPlayImpactAudioOn_MetaData[] = {
		{ "Category", "DamageType|Audio" },
		{ "ModuleRelativePath", "DamageTypes/FGDamageType.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGDamageType_Statics::NewProp_mPlayImpactAudioOn = { UE4CodeGen_Private::EPropertyClass::Byte, "mPlayImpactAudioOn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UFGDamageType, mPlayImpactAudioOn), Z_Construct_UEnum_FactoryGame_EPlayOnDamageEvent, METADATA_PARAMS(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mPlayImpactAudioOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mPlayImpactAudioOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactAudioEvent_MetaData[] = {
		{ "Category", "DamageType|Audio" },
		{ "ModuleRelativePath", "DamageTypes/FGDamageType.h" },
		{ "ToolTip", "When pawn take damage from a source, they play this take damage event" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactAudioEvent = { UE4CodeGen_Private::EPropertyClass::Object, "mImpactAudioEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UFGDamageType, mImpactAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactAudioEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactAudioEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGDamageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldShockEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageType_Statics::NewProp_mDamageImpulseZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageType_Statics::NewProp_mShouldDamageDestructible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactParticleSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageType_Statics::NewProp_mPlayImpactParticleOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactAudioSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageType_Statics::NewProp_mPlayImpactAudioOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageType_Statics::NewProp_mImpactAudioEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGDamageType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGDamageType_Statics::ClassParams = {
		&UFGDamageType::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000100A0u,
		nullptr, 0,
		Z_Construct_UClass_UFGDamageType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGDamageType_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGDamageType_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGDamageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGDamageType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGDamageType, 2048364546);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGDamageType(Z_Construct_UClass_UFGDamageType, &UFGDamageType::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGDamageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGDamageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
