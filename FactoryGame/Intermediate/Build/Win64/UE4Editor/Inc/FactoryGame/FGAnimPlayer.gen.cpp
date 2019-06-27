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
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EBackEquipment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EArmEquipment();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FBackEquipmentData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentAttachment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FArmEquipmentData();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAnimPlayer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAnimPlayer();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCharacterAnimInstance();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
// End Cross Module References
	static UEnum* EBackEquipment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EBackEquipment, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EBackEquipment"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBackEquipment(EBackEquipment_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EBackEquipment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EBackEquipment_CRC() { return 541749194U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EBackEquipment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBackEquipment"), 0, Get_Z_Construct_UEnum_FactoryGame_EBackEquipment_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBackEquipment::BE_None", (int64)EBackEquipment::BE_None },
				{ "EBackEquipment::BE_Jetpack", (int64)EBackEquipment::BE_Jetpack },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "FGAnimPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBackEquipment",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBackEquipment",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EArmEquipment_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EArmEquipment, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EArmEquipment"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EArmEquipment(EArmEquipment_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EArmEquipment"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EArmEquipment_CRC() { return 3218316395U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EArmEquipment()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EArmEquipment"), 0, Get_Z_Construct_UEnum_FactoryGame_EArmEquipment_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EArmEquipment::AE_None", (int64)EArmEquipment::AE_None },
				{ "EArmEquipment::AE_ChainSaw", (int64)EArmEquipment::AE_ChainSaw },
				{ "EArmEquipment::AE_RebarGun", (int64)EArmEquipment::AE_RebarGun },
				{ "EArmEquipment::AE_BuildGun", (int64)EArmEquipment::AE_BuildGun },
				{ "EArmEquipment::AE_Nobelisk", (int64)EArmEquipment::AE_Nobelisk },
				{ "EArmEquipment::AE_ResourceScanner", (int64)EArmEquipment::AE_ResourceScanner },
				{ "EArmEquipment::AE_Rifle", (int64)EArmEquipment::AE_Rifle },
				{ "EArmEquipment::AE_ColorGun", (int64)EArmEquipment::AE_ColorGun },
				{ "EArmEquipment::AE_OneHandEquipment", (int64)EArmEquipment::AE_OneHandEquipment },
				{ "EArmEquipment::AE_Consumables", (int64)EArmEquipment::AE_Consumables },
				{ "EArmEquipment::AE_ObjectScanner", (int64)EArmEquipment::AE_ObjectScanner },
				{ "EArmEquipment::AE_PortableMiner", (int64)EArmEquipment::AE_PortableMiner },
				{ "EArmEquipment::AE_StunSpear", (int64)EArmEquipment::AE_StunSpear },
				{ "EArmEquipment::AE_ShockShank", (int64)EArmEquipment::AE_ShockShank },
				{ "EArmEquipment::AE_ResourceCollector", (int64)EArmEquipment::AE_ResourceCollector },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "FGAnimPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EArmEquipment",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EArmEquipment",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBackEquipmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FBackEquipmentData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBackEquipmentData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("BackEquipmentData"), sizeof(FBackEquipmentData), Get_Z_Construct_UScriptStruct_FBackEquipmentData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBackEquipmentData(FBackEquipmentData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("BackEquipmentData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFBackEquipmentData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFBackEquipmentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BackEquipmentData")),new UScriptStruct::TCppStructOps<FBackEquipmentData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFBackEquipmentData;
	struct Z_Construct_UScriptStruct_FBackEquipmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BackEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BackEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EquipmentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackEquipmentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBackEquipmentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_BackEnum_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_BackEnum = { UE4CodeGen_Private::EPropertyClass::Enum, "BackEnum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FBackEquipmentData, BackEnum), Z_Construct_UEnum_FactoryGame_EBackEquipment, METADATA_PARAMS(Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_BackEnum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_BackEnum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_BackEnum_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_AttachmentClass_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_AttachmentClass = { UE4CodeGen_Private::EPropertyClass::Class, "AttachmentClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FBackEquipmentData, AttachmentClass), Z_Construct_UClass_AFGEquipmentAttachment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_AttachmentClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_AttachmentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_EquipmentClass_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_EquipmentClass = { UE4CodeGen_Private::EPropertyClass::Class, "EquipmentClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FBackEquipmentData, EquipmentClass), Z_Construct_UClass_AFGEquipment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_EquipmentClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_EquipmentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBackEquipmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_BackEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_BackEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_AttachmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBackEquipmentData_Statics::NewProp_EquipmentClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBackEquipmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"BackEquipmentData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBackEquipmentData),
		alignof(FBackEquipmentData),
		Z_Construct_UScriptStruct_FBackEquipmentData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBackEquipmentData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBackEquipmentData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBackEquipmentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBackEquipmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBackEquipmentData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BackEquipmentData"), sizeof(FBackEquipmentData), Get_Z_Construct_UScriptStruct_FBackEquipmentData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBackEquipmentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBackEquipmentData_CRC() { return 1487964714U; }
