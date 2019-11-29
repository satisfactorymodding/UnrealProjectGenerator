// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Equipment/FGWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWeapon() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeapon_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeapon();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_ActualReload();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_CanReload();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_FireAmmunition();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHUD_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_GetIsFiring();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_GetIsReloading();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_GetMagSize();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_HasAmmunition();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_PlayFailedToFireEffects();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_PlayFireEffect();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_PlayFireReleasedEffects();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_PlayReloadEffects();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_Server_EndPrimaryFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_Server_Reload();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWeapon_Server_StartPrimaryFire();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDamageType_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
// End Cross Module References
	static FName NAME_AFGWeapon_FireAmmunition = FName(TEXT("FireAmmunition"));
	void AFGWeapon::FireAmmunition()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeapon_FireAmmunition),NULL);
	}
	static FName NAME_AFGWeapon_PlayFailedToFireEffects = FName(TEXT("PlayFailedToFireEffects"));
	void AFGWeapon::PlayFailedToFireEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeapon_PlayFailedToFireEffects),NULL);
	}
	static FName NAME_AFGWeapon_PlayFireEffect = FName(TEXT("PlayFireEffect"));
	void AFGWeapon::PlayFireEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeapon_PlayFireEffect),NULL);
	}
	static FName NAME_AFGWeapon_PlayFireReleasedEffects = FName(TEXT("PlayFireReleasedEffects"));
	void AFGWeapon::PlayFireReleasedEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeapon_PlayFireReleasedEffects),NULL);
	}
	static FName NAME_AFGWeapon_PlayReloadEffects = FName(TEXT("PlayReloadEffects"));
	void AFGWeapon::PlayReloadEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeapon_PlayReloadEffects),NULL);
	}
	static FName NAME_AFGWeapon_Server_EndPrimaryFire = FName(TEXT("Server_EndPrimaryFire"));
	void AFGWeapon::Server_EndPrimaryFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeapon_Server_EndPrimaryFire),NULL);
	}
	static FName NAME_AFGWeapon_Server_Reload = FName(TEXT("Server_Reload"));
	void AFGWeapon::Server_Reload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeapon_Server_Reload),NULL);
	}
	static FName NAME_AFGWeapon_Server_StartPrimaryFire = FName(TEXT("Server_StartPrimaryFire"));
	void AFGWeapon::Server_StartPrimaryFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGWeapon_Server_StartPrimaryFire),NULL);
	}
	void AFGWeapon::StaticRegisterNativesAFGWeapon()
	{
		UClass* Class = AFGWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActualReload", &AFGWeapon::execActualReload },
			{ "CanReload", &AFGWeapon::execCanReload },
			{ "FireAmmunition", &AFGWeapon::execFireAmmunition },
			{ "GetAssosiatedHud", &AFGWeapon::execGetAssosiatedHud },
			{ "GetCurrentAmmo", &AFGWeapon::execGetCurrentAmmo },
			{ "GetIsFiring", &AFGWeapon::execGetIsFiring },
			{ "GetIsReloading", &AFGWeapon::execGetIsReloading },
			{ "GetMagSize", &AFGWeapon::execGetMagSize },
			{ "GetReloadTimeLeft", &AFGWeapon::execGetReloadTimeLeft },
			{ "GetSpareAmmunition", &AFGWeapon::execGetSpareAmmunition },
			{ "HasAmmunition", &AFGWeapon::execHasAmmunition },
			{ "PlayFireEffect", &AFGWeapon::execPlayFireEffect },
			{ "PlayReloadEffects", &AFGWeapon::execPlayReloadEffects },
			{ "Server_EndPrimaryFire", &AFGWeapon::execServer_EndPrimaryFire },
			{ "Server_Reload", &AFGWeapon::execServer_Reload },
			{ "Server_StartPrimaryFire", &AFGWeapon::execServer_StartPrimaryFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGWeapon_ActualReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_ActualReload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "When we \"actually\" has reloaded (reload logic goes here), need to be UFUNCTION as it used as a delegate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_ActualReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "ActualReload", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_ActualReload_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_ActualReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_ActualReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_ActualReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_CanReload_Statics
	{
		struct FGWeapon_eventCanReload_Parms
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
	void Z_Construct_UFunction_AFGWeapon_CanReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGWeapon_eventCanReload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGWeapon_CanReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGWeapon_eventCanReload_Parms), &Z_Construct_UFunction_AFGWeapon_CanReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWeapon_CanReload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWeapon_CanReload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_CanReload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Return true if we currently can reload with the weapon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_CanReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "CanReload", sizeof(FGWeapon_eventCanReload_Parms), Z_Construct_UFunction_AFGWeapon_CanReload_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_CanReload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_CanReload_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_CanReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_CanReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_CanReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_FireAmmunition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_FireAmmunition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Checks what type of fire modes and call corresponding fire function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_FireAmmunition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "FireAmmunition", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_FireAmmunition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_FireAmmunition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_FireAmmunition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_FireAmmunition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud_Statics
	{
		struct FGWeapon_eventGetAssosiatedHud_Parms
		{
			AFGHUD* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWeapon_eventGetAssosiatedHud_Parms, ReturnValue), Z_Construct_UClass_AFGHUD_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hud" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Returns the assosiated hud object if there is one assigned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "GetAssosiatedHud", sizeof(FGWeapon_eventGetAssosiatedHud_Parms), Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo_Statics
	{
		struct FGWeapon_eventGetCurrentAmmo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWeapon_eventGetCurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Returns how much ammo we have in current clip" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "GetCurrentAmmo", sizeof(FGWeapon_eventGetCurrentAmmo_Parms), Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_GetIsFiring_Statics
	{
		struct FGWeapon_eventGetIsFiring_Parms
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
	void Z_Construct_UFunction_AFGWeapon_GetIsFiring_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGWeapon_eventGetIsFiring_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGWeapon_GetIsFiring_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGWeapon_eventGetIsFiring_Parms), &Z_Construct_UFunction_AFGWeapon_GetIsFiring_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWeapon_GetIsFiring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWeapon_GetIsFiring_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_GetIsFiring_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Returns mIsFiring" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_GetIsFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "GetIsFiring", sizeof(FGWeapon_eventGetIsFiring_Parms), Z_Construct_UFunction_AFGWeapon_GetIsFiring_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetIsFiring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_GetIsFiring_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetIsFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_GetIsFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_GetIsFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_GetIsReloading_Statics
	{
		struct FGWeapon_eventGetIsReloading_Parms
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
	void Z_Construct_UFunction_AFGWeapon_GetIsReloading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGWeapon_eventGetIsReloading_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGWeapon_GetIsReloading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGWeapon_eventGetIsReloading_Parms), &Z_Construct_UFunction_AFGWeapon_GetIsReloading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWeapon_GetIsReloading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWeapon_GetIsReloading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_GetIsReloading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Returns whether we are reloading or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_GetIsReloading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "GetIsReloading", sizeof(FGWeapon_eventGetIsReloading_Parms), Z_Construct_UFunction_AFGWeapon_GetIsReloading_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetIsReloading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_GetIsReloading_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetIsReloading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_GetIsReloading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_GetIsReloading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_GetMagSize_Statics
	{
		struct FGWeapon_eventGetMagSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGWeapon_GetMagSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWeapon_eventGetMagSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWeapon_GetMagSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWeapon_GetMagSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_GetMagSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Returns mMagSize" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_GetMagSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "GetMagSize", sizeof(FGWeapon_eventGetMagSize_Parms), Z_Construct_UFunction_AFGWeapon_GetMagSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetMagSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_GetMagSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetMagSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_GetMagSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_GetMagSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft_Statics
	{
		struct FGWeapon_eventGetReloadTimeLeft_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWeapon_eventGetReloadTimeLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Returns -1 if not reloading, else, returns the time left on our reload" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "GetReloadTimeLeft", sizeof(FGWeapon_eventGetReloadTimeLeft_Parms), Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition_Statics
	{
		struct FGWeapon_eventGetSpareAmmunition_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWeapon_eventGetSpareAmmunition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "How much ammunition do our owner have in their inventory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "GetSpareAmmunition", sizeof(FGWeapon_eventGetSpareAmmunition_Parms), Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_HasAmmunition_Statics
	{
		struct FGWeapon_eventHasAmmunition_Parms
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
	void Z_Construct_UFunction_AFGWeapon_HasAmmunition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGWeapon_eventHasAmmunition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGWeapon_HasAmmunition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGWeapon_eventHasAmmunition_Parms), &Z_Construct_UFunction_AFGWeapon_HasAmmunition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWeapon_HasAmmunition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWeapon_HasAmmunition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_HasAmmunition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Returns true if we have ammunition loaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_HasAmmunition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "HasAmmunition", sizeof(FGWeapon_eventHasAmmunition_Parms), Z_Construct_UFunction_AFGWeapon_HasAmmunition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_HasAmmunition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_HasAmmunition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_HasAmmunition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_HasAmmunition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_HasAmmunition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_PlayFailedToFireEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_PlayFailedToFireEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Called when you tried to fire and CanFire returned false. You will have to check the reason yourself and play effects accordingly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_PlayFailedToFireEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "PlayFailedToFireEffects", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_PlayFailedToFireEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_PlayFailedToFireEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_PlayFailedToFireEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_PlayFailedToFireEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_PlayFireEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_PlayFireEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Handles playing of effects both on server and on client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_PlayFireEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "PlayFireEffect", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_PlayFireEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_PlayFireEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_PlayFireEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_PlayFireEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_PlayFireReleasedEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_PlayFireReleasedEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Called when the player releases the primary fire so that special animations can be triggered from this. The neccesity is rare, use PlayFireEffect() in most cases" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_PlayFireReleasedEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "PlayFireReleasedEffects", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_PlayFireReleasedEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_PlayFireReleasedEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_PlayFireReleasedEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_PlayFireReleasedEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_PlayReloadEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_PlayReloadEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_PlayReloadEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "PlayReloadEffects", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_PlayReloadEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_PlayReloadEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_PlayReloadEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_PlayReloadEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_Server_EndPrimaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_Server_EndPrimaryFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Called by client to start fire on server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_Server_EndPrimaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "Server_EndPrimaryFire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_Server_EndPrimaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_Server_EndPrimaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_Server_EndPrimaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_Server_EndPrimaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_Server_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_Server_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Client tells server to reload" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_Server_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "Server_Reload", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_Server_Reload_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_Server_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_Server_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_Server_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWeapon_Server_StartPrimaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWeapon_Server_StartPrimaryFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Called by client to start fire on server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWeapon_Server_StartPrimaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWeapon, nullptr, "Server_StartPrimaryFire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWeapon_Server_StartPrimaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWeapon_Server_StartPrimaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWeapon_Server_StartPrimaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWeapon_Server_StartPrimaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGWeapon_NoRegister()
	{
		return AFGWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AFGWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReloadSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mReloadSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsReloading_MetaData[];
#endif
		static void NewProp_mIsReloading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsReloading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsPendingFire_MetaData[];
#endif
		static void NewProp_mIsPendingFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsPendingFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsFiring_MetaData[];
#endif
		static void NewProp_mIsFiring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsFiring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFireRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mFireRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mReloadTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAmmunitionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAmmunitionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mCurrentAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMagSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMagSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAssosiatedHud_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAssosiatedHud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGWeapon_ActualReload, "ActualReload" }, // 2655856227
		{ &Z_Construct_UFunction_AFGWeapon_CanReload, "CanReload" }, // 3787642075
		{ &Z_Construct_UFunction_AFGWeapon_FireAmmunition, "FireAmmunition" }, // 4084729787
		{ &Z_Construct_UFunction_AFGWeapon_GetAssosiatedHud, "GetAssosiatedHud" }, // 1376629380
		{ &Z_Construct_UFunction_AFGWeapon_GetCurrentAmmo, "GetCurrentAmmo" }, // 1382508955
		{ &Z_Construct_UFunction_AFGWeapon_GetIsFiring, "GetIsFiring" }, // 512468568
		{ &Z_Construct_UFunction_AFGWeapon_GetIsReloading, "GetIsReloading" }, // 792660141
		{ &Z_Construct_UFunction_AFGWeapon_GetMagSize, "GetMagSize" }, // 3287280871
		{ &Z_Construct_UFunction_AFGWeapon_GetReloadTimeLeft, "GetReloadTimeLeft" }, // 100000579
		{ &Z_Construct_UFunction_AFGWeapon_GetSpareAmmunition, "GetSpareAmmunition" }, // 3366544011
		{ &Z_Construct_UFunction_AFGWeapon_HasAmmunition, "HasAmmunition" }, // 233053163
		{ &Z_Construct_UFunction_AFGWeapon_PlayFailedToFireEffects, "PlayFailedToFireEffects" }, // 714612401
		{ &Z_Construct_UFunction_AFGWeapon_PlayFireEffect, "PlayFireEffect" }, // 2998039643
		{ &Z_Construct_UFunction_AFGWeapon_PlayFireReleasedEffects, "PlayFireReleasedEffects" }, // 1432831819
		{ &Z_Construct_UFunction_AFGWeapon_PlayReloadEffects, "PlayReloadEffects" }, // 1829981647
		{ &Z_Construct_UFunction_AFGWeapon_Server_EndPrimaryFire, "Server_EndPrimaryFire" }, // 2852518086
		{ &Z_Construct_UFunction_AFGWeapon_Server_Reload, "Server_Reload" }, // 312536495
		{ &Z_Construct_UFunction_AFGWeapon_Server_StartPrimaryFire, "Server_StartPrimaryFire" }, // 1643134835
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGWeapon.h" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Base class for a weapon in the game, this provides basic firing logic only and does not specify if it's a instant hit or projectile weapon." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeapon_Statics::NewProp_mReloadSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Sound played when reloading" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWeapon_Statics::NewProp_mReloadSound = { "mReloadSound", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWeapon, mReloadSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mReloadSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mReloadSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsReloading_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "True if we are currently reloading" },
	};
#endif
	void Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsReloading_SetBit(void* Obj)
	{
		((AFGWeapon*)Obj)->mIsReloading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsReloading = { "mIsReloading", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGWeapon), &Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsReloading_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsReloading_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsReloading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsPendingFire_MetaData[] = {
		{ "Category", "FGWeapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "The player wants to shoot" },
	};
#endif
	void Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsPendingFire_SetBit(void* Obj)
	{
		((AFGWeapon*)Obj)->mIsPendingFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsPendingFire = { "mIsPendingFire", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGWeapon), &Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsPendingFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsPendingFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsPendingFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsFiring_MetaData[] = {
		{ "Category", "FGWeapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Are we firing?" },
	};
#endif
	void Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsFiring_SetBit(void* Obj)
	{
		((AFGWeapon*)Obj)->mIsFiring = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsFiring = { "mIsFiring", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGWeapon), &Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsFiring_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsFiring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeapon_Statics::NewProp_mFireRate_MetaData[] = {
		{ "Category", "FGWeapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "How many seconds between between shots" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGWeapon_Statics::NewProp_mFireRate = { "mFireRate", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWeapon, mFireRate), METADATA_PARAMS(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mFireRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mFireRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeapon_Statics::NewProp_mReloadTime_MetaData[] = {
		{ "Category", "FGWeapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "In seconds, how long time does it take to reload the weapon" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGWeapon_Statics::NewProp_mReloadTime = { "mReloadTime", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWeapon, mReloadTime), METADATA_PARAMS(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mReloadTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mReloadTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeapon_Statics::NewProp_mDamageTypeClass_MetaData[] = {
		{ "Category", "FGWeapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "Damage type to use when hitting others" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGWeapon_Statics::NewProp_mDamageTypeClass = { "mDamageTypeClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWeapon, mDamageTypeClass), Z_Construct_UClass_UFGDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mDamageTypeClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mDamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeapon_Statics::NewProp_mAmmunitionClass_MetaData[] = {
		{ "Category", "FGWeapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "The item we shoot" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGWeapon_Statics::NewProp_mAmmunitionClass = { "mAmmunitionClass", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWeapon, mAmmunitionClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mAmmunitionClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mAmmunitionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeapon_Statics::NewProp_mCurrentAmmo_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "How much ammo is loaded into the weapon" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGWeapon_Statics::NewProp_mCurrentAmmo = { "mCurrentAmmo", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWeapon, mCurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mCurrentAmmo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mCurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeapon_Statics::NewProp_mMagSize_MetaData[] = {
		{ "Category", "FGWeapon" },
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
		{ "ToolTip", "How much ammo does a magazine cover" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGWeapon_Statics::NewProp_mMagSize = { "mMagSize", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWeapon, mMagSize), METADATA_PARAMS(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mMagSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mMagSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWeapon_Statics::NewProp_mAssosiatedHud_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWeapon_Statics::NewProp_mAssosiatedHud = { "mAssosiatedHud", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWeapon, mAssosiatedHud), Z_Construct_UClass_AFGHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mAssosiatedHud_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWeapon_Statics::NewProp_mAssosiatedHud_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeapon_Statics::NewProp_mReloadSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsReloading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsPendingFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeapon_Statics::NewProp_mIsFiring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeapon_Statics::NewProp_mFireRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeapon_Statics::NewProp_mReloadTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeapon_Statics::NewProp_mDamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeapon_Statics::NewProp_mAmmunitionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeapon_Statics::NewProp_mCurrentAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeapon_Statics::NewProp_mMagSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWeapon_Statics::NewProp_mAssosiatedHud,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGWeapon_Statics::ClassParams = {
		&AFGWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGWeapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGWeapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGWeapon, 1319279648);
	template<> FACTORYGAME_API UClass* StaticClass<AFGWeapon>()
	{
		return AFGWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGWeapon(Z_Construct_UClass_AFGWeapon, &AFGWeapon::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
