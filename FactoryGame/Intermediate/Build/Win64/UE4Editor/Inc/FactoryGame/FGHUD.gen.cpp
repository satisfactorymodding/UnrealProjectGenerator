// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGHUD() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ECrosshairState();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHUD_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHUD();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHUDBase();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_AddEquipmentHUD();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EEquipmentSlot();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_AddPawnHUD();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_BeginPreviewActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_CloseRespawnUI();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_EndPreviewActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_GetCrosshairState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_GetGameUI();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameUI_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_GetHUDVisibility();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_GetPawnHUD();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_GetPreviewTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_GetPumpiMode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_GetShowCrosshair();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_OpenInteractUI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInteractWidget_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_SetCrosshairState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_SetHUDVisibility();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_SetPreviewActorClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_SetPreviewDistance();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_SetPreviewView();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemView();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_SetPumpiMode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_SetShowCrossHair();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_ShowRespawnUI();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHUD_UpdateCrosshairState();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRenderTargetStage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	static UEnum* ECrosshairState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ECrosshairState, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ECrosshairState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECrosshairState(ECrosshairState_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ECrosshairState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ECrosshairState_CRC() { return 44595538U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ECrosshairState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECrosshairState"), 0, Get_Z_Construct_UEnum_FactoryGame_ECrosshairState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECrosshairState::ECS_Default", (int64)ECrosshairState::ECS_Default },
				{ "ECrosshairState::ECS_GeneralUse", (int64)ECrosshairState::ECS_GeneralUse },
				{ "ECrosshairState::ECS_PickUp", (int64)ECrosshairState::ECS_PickUp },
				{ "ECrosshairState::ECS_Vehicle", (int64)ECrosshairState::ECS_Vehicle },
				{ "ECrosshairState::ECS_Weapon", (int64)ECrosshairState::ECS_Weapon },
				{ "ECrosshairState::ECS_Workbench", (int64)ECrosshairState::ECS_Workbench },
				{ "ECrosshairState::ECS_Dismantle", (int64)ECrosshairState::ECS_Dismantle },
				{ "ECrosshairState::ECS_Build", (int64)ECrosshairState::ECS_Build },
				{ "ECrosshairState::ECS_Custom", (int64)ECrosshairState::ECS_Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ECS_Build.DisplayName", "Build" },
				{ "ECS_Custom.DisplayName", "Cutom" },
				{ "ECS_Default.DisplayName", "Default" },
				{ "ECS_Dismantle.DisplayName", "Dismantle" },
				{ "ECS_GeneralUse.DisplayName", "General" },
				{ "ECS_PickUp.DisplayName", "Pickup" },
				{ "ECS_Vehicle.DisplayName", "Vehicle" },
				{ "ECS_Weapon.DisplayName", "Weapon" },
				{ "ECS_Workbench.DisplayName", "Workbench" },
				{ "ModuleRelativePath", "FGHUD.h" },
				{ "ToolTip", "MODDING EDIT: doesn't inherit the one from FactoryGame.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECrosshairState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECrosshairState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AFGHUD_AddEquipmentHUD = FName(TEXT("AddEquipmentHUD"));
	void AFGHUD::AddEquipmentHUD(TSubclassOf<UUserWidget>  widgetClass, EEquipmentSlot slot)
	{
		FGHUD_eventAddEquipmentHUD_Parms Parms;
		Parms.widgetClass=widgetClass;
		Parms.slot=slot;
		ProcessEvent(FindFunctionChecked(NAME_AFGHUD_AddEquipmentHUD),&Parms);
	}
	static FName NAME_AFGHUD_OpenInteractUI = FName(TEXT("OpenInteractUI"));
	void AFGHUD::OpenInteractUI(TSubclassOf<UFGInteractWidget>  widgetClass, UObject* interactObject)
	{
		FGHUD_eventOpenInteractUI_Parms Parms;
		Parms.widgetClass=widgetClass;
		Parms.interactObject=interactObject;
		ProcessEvent(FindFunctionChecked(NAME_AFGHUD_OpenInteractUI),&Parms);
	}
	static FName NAME_AFGHUD_RemoveEquipmentHUD = FName(TEXT("RemoveEquipmentHUD"));
	void AFGHUD::RemoveEquipmentHUD(EEquipmentSlot slot)
	{
		FGHUD_eventRemoveEquipmentHUD_Parms Parms;
		Parms.slot=slot;
		ProcessEvent(FindFunctionChecked(NAME_AFGHUD_RemoveEquipmentHUD),&Parms);
	}
	static FName NAME_AFGHUD_SetCrustomCrosshairTexture = FName(TEXT("SetCrustomCrosshairTexture"));
	void AFGHUD::SetCrustomCrosshairTexture(UTexture2D* newTexture)
	{
		FGHUD_eventSetCrustomCrosshairTexture_Parms Parms;
		Parms.newTexture=newTexture;
		ProcessEvent(FindFunctionChecked(NAME_AFGHUD_SetCrustomCrosshairTexture),&Parms);
	}
	static FName NAME_AFGHUD_UpdateCrosshairColorState = FName(TEXT("UpdateCrosshairColorState"));
	void AFGHUD::UpdateCrosshairColorState(FLinearColor const& newColor)
	{
		FGHUD_eventUpdateCrosshairColorState_Parms Parms;
		Parms.newColor=newColor;
		ProcessEvent(FindFunctionChecked(NAME_AFGHUD_UpdateCrosshairColorState),&Parms);
	}
	static FName NAME_AFGHUD_UpdateCrosshairState = FName(TEXT("UpdateCrosshairState"));
	void AFGHUD::UpdateCrosshairState(AFGCharacterPlayer* player)
	{
		FGHUD_eventUpdateCrosshairState_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_AFGHUD_UpdateCrosshairState),&Parms);
	}
	void AFGHUD::StaticRegisterNativesAFGHUD()
	{
		UClass* Class = AFGHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPawnHUD", &AFGHUD::execAddPawnHUD },
			{ "BeginPreviewActor", &AFGHUD::execBeginPreviewActor },
			{ "CloseRespawnUI", &AFGHUD::execCloseRespawnUI },
			{ "EndPreviewActor", &AFGHUD::execEndPreviewActor },
			{ "GetCrosshairState", &AFGHUD::execGetCrosshairState },
			{ "GetGameUI", &AFGHUD::execGetGameUI },
			{ "GetHUDVisibility", &AFGHUD::execGetHUDVisibility },
			{ "GetPartialPumpiMode", &AFGHUD::execGetPartialPumpiMode },
			{ "GetPawnHUD", &AFGHUD::execGetPawnHUD },
			{ "GetPreviewTexture", &AFGHUD::execGetPreviewTexture },
			{ "GetPumpiMode", &AFGHUD::execGetPumpiMode },
			{ "GetShowCrosshair", &AFGHUD::execGetShowCrosshair },
			{ "SetCrosshairState", &AFGHUD::execSetCrosshairState },
			{ "SetCrustomCrosshairTexture", &AFGHUD::execSetCrustomCrosshairTexture },
			{ "SetForceHideCrossHair", &AFGHUD::execSetForceHideCrossHair },
			{ "SetHUDVisibility", &AFGHUD::execSetHUDVisibility },
			{ "SetPartialPumpiMode", &AFGHUD::execSetPartialPumpiMode },
			{ "SetPreviewActorClass", &AFGHUD::execSetPreviewActorClass },
			{ "SetPreviewDistance", &AFGHUD::execSetPreviewDistance },
			{ "SetPreviewView", &AFGHUD::execSetPreviewView },
			{ "SetPumpiMode", &AFGHUD::execSetPumpiMode },
			{ "SetShowCrossHair", &AFGHUD::execSetShowCrossHair },
			{ "ShowRespawnUI", &AFGHUD::execShowRespawnUI },
			{ "UpdateCrosshairColorState", &AFGHUD::execUpdateCrosshairColorState },
			{ "UpdateCrosshairState", &AFGHUD::execUpdateCrosshairState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_widgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::NewProp_slot = { UE4CodeGen_Private::EPropertyClass::Enum, "slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGHUD_eventAddEquipmentHUD_Parms, slot), Z_Construct_UEnum_FactoryGame_EEquipmentSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::NewProp_slot_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::NewProp_widgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "widgetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGHUD_eventAddEquipmentHUD_Parms, widgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::NewProp_slot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::NewProp_widgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Called when we want to add HUD for equipment\n@param widgetClass - class to use for widget\n@param slot - which slot the equipment is using" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "AddEquipmentHUD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGHUD_eventAddEquipmentHUD_Parms), Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_AddEquipmentHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics
	{
		struct FGHUD_eventAddPawnHUD_Parms
		{
			TSubclassOf<UUserWidget>  widgetClass;
			APawn* pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_widgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::NewProp_pawn = { UE4CodeGen_Private::EPropertyClass::Object, "pawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGHUD_eventAddPawnHUD_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::NewProp_widgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "widgetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGHUD_eventAddPawnHUD_Parms, widgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::NewProp_pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::NewProp_widgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Adds a HUD of the widget class for the provided pawn. Needs a valid pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "AddPawnHUD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGHUD_eventAddPawnHUD_Parms), Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_AddPawnHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_BeginPreviewActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_BeginPreviewActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorPreview" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Start rendering the preview actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_BeginPreviewActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "BeginPreviewActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_BeginPreviewActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_BeginPreviewActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_BeginPreviewActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_BeginPreviewActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_CloseRespawnUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_CloseRespawnUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Closes the respawn UI and enables the GameUI if not already enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_CloseRespawnUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "CloseRespawnUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_CloseRespawnUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_CloseRespawnUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_CloseRespawnUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_CloseRespawnUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_EndPreviewActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_EndPreviewActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorPreview" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "stop rendering the preview actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_EndPreviewActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "EndPreviewActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_EndPreviewActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_EndPreviewActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_EndPreviewActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_EndPreviewActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics
	{
		struct FGHUD_eventGetCrosshairState_Parms
		{
			ECrosshairState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGHUD_eventGetCrosshairState_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ECrosshairState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Getter for Crosshair State" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "GetCrosshairState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGHUD_eventGetCrosshairState_Parms), Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_GetCrosshairState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_GetGameUI_Statics
	{
		struct FGHUD_eventGetGameUI_Parms
		{
			UFGGameUI* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGHUD_eventGetGameUI_Parms, ReturnValue), Z_Construct_UClass_UFGGameUI_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "GetGameUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGHUD_eventGetGameUI_Parms), Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_GetGameUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics
	{
		struct FGHUD_eventGetHUDVisibility_Parms
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
	void Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGHUD_eventGetHUDVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHUD_eventGetHUDVisibility_Parms), &Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Getter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "GetHUDVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGHUD_eventGetHUDVisibility_Parms), Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_GetHUDVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics
	{
		struct FGHUD_eventGetPartialPumpiMode_Parms
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
	void Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGHUD_eventGetPartialPumpiMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHUD_eventGetPartialPumpiMode_Parms), &Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "HUD visibility" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "GetPartialPumpiMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGHUD_eventGetPartialPumpiMode_Parms), Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics
	{
		struct FGHUD_eventGetPawnHUD_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGHUD_eventGetPawnHUD_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Returns the latest created pawn HUD widget. Can return nullptr" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "GetPawnHUD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGHUD_eventGetPawnHUD_Parms), Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_GetPawnHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics
	{
		struct FGHUD_eventGetPreviewTexture_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGHUD_eventGetPreviewTexture_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorPreview" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Get the texture that we use to preview the actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "GetPreviewTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGHUD_eventGetPreviewTexture_Parms), Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_GetPreviewTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics
	{
		struct FGHUD_eventGetPumpiMode_Parms
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
	void Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGHUD_eventGetPumpiMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHUD_eventGetPumpiMode_Parms), &Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "HUD visibility" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "GetPumpiMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGHUD_eventGetPumpiMode_Parms), Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_GetPumpiMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics
	{
		struct FGHUD_eventGetShowCrosshair_Parms
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
	void Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGHUD_eventGetShowCrosshair_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHUD_eventGetShowCrosshair_Parms), &Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Getter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "GetShowCrosshair", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGHUD_eventGetShowCrosshair_Parms), Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_GetShowCrosshair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_widgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::NewProp_interactObject = { UE4CodeGen_Private::EPropertyClass::Object, "interactObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGHUD_eventOpenInteractUI_Parms, interactObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::NewProp_widgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "widgetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGHUD_eventOpenInteractUI_Parms, widgetClass), Z_Construct_UClass_UFGInteractWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::NewProp_interactObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::NewProp_widgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "All widgets that inherits from UFGInteractWidget can be opened by calling this" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "OpenInteractUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(FGHUD_eventOpenInteractUI_Parms), Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_OpenInteractUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_slot_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::NewProp_slot = { UE4CodeGen_Private::EPropertyClass::Enum, "slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGHUD_eventRemoveEquipmentHUD_Parms, slot), Z_Construct_UEnum_FactoryGame_EEquipmentSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::NewProp_slot_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::NewProp_slot_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Removes all equipment HUD from a certain slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "RemoveEquipmentHUD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGHUD_eventRemoveEquipmentHUD_Parms), Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics
	{
		struct FGHUD_eventSetCrosshairState_Parms
		{
			ECrosshairState crosshairState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_crosshairState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_crosshairState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::NewProp_crosshairState = { UE4CodeGen_Private::EPropertyClass::Enum, "crosshairState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGHUD_eventSetCrosshairState_Parms, crosshairState), Z_Construct_UEnum_FactoryGame_ECrosshairState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::NewProp_crosshairState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::NewProp_crosshairState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::NewProp_crosshairState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Setter for Crosshair State" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "SetCrosshairState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGHUD_eventSetCrosshairState_Parms), Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_SetCrosshairState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::NewProp_newTexture = { UE4CodeGen_Private::EPropertyClass::Object, "newTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGHUD_eventSetCrustomCrosshairTexture_Parms, newTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::NewProp_newTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Updates the crosshair to match set the proper CrosshairState" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "SetCrustomCrosshairTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGHUD_eventSetCrustomCrosshairTexture_Parms), Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics
	{
		struct FGHUD_eventSetForceHideCrossHair_Parms
		{
			bool forceHide;
		};
		static void NewProp_forceHide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceHide;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::NewProp_forceHide_SetBit(void* Obj)
	{
		((FGHUD_eventSetForceHideCrossHair_Parms*)Obj)->forceHide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::NewProp_forceHide = { UE4CodeGen_Private::EPropertyClass::Bool, "forceHide", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHUD_eventSetForceHideCrossHair_Parms), &Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::NewProp_forceHide_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::NewProp_forceHide,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Setter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "SetForceHideCrossHair", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGHUD_eventSetForceHideCrossHair_Parms), Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics
	{
		struct FGHUD_eventSetHUDVisibility_Parms
		{
			bool hudVisibility;
		};
		static void NewProp_hudVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hudVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::NewProp_hudVisibility_SetBit(void* Obj)
	{
		((FGHUD_eventSetHUDVisibility_Parms*)Obj)->hudVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::NewProp_hudVisibility = { UE4CodeGen_Private::EPropertyClass::Bool, "hudVisibility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHUD_eventSetHUDVisibility_Parms), &Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::NewProp_hudVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::NewProp_hudVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Setter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "SetHUDVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGHUD_eventSetHUDVisibility_Parms), Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_SetHUDVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics
	{
		struct FGHUD_eventSetPartialPumpiMode_Parms
		{
			bool hideHUD;
		};
		static void NewProp_hideHUD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hideHUD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::NewProp_hideHUD_SetBit(void* Obj)
	{
		((FGHUD_eventSetPartialPumpiMode_Parms*)Obj)->hideHUD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::NewProp_hideHUD = { UE4CodeGen_Private::EPropertyClass::Bool, "hideHUD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHUD_eventSetPartialPumpiMode_Parms), &Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::NewProp_hideHUD_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::NewProp_hideHUD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Hides all HUD including crosshair" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "SetPartialPumpiMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGHUD_eventSetPartialPumpiMode_Parms), Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics
	{
		struct FGHUD_eventSetPreviewActorClass_Parms
		{
			TSubclassOf<AActor>  actorClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_actorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::NewProp_actorClass = { UE4CodeGen_Private::EPropertyClass::Class, "actorClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGHUD_eventSetPreviewActorClass_Parms, actorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::NewProp_actorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorPreview" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Set the actor class to preview in a rendertarget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "SetPreviewActorClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGHUD_eventSetPreviewActorClass_Parms), Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_SetPreviewActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics
	{
		struct FGHUD_eventSetPreviewDistance_Parms
		{
			float previewDistance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_previewDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::NewProp_previewDistance = { UE4CodeGen_Private::EPropertyClass::Float, "previewDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGHUD_eventSetPreviewDistance_Parms, previewDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::NewProp_previewDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorPreview" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SetPreviewDistance is deprecated, use SetPreviewView instead" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "SetPreviewDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGHUD_eventSetPreviewDistance_Parms), Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_SetPreviewDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics
	{
		struct FGHUD_eventSetPreviewView_Parms
		{
			FItemView view;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_view_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_view;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::NewProp_view_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::NewProp_view = { UE4CodeGen_Private::EPropertyClass::Struct, "view", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGHUD_eventSetPreviewView_Parms, view), Z_Construct_UScriptStruct_FItemView, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::NewProp_view_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::NewProp_view_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::NewProp_view,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorPreview" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Set the view we preview the actor from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "SetPreviewView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGHUD_eventSetPreviewView_Parms), Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_SetPreviewView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics
	{
		struct FGHUD_eventSetPumpiMode_Parms
		{
			bool hideHUD;
		};
		static void NewProp_hideHUD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hideHUD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::NewProp_hideHUD_SetBit(void* Obj)
	{
		((FGHUD_eventSetPumpiMode_Parms*)Obj)->hideHUD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::NewProp_hideHUD = { UE4CodeGen_Private::EPropertyClass::Bool, "hideHUD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHUD_eventSetPumpiMode_Parms), &Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::NewProp_hideHUD_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::NewProp_hideHUD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Hides all HUD including crosshair" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "SetPumpiMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGHUD_eventSetPumpiMode_Parms), Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_SetPumpiMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics
	{
		struct FGHUD_eventSetShowCrossHair_Parms
		{
			bool showCrosshair;
		};
		static void NewProp_showCrosshair_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_showCrosshair;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::NewProp_showCrosshair_SetBit(void* Obj)
	{
		((FGHUD_eventSetShowCrossHair_Parms*)Obj)->showCrosshair = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::NewProp_showCrosshair = { UE4CodeGen_Private::EPropertyClass::Bool, "showCrosshair", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHUD_eventSetShowCrossHair_Parms), &Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::NewProp_showCrosshair_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::NewProp_showCrosshair,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Setter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "SetShowCrossHair", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGHUD_eventSetShowCrossHair_Parms), Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_SetShowCrossHair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_ShowRespawnUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_ShowRespawnUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_ShowRespawnUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "ShowRespawnUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_ShowRespawnUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_ShowRespawnUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_ShowRespawnUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_ShowRespawnUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::NewProp_newColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::NewProp_newColor = { UE4CodeGen_Private::EPropertyClass::Struct, "newColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGHUD_eventUpdateCrosshairColorState_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::NewProp_newColor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::NewProp_newColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::NewProp_newColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Updates the crosshair color for weapons" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "UpdateCrosshairColorState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08C20C00, sizeof(FGHUD_eventUpdateCrosshairColorState_Parms), Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::NewProp_player = { UE4CodeGen_Private::EPropertyClass::Object, "player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGHUD_eventUpdateCrosshairState_Parms, player), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Updates the crosshair to match set the proper CrosshairState" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, "UpdateCrosshairState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGHUD_eventUpdateCrosshairState_Parms), Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHUD_UpdateCrosshairState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGHUD_NoRegister()
	{
		return AFGHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFGHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPawnHUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPawnHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreviewActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mPreviewActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreviewStageClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mPreviewStageClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreviewBuildingWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPreviewBuildingWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGameUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mGameUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRespawnUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mRespawnUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGeneralCrosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mGeneralCrosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCustomCrosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCustomCrosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDismantleCrosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDismantleCrosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildCrosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBuildCrosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWorkbenchCrosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mWorkbenchCrosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWeaponCrosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mWeaponCrosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mVehicleCrosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mVehicleCrosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPickupCrosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPickupCrosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultCrosshair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDefaultCrosshair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRespawnUIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mRespawnUIClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGameUIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mGameUIClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGHUDBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGHUD_AddEquipmentHUD, "AddEquipmentHUD" }, // 2900988449
		{ &Z_Construct_UFunction_AFGHUD_AddPawnHUD, "AddPawnHUD" }, // 4239090427
		{ &Z_Construct_UFunction_AFGHUD_BeginPreviewActor, "BeginPreviewActor" }, // 3701883416
		{ &Z_Construct_UFunction_AFGHUD_CloseRespawnUI, "CloseRespawnUI" }, // 3201402121
		{ &Z_Construct_UFunction_AFGHUD_EndPreviewActor, "EndPreviewActor" }, // 2492225069
		{ &Z_Construct_UFunction_AFGHUD_GetCrosshairState, "GetCrosshairState" }, // 4004198769
		{ &Z_Construct_UFunction_AFGHUD_GetGameUI, "GetGameUI" }, // 1014355658
		{ &Z_Construct_UFunction_AFGHUD_GetHUDVisibility, "GetHUDVisibility" }, // 2702689783
		{ &Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode, "GetPartialPumpiMode" }, // 95970489
		{ &Z_Construct_UFunction_AFGHUD_GetPawnHUD, "GetPawnHUD" }, // 1260749542
		{ &Z_Construct_UFunction_AFGHUD_GetPreviewTexture, "GetPreviewTexture" }, // 1469515264
		{ &Z_Construct_UFunction_AFGHUD_GetPumpiMode, "GetPumpiMode" }, // 3531840880
		{ &Z_Construct_UFunction_AFGHUD_GetShowCrosshair, "GetShowCrosshair" }, // 3138044370
		{ &Z_Construct_UFunction_AFGHUD_OpenInteractUI, "OpenInteractUI" }, // 3026441139
		{ &Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD, "RemoveEquipmentHUD" }, // 221923840
		{ &Z_Construct_UFunction_AFGHUD_SetCrosshairState, "SetCrosshairState" }, // 2038854558
		{ &Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture, "SetCrustomCrosshairTexture" }, // 1817150050
		{ &Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair, "SetForceHideCrossHair" }, // 1156479506
		{ &Z_Construct_UFunction_AFGHUD_SetHUDVisibility, "SetHUDVisibility" }, // 1257727800
		{ &Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode, "SetPartialPumpiMode" }, // 165891218
		{ &Z_Construct_UFunction_AFGHUD_SetPreviewActorClass, "SetPreviewActorClass" }, // 248123791
		{ &Z_Construct_UFunction_AFGHUD_SetPreviewDistance, "SetPreviewDistance" }, // 1877707513
		{ &Z_Construct_UFunction_AFGHUD_SetPreviewView, "SetPreviewView" }, // 1279684547
		{ &Z_Construct_UFunction_AFGHUD_SetPumpiMode, "SetPumpiMode" }, // 2993005313
		{ &Z_Construct_UFunction_AFGHUD_SetShowCrossHair, "SetShowCrossHair" }, // 3713069404
		{ &Z_Construct_UFunction_AFGHUD_ShowRespawnUI, "ShowRespawnUI" }, // 2742014188
		{ &Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState, "UpdateCrosshairColorState" }, // 1768768822
		{ &Z_Construct_UFunction_AFGHUD_UpdateCrosshairState, "UpdateCrosshairState" }, // 2546850750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FGHUD.h" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mPawnHUD_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "The latest created pawn HUD widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mPawnHUD = { UE4CodeGen_Private::EPropertyClass::Object, "mPawnHUD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AFGHUD, mPawnHUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPawnHUD_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPawnHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewActorClass_MetaData[] = {
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "The actor class we want to preview, we don't use buildable as we want to support vehicles too" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewActorClass = { UE4CodeGen_Private::EPropertyClass::Class, "mPreviewActorClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000000, 1, nullptr, STRUCT_OFFSET(AFGHUD, mPreviewActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewActorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewStageClass_MetaData[] = {
		{ "Category", "PreviewBuilding" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Class that stages the preview building item" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewStageClass = { UE4CodeGen_Private::EPropertyClass::Class, "mPreviewStageClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(AFGHUD, mPreviewStageClass), Z_Construct_UClass_AFGRenderTargetStage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewStageClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewStageClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewBuildingWorld_MetaData[] = {
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "A world for previewing the current building" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewBuildingWorld = { UE4CodeGen_Private::EPropertyClass::Object, "mPreviewBuildingWorld", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(AFGHUD, mPreviewBuildingWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewBuildingWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewBuildingWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUI = { UE4CodeGen_Private::EPropertyClass::Object, "mGameUI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000082008, 1, nullptr, STRUCT_OFFSET(AFGHUD, mGameUI), Z_Construct_UClass_UFGGameUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUI = { UE4CodeGen_Private::EPropertyClass::Object, "mRespawnUI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000082008, 1, nullptr, STRUCT_OFFSET(AFGHUD, mRespawnUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mGeneralCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mGeneralCrosshair = { UE4CodeGen_Private::EPropertyClass::Object, "mGeneralCrosshair", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AFGHUD, mGeneralCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mGeneralCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mGeneralCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mCustomCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mCustomCrosshair = { UE4CodeGen_Private::EPropertyClass::Object, "mCustomCrosshair", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000004, 1, nullptr, STRUCT_OFFSET(AFGHUD, mCustomCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mCustomCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mCustomCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mDismantleCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mDismantleCrosshair = { UE4CodeGen_Private::EPropertyClass::Object, "mDismantleCrosshair", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AFGHUD, mDismantleCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mDismantleCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mDismantleCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mBuildCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mBuildCrosshair = { UE4CodeGen_Private::EPropertyClass::Object, "mBuildCrosshair", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AFGHUD, mBuildCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mBuildCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mBuildCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mWorkbenchCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mWorkbenchCrosshair = { UE4CodeGen_Private::EPropertyClass::Object, "mWorkbenchCrosshair", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AFGHUD, mWorkbenchCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mWorkbenchCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mWorkbenchCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mWeaponCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mWeaponCrosshair = { UE4CodeGen_Private::EPropertyClass::Object, "mWeaponCrosshair", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AFGHUD, mWeaponCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mWeaponCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mWeaponCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mVehicleCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mVehicleCrosshair = { UE4CodeGen_Private::EPropertyClass::Object, "mVehicleCrosshair", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AFGHUD, mVehicleCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mVehicleCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mVehicleCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mPickupCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mPickupCrosshair = { UE4CodeGen_Private::EPropertyClass::Object, "mPickupCrosshair", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AFGHUD, mPickupCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPickupCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPickupCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mDefaultCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mDefaultCrosshair = { UE4CodeGen_Private::EPropertyClass::Object, "mDefaultCrosshair", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(AFGHUD, mDefaultCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mDefaultCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mDefaultCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUIClass_MetaData[] = {
		{ "Category", "Game UI" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUIClass = { UE4CodeGen_Private::EPropertyClass::Class, "mRespawnUIClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AFGHUD, mRespawnUIClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUIClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUIClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUIClass_MetaData[] = {
		{ "Category", "Game UI" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUIClass = { UE4CodeGen_Private::EPropertyClass::Class, "mGameUIClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AFGHUD, mGameUIClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUIClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUIClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mPawnHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewStageClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewBuildingWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mGeneralCrosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mCustomCrosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mDismantleCrosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mBuildCrosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mWorkbenchCrosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mWeaponCrosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mVehicleCrosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mPickupCrosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mDefaultCrosshair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUIClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUIClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGHUD_Statics::ClassParams = {
		&AFGHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGHUD, 1032372910);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGHUD(Z_Construct_UClass_AFGHUD, &AFGHUD::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