class UScriptStruct* FArmEquipmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FArmEquipmentData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArmEquipmentData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ArmEquipmentData"), sizeof(FArmEquipmentData), Get_Z_Construct_UScriptStruct_FArmEquipmentData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArmEquipmentData(FArmEquipmentData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ArmEquipmentData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFArmEquipmentData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFArmEquipmentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArmEquipmentData")),new UScriptStruct::TCppStructOps<FArmEquipmentData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFArmEquipmentData;
	struct Z_Construct_UScriptStruct_FArmEquipmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ArmEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArmEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EquipmentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmEquipmentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArmEquipmentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_ArmEnum_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_ArmEnum = { UE4CodeGen_Private::EPropertyClass::Enum, "ArmEnum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(FArmEquipmentData, ArmEnum), Z_Construct_UEnum_FactoryGame_EArmEquipment, METADATA_PARAMS(Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_ArmEnum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_ArmEnum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_ArmEnum_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_AttachmentClass_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_AttachmentClass = { UE4CodeGen_Private::EPropertyClass::Class, "AttachmentClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FArmEquipmentData, AttachmentClass), Z_Construct_UClass_AFGEquipmentAttachment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_AttachmentClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_AttachmentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_EquipmentClass_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_EquipmentClass = { UE4CodeGen_Private::EPropertyClass::Class, "EquipmentClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FArmEquipmentData, EquipmentClass), Z_Construct_UClass_AFGEquipment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_EquipmentClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_EquipmentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArmEquipmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_ArmEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_ArmEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_AttachmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArmEquipmentData_Statics::NewProp_EquipmentClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArmEquipmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ArmEquipmentData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FArmEquipmentData),
		alignof(FArmEquipmentData),
		Z_Construct_UScriptStruct_FArmEquipmentData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FArmEquipmentData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArmEquipmentData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FArmEquipmentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArmEquipmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArmEquipmentData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArmEquipmentData"), sizeof(FArmEquipmentData), Get_Z_Construct_UScriptStruct_FArmEquipmentData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArmEquipmentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArmEquipmentData_CRC() { return 3890301005U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBackSlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mBackSlotData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mBackSlotData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mArmSlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mArmSlotData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mArmSlotData_Inner;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBackSlotData_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
		{ "ToolTip", "Array to fill with data about back slots" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBackSlotData = { UE4CodeGen_Private::EPropertyClass::Array, "mBackSlotData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGAnimPlayer, mBackSlotData), METADATA_PARAMS(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBackSlotData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBackSlotData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBackSlotData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mBackSlotData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBackEquipmentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotData_MetaData[] = {
		{ "Category", "Anim Player" },
		{ "ModuleRelativePath", "FGAnimPlayer.h" },
		{ "ToolTip", "Array to fill with data about arm slots" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotData = { UE4CodeGen_Private::EPropertyClass::Array, "mArmSlotData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGAnimPlayer, mArmSlotData), METADATA_PARAMS(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mArmSlotData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FArmEquipmentData, METADATA_PARAMS(nullptr, 0) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBackSlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mBackSlotData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAnimPlayer_Statics::NewProp_mArmSlotData_Inner,
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
	IMPLEMENT_CLASS(UFGAnimPlayer, 128139434);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAnimPlayer(Z_Construct_UClass_UFGAnimPlayer, &UFGAnimPlayer::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGAnimPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAnimPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
