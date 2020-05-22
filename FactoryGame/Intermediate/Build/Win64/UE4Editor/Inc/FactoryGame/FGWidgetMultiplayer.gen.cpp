// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/UI/FGWidgetMultiplayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWidgetMultiplayer() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EMultiplayerButtonType();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWidgetMultiplayer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWidgetMultiplayer();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	static UEnum* EMultiplayerButtonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EMultiplayerButtonType, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EMultiplayerButtonType"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EMultiplayerButtonType>()
	{
		return EMultiplayerButtonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMultiplayerButtonType(EMultiplayerButtonType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EMultiplayerButtonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EMultiplayerButtonType_Hash() { return 1093396675U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EMultiplayerButtonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMultiplayerButtonType"), 0, Get_Z_Construct_UEnum_FactoryGame_EMultiplayerButtonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMultiplayerButtonType::MBT_Join", (int64)EMultiplayerButtonType::MBT_Join },
				{ "EMultiplayerButtonType::MBT_SendInvite", (int64)EMultiplayerButtonType::MBT_SendInvite },
				{ "EMultiplayerButtonType::MBT_JoinInvite", (int64)EMultiplayerButtonType::MBT_JoinInvite },
				{ "EMultiplayerButtonType::MBT_ManagePlayers", (int64)EMultiplayerButtonType::MBT_ManagePlayers },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MBT_Join.DisplayName", "Join" },
				{ "MBT_JoinInvite.DisplayName", "JoinInvite" },
				{ "MBT_ManagePlayers.DisplayName", "ManagePlayers" },
				{ "MBT_SendInvite.DisplayName", "SendInvite" },
				{ "ModuleRelativePath", "Public/UI/FGWidgetMultiplayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EMultiplayerButtonType",
				"EMultiplayerButtonType",
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
	void UFGWidgetMultiplayer::StaticRegisterNativesUFGWidgetMultiplayer()
	{
	}
	UClass* Z_Construct_UClass_UFGWidgetMultiplayer_NoRegister()
	{
		return UFGWidgetMultiplayer::StaticClass();
	}
	struct Z_Construct_UClass_UFGWidgetMultiplayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMultiplayerButtonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mMultiplayerButtonType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mMultiplayerButtonType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsPlayingSatisfactory_MetaData[];
#endif
		static void NewProp_mIsPlayingSatisfactory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsPlayingSatisfactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsOnline_MetaData[];
#endif
		static void NewProp_mIsOnline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsOnline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGWidgetMultiplayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetMultiplayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGWidgetMultiplayer.h" },
		{ "ModuleRelativePath", "Public/UI/FGWidgetMultiplayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mMultiplayerButtonType_MetaData[] = {
		{ "Category", "FGWidgetMultiplayer" },
		{ "ModuleRelativePath", "Public/UI/FGWidgetMultiplayer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mMultiplayerButtonType = { "mMultiplayerButtonType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWidgetMultiplayer, mMultiplayerButtonType), Z_Construct_UEnum_FactoryGame_EMultiplayerButtonType, METADATA_PARAMS(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mMultiplayerButtonType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mMultiplayerButtonType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mMultiplayerButtonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mTitle_MetaData[] = {
		{ "Category", "FGWidgetMultiplayer" },
		{ "ModuleRelativePath", "Public/UI/FGWidgetMultiplayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mTitle = { "mTitle", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWidgetMultiplayer, mTitle), METADATA_PARAMS(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mTitle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory_MetaData[] = {
		{ "Category", "FGWidgetMultiplayer" },
		{ "ModuleRelativePath", "Public/UI/FGWidgetMultiplayer.h" },
	};
#endif
	void Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory_SetBit(void* Obj)
	{
		((UFGWidgetMultiplayer*)Obj)->mIsPlayingSatisfactory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory = { "mIsPlayingSatisfactory", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGWidgetMultiplayer), &Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline_MetaData[] = {
		{ "Category", "FGWidgetMultiplayer" },
		{ "ModuleRelativePath", "Public/UI/FGWidgetMultiplayer.h" },
	};
#endif
	void Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline_SetBit(void* Obj)
	{
		((UFGWidgetMultiplayer*)Obj)->mIsOnline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline = { "mIsOnline", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGWidgetMultiplayer), &Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGWidgetMultiplayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mMultiplayerButtonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mMultiplayerButtonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsPlayingSatisfactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetMultiplayer_Statics::NewProp_mIsOnline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGWidgetMultiplayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGWidgetMultiplayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGWidgetMultiplayer_Statics::ClassParams = {
		&UFGWidgetMultiplayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGWidgetMultiplayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetMultiplayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGWidgetMultiplayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGWidgetMultiplayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGWidgetMultiplayer, 3578504028);
	template<> FACTORYGAME_API UClass* StaticClass<UFGWidgetMultiplayer>()
	{
		return UFGWidgetMultiplayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGWidgetMultiplayer(Z_Construct_UClass_UFGWidgetMultiplayer, &UFGWidgetMultiplayer::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGWidgetMultiplayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGWidgetMultiplayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
