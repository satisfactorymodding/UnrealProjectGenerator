// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/IncludeInBuild.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIncludeInBuild() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EIncludeInBuilds();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	static UEnum* EIncludeInBuilds_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EIncludeInBuilds, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EIncludeInBuilds"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EIncludeInBuilds>()
	{
		return EIncludeInBuilds_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIncludeInBuilds(EIncludeInBuilds_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EIncludeInBuilds"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EIncludeInBuilds_Hash() { return 1792595149U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EIncludeInBuilds()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIncludeInBuilds"), 0, Get_Z_Construct_UEnum_FactoryGame_EIncludeInBuilds_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIncludeInBuilds::IIB_Never", (int64)EIncludeInBuilds::IIB_Never },
				{ "EIncludeInBuilds::IIB_Development", (int64)EIncludeInBuilds::IIB_Development },
				{ "EIncludeInBuilds::IIB_PrivateBuilds", (int64)EIncludeInBuilds::IIB_PrivateBuilds },
				{ "EIncludeInBuilds::IIB_PublicBuilds", (int64)EIncludeInBuilds::IIB_PublicBuilds },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IIB_Development.DisplayName", "Development" },
				{ "IIB_Development.ToolTip", "The schematic will show up in standalone and PIE" },
				{ "IIB_Never.DisplayName", "Never" },
				{ "IIB_Never.ToolTip", "The schematic will never show up anywhere" },
				{ "IIB_PrivateBuilds.DisplayName", "PrivateBuilds" },
				{ "IIB_PrivateBuilds.ToolTip", "The schematic will show up in builds marked as private (ie, local builds, and not builds sent to staging/main)" },
				{ "IIB_PublicBuilds.DisplayName", "PublicBuilds" },
				{ "IIB_PublicBuilds.ToolTip", "The schematic will always be included" },
				{ "ModuleRelativePath", "IncludeInBuild.h" },
				{ "ToolTip", "Where this schematic should be included. Cooker strips away builds that's marked for different build types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EIncludeInBuilds",
				"EIncludeInBuilds",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
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
