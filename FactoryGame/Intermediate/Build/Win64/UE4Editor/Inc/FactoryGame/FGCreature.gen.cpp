// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Creature/FGCreature.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCreature() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EMoveSpeed();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EEnabled();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FMoveSpeedPair();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCreature_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCreature();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterBase();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_CancelRotationMovement();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_CheckRotationMovement();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_GetIsArachnid();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_GetIsEnabled();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_GetSpawner();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCreatureSpawner_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_GetSplinePath();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSplinePath_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_GetTargetRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_IsPersistent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_OnRep_IsEnabled();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_OnRep_TargetRotation();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_SetMoveSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_SetPersistent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_SpawnDeathItem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreature_StartRotationMovement();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGItemPickup_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventRotationDoneDelegate_Parms
		{
			APawn* PawnRotated;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnRotated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature_Statics::NewProp_PawnRotated = { "PawnRotated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventRotationDoneDelegate_Parms, PawnRotated), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature_Statics::NewProp_PawnRotated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "RotationDoneDelegate__DelegateSignature", sizeof(_Script_FactoryGame_eventRotationDoneDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EMoveSpeed_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EMoveSpeed, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EMoveSpeed"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EMoveSpeed>()
	{
		return EMoveSpeed_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoveSpeed(EMoveSpeed_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EMoveSpeed"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EMoveSpeed_Hash() { return 1051710918U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EMoveSpeed()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoveSpeed"), 0, Get_Z_Construct_UEnum_FactoryGame_EMoveSpeed_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoveSpeed::MS_Undefined", (int64)EMoveSpeed::MS_Undefined },
				{ "EMoveSpeed::MS_Walk", (int64)EMoveSpeed::MS_Walk },
				{ "EMoveSpeed::MS_Run", (int64)EMoveSpeed::MS_Run },
				{ "EMoveSpeed::MS_Sprint", (int64)EMoveSpeed::MS_Sprint },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Creature/FGCreature.h" },
				{ "MS_Run.DisplayName", "Normal" },
				{ "MS_Sprint.DisplayName", "Extra fast" },
				{ "MS_Walk.DisplayName", "Slow speed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EMoveSpeed",
				"EMoveSpeed",
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
	static UEnum* EEnabled_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EEnabled, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EEnabled"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EEnabled>()
	{
		return EEnabled_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnabled(EEnabled_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EEnabled"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EEnabled_Hash() { return 1560278935U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EEnabled()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnabled"), 0, Get_Z_Construct_UEnum_FactoryGame_EEnabled_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "E_Enabled", (int64)E_Enabled },
				{ "E_Disabled", (int64)E_Disabled },
				{ "E_Unknown", (int64)E_Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Creature/FGCreature.h" },
				{ "ToolTip", "@todo: We should probably change this to EUndefinedBool" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EEnabled",
				"EEnabled",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMoveSpeedPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FMoveSpeedPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoveSpeedPair, Z_Construct_UPackage__Script_FactoryGame(), TEXT("MoveSpeedPair"), sizeof(FMoveSpeedPair), Get_Z_Construct_UScriptStruct_FMoveSpeedPair_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FMoveSpeedPair>()
{
	return FMoveSpeedPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMoveSpeedPair(FMoveSpeedPair::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("MoveSpeedPair"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFMoveSpeedPair
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFMoveSpeedPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MoveSpeedPair")),new UScriptStruct::TCppStructOps<FMoveSpeedPair>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFMoveSpeedPair;
	struct Z_Construct_UScriptStruct_FMoveSpeedPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeedType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveSpeedType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveSpeedType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoveSpeedPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveSpeedPair, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::NewProp_Speed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::NewProp_MoveSpeedType_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::NewProp_MoveSpeedType = { "MoveSpeedType", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMoveSpeedPair, MoveSpeedType), Z_Construct_UEnum_FactoryGame_EMoveSpeed, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::NewProp_MoveSpeedType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::NewProp_MoveSpeedType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::NewProp_MoveSpeedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::NewProp_MoveSpeedType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::NewProp_MoveSpeedType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"MoveSpeedPair",
		sizeof(FMoveSpeedPair),
		alignof(FMoveSpeedPair),
		Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoveSpeedPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMoveSpeedPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MoveSpeedPair"), sizeof(FMoveSpeedPair), Get_Z_Construct_UScriptStruct_FMoveSpeedPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMoveSpeedPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMoveSpeedPair_Hash() { return 602290959U; }
	static FName NAME_AFGCreature_CancelRotationMovement = FName(TEXT("CancelRotationMovement"));
	void AFGCreature::CancelRotationMovement()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGCreature_CancelRotationMovement),NULL);
	}
	static FName NAME_AFGCreature_ConfigureArachnophobiaMode = FName(TEXT("ConfigureArachnophobiaMode"));
	void AFGCreature::ConfigureArachnophobiaMode(bool isArachnophobiaMode)
	{
		FGCreature_eventConfigureArachnophobiaMode_Parms Parms;
		Parms.isArachnophobiaMode=isArachnophobiaMode ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGCreature_ConfigureArachnophobiaMode),&Parms);
	}
	static FName NAME_AFGCreature_Multicast_ConsumeItem = FName(TEXT("Multicast_ConsumeItem"));
	void AFGCreature::Multicast_ConsumeItem(TSubclassOf<UFGItemDescriptor>  itemDescriptor, int32 amount)
	{
		FGCreature_eventMulticast_ConsumeItem_Parms Parms;
		Parms.itemDescriptor=itemDescriptor;
		Parms.amount=amount;
		ProcessEvent(FindFunctionChecked(NAME_AFGCreature_Multicast_ConsumeItem),&Parms);
	}
	static FName NAME_AFGCreature_PlayConsumeItemEffect = FName(TEXT("PlayConsumeItemEffect"));
	void AFGCreature::PlayConsumeItemEffect(TSubclassOf<UFGItemDescriptor>  itemDescriptor, int32 amount)
	{
		FGCreature_eventPlayConsumeItemEffect_Parms Parms;
		Parms.itemDescriptor=itemDescriptor;
		Parms.amount=amount;
		ProcessEvent(FindFunctionChecked(NAME_AFGCreature_PlayConsumeItemEffect),&Parms);
	}
	static FName NAME_AFGCreature_SpawnDeathItem = FName(TEXT("SpawnDeathItem"));
	void AFGCreature::SpawnDeathItem()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGCreature_SpawnDeathItem),NULL);
	}
	static FName NAME_AFGCreature_StartRotationMovement = FName(TEXT("StartRotationMovement"));
	void AFGCreature::StartRotationMovement(FRotator targetRotation)
	{
		FGCreature_eventStartRotationMovement_Parms Parms;
		Parms.targetRotation=targetRotation;
		ProcessEvent(FindFunctionChecked(NAME_AFGCreature_StartRotationMovement),&Parms);
	}
	void AFGCreature::StaticRegisterNativesAFGCreature()
	{
		UClass* Class = AFGCreature::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AiCalculateLeadTrajectory", &AFGCreature::execAiCalculateLeadTrajectory },
			{ "CancelRotationMovement", &AFGCreature::execCancelRotationMovement },
			{ "CheckRotationMovement", &AFGCreature::execCheckRotationMovement },
			{ "ConfigureArachnophobiaMode", &AFGCreature::execConfigureArachnophobiaMode },
			{ "GetArachnophobiaModeMaterials", &AFGCreature::execGetArachnophobiaModeMaterials },
			{ "GetDayTimePctAsNight", &AFGCreature::execGetDayTimePctAsNight },
			{ "GetIsArachnid", &AFGCreature::execGetIsArachnid },
			{ "GetIsEnabled", &AFGCreature::execGetIsEnabled },
			{ "GetSpawner", &AFGCreature::execGetSpawner },
			{ "GetSplinePath", &AFGCreature::execGetSplinePath },
			{ "GetTargetRotation", &AFGCreature::execGetTargetRotation },
			{ "IsPersistent", &AFGCreature::execIsPersistent },
			{ "Multicast_ConsumeItem", &AFGCreature::execMulticast_ConsumeItem },
			{ "OnArachnophobiaModeChanged", &AFGCreature::execOnArachnophobiaModeChanged },
			{ "OnRep_IsEnabled", &AFGCreature::execOnRep_IsEnabled },
			{ "OnRep_TargetRotation", &AFGCreature::execOnRep_TargetRotation },
			{ "SetMoveSpeed", &AFGCreature::execSetMoveSpeed },
			{ "SetPersistent", &AFGCreature::execSetPersistent },
			{ "SpawnDeathItem", &AFGCreature::execSpawnDeathItem },
			{ "StartRotationMovement", &AFGCreature::execStartRotationMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics
	{
		struct FGCreature_eventAiCalculateLeadTrajectory_Parms
		{
			FVector targetPos;
			FVector targetVelocity;
			FVector fromPos;
			float interceptorSpeed;
			bool isPosibleToLead;
			FVector interceptPoint;
			float leadScaling;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_leadScaling;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interceptPoint;
		static void NewProp_isPosibleToLead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPosibleToLead;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_interceptorSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fromPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_fromPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_leadScaling = { "leadScaling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventAiCalculateLeadTrajectory_Parms, leadScaling), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_interceptPoint = { "interceptPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventAiCalculateLeadTrajectory_Parms, interceptPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_isPosibleToLead_SetBit(void* Obj)
	{
		((FGCreature_eventAiCalculateLeadTrajectory_Parms*)Obj)->isPosibleToLead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_isPosibleToLead = { "isPosibleToLead", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCreature_eventAiCalculateLeadTrajectory_Parms), &Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_isPosibleToLead_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_interceptorSpeed = { "interceptorSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventAiCalculateLeadTrajectory_Parms, interceptorSpeed), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_fromPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_fromPos = { "fromPos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventAiCalculateLeadTrajectory_Parms, fromPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_fromPos_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_fromPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_targetVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_targetVelocity = { "targetVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventAiCalculateLeadTrajectory_Parms, targetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_targetVelocity_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_targetVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_targetPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_targetPos = { "targetPos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventAiCalculateLeadTrajectory_Parms, targetPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_targetPos_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_targetPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_leadScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_interceptPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_isPosibleToLead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_interceptorSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_fromPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_targetVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::NewProp_targetPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "CPP_Default_leadScaling", "1.000000" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "* Calculate a trajectory to lead a target with a set interceptor speed (aka, bullet speed/charge speed), finding the earliest interception if multiple are possible\n      @targetPos Position of the target you are trying to intercept\n      @targetVelocity The movement velocity of the target you are truing to intercept\n      @fromPos The interceptors current position (aka the shooters position)\n      @interceptorSpeed the speed of the interception (aka, bullet speed/charge speed)\n      @isPosibleToLead indicated if the lead is possible (if you are moving too slow and your target is moving away, the lead might be impossible)\n      @leadScaling If set to 1, the lead will get an exact interception. If above 1 it will move a bit in front of the target, and below one it will come up a bit short. 0 = no lead, and all these calculations will be a waste, probably a lead of under 0.5 will also be a toooootal waste unless the target is likely to turn/slow down, but that should instead be reprecented in the velocity)\n\n      @InterceptPoint Position of interception if possible, otherwise an approximate logical position is set, so it looks like it at least tries to predict/hit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "AiCalculateLeadTrajectory", sizeof(FGCreature_eventAiCalculateLeadTrajectory_Parms), Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_CancelRotationMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_CancelRotationMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Cancels the rotation movement" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_CancelRotationMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "CancelRotationMovement", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_CancelRotationMovement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_CancelRotationMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_CancelRotationMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_CancelRotationMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_CheckRotationMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_CheckRotationMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Checks when we are done rotating and calls the complete delegate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_CheckRotationMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "CheckRotationMovement", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_CheckRotationMovement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_CheckRotationMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_CheckRotationMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_CheckRotationMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode_Statics
	{
		static void NewProp_isArachnophobiaMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isArachnophobiaMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode_Statics::NewProp_isArachnophobiaMode_SetBit(void* Obj)
	{
		((FGCreature_eventConfigureArachnophobiaMode_Parms*)Obj)->isArachnophobiaMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode_Statics::NewProp_isArachnophobiaMode = { "isArachnophobiaMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCreature_eventConfigureArachnophobiaMode_Parms), &Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode_Statics::NewProp_isArachnophobiaMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode_Statics::NewProp_isArachnophobiaMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arachnophobia" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Sets up the Arachnophobia mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "ConfigureArachnophobiaMode", sizeof(FGCreature_eventConfigureArachnophobiaMode_Parms), Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials_Statics
	{
		struct FGCreature_eventGetArachnophobiaModeMaterials_Parms
		{
			TArray<UMaterialInstance*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventGetArachnophobiaModeMaterials_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arachnophobia" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Gets the array of sprites that may be used for arachnophobia mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "GetArachnophobiaModeMaterials", sizeof(FGCreature_eventGetArachnophobiaModeMaterials_Parms), Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight_Statics
	{
		struct FGCreature_eventGetDayTimePctAsNight_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventGetDayTimePctAsNight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "How much of day time percentage ( 0.0 - 1.0 ) should count towards night time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "GetDayTimePctAsNight", sizeof(FGCreature_eventGetDayTimePctAsNight_Parms), Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_GetIsArachnid_Statics
	{
		struct FGCreature_eventGetIsArachnid_Parms
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
	void Z_Construct_UFunction_AFGCreature_GetIsArachnid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCreature_eventGetIsArachnid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCreature_GetIsArachnid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCreature_eventGetIsArachnid_Parms), &Z_Construct_UFunction_AFGCreature_GetIsArachnid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_GetIsArachnid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_GetIsArachnid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_GetIsArachnid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arachnophobia" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Is this creature an arachnid?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_GetIsArachnid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "GetIsArachnid", sizeof(FGCreature_eventGetIsArachnid_Parms), Z_Construct_UFunction_AFGCreature_GetIsArachnid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetIsArachnid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_GetIsArachnid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetIsArachnid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_GetIsArachnid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_GetIsArachnid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_GetIsEnabled_Statics
	{
		struct FGCreature_eventGetIsEnabled_Parms
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
	void Z_Construct_UFunction_AFGCreature_GetIsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCreature_eventGetIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCreature_GetIsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCreature_eventGetIsEnabled_Parms), &Z_Construct_UFunction_AFGCreature_GetIsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_GetIsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_GetIsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_GetIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Creature" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Gets the spline we are set to follow" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_GetIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "GetIsEnabled", sizeof(FGCreature_eventGetIsEnabled_Parms), Z_Construct_UFunction_AFGCreature_GetIsEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_GetIsEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_GetIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_GetIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_GetSpawner_Statics
	{
		struct FGCreature_eventGetSpawner_Parms
		{
			AFGCreatureSpawner* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCreature_GetSpawner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventGetSpawner_Parms, ReturnValue), Z_Construct_UClass_AFGCreatureSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_GetSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_GetSpawner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_GetSpawner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Creature" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Returns the spawner that created this creature. Can be null" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_GetSpawner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "GetSpawner", sizeof(FGCreature_eventGetSpawner_Parms), Z_Construct_UFunction_AFGCreature_GetSpawner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetSpawner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_GetSpawner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetSpawner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_GetSpawner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_GetSpawner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_GetSplinePath_Statics
	{
		struct FGCreature_eventGetSplinePath_Parms
		{
			AFGSplinePath* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCreature_GetSplinePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventGetSplinePath_Parms, ReturnValue), Z_Construct_UClass_AFGSplinePath_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_GetSplinePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_GetSplinePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_GetSplinePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Creature" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Gets the spline we are set to follow" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_GetSplinePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "GetSplinePath", sizeof(FGCreature_eventGetSplinePath_Parms), Z_Construct_UFunction_AFGCreature_GetSplinePath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetSplinePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_GetSplinePath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetSplinePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_GetSplinePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_GetSplinePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_GetTargetRotation_Statics
	{
		struct FGCreature_eventGetTargetRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCreature_GetTargetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventGetTargetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_GetTargetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_GetTargetRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_GetTargetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Gets the target rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_GetTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "GetTargetRotation", sizeof(FGCreature_eventGetTargetRotation_Parms), Z_Construct_UFunction_AFGCreature_GetTargetRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetTargetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_GetTargetRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_GetTargetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_GetTargetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_GetTargetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_IsPersistent_Statics
	{
		struct FGCreature_eventIsPersistent_Parms
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
	void Z_Construct_UFunction_AFGCreature_IsPersistent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCreature_eventIsPersistent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCreature_IsPersistent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCreature_eventIsPersistent_Parms), &Z_Construct_UFunction_AFGCreature_IsPersistent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_IsPersistent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_IsPersistent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_IsPersistent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Creature" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Indicates if we are persistent ( not removed after a distance specified in AISystem )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_IsPersistent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "IsPersistent", sizeof(FGCreature_eventIsPersistent_Parms), Z_Construct_UFunction_AFGCreature_IsPersistent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_IsPersistent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_IsPersistent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_IsPersistent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_IsPersistent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_IsPersistent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemDescriptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventMulticast_ConsumeItem_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem_Statics::NewProp_itemDescriptor = { "itemDescriptor", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventMulticast_ConsumeItem_Parms, itemDescriptor), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem_Statics::NewProp_itemDescriptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Consume" },
		{ "CPP_Default_amount", "1" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Notify when creature consumes a item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "Multicast_ConsumeItem", sizeof(FGCreature_eventMulticast_ConsumeItem_Parms), Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged_Statics
	{
		struct FGCreature_eventOnArachnophobiaModeChanged_Parms
		{
			bool isArachnophobiaMode;
		};
		static void NewProp_isArachnophobiaMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isArachnophobiaMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged_Statics::NewProp_isArachnophobiaMode_SetBit(void* Obj)
	{
		((FGCreature_eventOnArachnophobiaModeChanged_Parms*)Obj)->isArachnophobiaMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged_Statics::NewProp_isArachnophobiaMode = { "isArachnophobiaMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCreature_eventOnArachnophobiaModeChanged_Parms), &Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged_Statics::NewProp_isArachnophobiaMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged_Statics::NewProp_isArachnophobiaMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Called when the Arachnophobia mode setting is changed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "OnArachnophobiaModeChanged", sizeof(FGCreature_eventOnArachnophobiaModeChanged_Parms), Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_OnRep_IsEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_OnRep_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_OnRep_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "OnRep_IsEnabled", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_OnRep_IsEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_OnRep_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_OnRep_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_OnRep_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_OnRep_TargetRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_OnRep_TargetRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_OnRep_TargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "OnRep_TargetRotation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_OnRep_TargetRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_OnRep_TargetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_OnRep_TargetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_OnRep_TargetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemDescriptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventPlayConsumeItemEffect_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect_Statics::NewProp_itemDescriptor = { "itemDescriptor", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventPlayConsumeItemEffect_Parms, itemDescriptor), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect_Statics::NewProp_itemDescriptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Consume" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Play effects when creature consumes a item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "PlayConsumeItemEffect", sizeof(FGCreature_eventPlayConsumeItemEffect_Parms), Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_SetMoveSpeed_Statics
	{
		struct FGCreature_eventSetMoveSpeed_Parms
		{
			EMoveSpeed newMoveSpeedType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newMoveSpeedType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newMoveSpeedType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGCreature_SetMoveSpeed_Statics::NewProp_newMoveSpeedType = { "newMoveSpeedType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventSetMoveSpeed_Parms, newMoveSpeedType), Z_Construct_UEnum_FactoryGame_EMoveSpeed, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGCreature_SetMoveSpeed_Statics::NewProp_newMoveSpeedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_SetMoveSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_SetMoveSpeed_Statics::NewProp_newMoveSpeedType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_SetMoveSpeed_Statics::NewProp_newMoveSpeedType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_SetMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Updates the movement speed ( server side )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_SetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "SetMoveSpeed", sizeof(FGCreature_eventSetMoveSpeed_Parms), Z_Construct_UFunction_AFGCreature_SetMoveSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_SetMoveSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_SetMoveSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_SetMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_SetMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_SetMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_SetPersistent_Statics
	{
		struct FGCreature_eventSetPersistent_Parms
		{
			bool persist;
		};
		static void NewProp_persist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_persist;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGCreature_SetPersistent_Statics::NewProp_persist_SetBit(void* Obj)
	{
		((FGCreature_eventSetPersistent_Parms*)Obj)->persist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCreature_SetPersistent_Statics::NewProp_persist = { "persist", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCreature_eventSetPersistent_Parms), &Z_Construct_UFunction_AFGCreature_SetPersistent_Statics::NewProp_persist_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_SetPersistent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_SetPersistent_Statics::NewProp_persist,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_SetPersistent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Creature" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Sets if we should persist or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_SetPersistent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "SetPersistent", sizeof(FGCreature_eventSetPersistent_Parms), Z_Construct_UFunction_AFGCreature_SetPersistent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_SetPersistent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_SetPersistent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_SetPersistent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_SetPersistent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_SetPersistent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_SpawnDeathItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_SpawnDeathItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Creature" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Called when creature died to spawn death item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_SpawnDeathItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "SpawnDeathItem", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_SpawnDeathItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_SpawnDeathItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_SpawnDeathItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_SpawnDeathItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreature_StartRotationMovement_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGCreature_StartRotationMovement_Statics::NewProp_targetRotation = { "targetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreature_eventStartRotationMovement_Parms, targetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreature_StartRotationMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreature_StartRotationMovement_Statics::NewProp_targetRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreature_StartRotationMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Starts the rotation movement" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreature_StartRotationMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreature, nullptr, "StartRotationMovement", sizeof(FGCreature_eventStartRotationMovement_Parms), Z_Construct_UFunction_AFGCreature_StartRotationMovement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_StartRotationMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreature_StartRotationMovement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreature_StartRotationMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreature_StartRotationMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreature_StartRotationMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGCreature_NoRegister()
	{
		return AFGCreature::StaticClass();
	}
	struct Z_Construct_UClass_AFGCreature_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOwningSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOwningSpawner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDayTimePctCountAsNight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDayTimePctCountAsNight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mArachnophobia_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mArachnophobia_Particle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mArachnophobia_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mArachnophobia_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mArachnophobia_Sprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mArachnophobia_Sprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEyeLocationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mEyeLocationComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRotationSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRotationSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMoveDuringRotation_MetaData[];
#endif
		static void NewProp_mMoveDuringRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mMoveDuringRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCanSpawnDuringNight_MetaData[];
#endif
		static void NewProp_mCanSpawnDuringNight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCanSpawnDuringNight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCanSpawnDuringDay_MetaData[];
#endif
		static void NewProp_mCanSpawnDuringDay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCanSpawnDuringDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTargetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRotationTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mRotationTimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActualAIControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mActualAIControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsPersistent_MetaData[];
#endif
		static void NewProp_mIsPersistent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsPersistent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShouldOptimizeMeshWhenVisible_MetaData[];
#endif
		static void NewProp_mShouldOptimizeMeshWhenVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mShouldOptimizeMeshWhenVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMoveSpeedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mMoveSpeedData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mMoveSpeedData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRotationDoneDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mRotationDoneDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mItemToDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mItemToDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsArachnid_MetaData[];
#endif
		static void NewProp_mIsArachnid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsArachnid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mArachnophobiaModeMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mArachnophobiaModeMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mArachnophobiaModeMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNavigationRemovalRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mNavigationRemovalRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNavigationGenerationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mNavigationGenerationRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGCreature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGCreature_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGCreature_AiCalculateLeadTrajectory, "AiCalculateLeadTrajectory" }, // 1000489965
		{ &Z_Construct_UFunction_AFGCreature_CancelRotationMovement, "CancelRotationMovement" }, // 1510811375
		{ &Z_Construct_UFunction_AFGCreature_CheckRotationMovement, "CheckRotationMovement" }, // 2627339417
		{ &Z_Construct_UFunction_AFGCreature_ConfigureArachnophobiaMode, "ConfigureArachnophobiaMode" }, // 2187274743
		{ &Z_Construct_UFunction_AFGCreature_GetArachnophobiaModeMaterials, "GetArachnophobiaModeMaterials" }, // 1905257555
		{ &Z_Construct_UFunction_AFGCreature_GetDayTimePctAsNight, "GetDayTimePctAsNight" }, // 650703185
		{ &Z_Construct_UFunction_AFGCreature_GetIsArachnid, "GetIsArachnid" }, // 673860939
		{ &Z_Construct_UFunction_AFGCreature_GetIsEnabled, "GetIsEnabled" }, // 2658016117
		{ &Z_Construct_UFunction_AFGCreature_GetSpawner, "GetSpawner" }, // 2681785942
		{ &Z_Construct_UFunction_AFGCreature_GetSplinePath, "GetSplinePath" }, // 378951761
		{ &Z_Construct_UFunction_AFGCreature_GetTargetRotation, "GetTargetRotation" }, // 400366093
		{ &Z_Construct_UFunction_AFGCreature_IsPersistent, "IsPersistent" }, // 878360607
		{ &Z_Construct_UFunction_AFGCreature_Multicast_ConsumeItem, "Multicast_ConsumeItem" }, // 1653153947
		{ &Z_Construct_UFunction_AFGCreature_OnArachnophobiaModeChanged, "OnArachnophobiaModeChanged" }, // 4167514076
		{ &Z_Construct_UFunction_AFGCreature_OnRep_IsEnabled, "OnRep_IsEnabled" }, // 1974535816
		{ &Z_Construct_UFunction_AFGCreature_OnRep_TargetRotation, "OnRep_TargetRotation" }, // 269955074
		{ &Z_Construct_UFunction_AFGCreature_PlayConsumeItemEffect, "PlayConsumeItemEffect" }, // 487472079
		{ &Z_Construct_UFunction_AFGCreature_SetMoveSpeed, "SetMoveSpeed" }, // 4257791352
		{ &Z_Construct_UFunction_AFGCreature_SetPersistent, "SetPersistent" }, // 2798111425
		{ &Z_Construct_UFunction_AFGCreature_SpawnDeathItem, "SpawnDeathItem" }, // 3772630392
		{ &Z_Construct_UFunction_AFGCreature_StartRotationMovement, "StartRotationMovement" }, // 3526794726
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Creature/FGCreature.h" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mOwningSpawner_MetaData[] = {
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Reference to the spawner that handles this creature" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mOwningSpawner = { "mOwningSpawner", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mOwningSpawner), Z_Construct_UClass_AFGCreatureSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mOwningSpawner_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mOwningSpawner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mDayTimePctCountAsNight_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "How much of day time percentage ( 0.0 - 1.0 ) should count towards night time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mDayTimePctCountAsNight = { "mDayTimePctCountAsNight", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mDayTimePctCountAsNight), METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mDayTimePctCountAsNight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mDayTimePctCountAsNight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Particle_MetaData[] = {
		{ "Category", "FGCreature" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Particle for the arachnophobia mode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Particle = { "mArachnophobia_Particle", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mArachnophobia_Particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Particle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Particle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Material_MetaData[] = {
		{ "Category", "FGCreature" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Material for the arachnophobia mode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Material = { "mArachnophobia_Material", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mArachnophobia_Material), Z_Construct_UClass_UMaterialBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Sprite_MetaData[] = {
		{ "Category", "FGCreature" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Sprite for the arachnophobia mode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Sprite = { "mArachnophobia_Sprite", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mArachnophobia_Sprite), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Sprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Sprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mEyeLocationComponent_MetaData[] = {
		{ "Category", "FGCreature" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Component used to determine eye location for a creature" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mEyeLocationComponent = { "mEyeLocationComponent", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mEyeLocationComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mEyeLocationComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mEyeLocationComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationSpeedMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Scale value for input vector when rotating and moving" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationSpeedMultiplier = { "mRotationSpeedMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mRotationSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationSpeedMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveDuringRotation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Used in combination with BTT_RotateToTarget if we need the creature to move while rotating" },
	};
#endif
	void Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveDuringRotation_SetBit(void* Obj)
	{
		((AFGCreature*)Obj)->mMoveDuringRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveDuringRotation = { "mMoveDuringRotation", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGCreature), &Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveDuringRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveDuringRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveDuringRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringNight_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Can creatures spawn during night?" },
	};
#endif
	void Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringNight_SetBit(void* Obj)
	{
		((AFGCreature*)Obj)->mCanSpawnDuringNight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringNight = { "mCanSpawnDuringNight", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGCreature), &Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringNight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringNight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringNight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringDay_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Can creatures spawn during day?" },
	};
#endif
	void Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringDay_SetBit(void* Obj)
	{
		((AFGCreature*)Obj)->mCanSpawnDuringDay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringDay = { "mCanSpawnDuringDay", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGCreature), &Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringDay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringDay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mTargetRotation_MetaData[] = {
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Target rotation for custom rotate movement" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mTargetRotation = { "mTargetRotation", "OnRep_TargetRotation", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mTargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mTargetRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mTargetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Timer handle used when rotating the pawn with our custom rotate movement" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationTimerHandle = { "mRotationTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mRotationTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationTimerHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationTimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mActualAIControllerClass_MetaData[] = {
		{ "Category", "Pawn" },
		{ "DisplayName", "Actual AI Controller Class" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "We specify our own controller class because we need to delay the spawning. Set this instead of \"AIControllerClass" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mActualAIControllerClass = { "mActualAIControllerClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mActualAIControllerClass), Z_Construct_UClass_AController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mActualAIControllerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mActualAIControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsPersistent_MetaData[] = {
		{ "Category", "Creature" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Should this creature be able to persist in the world" },
	};
#endif
	void Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsPersistent_SetBit(void* Obj)
	{
		((AFGCreature*)Obj)->mIsPersistent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsPersistent = { "mIsPersistent", nullptr, (EPropertyFlags)0x0040000001010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGCreature), &Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsPersistent_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsPersistent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsPersistent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mShouldOptimizeMeshWhenVisible_MetaData[] = {
		{ "Category", "Creature" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Indicates if we should optimize this creatures mesh ( disable ticking ) when looking at it from a distance ( not good on large creatures )" },
	};
#endif
	void Z_Construct_UClass_AFGCreature_Statics::NewProp_mShouldOptimizeMeshWhenVisible_SetBit(void* Obj)
	{
		((AFGCreature*)Obj)->mShouldOptimizeMeshWhenVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mShouldOptimizeMeshWhenVisible = { "mShouldOptimizeMeshWhenVisible", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGCreature), &Z_Construct_UClass_AFGCreature_Statics::NewProp_mShouldOptimizeMeshWhenVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mShouldOptimizeMeshWhenVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mShouldOptimizeMeshWhenVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveSpeedData_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Array with information about different speeds that this creature can use" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveSpeedData = { "mMoveSpeedData", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mMoveSpeedData), METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveSpeedData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveSpeedData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveSpeedData_Inner = { "mMoveSpeedData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMoveSpeedPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationDoneDelegate_MetaData[] = {
		{ "Category", "Movement" },
		{ "DisplayName", "OnRotationDone" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Called when we are done with rotation movement" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationDoneDelegate = { "mRotationDoneDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mRotationDoneDelegate), Z_Construct_UDelegateFunction_FactoryGame_RotationDoneDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationDoneDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationDoneDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mSpline_MetaData[] = {
		{ "Category", "Creature" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Spline we are set to follow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mSpline = { "mSpline", nullptr, (EPropertyFlags)0x0010000001000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mSpline), Z_Construct_UClass_AFGSplinePath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mSpline_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mItemToDrop_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Class of item to drop when dead" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mItemToDrop = { "mItemToDrop", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mItemToDrop), Z_Construct_UClass_AFGItemPickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mItemToDrop_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mItemToDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "True if optimized by the AI system" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsEnabled = { "mIsEnabled", "OnRep_IsEnabled", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mIsEnabled), Z_Construct_UEnum_FactoryGame_EEnabled, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsArachnid_MetaData[] = {
		{ "Category", "Arachnophobia" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Is creature considered an arachnid" },
	};
#endif
	void Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsArachnid_SetBit(void* Obj)
	{
		((AFGCreature*)Obj)->mIsArachnid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsArachnid = { "mIsArachnid", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGCreature), &Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsArachnid_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsArachnid_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsArachnid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobiaModeMaterials_MetaData[] = {
		{ "Category", "Arachnophobia" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Materials that may be used on arachnids" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobiaModeMaterials = { "mArachnophobiaModeMaterials", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mArachnophobiaModeMaterials), METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobiaModeMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobiaModeMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobiaModeMaterials_Inner = { "mArachnophobiaModeMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mNavigationRemovalRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "Navigation outside this radius will be removed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mNavigationRemovalRadius = { "mNavigationRemovalRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mNavigationRemovalRadius), METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mNavigationRemovalRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mNavigationRemovalRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreature_Statics::NewProp_mNavigationGenerationRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Creature/FGCreature.h" },
		{ "ToolTip", "How big navmesh do we want to generate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCreature_Statics::NewProp_mNavigationGenerationRadius = { "mNavigationGenerationRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreature, mNavigationGenerationRadius), METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::NewProp_mNavigationGenerationRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::NewProp_mNavigationGenerationRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGCreature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mOwningSpawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mDayTimePctCountAsNight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobia_Sprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mEyeLocationComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveDuringRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringNight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mCanSpawnDuringDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mTargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mActualAIControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsPersistent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mShouldOptimizeMeshWhenVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveSpeedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mMoveSpeedData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mRotationDoneDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mItemToDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mIsArachnid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobiaModeMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mArachnophobiaModeMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mNavigationRemovalRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreature_Statics::NewProp_mNavigationGenerationRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGCreature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGCreature>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGCreature_Statics::ClassParams = {
		&AFGCreature::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGCreature_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGCreature_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGCreature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGCreature()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGCreature_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGCreature, 3692062331);
	template<> FACTORYGAME_API UClass* StaticClass<AFGCreature>()
	{
		return AFGCreature::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGCreature(Z_Construct_UClass_AFGCreature, &AFGCreature::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGCreature"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGCreature);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
