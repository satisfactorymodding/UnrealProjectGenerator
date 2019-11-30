// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/UndefinedBool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUndefinedBool() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EUndefinedBool();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	static UEnum* EUndefinedBool_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EUndefinedBool, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EUndefinedBool"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUndefinedBool(EUndefinedBool_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EUndefinedBool"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EUndefinedBool_CRC() { return 4121200940U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EUndefinedBool()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUndefinedBool"), 0, Get_Z_Construct_UEnum_FactoryGame_EUndefinedBool_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUndefinedBool::UB_Undefined", (int64)EUndefinedBool::UB_Undefined },
				{ "EUndefinedBool::UB_False", (int64)EUndefinedBool::UB_False },
				{ "EUndefinedBool::UB_True", (int64)EUndefinedBool::UB_True },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/UndefinedBool.h" },
				{ "ToolTip", "A bool that can be undefined" },
				{ "UB_False.ToolTip", "MODDING EDIT (= 0)" },
				{ "UB_True.ToolTip", "MODDING EDIT (= 1)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EUndefinedBool",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EUndefinedBool",
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
