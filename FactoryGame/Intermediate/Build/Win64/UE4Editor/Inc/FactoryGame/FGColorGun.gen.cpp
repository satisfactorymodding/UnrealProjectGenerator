// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGColorGun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGColorGun() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EFGColorGunTargetType();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGColorGun_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGColorGun();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeaponInstantFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_GetPrimaryColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_GetSecondaryColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_SetColorSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* EFGColorGunTargetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EFGColorGunTargetType, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EFGColorGunTargetType"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EFGColorGunTargetType>()
	{
		return EFGColorGunTargetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFGColorGunTargetType(EFGColorGunTargetType_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EFGColorGunTargetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EFGColorGunTargetType_Hash() { return 2033661100U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EFGColorGunTargetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFGColorGunTargetType"), 0, Get_Z_Construct_UEnum_FactoryGame_EFGColorGunTargetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFGColorGunTargetType::ECGT_noTarget", (int64)EFGColorGunTargetType::ECGT_noTarget },
				{ "EFGColorGunTargetType::ECGT_nonColorable", (int64)EFGColorGunTargetType::ECGT_nonColorable },
				{ "EFGColorGunTargetType::ECGT_validTarget", (int64)EFGColorGunTargetType::ECGT_validTarget },
				{ "EFGColorGunTargetType::ECGT_sameColorSlot", (int64)EFGColorGunTargetType::ECGT_sameColorSlot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FGColorGun.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EFGColorGunTargetType",
				"EFGColorGunTargetType",
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
	static FName NAME_AFGColorGun_OnTargetStateChanged = FName(TEXT("OnTargetStateChanged"));
	void AFGColorGun::OnTargetStateChanged(EFGColorGunTargetType targetType)
	{
		FGColorGun_eventOnTargetStateChanged_Parms Parms;
		Parms.targetType=targetType;
		ProcessEvent(FindFunctionChecked(NAME_AFGColorGun_OnTargetStateChanged),&Parms);
	}
	static FName NAME_AFGColorGun_Server_SetColorSlot = FName(TEXT("Server_SetColorSlot"));
	void AFGColorGun::Server_SetColorSlot(uint8 slotIndex)
	{
		FGColorGun_eventServer_SetColorSlot_Parms Parms;
		Parms.slotIndex=slotIndex;
		ProcessEvent(FindFunctionChecked(NAME_AFGColorGun_Server_SetColorSlot),&Parms);
	}
	static FName NAME_AFGColorGun_Server_SetPrimaryColorForSlot = FName(TEXT("Server_SetPrimaryColorForSlot"));
	void AFGColorGun::Server_SetPrimaryColorForSlot(uint8 slotIndex, FLinearColor newColor)
	{
		FGColorGun_eventServer_SetPrimaryColorForSlot_Parms Parms;
		Parms.slotIndex=slotIndex;
		Parms.newColor=newColor;
		ProcessEvent(FindFunctionChecked(NAME_AFGColorGun_Server_SetPrimaryColorForSlot),&Parms);
	}
	static FName NAME_AFGColorGun_Server_SetSecondaryColorForSlot = FName(TEXT("Server_SetSecondaryColorForSlot"));
	void AFGColorGun::Server_SetSecondaryColorForSlot(uint8 slotIndex, FLinearColor newColor)
	{
		FGColorGun_eventServer_SetSecondaryColorForSlot_Parms Parms;
		Parms.slotIndex=slotIndex;
		Parms.newColor=newColor;
		ProcessEvent(FindFunctionChecked(NAME_AFGColorGun_Server_SetSecondaryColorForSlot),&Parms);
	}
	static FName NAME_AFGColorGun_ToggleColorPickerUI = FName(TEXT("ToggleColorPickerUI"));
	void AFGColorGun::ToggleColorPickerUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGColorGun_ToggleColorPickerUI),NULL);
	}
	void AFGColorGun::StaticRegisterNativesAFGColorGun()
	{
		UClass* Class = AFGColorGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColorSlotIndex", &AFGColorGun::execGetColorSlotIndex },
			{ "GetMaxNumColorSlots", &AFGColorGun::execGetMaxNumColorSlots },
			{ "GetNumColorSlotsExposedToPlayers", &AFGColorGun::execGetNumColorSlotsExposedToPlayers },
			{ "GetPrimaryColor", &AFGColorGun::execGetPrimaryColor },
			{ "GetPrimaryColorForSlot", &AFGColorGun::execGetPrimaryColorForSlot },
			{ "GetSecondaryColor", &AFGColorGun::execGetSecondaryColor },
			{ "GetSecondaryColorForSlot", &AFGColorGun::execGetSecondaryColorForSlot },
			{ "OnSecondaryFirePressed", &AFGColorGun::execOnSecondaryFirePressed },
			{ "Server_SetColorSlot", &AFGColorGun::execServer_SetColorSlot },
			{ "Server_SetPrimaryColorForSlot", &AFGColorGun::execServer_SetPrimaryColorForSlot },
			{ "Server_SetSecondaryColorForSlot", &AFGColorGun::execServer_SetSecondaryColorForSlot },
			{ "SetColorSlot", &AFGColorGun::execSetColorSlot },
			{ "SetPrimaryColorForSlot", &AFGColorGun::execSetPrimaryColorForSlot },
			{ "SetSecondaryColorForSlot", &AFGColorGun::execSetSecondaryColorForSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics
	{
		struct FGColorGun_eventGetColorSlotIndex_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventGetColorSlotIndex_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Get the the currently active color slot index for the gun" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "GetColorSlotIndex", sizeof(FGColorGun_eventGetColorSlotIndex_Parms), Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics
	{
		struct FGColorGun_eventGetMaxNumColorSlots_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventGetMaxNumColorSlots_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Gets the mac number of color slots" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "GetMaxNumColorSlots", sizeof(FGColorGun_eventGetMaxNumColorSlots_Parms), Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers_Statics
	{
		struct FGColorGun_eventGetNumColorSlotsExposedToPlayers_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventGetNumColorSlotsExposedToPlayers_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "GetNumColorSlotsExposedToPlayers", sizeof(FGColorGun_eventGetNumColorSlotsExposedToPlayers_Parms), Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics
	{
		struct FGColorGun_eventGetPrimaryColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventGetPrimaryColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DEPRECATED]  Get the primary color" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "GetPrimaryColor", sizeof(FGColorGun_eventGetPrimaryColor_Parms), Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_GetPrimaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_GetPrimaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics
	{
		struct FGColorGun_eventGetPrimaryColorForSlot_Parms
		{
			uint8 index;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventGetPrimaryColorForSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventGetPrimaryColorForSlot_Parms, index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Get the primary color for a given color slot index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "GetPrimaryColorForSlot", sizeof(FGColorGun_eventGetPrimaryColorForSlot_Parms), Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics
	{
		struct FGColorGun_eventGetSecondaryColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventGetSecondaryColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DEPRECATED] Get the Secondary color" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "GetSecondaryColor", sizeof(FGColorGun_eventGetSecondaryColor_Parms), Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_GetSecondaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_GetSecondaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics
	{
		struct FGColorGun_eventGetSecondaryColorForSlot_Parms
		{
			uint8 index;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventGetSecondaryColorForSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventGetSecondaryColorForSlot_Parms, index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Get the secondary color for a given color slot index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "GetSecondaryColorForSlot", sizeof(FGColorGun_eventGetSecondaryColorForSlot_Parms), Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Called when we press secondary fire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "OnSecondaryFirePressed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_targetType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_targetType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::NewProp_targetType = { "targetType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventOnTargetStateChanged_Parms, targetType), Z_Construct_UEnum_FactoryGame_EFGColorGunTargetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::NewProp_targetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::NewProp_targetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::NewProp_targetType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Opens the UI so that the player can select both colors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "OnTargetStateChanged", sizeof(FGColorGun_eventOnTargetStateChanged_Parms), Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot_Statics::NewProp_slotIndex = { "slotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventServer_SetColorSlot_Parms, slotIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Sets the currently active color slot index for the gun on the server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "Server_SetColorSlot", sizeof(FGColorGun_eventServer_SetColorSlot_Parms), Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot_Statics::NewProp_newColor = { "newColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventServer_SetPrimaryColorForSlot_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot_Statics::NewProp_slotIndex = { "slotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventServer_SetPrimaryColorForSlot_Parms, slotIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot_Statics::NewProp_newColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Set the secondary color for a given slot on the server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "Server_SetPrimaryColorForSlot", sizeof(FGColorGun_eventServer_SetPrimaryColorForSlot_Parms), Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot_Statics::NewProp_newColor = { "newColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventServer_SetSecondaryColorForSlot_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot_Statics::NewProp_slotIndex = { "slotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventServer_SetSecondaryColorForSlot_Parms, slotIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot_Statics::NewProp_newColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Sets the primary color for a given slot index on the server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "Server_SetSecondaryColorForSlot", sizeof(FGColorGun_eventServer_SetSecondaryColorForSlot_Parms), Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics
	{
		struct FGColorGun_eventSetColorSlot_Parms
		{
			uint8 slotIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::NewProp_slotIndex = { "slotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventSetColorSlot_Parms, slotIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Sets the currently active color slot index for the gun" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "SetColorSlot", sizeof(FGColorGun_eventSetColorSlot_Parms), Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_SetColorSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_SetColorSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics
	{
		struct FGColorGun_eventSetPrimaryColorForSlot_Parms
		{
			uint8 slotIndex;
			FLinearColor newColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::NewProp_newColor = { "newColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventSetPrimaryColorForSlot_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::NewProp_slotIndex = { "slotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventSetPrimaryColorForSlot_Parms, slotIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::NewProp_newColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Set the secondary color for a given slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "SetPrimaryColorForSlot", sizeof(FGColorGun_eventSetPrimaryColorForSlot_Parms), Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics
	{
		struct FGColorGun_eventSetSecondaryColorForSlot_Parms
		{
			uint8 slotIndex;
			FLinearColor newColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::NewProp_newColor = { "newColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventSetSecondaryColorForSlot_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::NewProp_slotIndex = { "slotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGColorGun_eventSetSecondaryColorForSlot_Parms, slotIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::NewProp_newColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::NewProp_slotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Set the secondary color for a given slot index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "SetSecondaryColorForSlot", sizeof(FGColorGun_eventSetSecondaryColorForSlot_Parms), Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "Opens the UI so that the player can select both colors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGColorGun, nullptr, "ToggleColorPickerUI", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGColorGun_NoRegister()
	{
		return AFGColorGun::StaticClass();
	}
	struct Z_Construct_UClass_AFGColorGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentColorTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCurrentColorTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mColorSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mColorSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mValidTargetCrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mValidTargetCrosshairTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNonColorableTargetCrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mNonColorableTargetCrosshairTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNonColorableTargetCrosshairColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mNonColorableTargetCrosshairColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNoTargetCrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mNoTargetCrosshairTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNoTargetCrosshairColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mNoTargetCrosshairColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRedundantTargetCrosshairTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mRedundantTargetCrosshairTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRedundantTargetCrosshairColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mRedundantTargetCrosshairColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSecondaryColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSecondaryColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPrimaryColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPrimaryColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGColorGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGWeaponInstantFire,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGColorGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGColorGun_GetColorSlotIndex, "GetColorSlotIndex" }, // 1962360736
		{ &Z_Construct_UFunction_AFGColorGun_GetMaxNumColorSlots, "GetMaxNumColorSlots" }, // 2385451448
		{ &Z_Construct_UFunction_AFGColorGun_GetNumColorSlotsExposedToPlayers, "GetNumColorSlotsExposedToPlayers" }, // 3118643905
		{ &Z_Construct_UFunction_AFGColorGun_GetPrimaryColor, "GetPrimaryColor" }, // 407511014
		{ &Z_Construct_UFunction_AFGColorGun_GetPrimaryColorForSlot, "GetPrimaryColorForSlot" }, // 1920498252
		{ &Z_Construct_UFunction_AFGColorGun_GetSecondaryColor, "GetSecondaryColor" }, // 3508448898
		{ &Z_Construct_UFunction_AFGColorGun_GetSecondaryColorForSlot, "GetSecondaryColorForSlot" }, // 1876999437
		{ &Z_Construct_UFunction_AFGColorGun_OnSecondaryFirePressed, "OnSecondaryFirePressed" }, // 966731662
		{ &Z_Construct_UFunction_AFGColorGun_OnTargetStateChanged, "OnTargetStateChanged" }, // 4153725459
		{ &Z_Construct_UFunction_AFGColorGun_Server_SetColorSlot, "Server_SetColorSlot" }, // 1485019610
		{ &Z_Construct_UFunction_AFGColorGun_Server_SetPrimaryColorForSlot, "Server_SetPrimaryColorForSlot" }, // 2076173350
		{ &Z_Construct_UFunction_AFGColorGun_Server_SetSecondaryColorForSlot, "Server_SetSecondaryColorForSlot" }, // 2455744016
		{ &Z_Construct_UFunction_AFGColorGun_SetColorSlot, "SetColorSlot" }, // 3821481293
		{ &Z_Construct_UFunction_AFGColorGun_SetPrimaryColorForSlot, "SetPrimaryColorForSlot" }, // 2721800017
		{ &Z_Construct_UFunction_AFGColorGun_SetSecondaryColorForSlot, "SetSecondaryColorForSlot" }, // 1694923235
		{ &Z_Construct_UFunction_AFGColorGun_ToggleColorPickerUI, "ToggleColorPickerUI" }, // 1614738287
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGColorGun.h" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mCurrentColorTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DavalliusA:Fri/01-03-2019] don't use the first color as default, as it will make players maybe not notice when thye fire on a building already using the default color" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mCurrentColorTarget = { "mCurrentColorTarget", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGColorGun, mCurrentColorTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mCurrentColorTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mCurrentColorTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mColorSlot_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "This will be the color slot used when shooting" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mColorSlot = { "mColorSlot", nullptr, (EPropertyFlags)0x0020080001010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGColorGun, mColorSlot), nullptr, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mColorSlot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mColorSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mValidTargetCrosshairTexture_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair texture used when aiming at a target isvalid" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mValidTargetCrosshairTexture = { "mValidTargetCrosshairTexture", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGColorGun, mValidTargetCrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mValidTargetCrosshairTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mValidTargetCrosshairTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairTexture_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair texture used when aiming at a target that can't be colored" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairTexture = { "mNonColorableTargetCrosshairTexture", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGColorGun, mNonColorableTargetCrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairColor_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair color used when aiming at a target that can't be colored" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairColor = { "mNonColorableTargetCrosshairColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGColorGun, mNonColorableTargetCrosshairColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairTexture_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair texture used when aiming at a target too far away or not aiming at a target at all" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairTexture = { "mNoTargetCrosshairTexture", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGColorGun, mNoTargetCrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairColor_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair color used when aiming at a target too far away or not aiming at a target at all" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairColor = { "mNoTargetCrosshairColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGColorGun, mNoTargetCrosshairColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairTexture_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair texture used when aiming at a target that already have the same color slot as you are painting" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairTexture = { "mRedundantTargetCrosshairTexture", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGColorGun, mRedundantTargetCrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairColor_MetaData[] = {
		{ "Category", "Color Gun" },
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "crosshair color used when aiming at a target that already have the same color slot as you are painting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairColor = { "mRedundantTargetCrosshairColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGColorGun, mRedundantTargetCrosshairColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mSecondaryColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DEPRECATED] This will be the color used when shooting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mSecondaryColor = { "mSecondaryColor", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGColorGun, mSecondaryColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mSecondaryColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mSecondaryColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGColorGun_Statics::NewProp_mPrimaryColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGColorGun.h" },
		{ "ToolTip", "[DEPRECATED] This will be the color used when shooting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGColorGun_Statics::NewProp_mPrimaryColor = { "mPrimaryColor", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGColorGun, mPrimaryColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mPrimaryColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::NewProp_mPrimaryColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGColorGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mCurrentColorTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mColorSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mValidTargetCrosshairTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNonColorableTargetCrosshairColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mNoTargetCrosshairColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mRedundantTargetCrosshairColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mSecondaryColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGColorGun_Statics::NewProp_mPrimaryColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGColorGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGColorGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGColorGun_Statics::ClassParams = {
		&AFGColorGun::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGColorGun_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGColorGun_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGColorGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGColorGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGColorGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGColorGun, 1159597036);
	template<> FACTORYGAME_API UClass* StaticClass<AFGColorGun>()
	{
		return AFGColorGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGColorGun(Z_Construct_UClass_AFGColorGun, &AFGColorGun::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGColorGun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGColorGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
