// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGItemPickup.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGItemPickup() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EItemState();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_FullInventory_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_FullInventory();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_Collecting_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_Collecting();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGItemPickup_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGItemPickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_ClearPickup();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_GetItemState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_GetNumItems();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_GetPickupItems();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_IsPickedUp();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_Multicast_PlayPickupEffect();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_OnPickup();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_OnRep_PickedUp();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_OnRep_StateUpdated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_PickupByAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_PlantPickup();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_PlayPickupEffect();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_SetNumItems();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_UpdateVisuals();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseableInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister();
// End Cross Module References
	static UEnum* EItemState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EItemState, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EItemState"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EItemState>()
	{
		return EItemState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemState(EItemState_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EItemState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EItemState_Hash() { return 3588949709U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EItemState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemState"), 0, Get_Z_Construct_UEnum_FactoryGame_EItemState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemState::ES_SEED", (int64)EItemState::ES_SEED },
				{ "EItemState::ES_NORMAL", (int64)EItemState::ES_NORMAL },
				{ "EItemState::ES_MAX", (int64)EItemState::ES_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ES_MAX.Hidden", "" },
				{ "ES_NORMAL.DisplayName", "Normal" },
				{ "ES_SEED.DisplayName", "Seed" },
				{ "ModuleRelativePath", "Public/FGItemPickup.h" },
				{ "ToolTip", "State that an item pickup can be in" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EItemState",
				"EItemState",
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
	void UFGUseState_FullInventory::StaticRegisterNativesUFGUseState_FullInventory()
	{
	}
	UClass* Z_Construct_UClass_UFGUseState_FullInventory_NoRegister()
	{
		return UFGUseState_FullInventory::StaticClass();
	}
	struct Z_Construct_UClass_UFGUseState_FullInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGUseState_FullInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGUseState,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGUseState_FullInventory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGItemPickup.h" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Use state when inventory of player looking at the item has a full inventory" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGUseState_FullInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGUseState_FullInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGUseState_FullInventory_Statics::ClassParams = {
		&UFGUseState_FullInventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGUseState_FullInventory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGUseState_FullInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGUseState_FullInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGUseState_FullInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGUseState_FullInventory, 1513334979);
	template<> FACTORYGAME_API UClass* StaticClass<UFGUseState_FullInventory>()
	{
		return UFGUseState_FullInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGUseState_FullInventory(Z_Construct_UClass_UFGUseState_FullInventory, &UFGUseState_FullInventory::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGUseState_FullInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGUseState_FullInventory);
	void UFGUseState_Collecting::StaticRegisterNativesUFGUseState_Collecting()
	{
	}
	UClass* Z_Construct_UClass_UFGUseState_Collecting_NoRegister()
	{
		return UFGUseState_Collecting::StaticClass();
	}
	struct Z_Construct_UClass_UFGUseState_Collecting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGUseState_Collecting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGUseState,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGUseState_Collecting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGItemPickup.h" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Use state when the item is being collected but takes time" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGUseState_Collecting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGUseState_Collecting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGUseState_Collecting_Statics::ClassParams = {
		&UFGUseState_Collecting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGUseState_Collecting_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGUseState_Collecting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGUseState_Collecting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGUseState_Collecting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGUseState_Collecting, 4242094658);
	template<> FACTORYGAME_API UClass* StaticClass<UFGUseState_Collecting>()
	{
		return UFGUseState_Collecting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGUseState_Collecting(Z_Construct_UClass_UFGUseState_Collecting, &UFGUseState_Collecting::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGUseState_Collecting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGUseState_Collecting);
	static FName NAME_AFGItemPickup_Multicast_PlayPickupEffect = FName(TEXT("Multicast_PlayPickupEffect"));
	void AFGItemPickup::Multicast_PlayPickupEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGItemPickup_Multicast_PlayPickupEffect),NULL);
	}
	static FName NAME_AFGItemPickup_OnPickup = FName(TEXT("OnPickup"));
	void AFGItemPickup::OnPickup(AFGCharacterPlayer* byCharacter)
	{
		FGItemPickup_eventOnPickup_Parms Parms;
		Parms.byCharacter=byCharacter;
		ProcessEvent(FindFunctionChecked(NAME_AFGItemPickup_OnPickup),&Parms);
	}
	static FName NAME_AFGItemPickup_PlayPickupEffect = FName(TEXT("PlayPickupEffect"));
	void AFGItemPickup::PlayPickupEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGItemPickup_PlayPickupEffect),NULL);
	}
	static FName NAME_AFGItemPickup_UpdateVisuals = FName(TEXT("UpdateVisuals"));
	void AFGItemPickup::UpdateVisuals()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGItemPickup_UpdateVisuals),NULL);
	}
	void AFGItemPickup::StaticRegisterNativesAFGItemPickup()
	{
		UClass* Class = AFGItemPickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearPickup", &AFGItemPickup::execClearPickup },
			{ "GetDestroyOnPickup", &AFGItemPickup::execGetDestroyOnPickup },
			{ "GetItemState", &AFGItemPickup::execGetItemState },
			{ "GetNormalizedCollectionProgress", &AFGItemPickup::execGetNormalizedCollectionProgress },
			{ "GetNumItems", &AFGItemPickup::execGetNumItems },
			{ "GetPickupItems", &AFGItemPickup::execGetPickupItems },
			{ "GetRespawnTimeInDays", &AFGItemPickup::execGetRespawnTimeInDays },
			{ "GetSavedNumItems", &AFGItemPickup::execGetSavedNumItems },
			{ "IsPickedUp", &AFGItemPickup::execIsPickedUp },
			{ "Multicast_PlayPickupEffect", &AFGItemPickup::execMulticast_PlayPickupEffect },
			{ "OnRep_PickedUp", &AFGItemPickup::execOnRep_PickedUp },
			{ "OnRep_StateUpdated", &AFGItemPickup::execOnRep_StateUpdated },
			{ "PickupByAmount", &AFGItemPickup::execPickupByAmount },
			{ "PickUpByCharacter", &AFGItemPickup::execPickUpByCharacter },
			{ "PlantPickup", &AFGItemPickup::execPlantPickup },
			{ "SetNumItems", &AFGItemPickup::execSetNumItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGItemPickup_ClearPickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_ClearPickup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Clears any items this pickup has" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_ClearPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "ClearPickup", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_ClearPickup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_ClearPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_ClearPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_ClearPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup_Statics
	{
		struct FGItemPickup_eventGetDestroyOnPickup_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGItemPickup_eventGetDestroyOnPickup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGItemPickup_eventGetDestroyOnPickup_Parms), &Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Should this item be destroyed on pickup b" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "GetDestroyOnPickup", sizeof(FGItemPickup_eventGetDestroyOnPickup_Parms), Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_GetItemState_Statics
	{
		struct FGItemPickup_eventGetItemState_Parms
		{
			EItemState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGItemPickup_GetItemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemPickup_eventGetItemState_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EItemState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGItemPickup_GetItemState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_GetItemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_GetItemState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_GetItemState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_GetItemState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Returns the state of this item pickup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_GetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "GetItemState", sizeof(FGItemPickup_eventGetItemState_Parms), Z_Construct_UFunction_AFGItemPickup_GetItemState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_GetItemState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_GetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_GetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress_Statics
	{
		struct FGItemPickup_eventGetNormalizedCollectionProgress_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemPickup_eventGetNormalizedCollectionProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Returns the normalized progress until collection is complete" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "GetNormalizedCollectionProgress", sizeof(FGItemPickup_eventGetNormalizedCollectionProgress_Parms), Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_GetNumItems_Statics
	{
		struct FGItemPickup_eventGetNumItems_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGItemPickup_GetNumItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemPickup_eventGetNumItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_GetNumItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_GetNumItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_GetNumItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Get the number of items the pickup have" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_GetNumItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "GetNumItems", sizeof(FGItemPickup_eventGetNumItems_Parms), Z_Construct_UFunction_AFGItemPickup_GetNumItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetNumItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_GetNumItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetNumItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_GetNumItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_GetNumItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_GetPickupItems_Statics
	{
		struct FGItemPickup_eventGetPickupItems_Parms
		{
			FInventoryStack ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_GetPickupItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemPickup_eventGetPickupItems_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_GetPickupItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_GetPickupItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_GetPickupItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Get the pickup items" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_GetPickupItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "GetPickupItems", sizeof(FGItemPickup_eventGetPickupItems_Parms), Z_Construct_UFunction_AFGItemPickup_GetPickupItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetPickupItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_GetPickupItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetPickupItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_GetPickupItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_GetPickupItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays_Statics
	{
		struct FGItemPickup_eventGetRespawnTimeInDays_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemPickup_eventGetRespawnTimeInDays_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Get the respawn time in days" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "GetRespawnTimeInDays", sizeof(FGItemPickup_eventGetRespawnTimeInDays_Parms), Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems_Statics
	{
		struct FGItemPickup_eventGetSavedNumItems_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemPickup_eventGetSavedNumItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Returns amount of items we have saved that this pickup should give" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "GetSavedNumItems", sizeof(FGItemPickup_eventGetSavedNumItems_Parms), Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_IsPickedUp_Statics
	{
		struct FGItemPickup_eventIsPickedUp_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGItemPickup_IsPickedUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGItemPickup_eventIsPickedUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGItemPickup_IsPickedUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGItemPickup_eventIsPickedUp_Parms), &Z_Construct_UFunction_AFGItemPickup_IsPickedUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_IsPickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_IsPickedUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_IsPickedUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Get if the item is picked up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_IsPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "IsPickedUp", sizeof(FGItemPickup_eventIsPickedUp_Parms), Z_Construct_UFunction_AFGItemPickup_IsPickedUp_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_IsPickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_IsPickedUp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_IsPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_IsPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_IsPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_Multicast_PlayPickupEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Multicast_PlayPickupEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Multicast to everyone so picking up clients can see effects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_Multicast_PlayPickupEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "Multicast_PlayPickupEffect", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Multicast_PlayPickupEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Multicast_PlayPickupEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_Multicast_PlayPickupEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_Multicast_PlayPickupEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_OnPickup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGItemPickup_OnPickup_Statics::NewProp_byCharacter = { "byCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemPickup_eventOnPickup_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_OnPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_OnPickup_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_OnPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "SERVER and Client picking up: Called right after this item is added to the players inventory, for GameplayEffects.\nIf you want to do something only on the picking up client, check if byCharacter is locally controlled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_OnPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "OnPickup", sizeof(FGItemPickup_eventOnPickup_Parms), Z_Construct_UFunction_AFGItemPickup_OnPickup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_OnPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_OnPickup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_OnPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_OnPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_OnPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_OnRep_PickedUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_OnRep_PickedUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Replicated and set when we are picked up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_OnRep_PickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "OnRep_PickedUp", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_OnRep_PickedUp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_OnRep_PickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_OnRep_PickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_OnRep_PickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_OnRep_StateUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_OnRep_StateUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Replicated and set when we are picked up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_OnRep_StateUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "OnRep_StateUpdated", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_OnRep_StateUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_OnRep_StateUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_OnRep_StateUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_OnRep_StateUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics
	{
		struct FGItemPickup_eventPickupByAmount_Parms
		{
			int32 amount;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGItemPickup_eventPickupByAmount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGItemPickup_eventPickupByAmount_Parms), &Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemPickup_eventPickupByAmount_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_amount", "1" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Pickup functionality so that we can pickup x amount of items and can be used by other than character\n\n@return true if there was enough items for pickup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "PickupByAmount", sizeof(FGItemPickup_eventPickupByAmount_Parms), Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_PickupByAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_PickupByAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter_Statics
	{
		struct FGItemPickup_eventPickUpByCharacter_Parms
		{
			AFGCharacterPlayer* byCharacter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter_Statics::NewProp_byCharacter = { "byCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemPickup_eventPickUpByCharacter_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "SERVER and CLIENT picking up: Handles regular pick up logic. Only to be called from the Character when they are picking up the item from PickUpItem()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "PickUpByCharacter", sizeof(FGItemPickup_eventPickUpByCharacter_Parms), Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_PlantPickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_PlantPickup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Plants this pickup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_PlantPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "PlantPickup", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_PlantPickup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_PlantPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_PlantPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_PlantPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_PlayPickupEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_PlayPickupEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Multicast to everyone so picking up clients can see effects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_PlayPickupEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "PlayPickupEffect", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_PlayPickupEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_PlayPickupEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_PlayPickupEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_PlayPickupEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_SetNumItems_Statics
	{
		struct FGItemPickup_eventSetNumItems_Parms
		{
			int32 numItems;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGItemPickup_SetNumItems_Statics::NewProp_numItems = { "numItems", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGItemPickup_eventSetNumItems_Parms, numItems), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_SetNumItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_SetNumItems_Statics::NewProp_numItems,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_SetNumItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Set the number of items" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_SetNumItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "SetNumItems", sizeof(FGItemPickup_eventSetNumItems_Parms), Z_Construct_UFunction_AFGItemPickup_SetNumItems_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_SetNumItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_SetNumItems_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_SetNumItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_SetNumItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_SetNumItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_UpdateVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_UpdateVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Called when whe have changed something and want to do a visual update" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_UpdateVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup, nullptr, "UpdateVisuals", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_UpdateVisuals_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_UpdateVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_UpdateVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_UpdateVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGItemPickup_NoRegister()
	{
		return AFGItemPickup::StaticClass();
	}
	struct Z_Construct_UClass_AFGItemPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNumRespawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mNumRespawns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxRespawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMaxRespawns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSavedNumItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mSavedNumItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGrowTimeInDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mGrowTimeInDays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mItemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mItemState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mItemState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUpdatedOnDayNr_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mUpdatedOnDayNr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRespawnTimeInDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mRespawnTimeInDays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSoundComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSoundComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDestroyOnPickup_MetaData[];
#endif
		static void NewProp_mDestroyOnPickup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mDestroyOnPickup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPickupItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPickupItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCollectingTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCollectingTimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCollector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCollector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTimeToPickUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mTimeToPickUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGItemPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGItemPickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGItemPickup_ClearPickup, "ClearPickup" }, // 1069124501
		{ &Z_Construct_UFunction_AFGItemPickup_GetDestroyOnPickup, "GetDestroyOnPickup" }, // 2771660914
		{ &Z_Construct_UFunction_AFGItemPickup_GetItemState, "GetItemState" }, // 1077848402
		{ &Z_Construct_UFunction_AFGItemPickup_GetNormalizedCollectionProgress, "GetNormalizedCollectionProgress" }, // 3980703693
		{ &Z_Construct_UFunction_AFGItemPickup_GetNumItems, "GetNumItems" }, // 2718471880
		{ &Z_Construct_UFunction_AFGItemPickup_GetPickupItems, "GetPickupItems" }, // 1067232876
		{ &Z_Construct_UFunction_AFGItemPickup_GetRespawnTimeInDays, "GetRespawnTimeInDays" }, // 553449921
		{ &Z_Construct_UFunction_AFGItemPickup_GetSavedNumItems, "GetSavedNumItems" }, // 2766843594
		{ &Z_Construct_UFunction_AFGItemPickup_IsPickedUp, "IsPickedUp" }, // 1294456463
		{ &Z_Construct_UFunction_AFGItemPickup_Multicast_PlayPickupEffect, "Multicast_PlayPickupEffect" }, // 1707881981
		{ &Z_Construct_UFunction_AFGItemPickup_OnPickup, "OnPickup" }, // 2114415879
		{ &Z_Construct_UFunction_AFGItemPickup_OnRep_PickedUp, "OnRep_PickedUp" }, // 351420516
		{ &Z_Construct_UFunction_AFGItemPickup_OnRep_StateUpdated, "OnRep_StateUpdated" }, // 1352943784
		{ &Z_Construct_UFunction_AFGItemPickup_PickupByAmount, "PickupByAmount" }, // 3039165673
		{ &Z_Construct_UFunction_AFGItemPickup_PickUpByCharacter, "PickUpByCharacter" }, // 2939877616
		{ &Z_Construct_UFunction_AFGItemPickup_PlantPickup, "PlantPickup" }, // 4226728167
		{ &Z_Construct_UFunction_AFGItemPickup_PlayPickupEffect, "PlayPickupEffect" }, // 2825848276
		{ &Z_Construct_UFunction_AFGItemPickup_SetNumItems, "SetNumItems" }, // 1210901139
		{ &Z_Construct_UFunction_AFGItemPickup_UpdateVisuals, "UpdateVisuals" }, // 116216527
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGItemPickup.h" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "@todo: This looks like it should be a subclass of FGInteractActor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mNumRespawns_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "How many respawns are allowed on this item" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mNumRespawns = { "mNumRespawns", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGItemPickup, mNumRespawns), METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mNumRespawns_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mNumRespawns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mMaxRespawns_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "How many respawns are allowed on this item" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mMaxRespawns = { "mMaxRespawns", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGItemPickup, mMaxRespawns), METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mMaxRespawns_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mMaxRespawns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mSavedNumItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Current state for this item" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mSavedNumItems = { "mSavedNumItems", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGItemPickup, mSavedNumItems), METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mSavedNumItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mSavedNumItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mGrowTimeInDays_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "How many days before item has grown from seed" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mGrowTimeInDays = { "mGrowTimeInDays", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGItemPickup, mGrowTimeInDays), METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mGrowTimeInDays_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mGrowTimeInDays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mItemState_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "Current state for this item" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mItemState = { "mItemState", "OnRep_StateUpdated", (EPropertyFlags)0x0040000101000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGItemPickup, mItemState), Z_Construct_UEnum_FactoryGame_EItemState, METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mItemState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mItemState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mItemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mUpdatedOnDayNr_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "What day count was the item last updated" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mUpdatedOnDayNr = { "mUpdatedOnDayNr", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGItemPickup, mUpdatedOnDayNr), METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mUpdatedOnDayNr_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mUpdatedOnDayNr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mRespawnTimeInDays_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "How many days before item can respawn" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mRespawnTimeInDays = { "mRespawnTimeInDays", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGItemPickup, mRespawnTimeInDays), METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mRespawnTimeInDays_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mRespawnTimeInDays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mAudioEvent_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "The ak event to post for the sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mAudioEvent = { "mAudioEvent", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGItemPickup, mAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mAudioEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mSoundComponent_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "ak component that plays sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mSoundComponent = { "mSoundComponent", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGItemPickup, mSoundComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mSoundComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mSoundComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mDestroyOnPickup_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "If set to true, then we destroy the item when it's pickup:ed" },
	};
#endif
	void Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mDestroyOnPickup_SetBit(void* Obj)
	{
		((AFGItemPickup*)Obj)->mDestroyOnPickup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mDestroyOnPickup = { "mDestroyOnPickup", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGItemPickup), &Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mDestroyOnPickup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mDestroyOnPickup_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mDestroyOnPickup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mPickupItems_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "The items we want to be able to pickup" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mPickupItems = { "mPickupItems", "OnRep_PickedUp", (EPropertyFlags)0x0020080101000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGItemPickup, mPickupItems), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mPickupItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mPickupItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mCollectingTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "/ Timer handler for item being picked up" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mCollectingTimerHandle = { "mCollectingTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGItemPickup, mCollectingTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mCollectingTimerHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mCollectingTimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mCollector_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "/ The player collecting the item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mCollector = { "mCollector", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGItemPickup, mCollector), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mCollector_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mCollector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mTimeToPickUp_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/FGItemPickup.h" },
		{ "ToolTip", "/ The amount of time required to pickup < 0 == instant" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mTimeToPickUp = { "mTimeToPickUp", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGItemPickup, mTimeToPickUp), METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mTimeToPickUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mTimeToPickUp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGItemPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mNumRespawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mMaxRespawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mSavedNumItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mGrowTimeInDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mItemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mItemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mUpdatedOnDayNr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mRespawnTimeInDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mSoundComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mDestroyOnPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mPickupItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mCollectingTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mCollector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Statics::NewProp_mTimeToPickUp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGItemPickup_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGUseableInterface_NoRegister, (int32)VTABLE_OFFSET(AFGItemPickup, IFGUseableInterface), false },
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGItemPickup, IFGSaveInterface), false },
			{ Z_Construct_UClass_UFGSignificanceInterface_NoRegister, (int32)VTABLE_OFFSET(AFGItemPickup, IFGSignificanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGItemPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGItemPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGItemPickup_Statics::ClassParams = {
		&AFGItemPickup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGItemPickup_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGItemPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGItemPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGItemPickup, 1007647137);
	template<> FACTORYGAME_API UClass* StaticClass<AFGItemPickup>()
	{
		return AFGItemPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGItemPickup(Z_Construct_UClass_AFGItemPickup, &AFGItemPickup::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGItemPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGItemPickup);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFGItemPickup)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
