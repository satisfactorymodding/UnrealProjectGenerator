// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	template<> FACTORYGAME_API UEnum* StaticEnum<ECrosshairState>()
	{
		return ECrosshairState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECrosshairState(ECrosshairState_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ECrosshairState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ECrosshairState_Hash() { return 3781245821U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ECrosshairState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECrosshairState"), 0, Get_Z_Construct_UEnum_FactoryGame_ECrosshairState_Hash(), false);
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
				nullptr,
				"ECrosshairState",
				"ECrosshairState",
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventAddEquipmentHUD_Parms, slot), Z_Construct_UEnum_FactoryGame_EEquipmentSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::NewProp_widgetClass = { "widgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventAddEquipmentHUD_Parms, widgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "AddEquipmentHUD", sizeof(FGHUD_eventAddEquipmentHUD_Parms), Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_AddEquipmentHUD_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventAddPawnHUD_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::NewProp_widgetClass = { "widgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventAddPawnHUD_Parms, widgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "AddPawnHUD", sizeof(FGHUD_eventAddPawnHUD_Parms), Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_AddPawnHUD_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_BeginPreviewActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "BeginPreviewActor", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_BeginPreviewActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_BeginPreviewActor_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_CloseRespawnUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "CloseRespawnUI", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_CloseRespawnUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_CloseRespawnUI_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_EndPreviewActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "EndPreviewActor", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_EndPreviewActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_EndPreviewActor_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventGetCrosshairState_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ECrosshairState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "GetCrosshairState", sizeof(FGHUD_eventGetCrosshairState_Parms), Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetCrosshairState_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventGetGameUI_Parms, ReturnValue), Z_Construct_UClass_UFGGameUI_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "GetGameUI", sizeof(FGHUD_eventGetGameUI_Parms), Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetGameUI_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHUD_eventGetHUDVisibility_Parms), &Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "GetHUDVisibility", sizeof(FGHUD_eventGetHUDVisibility_Parms), Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetHUDVisibility_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHUD_eventGetPartialPumpiMode_Parms), &Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "GetPartialPumpiMode", sizeof(FGHUD_eventGetPartialPumpiMode_Parms), Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventGetPawnHUD_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::NewProp_ReturnValue_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "GetPawnHUD", sizeof(FGHUD_eventGetPawnHUD_Parms), Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPawnHUD_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventGetPreviewTexture_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "GetPreviewTexture", sizeof(FGHUD_eventGetPreviewTexture_Parms), Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPreviewTexture_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHUD_eventGetPumpiMode_Parms), &Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "GetPumpiMode", sizeof(FGHUD_eventGetPumpiMode_Parms), Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetPumpiMode_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHUD_eventGetShowCrosshair_Parms), &Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "GetShowCrosshair", sizeof(FGHUD_eventGetShowCrosshair_Parms), Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_GetShowCrosshair_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::NewProp_interactObject = { "interactObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventOpenInteractUI_Parms, interactObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::NewProp_widgetClass = { "widgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventOpenInteractUI_Parms, widgetClass), Z_Construct_UClass_UFGInteractWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "OpenInteractUI", sizeof(FGHUD_eventOpenInteractUI_Parms), Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_OpenInteractUI_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventRemoveEquipmentHUD_Parms, slot), Z_Construct_UEnum_FactoryGame_EEquipmentSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::NewProp_slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "RemoveEquipmentHUD", sizeof(FGHUD_eventRemoveEquipmentHUD_Parms), Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::NewProp_crosshairState = { "crosshairState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventSetCrosshairState_Parms, crosshairState), Z_Construct_UEnum_FactoryGame_ECrosshairState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::NewProp_crosshairState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "SetCrosshairState", sizeof(FGHUD_eventSetCrosshairState_Parms), Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetCrosshairState_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::NewProp_newTexture = { "newTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventSetCrustomCrosshairTexture_Parms, newTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "SetCrustomCrosshairTexture", sizeof(FGHUD_eventSetCrustomCrosshairTexture_Parms), Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::NewProp_forceHide = { "forceHide", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHUD_eventSetForceHideCrossHair_Parms), &Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::NewProp_forceHide_SetBit, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "SetForceHideCrossHair", sizeof(FGHUD_eventSetForceHideCrossHair_Parms), Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::NewProp_hudVisibility = { "hudVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHUD_eventSetHUDVisibility_Parms), &Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::NewProp_hudVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "SetHUDVisibility", sizeof(FGHUD_eventSetHUDVisibility_Parms), Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetHUDVisibility_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::NewProp_hideHUD = { "hideHUD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHUD_eventSetPartialPumpiMode_Parms), &Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::NewProp_hideHUD_SetBit, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "SetPartialPumpiMode", sizeof(FGHUD_eventSetPartialPumpiMode_Parms), Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::NewProp_actorClass = { "actorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventSetPreviewActorClass_Parms, actorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "SetPreviewActorClass", sizeof(FGHUD_eventSetPreviewActorClass_Parms), Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewActorClass_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::NewProp_previewDistance = { "previewDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventSetPreviewDistance_Parms, previewDistance), METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "SetPreviewDistance", sizeof(FGHUD_eventSetPreviewDistance_Parms), Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewDistance_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::NewProp_view = { "view", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventSetPreviewView_Parms, view), Z_Construct_UScriptStruct_FItemView, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::NewProp_view_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::NewProp_view_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "SetPreviewView", sizeof(FGHUD_eventSetPreviewView_Parms), Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPreviewView_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::NewProp_hideHUD = { "hideHUD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHUD_eventSetPumpiMode_Parms), &Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::NewProp_hideHUD_SetBit, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "SetPumpiMode", sizeof(FGHUD_eventSetPumpiMode_Parms), Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetPumpiMode_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::NewProp_showCrosshair = { "showCrosshair", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHUD_eventSetShowCrossHair_Parms), &Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::NewProp_showCrosshair_SetBit, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "SetShowCrossHair", sizeof(FGHUD_eventSetShowCrossHair_Parms), Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_SetShowCrossHair_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_ShowRespawnUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "ShowRespawnUI", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_ShowRespawnUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_ShowRespawnUI_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::NewProp_newColor = { "newColor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventUpdateCrosshairColorState_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::NewProp_newColor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::NewProp_newColor_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "UpdateCrosshairColorState", sizeof(FGHUD_eventUpdateCrosshairColorState_Parms), Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHUD_eventUpdateCrosshairState_Parms, player), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHUD, nullptr, "UpdateCrosshairState", sizeof(FGHUD_eventUpdateCrosshairState_Parms), Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHUD_UpdateCrosshairState_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AFGHUD_AddEquipmentHUD, "AddEquipmentHUD" }, // 2968605856
		{ &Z_Construct_UFunction_AFGHUD_AddPawnHUD, "AddPawnHUD" }, // 45656773
		{ &Z_Construct_UFunction_AFGHUD_BeginPreviewActor, "BeginPreviewActor" }, // 29287510
		{ &Z_Construct_UFunction_AFGHUD_CloseRespawnUI, "CloseRespawnUI" }, // 3510697245
		{ &Z_Construct_UFunction_AFGHUD_EndPreviewActor, "EndPreviewActor" }, // 3598875540
		{ &Z_Construct_UFunction_AFGHUD_GetCrosshairState, "GetCrosshairState" }, // 3530768492
		{ &Z_Construct_UFunction_AFGHUD_GetGameUI, "GetGameUI" }, // 4107855035
		{ &Z_Construct_UFunction_AFGHUD_GetHUDVisibility, "GetHUDVisibility" }, // 2122362490
		{ &Z_Construct_UFunction_AFGHUD_GetPartialPumpiMode, "GetPartialPumpiMode" }, // 3884248354
		{ &Z_Construct_UFunction_AFGHUD_GetPawnHUD, "GetPawnHUD" }, // 1526814577
		{ &Z_Construct_UFunction_AFGHUD_GetPreviewTexture, "GetPreviewTexture" }, // 1614474025
		{ &Z_Construct_UFunction_AFGHUD_GetPumpiMode, "GetPumpiMode" }, // 3802153388
		{ &Z_Construct_UFunction_AFGHUD_GetShowCrosshair, "GetShowCrosshair" }, // 3886802257
		{ &Z_Construct_UFunction_AFGHUD_OpenInteractUI, "OpenInteractUI" }, // 388518010
		{ &Z_Construct_UFunction_AFGHUD_RemoveEquipmentHUD, "RemoveEquipmentHUD" }, // 1361830162
		{ &Z_Construct_UFunction_AFGHUD_SetCrosshairState, "SetCrosshairState" }, // 1385679953
		{ &Z_Construct_UFunction_AFGHUD_SetCrustomCrosshairTexture, "SetCrustomCrosshairTexture" }, // 974207394
		{ &Z_Construct_UFunction_AFGHUD_SetForceHideCrossHair, "SetForceHideCrossHair" }, // 1300112677
		{ &Z_Construct_UFunction_AFGHUD_SetHUDVisibility, "SetHUDVisibility" }, // 2713599331
		{ &Z_Construct_UFunction_AFGHUD_SetPartialPumpiMode, "SetPartialPumpiMode" }, // 4027047976
		{ &Z_Construct_UFunction_AFGHUD_SetPreviewActorClass, "SetPreviewActorClass" }, // 2001003969
		{ &Z_Construct_UFunction_AFGHUD_SetPreviewDistance, "SetPreviewDistance" }, // 724739480
		{ &Z_Construct_UFunction_AFGHUD_SetPreviewView, "SetPreviewView" }, // 3221732538
		{ &Z_Construct_UFunction_AFGHUD_SetPumpiMode, "SetPumpiMode" }, // 3654439921
		{ &Z_Construct_UFunction_AFGHUD_SetShowCrossHair, "SetShowCrossHair" }, // 3251581636
		{ &Z_Construct_UFunction_AFGHUD_ShowRespawnUI, "ShowRespawnUI" }, // 3222085008
		{ &Z_Construct_UFunction_AFGHUD_UpdateCrosshairColorState, "UpdateCrosshairColorState" }, // 2217211982
		{ &Z_Construct_UFunction_AFGHUD_UpdateCrosshairState, "UpdateCrosshairState" }, // 3938865682
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mPawnHUD = { "mPawnHUD", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mPawnHUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPawnHUD_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPawnHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewActorClass_MetaData[] = {
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "The actor class we want to preview, we don't use buildable as we want to support vehicles too" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewActorClass = { "mPreviewActorClass", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mPreviewActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewActorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewStageClass_MetaData[] = {
		{ "Category", "PreviewBuilding" },
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "Class that stages the preview building item" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewStageClass = { "mPreviewStageClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mPreviewStageClass), Z_Construct_UClass_AFGRenderTargetStage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewStageClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewStageClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewBuildingWorld_MetaData[] = {
		{ "ModuleRelativePath", "FGHUD.h" },
		{ "ToolTip", "A world for previewing the current building" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewBuildingWorld = { "mPreviewBuildingWorld", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mPreviewBuildingWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewBuildingWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPreviewBuildingWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUI = { "mGameUI", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mGameUI), Z_Construct_UClass_UFGGameUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUI = { "mRespawnUI", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mRespawnUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUI_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mGeneralCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mGeneralCrosshair = { "mGeneralCrosshair", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mGeneralCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mGeneralCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mGeneralCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mCustomCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mCustomCrosshair = { "mCustomCrosshair", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mCustomCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mCustomCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mCustomCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mDismantleCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mDismantleCrosshair = { "mDismantleCrosshair", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mDismantleCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mDismantleCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mDismantleCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mBuildCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mBuildCrosshair = { "mBuildCrosshair", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mBuildCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mBuildCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mBuildCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mWorkbenchCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mWorkbenchCrosshair = { "mWorkbenchCrosshair", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mWorkbenchCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mWorkbenchCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mWorkbenchCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mWeaponCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mWeaponCrosshair = { "mWeaponCrosshair", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mWeaponCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mWeaponCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mWeaponCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mVehicleCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mVehicleCrosshair = { "mVehicleCrosshair", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mVehicleCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mVehicleCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mVehicleCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mPickupCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mPickupCrosshair = { "mPickupCrosshair", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mPickupCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPickupCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mPickupCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mDefaultCrosshair_MetaData[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mDefaultCrosshair = { "mDefaultCrosshair", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mDefaultCrosshair), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mDefaultCrosshair_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mDefaultCrosshair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUIClass_MetaData[] = {
		{ "Category", "Game UI" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUIClass = { "mRespawnUIClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mRespawnUIClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUIClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mRespawnUIClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUIClass_MetaData[] = {
		{ "Category", "Game UI" },
		{ "ModuleRelativePath", "FGHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUIClass = { "mGameUIClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHUD, mGameUIClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUIClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::NewProp_mGameUIClass_MetaData)) };
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
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGHUD_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGHUD_Statics::PropPointers),
		0,
		0x009002ACu,
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
	IMPLEMENT_CLASS(AFGHUD, 202180630);
	template<> FACTORYGAME_API UClass* StaticClass<AFGHUD>()
	{
		return AFGHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGHUD(Z_Construct_UClass_AFGHUD, &AFGHUD::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
