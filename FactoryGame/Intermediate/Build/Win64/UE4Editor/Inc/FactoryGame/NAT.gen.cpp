// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/NAT.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNAT() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ECachedNATType();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	static UEnum* ECachedNATType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ECachedNATType, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ECachedNATType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECachedNATType(ECachedNATType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ECachedNATType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ECachedNATType_CRC() { return 3900336757U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ECachedNATType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECachedNATType"), 0, Get_Z_Construct_UEnum_FactoryGame_ECachedNATType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECachedNATType::CNT_Open", (int64)ECachedNATType::CNT_Open },
				{ "ECachedNATType::CNT_Moderate", (int64)ECachedNATType::CNT_Moderate },
				{ "ECachedNATType::CNT_Strict", (int64)ECachedNATType::CNT_Strict },
				{ "ECachedNATType::CNT_TBD", (int64)ECachedNATType::CNT_TBD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CNT_Moderate.DisplayName", "Moderate" },
				{ "CNT_Moderate.ToolTip", "You can directly-connect to other Moderate and Open peers" },
				{ "CNT_Open.DisplayName", "Open" },
				{ "CNT_Open.ToolTip", "All peers can directly-connect to you" },
				{ "CNT_Strict.DisplayName", "Strict" },
				{ "CNT_Strict.ToolTip", "You can only directly-connect to Open peers" },
				{ "CNT_TBD.DisplayName", "TBD" },
				{ "CNT_TBD.ToolTip", "NAT type has is not yet determined" },
				{ "ModuleRelativePath", "NAT.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECachedNATType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECachedNATType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
