// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGAdvancedGameSettings.h"
#include "Settings/FGUserSettingCategory.h"

#if WITH_EDITOR
void UFGAdvancedGameSettings::OnBeginPIE(const bool bIsSimulating){ }
#endif 
void UFGAdvancedGameSettings::Initialize(FSubsystemCollectionBase& Collection){ }
FVariant UFGAdvancedGameSettings::GetOptionValue(const FString& strId) const{ return FVariant(); }
FVariant UFGAdvancedGameSettings::GetOptionValue(const FString& strId, const FVariant& defaultValue) const{ return FVariant(); }
FVariant UFGAdvancedGameSettings::GetOptionDisplayValue(const FString& strId) const{ return FVariant(); }
FVariant UFGAdvancedGameSettings::GetOptionDisplayValue(const FString& strId, const FVariant& defaultValue) const{ return FVariant(); }
void UFGAdvancedGameSettings::SetOptionValue(const FString& strId, const FVariant& value){ }
void UFGAdvancedGameSettings::ForceSetOptionValue(const FString& strId, const FVariant& value, const UObject* instigator){ }
void UFGAdvancedGameSettings::SubscribeToOptionUpdate(const FString& strId, const FOnOptionUpdated& onOptionUpdatedDelegate){ }
void UFGAdvancedGameSettings::UnsubscribeToOptionUpdate(const FString& strId, const FOnOptionUpdated& onOptionUpdatedDelegate){ }
bool UFGAdvancedGameSettings::IsDefaultValueApplied(const FString& strId) const{ return bool(); }
void UFGAdvancedGameSettings::ApplyChanges(){ }
void UFGAdvancedGameSettings::ResetAllSettingsToDefault(){ }
void UFGAdvancedGameSettings::ResetAllSettingsInCategory(TSubclassOf<  UFGUserSettingCategory > category, TSubclassOf<  UFGUserSettingCategory > subCategory){ }
bool UFGAdvancedGameSettings::GetBoolOptionValue(const FString& cvar) const{ return bool(); }
bool UFGAdvancedGameSettings::GetBoolUIDisplayValue(const FString& cvar) const{ return bool(); }
void UFGAdvancedGameSettings::SetBoolOptionValue(const FString& cvar, bool value){ }
int32 UFGAdvancedGameSettings::GetIntOptionValue(const FString& cvar) const{ return int32(); }
int32 UFGAdvancedGameSettings::GetIntUIDisplayValue(const FString& cvar) const{ return int32(); }
void UFGAdvancedGameSettings::SetIntOptionValue(const FString& cvar, int32 newValue){ }
float UFGAdvancedGameSettings::GetFloatOptionValue(const FString& cvar) const{ return float(); }
float UFGAdvancedGameSettings::GetFloatUIDisplayValue(const FString& cvar) const{ return float(); }
void UFGAdvancedGameSettings::SetFloatOptionValue(const FString& cvar, float newValue){ }
bool UFGAdvancedGameSettings::HasAnyUnsavedOptionValueChanges() const{ return bool(); }
bool UFGAdvancedGameSettings::HasPendingApplyOptionValue(const FString& cvar) const{ return bool(); }
bool UFGAdvancedGameSettings::HasAnyPendingRestartOptionValue(const FString& cvar) const{ return bool(); }
bool UFGAdvancedGameSettings::GetRequireSessionRestart() const{ return bool(); }
bool UFGAdvancedGameSettings::GetRequireGameRestart() const{ return bool(); }
void UFGAdvancedGameSettings::SubscribeToDynamicOptionUpdate(const FString& cvar, const FOptionUpdated& optionUpdatedDelegate){ }
void UFGAdvancedGameSettings::UnsubscribeToDynamicOptionUpdate(const FString& cvar, const FOptionUpdated& optionUpdatedDelegate){ }
void UFGAdvancedGameSettings::UnsubscribeToAllDynamicOptionUpdate(UObject* boundObject){ }
TArray<FUserSettingCategoryMapping> UFGAdvancedGameSettings::GetCategorizedSettingWidgets(UObject* worldContext, UUserWidget* owningWidget){ return TArray<FUserSettingCategoryMapping>(); }
bool UFGAdvancedGameSettings::HasChangesThatShouldEnableCreativeMode(){ return bool(); }
void UFGAdvancedGameSettings::GetDebugData(TArray<FString>& out_debugData){ }
void UFGAdvancedGameSettings::OnPreLoadMap(const FString &MapName){ }
FString UFGAdvancedGameSettings::SerializeSettingsToString(){ return FString(); }
void UFGAdvancedGameSettings::DeserializeSettingsFromString(const FString& serializedString){ }
void UFGAdvancedGameSettings::TryInitAdvancedGameSettings(){ }
bool UFGAdvancedGameSettings::IsInMainMenu() const{ return bool(); }
