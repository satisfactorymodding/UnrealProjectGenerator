// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FFGKeyMapping;
class UFGGameUserSettings;
#ifdef FACTORYGAME_FGGameUserSettings_generated_h
#error "FGGameUserSettings.generated.h already included, missing '#pragma once' in FGGameUserSettings.h"
#endif
#define FACTORYGAME_FGGameUserSettings_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptionUpdateDelegateData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FOptionUpdateDelegateData>();

#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioVolumeMap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FAudioVolumeMap>();

#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_12_DELEGATE \
static inline void FOptionUpdated_DelegateWrapper(const FScriptDelegate& OptionUpdated) \
{ \
	OptionUpdated.ProcessDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_11_DELEGATE \
struct _Script_FactoryGame_eventArachnophobiaModeChangedDelegate_Parms \
{ \
	bool isArachnophobiaMode; \
}; \
static inline void FArachnophobiaModeChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ArachnophobiaModeChangedDelegate, bool isArachnophobiaMode) \
{ \
	_Script_FactoryGame_eventArachnophobiaModeChangedDelegate_Parms Parms; \
	Parms.isArachnophobiaMode=isArachnophobiaMode ? true : false; \
	ArachnophobiaModeChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnsubscribeToAllDynamicOptionUpdate) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_boundObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnsubscribeToAllDynamicOptionUpdate(Z_Param_boundObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnsubscribeToDynamicOptionUpdate) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_optionUpdatedDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnsubscribeToDynamicOptionUpdate(Z_Param_cvar,FOptionUpdated(Z_Param_Out_optionUpdatedDelegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribeToDynamicOptionUpdate) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_optionUpdatedDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SubscribeToDynamicOptionUpdate(Z_Param_cvar,FOptionUpdated(Z_Param_Out_optionUpdatedDelegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRestartRequiredChanges) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyRestartRequiredChanges(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatOptionValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_GET_UBOOL(Z_Param_updateInstantly); \
		P_GET_UBOOL(Z_Param_requireRestart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFloatOptionValue(Z_Param_cvar,Z_Param_value,Z_Param_updateInstantly,Z_Param_requireRestart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatOptionValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFloatOptionValue(Z_Param_cvar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntOptionValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_GET_UBOOL(Z_Param_updateInstantly); \
		P_GET_UBOOL(Z_Param_requireRestart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIntOptionValue(Z_Param_cvar,Z_Param_value,Z_Param_updateInstantly,Z_Param_requireRestart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntOptionValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetIntOptionValue(Z_Param_cvar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolOptionValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_GET_UBOOL(Z_Param_value); \
		P_GET_UBOOL(Z_Param_updateInstantly); \
		P_GET_UBOOL(Z_Param_requireRestart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoolOptionValue(Z_Param_cvar,Z_Param_value,Z_Param_updateInstantly,Z_Param_requireRestart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolOptionValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBoolOptionValue(Z_Param_cvar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowBreakNotification) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowBreakNotification(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowBreakNotification) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShowBreakNotification(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutosaveInterval) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutosaveInterval(Z_Param_newInterval); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAutosaveInterval) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAutosaveInterval(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearRequireRestart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearRequireRestart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRequireRestart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetRequireRestart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnalyticsDisabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAnalyticsDisabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeadBobScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newHeadBobScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHeadBobScale(Z_Param_newHeadBobScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadBobScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHeadBobScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyMappings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFGKeyMapping>*)Z_Param__Result=P_THIS->GetKeyMappings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePostProcessSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePostProcessSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPostProcessUsingCustomSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPostProcessUsingCustomSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUsingCustomQualitySetting) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_settingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUsingCustomQualitySetting(Z_Param_settingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNeworkQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNeworkQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNeworkQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newNetworkQuality); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNeworkQuality(Z_Param_newNetworkQuality); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultQualitySetting) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_settingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDefaultQualitySetting(Z_Param_settingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHZBOEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHZBOEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHZBOEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHZBOEnabled(Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMotionBlurDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMotionBlurDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMotionBlurEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMotionBlurEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMotionBlurEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMotionBlurEnabled(Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFOV) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFOV(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFOV) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newFOV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFOV(Z_Param_newFOV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAutoSortInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAutoSortInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoSortInventory) \
	{ \
		P_GET_UBOOL(Z_Param_shouldAutoSort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoSortInventory(Z_Param_shouldAutoSort); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoldToSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHoldToSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHoldToSprint) \
	{ \
		P_GET_UBOOL(Z_Param_newHoldToSprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHoldToSprint(Z_Param_newHoldToSprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInvertedLook) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInvertedLook(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInvertedLook) \
	{ \
		P_GET_UBOOL(Z_Param_newInvertLook); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInvertedLook(Z_Param_newInvertLook); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArachnophobiaMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetArachnophobiaMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArachnophobiaMode) \
	{ \
		P_GET_UBOOL(Z_Param_newArachnophobiaMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetArachnophobiaMode(Z_Param_newArachnophobiaMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioVolume) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAudioVolume(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAudioVolume) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAudioVolume(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFGGameUserSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGGameUserSettings**)Z_Param__Result=UFGGameUserSettings::GetFGGameUserSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAudioToCurrentSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAudioToCurrentSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAudioToDefaults) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAudioToDefaults(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnsubscribeToAllDynamicOptionUpdate) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_boundObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnsubscribeToAllDynamicOptionUpdate(Z_Param_boundObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnsubscribeToDynamicOptionUpdate) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_optionUpdatedDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnsubscribeToDynamicOptionUpdate(Z_Param_cvar,FOptionUpdated(Z_Param_Out_optionUpdatedDelegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribeToDynamicOptionUpdate) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_optionUpdatedDelegate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SubscribeToDynamicOptionUpdate(Z_Param_cvar,FOptionUpdated(Z_Param_Out_optionUpdatedDelegate)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRestartRequiredChanges) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyRestartRequiredChanges(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatOptionValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_GET_UBOOL(Z_Param_updateInstantly); \
		P_GET_UBOOL(Z_Param_requireRestart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFloatOptionValue(Z_Param_cvar,Z_Param_value,Z_Param_updateInstantly,Z_Param_requireRestart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatOptionValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFloatOptionValue(Z_Param_cvar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntOptionValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_GET_PROPERTY(UIntProperty,Z_Param_value); \
		P_GET_UBOOL(Z_Param_updateInstantly); \
		P_GET_UBOOL(Z_Param_requireRestart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIntOptionValue(Z_Param_cvar,Z_Param_value,Z_Param_updateInstantly,Z_Param_requireRestart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntOptionValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetIntOptionValue(Z_Param_cvar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoolOptionValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_GET_UBOOL(Z_Param_value); \
		P_GET_UBOOL(Z_Param_updateInstantly); \
		P_GET_UBOOL(Z_Param_requireRestart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBoolOptionValue(Z_Param_cvar,Z_Param_value,Z_Param_updateInstantly,Z_Param_requireRestart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolOptionValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cvar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetBoolOptionValue(Z_Param_cvar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowBreakNotification) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowBreakNotification(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowBreakNotification) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShowBreakNotification(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutosaveInterval) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutosaveInterval(Z_Param_newInterval); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAutosaveInterval) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAutosaveInterval(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearRequireRestart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearRequireRestart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRequireRestart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetRequireRestart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnalyticsDisabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAnalyticsDisabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeadBobScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newHeadBobScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHeadBobScale(Z_Param_newHeadBobScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadBobScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHeadBobScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyMappings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FFGKeyMapping>*)Z_Param__Result=P_THIS->GetKeyMappings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePostProcessSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePostProcessSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPostProcessUsingCustomSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPostProcessUsingCustomSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUsingCustomQualitySetting) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_settingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUsingCustomQualitySetting(Z_Param_settingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNeworkQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNeworkQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNeworkQuality) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newNetworkQuality); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNeworkQuality(Z_Param_newNetworkQuality); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultQualitySetting) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_settingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDefaultQualitySetting(Z_Param_settingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHZBOEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHZBOEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHZBOEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHZBOEnabled(Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMotionBlurDirty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMotionBlurDirty(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMotionBlurEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMotionBlurEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMotionBlurEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMotionBlurEnabled(Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFOV) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFOV(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFOV) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newFOV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFOV(Z_Param_newFOV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAutoSortInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAutoSortInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoSortInventory) \
	{ \
		P_GET_UBOOL(Z_Param_shouldAutoSort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoSortInventory(Z_Param_shouldAutoSort); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoldToSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHoldToSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHoldToSprint) \
	{ \
		P_GET_UBOOL(Z_Param_newHoldToSprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHoldToSprint(Z_Param_newHoldToSprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInvertedLook) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInvertedLook(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInvertedLook) \
	{ \
		P_GET_UBOOL(Z_Param_newInvertLook); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInvertedLook(Z_Param_newInvertLook); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArachnophobiaMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetArachnophobiaMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArachnophobiaMode) \
	{ \
		P_GET_UBOOL(Z_Param_newArachnophobiaMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetArachnophobiaMode(Z_Param_newArachnophobiaMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAudioVolume) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAudioVolume(Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAudioVolume) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAudioVolume(Z_Param_name,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFGGameUserSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGGameUserSettings**)Z_Param__Result=UFGGameUserSettings::GetFGGameUserSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAudioToCurrentSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAudioToCurrentSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAudioToDefaults) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAudioToDefaults(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGGameUserSettings(); \
	friend struct Z_Construct_UClass_UFGGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UFGGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameUserSettings)


#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUFGGameUserSettings(); \
	friend struct Z_Construct_UClass_UFGGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UFGGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameUserSettings)


#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGameUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameUserSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameUserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameUserSettings(UFGGameUserSettings&&); \
	NO_API UFGGameUserSettings(const UFGGameUserSettings&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameUserSettings(UFGGameUserSettings&&); \
	NO_API UFGGameUserSettings(const UFGGameUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameUserSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGameUserSettings)


#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mAudioVolumes() { return STRUCT_OFFSET(UFGGameUserSettings, mAudioVolumes); } \
	FORCEINLINE static uint32 __PPO__mFOV() { return STRUCT_OFFSET(UFGGameUserSettings, mFOV); } \
	FORCEINLINE static uint32 __PPO__mMotionBlurQuality() { return STRUCT_OFFSET(UFGGameUserSettings, mMotionBlurQuality); } \
	FORCEINLINE static uint32 __PPO__mHZBOEnabled() { return STRUCT_OFFSET(UFGGameUserSettings, mHZBOEnabled); } \
	FORCEINLINE static uint32 __PPO__mCustomKeyMappings() { return STRUCT_OFFSET(UFGGameUserSettings, mCustomKeyMappings); } \
	FORCEINLINE static uint32 __PPO__mNetworkQuality() { return STRUCT_OFFSET(UFGGameUserSettings, mNetworkQuality); } \
	FORCEINLINE static uint32 __PPO__mHeadBobScale() { return STRUCT_OFFSET(UFGGameUserSettings, mHeadBobScale); } \
	FORCEINLINE static uint32 __PPO__mAutosaveInterval() { return STRUCT_OFFSET(UFGGameUserSettings, mAutosaveInterval); } \
	FORCEINLINE static uint32 __PPO__mShowBreakNotification() { return STRUCT_OFFSET(UFGGameUserSettings, mShowBreakNotification); } \
	FORCEINLINE static uint32 __PPO__OptionUpdatedDelegate() { return STRUCT_OFFSET(UFGGameUserSettings, OptionUpdatedDelegate); } \
	FORCEINLINE static uint32 __PPO__mIntValues() { return STRUCT_OFFSET(UFGGameUserSettings, mIntValues); } \
	FORCEINLINE static uint32 __PPO__mFloatValues() { return STRUCT_OFFSET(UFGGameUserSettings, mFloatValues); }


#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_44_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGGameUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGGameUserSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
