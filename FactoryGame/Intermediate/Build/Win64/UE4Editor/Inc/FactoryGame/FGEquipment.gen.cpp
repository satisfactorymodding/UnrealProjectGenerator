// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Equipment/FGEquipment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGEquipment() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EEquipmentSlot();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_AdjustDamage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_CanAffordUse();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_ChargeForUse();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_DidNotAffordUse();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Native();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFireEffects();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_Equip();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_GetAttachment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentAttachment_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_IsEquipped();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_IsLocalInstigator();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_Server_ChargeForUse();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_Server_DefaultPrimaryFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_ShouldShowStinger();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_UnEquip();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_WasEquipped();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipment_WasUnEquipped();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EBackEquipment();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EArmEquipment();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentChild_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGReplicationDependencyActorInterface_NoRegister();
// End Cross Module References
	static UEnum* EEquipmentSlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EEquipmentSlot, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EEquipmentSlot"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EEquipmentSlot>()
	{
		return EEquipmentSlot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEquipmentSlot(EEquipmentSlot_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EEquipmentSlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EEquipmentSlot_Hash() { return 2628233146U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EEquipmentSlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEquipmentSlot"), 0, Get_Z_Construct_UEnum_FactoryGame_EEquipmentSlot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEquipmentSlot::ES_NONE", (int64)EEquipmentSlot::ES_NONE },
				{ "EEquipmentSlot::ES_ARMS", (int64)EEquipmentSlot::ES_ARMS },
				{ "EEquipmentSlot::ES_BACK", (int64)EEquipmentSlot::ES_BACK },
				{ "EEquipmentSlot::ES_MAX", (int64)EEquipmentSlot::ES_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ES_ARMS.DisplayName", "Arms" },
				{ "ES_BACK.DisplayName", "Body" },
				{ "ES_MAX.Hidden", "" },
				{ "ES_NONE.DisplayName", "Please specify a slot." },
				{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
				{ "ToolTip", "Equipments are equip on different slots on the player. One EQ per slot. These are the slots." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EEquipmentSlot",
				"EEquipmentSlot",
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
	static FName NAME_AFGEquipment_AdjustDamage = FName(TEXT("AdjustDamage"));
	float AFGEquipment::AdjustDamage(float damageAmount, const UDamageType* damageType, AController* instigatedBy, AActor* damageCauser)
	{
		FGEquipment_eventAdjustDamage_Parms Parms;
		Parms.damageAmount=damageAmount;
		Parms.damageType=damageType;
		Parms.instigatedBy=instigatedBy;
		Parms.damageCauser=damageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipment_AdjustDamage),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFGEquipment_CanDoDefaultPrimaryFire = FName(TEXT("CanDoDefaultPrimaryFire"));
	bool AFGEquipment::CanDoDefaultPrimaryFire()
	{
		FGEquipment_eventCanDoDefaultPrimaryFire_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipment_CanDoDefaultPrimaryFire),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFGEquipment_DidNotAffordUse = FName(TEXT("DidNotAffordUse"));
	void AFGEquipment::DidNotAffordUse()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipment_DidNotAffordUse),NULL);
	}
	static FName NAME_AFGEquipment_DoDefaultPrimaryFire = FName(TEXT("DoDefaultPrimaryFire"));
	void AFGEquipment::DoDefaultPrimaryFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipment_DoDefaultPrimaryFire),NULL);
	}
	static FName NAME_AFGEquipment_DoDefaultPrimaryFireEffects = FName(TEXT("DoDefaultPrimaryFireEffects"));
	void AFGEquipment::DoDefaultPrimaryFireEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipment_DoDefaultPrimaryFireEffects),NULL);
	}
	static FName NAME_AFGEquipment_Server_ChargeForUse = FName(TEXT("Server_ChargeForUse"));
	void AFGEquipment::Server_ChargeForUse()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipment_Server_ChargeForUse),NULL);
	}
	static FName NAME_AFGEquipment_Server_DefaultPrimaryFire = FName(TEXT("Server_DefaultPrimaryFire"));
	void AFGEquipment::Server_DefaultPrimaryFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipment_Server_DefaultPrimaryFire),NULL);
	}
	static FName NAME_AFGEquipment_Server_UpdateAttachmentUseState = FName(TEXT("Server_UpdateAttachmentUseState"));
	void AFGEquipment::Server_UpdateAttachmentUseState(int32 newUseState)
	{
		FGEquipment_eventServer_UpdateAttachmentUseState_Parms Parms;
		Parms.newUseState=newUseState;
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipment_Server_UpdateAttachmentUseState),&Parms);
	}
	static FName NAME_AFGEquipment_WasEquipped = FName(TEXT("WasEquipped"));
	void AFGEquipment::WasEquipped()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipment_WasEquipped),NULL);
	}
	static FName NAME_AFGEquipment_WasUnEquipped = FName(TEXT("WasUnEquipped"));
	void AFGEquipment::WasUnEquipped()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipment_WasUnEquipped),NULL);
	}
	void AFGEquipment::StaticRegisterNativesAFGEquipment()
	{
		UClass* Class = AFGEquipment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustDamage", &AFGEquipment::execAdjustDamage },
			{ "CanAffordUse", &AFGEquipment::execCanAffordUse },
			{ "CanDoDefaultPrimaryFire", &AFGEquipment::execCanDoDefaultPrimaryFire },
			{ "ChargeForUse", &AFGEquipment::execChargeForUse },
			{ "DidNotAffordUse", &AFGEquipment::execDidNotAffordUse },
			{ "DoDefaultPrimaryFire_Native", &AFGEquipment::execDoDefaultPrimaryFire_Native },
			{ "Equip", &AFGEquipment::execEquip },
			{ "GetAttachment", &AFGEquipment::execGetAttachment },
			{ "GetEquipmentSlot", &AFGEquipment::execGetEquipmentSlot },
			{ "GetIdlePoseAnimation", &AFGEquipment::execGetIdlePoseAnimation },
			{ "GetIdlePoseAnimation3p", &AFGEquipment::execGetIdlePoseAnimation3p },
			{ "GetInstigatorCharacter", &AFGEquipment::execGetInstigatorCharacter },
			{ "GetSecondaryAttachment", &AFGEquipment::execGetSecondaryAttachment },
			{ "IsEquipped", &AFGEquipment::execIsEquipped },
			{ "IsLocalInstigator", &AFGEquipment::execIsLocalInstigator },
			{ "Server_ChargeForUse", &AFGEquipment::execServer_ChargeForUse },
			{ "Server_DefaultPrimaryFire", &AFGEquipment::execServer_DefaultPrimaryFire },
			{ "Server_UpdateAttachmentUseState", &AFGEquipment::execServer_UpdateAttachmentUseState },
			{ "ShouldShowStinger", &AFGEquipment::execShouldShowStinger },
			{ "UnEquip", &AFGEquipment::execUnEquip },
			{ "WasEquipped", &AFGEquipment::execWasEquipped },
			{ "WasUnEquipped", &AFGEquipment::execWasUnEquipped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventAdjustDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::NewProp_damageCauser = { "damageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventAdjustDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::NewProp_instigatedBy = { "instigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventAdjustDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventAdjustDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventAdjustDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::NewProp_damageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Called whenever our owner is damaged and gives us a chance to adjust it\nSERVER ONLY\n\n@param damageAmount - how much damage we receive\n@param damageType - what damage type the damage is that we receive\n@param instigatedBy - who instigated the damage (Controller)\n@param damageCauser - the actor who damaged us\n@return the adjusted damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "AdjustDamage", sizeof(FGEquipment_eventAdjustDamage_Parms), Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_AdjustDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_AdjustDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_CanAffordUse_Statics
	{
		struct FGEquipment_eventCanAffordUse_Parms
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
	void Z_Construct_UFunction_AFGEquipment_CanAffordUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGEquipment_eventCanAffordUse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGEquipment_CanAffordUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGEquipment_eventCanAffordUse_Parms), &Z_Construct_UFunction_AFGEquipment_CanAffordUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_CanAffordUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_CanAffordUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_CanAffordUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "True if we can afford the cost of using this equipment" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_CanAffordUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "CanAffordUse", sizeof(FGEquipment_eventCanAffordUse_Parms), Z_Construct_UFunction_AFGEquipment_CanAffordUse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_CanAffordUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_CanAffordUse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_CanAffordUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_CanAffordUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_CanAffordUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGEquipment_eventCanDoDefaultPrimaryFire_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGEquipment_eventCanDoDefaultPrimaryFire_Parms), &Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Native only function that does default stuff needed for the default primary fire event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "CanDoDefaultPrimaryFire", sizeof(FGEquipment_eventCanDoDefaultPrimaryFire_Parms), Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_ChargeForUse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_ChargeForUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Consumes the cost of using this equipment, will call Server_ChargeForUse if we don't have authority" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_ChargeForUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "ChargeForUse", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_ChargeForUse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_ChargeForUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_ChargeForUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_ChargeForUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_DidNotAffordUse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_DidNotAffordUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Called if we couldn't afford to use the equipment" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_DidNotAffordUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "DidNotAffordUse", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_DidNotAffordUse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_DidNotAffordUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_DidNotAffordUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_DidNotAffordUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "BP hook for implementing what should actually happen when pressing fire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "DoDefaultPrimaryFire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Native_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Native only function that does default stuff needed for the default primary fire event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "DoDefaultPrimaryFire_Native", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Native_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFireEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFireEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Plays effects when using default primary fire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFireEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "DoDefaultPrimaryFireEffects", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFireEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFireEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFireEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFireEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_Equip_Statics
	{
		struct FGEquipment_eventEquip_Parms
		{
			AFGCharacterPlayer* character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEquipment_Equip_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventEquip_Parms, character), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_Equip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_Equip_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_Equip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Equips the equipment." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_Equip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "Equip", sizeof(FGEquipment_eventEquip_Parms), Z_Construct_UFunction_AFGEquipment_Equip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_Equip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_Equip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_Equip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_Equip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_Equip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_GetAttachment_Statics
	{
		struct FGEquipment_eventGetAttachment_Parms
		{
			AFGEquipmentAttachment* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEquipment_GetAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventGetAttachment_Parms, ReturnValue), Z_Construct_UClass_AFGEquipmentAttachment_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_GetAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_GetAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_GetAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Get the attachment for this equipment." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_GetAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "GetAttachment", sizeof(FGEquipment_eventGetAttachment_Parms), Z_Construct_UFunction_AFGEquipment_GetAttachment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_GetAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_GetAttachment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_GetAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_GetAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_GetAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics
	{
		struct FGEquipment_eventGetEquipmentSlot_Parms
		{
			TSubclassOf<AFGEquipment>  inClass;
			EEquipmentSlot ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventGetEquipmentSlot_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EEquipmentSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventGetEquipmentSlot_Parms, inClass), Z_Construct_UClass_AFGEquipment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Returns the enum for the equipment slot, ARMS, BACK etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "GetEquipmentSlot", sizeof(FGEquipment_eventGetEquipmentSlot_Parms), Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation_Statics
	{
		struct FGEquipment_eventGetIdlePoseAnimation_Parms
		{
			UAnimSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventGetIdlePoseAnimation_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "@return idle pose animation, can be NULL" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "GetIdlePoseAnimation", sizeof(FGEquipment_eventGetIdlePoseAnimation_Parms), Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p_Statics
	{
		struct FGEquipment_eventGetIdlePoseAnimation3p_Parms
		{
			UAnimSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventGetIdlePoseAnimation3p_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p_Statics::Function_MetaDataParams[] = {
		{ "Category", "Driveable" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "@return idle pose animation for 3p, can be NULL" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "GetIdlePoseAnimation3p", sizeof(FGEquipment_eventGetIdlePoseAnimation3p_Parms), Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter_Statics
	{
		struct FGEquipment_eventGetInstigatorCharacter_Parms
		{
			AFGCharacterPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventGetInstigatorCharacter_Parms, ReturnValue), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Convenience blueprint function to return Instigator as a FGCharacterPlayer\n@return The instigator for this equipment; nullptr if not equipped or Instigator is not an FGCharacterPlayer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "GetInstigatorCharacter", sizeof(FGEquipment_eventGetInstigatorCharacter_Parms), Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment_Statics
	{
		struct FGEquipment_eventGetSecondaryAttachment_Parms
		{
			AFGEquipmentAttachment* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventGetSecondaryAttachment_Parms, ReturnValue), Z_Construct_UClass_AFGEquipmentAttachment_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "GetSecondaryAttachment", sizeof(FGEquipment_eventGetSecondaryAttachment_Parms), Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_IsEquipped_Statics
	{
		struct FGEquipment_eventIsEquipped_Parms
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
	void Z_Construct_UFunction_AFGEquipment_IsEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGEquipment_eventIsEquipped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGEquipment_IsEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGEquipment_eventIsEquipped_Parms), &Z_Construct_UFunction_AFGEquipment_IsEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_IsEquipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_IsEquipped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_IsEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Is this equipment equipped.\n@return - true if equiped; otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_IsEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "IsEquipped", sizeof(FGEquipment_eventIsEquipped_Parms), Z_Construct_UFunction_AFGEquipment_IsEquipped_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_IsEquipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_IsEquipped_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_IsEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_IsEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_IsEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_IsLocalInstigator_Statics
	{
		struct FGEquipment_eventIsLocalInstigator_Parms
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
	void Z_Construct_UFunction_AFGEquipment_IsLocalInstigator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGEquipment_eventIsLocalInstigator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGEquipment_IsLocalInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGEquipment_eventIsLocalInstigator_Parms), &Z_Construct_UFunction_AFGEquipment_IsLocalInstigator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_IsLocalInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_IsLocalInstigator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_IsLocalInstigator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "@return Is the instigator locally controlled; false if no instigator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_IsLocalInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "IsLocalInstigator", sizeof(FGEquipment_eventIsLocalInstigator_Parms), Z_Construct_UFunction_AFGEquipment_IsLocalInstigator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_IsLocalInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_IsLocalInstigator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_IsLocalInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_IsLocalInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_IsLocalInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_Server_ChargeForUse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_Server_ChargeForUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Will call ChargeForUse_Internal on server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_Server_ChargeForUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "Server_ChargeForUse", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_Server_ChargeForUse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_Server_ChargeForUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_Server_ChargeForUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_Server_ChargeForUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_Server_DefaultPrimaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_Server_DefaultPrimaryFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Only server implementation of primary fire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_Server_DefaultPrimaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "Server_DefaultPrimaryFire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_Server_DefaultPrimaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_Server_DefaultPrimaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_Server_DefaultPrimaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_Server_DefaultPrimaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newUseState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState_Statics::NewProp_newUseState = { "newUseState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGEquipment_eventServer_UpdateAttachmentUseState_Parms, newUseState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState_Statics::NewProp_newUseState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "This is called to update the relevant attachments' use state so that animations can be played etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "Server_UpdateAttachmentUseState", sizeof(FGEquipment_eventServer_UpdateAttachmentUseState_Parms), Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_ShouldShowStinger_Statics
	{
		struct FGEquipment_eventShouldShowStinger_Parms
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
	void Z_Construct_UFunction_AFGEquipment_ShouldShowStinger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGEquipment_eventShouldShowStinger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGEquipment_ShouldShowStinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGEquipment_eventShouldShowStinger_Parms), &Z_Construct_UFunction_AFGEquipment_ShouldShowStinger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipment_ShouldShowStinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipment_ShouldShowStinger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_ShouldShowStinger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Should we play stinger animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_ShouldShowStinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "ShouldShowStinger", sizeof(FGEquipment_eventShouldShowStinger_Parms), Z_Construct_UFunction_AFGEquipment_ShouldShowStinger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_ShouldShowStinger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_ShouldShowStinger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_ShouldShowStinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_ShouldShowStinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_ShouldShowStinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_UnEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_UnEquip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Put the equipment away." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_UnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "UnEquip", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_UnEquip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_UnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_UnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_UnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_WasEquipped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_WasEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Was the equipment equipped." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_WasEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "WasEquipped", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_WasEquipped_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_WasEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_WasEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_WasEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipment_WasUnEquipped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipment_WasUnEquipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Was the equipment put away." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipment_WasUnEquipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipment, nullptr, "WasUnEquipped", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipment_WasUnEquipped_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipment_WasUnEquipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipment_WasUnEquipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipment_WasUnEquipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGEquipment_NoRegister()
	{
		return AFGEquipment::StaticClass();
	}
	struct Z_Construct_UClass_AFGEquipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseDefaultPrimaryFire_MetaData[];
#endif
		static void NewProp_mUseDefaultPrimaryFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseDefaultPrimaryFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIdlePoseAnimation3p_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mIdlePoseAnimation3p;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIdlePoseAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mIdlePoseAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSecondaryAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSecondaryAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasPersistentOwner_MetaData[];
#endif
		static void NewProp_mHasPersistentOwner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasPersistentOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBackAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mBackAnimation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mBackAnimation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mArmAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mArmAnimation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mArmAnimation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCostToUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCostToUse;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCostToUse_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mChildEquipmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mChildEquipmentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttachSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mAttachSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m1PAnimClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_m1PAnimClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mChildEquipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mChildEquipment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEquipmentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mEquipmentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnequipSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mUnequipSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEquipSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mEquipSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSprintHeadBobShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mSprintHeadBobShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEquipmentSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mEquipmentSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mEquipmentSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSecondaryAttachmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mSecondaryAttachmentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttachmentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAttachmentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGEquipment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGEquipment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGEquipment_AdjustDamage, "AdjustDamage" }, // 2123092923
		{ &Z_Construct_UFunction_AFGEquipment_CanAffordUse, "CanAffordUse" }, // 1279622743
		{ &Z_Construct_UFunction_AFGEquipment_CanDoDefaultPrimaryFire, "CanDoDefaultPrimaryFire" }, // 3963819880
		{ &Z_Construct_UFunction_AFGEquipment_ChargeForUse, "ChargeForUse" }, // 281518113
		{ &Z_Construct_UFunction_AFGEquipment_DidNotAffordUse, "DidNotAffordUse" }, // 2427668082
		{ &Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire, "DoDefaultPrimaryFire" }, // 2648577747
		{ &Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFire_Native, "DoDefaultPrimaryFire_Native" }, // 3438852838
		{ &Z_Construct_UFunction_AFGEquipment_DoDefaultPrimaryFireEffects, "DoDefaultPrimaryFireEffects" }, // 938217733
		{ &Z_Construct_UFunction_AFGEquipment_Equip, "Equip" }, // 1154103562
		{ &Z_Construct_UFunction_AFGEquipment_GetAttachment, "GetAttachment" }, // 1355833451
		{ &Z_Construct_UFunction_AFGEquipment_GetEquipmentSlot, "GetEquipmentSlot" }, // 4264523525
		{ &Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation, "GetIdlePoseAnimation" }, // 3714058037
		{ &Z_Construct_UFunction_AFGEquipment_GetIdlePoseAnimation3p, "GetIdlePoseAnimation3p" }, // 1629192167
		{ &Z_Construct_UFunction_AFGEquipment_GetInstigatorCharacter, "GetInstigatorCharacter" }, // 2402283366
		{ &Z_Construct_UFunction_AFGEquipment_GetSecondaryAttachment, "GetSecondaryAttachment" }, // 166809483
		{ &Z_Construct_UFunction_AFGEquipment_IsEquipped, "IsEquipped" }, // 2716866894
		{ &Z_Construct_UFunction_AFGEquipment_IsLocalInstigator, "IsLocalInstigator" }, // 3420174075
		{ &Z_Construct_UFunction_AFGEquipment_Server_ChargeForUse, "Server_ChargeForUse" }, // 1456808497
		{ &Z_Construct_UFunction_AFGEquipment_Server_DefaultPrimaryFire, "Server_DefaultPrimaryFire" }, // 2755124191
		{ &Z_Construct_UFunction_AFGEquipment_Server_UpdateAttachmentUseState, "Server_UpdateAttachmentUseState" }, // 2983167717
		{ &Z_Construct_UFunction_AFGEquipment_ShouldShowStinger, "ShouldShowStinger" }, // 1543518827
		{ &Z_Construct_UFunction_AFGEquipment_UnEquip, "UnEquip" }, // 3375215488
		{ &Z_Construct_UFunction_AFGEquipment_WasEquipped, "WasEquipped" }, // 2794726766
		{ &Z_Construct_UFunction_AFGEquipment_WasUnEquipped, "WasUnEquipped" }, // 869939147
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::Class_MetaDataParams[] = {
		{ "AutoJson", "TRUE" },
		{ "IncludePath", "Equipment/FGEquipment.h" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Base class for all kinds of equipment in the game." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mUseDefaultPrimaryFire_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Should we use the default primary fire implementation" },
	};
#endif
	void Z_Construct_UClass_AFGEquipment_Statics::NewProp_mUseDefaultPrimaryFire_SetBit(void* Obj)
	{
		((AFGEquipment*)Obj)->mUseDefaultPrimaryFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mUseDefaultPrimaryFire = { "mUseDefaultPrimaryFire", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGEquipment), &Z_Construct_UClass_AFGEquipment_Statics::NewProp_mUseDefaultPrimaryFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mUseDefaultPrimaryFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mUseDefaultPrimaryFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mIdlePoseAnimation3p_MetaData[] = {
		{ "Category", "Equipment|Animation" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Idle animation to play when equipped in 3p. Can be null if we don't want to play any special animation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mIdlePoseAnimation3p = { "mIdlePoseAnimation3p", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mIdlePoseAnimation3p), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mIdlePoseAnimation3p_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mIdlePoseAnimation3p_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mIdlePoseAnimation_MetaData[] = {
		{ "Category", "Equipment|Animation" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Idle animation to play when equipped. Can be null if we don't want to play any special animation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mIdlePoseAnimation = { "mIdlePoseAnimation", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mIdlePoseAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mIdlePoseAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mIdlePoseAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSecondaryAttachment_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "This is a potential secondary attachment" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSecondaryAttachment = { "mSecondaryAttachment", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mSecondaryAttachment), Z_Construct_UClass_AFGEquipmentAttachment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSecondaryAttachment_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSecondaryAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachment_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "This is the attachment of this equipment" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachment = { "mAttachment", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mAttachment), Z_Construct_UClass_AFGEquipmentAttachment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachment_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mHasPersistentOwner_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "If the owner is persistent throughout the lifetime of this equipment" },
	};
#endif
	void Z_Construct_UClass_AFGEquipment_Statics::NewProp_mHasPersistentOwner_SetBit(void* Obj)
	{
		((AFGEquipment*)Obj)->mHasPersistentOwner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mHasPersistentOwner = { "mHasPersistentOwner", nullptr, (EPropertyFlags)0x00200c0000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGEquipment), &Z_Construct_UClass_AFGEquipment_Statics::NewProp_mHasPersistentOwner_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mHasPersistentOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mHasPersistentOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mBackAnimation_MetaData[] = {
		{ "Category", "Equipment|Animation" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Arms animation this should play on the when the equipment is equipped (only used if mEquipmentSlot == ES_BACK)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mBackAnimation = { "mBackAnimation", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mBackAnimation), Z_Construct_UEnum_FactoryGame_EBackEquipment, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mBackAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mBackAnimation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mBackAnimation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mArmAnimation_MetaData[] = {
		{ "Category", "Equipment|Animation" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Arms animation this should play on the when the equipment is equipped (only used if mEquipmentSlot == ES_ARMS)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mArmAnimation = { "mArmAnimation", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mArmAnimation), Z_Construct_UEnum_FactoryGame_EArmEquipment, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mArmAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mArmAnimation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mArmAnimation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mCostToUse_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "The cost of using this equipment" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mCostToUse = { "mCostToUse", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mCostToUse), METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mCostToUse_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mCostToUse_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mCostToUse_Inner = { "mCostToUse", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mChildEquipmentClass_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "The class (if any) to use to spawn a child equipment" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mChildEquipmentClass = { "mChildEquipmentClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mChildEquipmentClass), Z_Construct_UClass_AFGEquipmentChild_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mChildEquipmentClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mChildEquipmentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachSocket_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "If this equipment should attach to a socket, this is the socket." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachSocket = { "mAttachSocket", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mAttachSocket), METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_m1PAnimClass_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "The AnimBlueprint class to use for the 1p anim for our pawn, specifying none here means that the pawn default 1p anim will be used" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_m1PAnimClass = { "m1PAnimClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, m1PAnimClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_m1PAnimClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_m1PAnimClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mChildEquipment_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Holds a reference to the child equipment that may be spawned with this" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mChildEquipment = { "mChildEquipment", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mChildEquipment), Z_Construct_UClass_AFGEquipmentChild_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mChildEquipment_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mChildEquipment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipmentWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Class of widget to add when equipping this equipment" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipmentWidget = { "mEquipmentWidget", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mEquipmentWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipmentWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipmentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mUnequipSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Sound played when unequipping" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mUnequipSound = { "mUnequipSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mUnequipSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mUnequipSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mUnequipSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Sound played when equipping" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipSound = { "mEquipSound", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mEquipSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSprintHeadBobShake_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "Camera shake to play when sprinting" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSprintHeadBobShake = { "mSprintHeadBobShake", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mSprintHeadBobShake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSprintHeadBobShake_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSprintHeadBobShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipmentSlot_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "To what slot is this limited to?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipmentSlot = { "mEquipmentSlot", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mEquipmentSlot), Z_Construct_UEnum_FactoryGame_EEquipmentSlot, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipmentSlot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipmentSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipmentSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSecondaryAttachmentClass_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "This is the secondary attachment for this class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSecondaryAttachmentClass = { "mSecondaryAttachmentClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mSecondaryAttachmentClass), Z_Construct_UClass_AFGEquipmentAttachment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSecondaryAttachmentClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSecondaryAttachmentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachmentClass_MetaData[] = {
		{ "Category", "Equipment" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipment.h" },
		{ "ToolTip", "This is the attachment for this class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachmentClass = { "mAttachmentClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGEquipment, mAttachmentClass), Z_Construct_UClass_AFGEquipmentAttachment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachmentClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachmentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mUseDefaultPrimaryFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mIdlePoseAnimation3p,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mIdlePoseAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSecondaryAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mHasPersistentOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mBackAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mBackAnimation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mArmAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mArmAnimation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mCostToUse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mCostToUse_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mChildEquipmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_m1PAnimClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mChildEquipment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipmentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mUnequipSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSprintHeadBobShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipmentSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mEquipmentSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mSecondaryAttachmentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipment_Statics::NewProp_mAttachmentClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGEquipment_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGEquipment, IFGSaveInterface), false },
			{ Z_Construct_UClass_UFGReplicationDependencyActorInterface_NoRegister, (int32)VTABLE_OFFSET(AFGEquipment, IFGReplicationDependencyActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGEquipment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGEquipment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGEquipment_Statics::ClassParams = {
		&AFGEquipment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGEquipment_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGEquipment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGEquipment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGEquipment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGEquipment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGEquipment, 1928136764);
	template<> FACTORYGAME_API UClass* StaticClass<AFGEquipment>()
	{
		return AFGEquipment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGEquipment(Z_Construct_UClass_AFGEquipment, &AFGEquipment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGEquipment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGEquipment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
