// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGBuildGun.h"

UFGBuildGunState::UFGBuildGunState(){ }
bool UFGBuildGunState::IsSupportedForNetworking() const{ return bool(); }
int32 UFGBuildGunState::GetFunctionCallspace(UFunction* Function, FFrame* Stack){ return int32(); }
bool UFGBuildGunState::CallRemoteFunction(UFunction* Function, void* Parameters, FOutParmRec* OutParms, FFrame* Stack){ return bool(); }
bool UFGBuildGunState::HasAuthority() const{ return bool(); }
UWorld* UFGBuildGunState::GetWorld() const{ return nullptr; }
void UFGBuildGunState::BeginState_Implementation(){ }
void UFGBuildGunState::EndState_Implementation(){ }
void UFGBuildGunState::TickState_Implementation(float deltaTime){ }
void UFGBuildGunState::PrimaryFire_Implementation(){ }
void UFGBuildGunState::PrimaryFireRelease_Implementation(){ }
void UFGBuildGunState::SecondaryFire_Implementation(){ }
void UFGBuildGunState::BuildSamplePressed_Implementation(){ }
bool UFGBuildGunState::IsValidBuildingSample( AFGBuildable* buildable) const{ return bool(); }
bool UFGBuildGunState::IsValidVehicleSample( AFGVehicle* vehicle) const{ return bool(); }
void UFGBuildGunState::OnRecipeSampled_Implementation(TSubclassOf<class UFGRecipe> recipe){ }
void UFGBuildGunState::BuildSampleRelease_Implementation(){ }
void UFGBuildGunState::OnCustomizationsSampled_Implementation(TArray< TSubclassOf<  UFGFactoryCustomizationDescriptor > >& newCustomizations){ }
void UFGBuildGunState::Scroll_Implementation(int32 delta){ }
void UFGBuildGunState::OnBuildGunModeChanged_Implementation(TSubclassOf< UFGBuildGunModeDescriptor > newMode){ }
void UFGBuildGunState::GetSupportedBuildModes_Implementation(TArray< TSubclassOf< UFGBuildGunModeDescriptor > >& out_buildModes) const{ }
TSubclassOf< UFGBuildGunModeDescriptor > UFGBuildGunState::GetInitialBuildGunMode_Implementation() const{ return TSubclassOf<UFGBuildGunModeDescriptor>(); }
bool UFGBuildGunState::IsCurrentBuildGunMode(TSubclassOf< UFGBuildGunModeDescriptor > buildMode) const{ return bool(); }
float UFGBuildGunState::GetBuildGunRangeOverride_Implementation(){ return float(); }
AFGBuildGun* UFGBuildGunState::GetBuildGun() const{ return nullptr; }
AFGPlayerState* UFGBuildGunState::GetPlayerState() const{ return nullptr; }
float UFGBuildGunState::GetBuildGunDelayPercentage() const{ return float(); }
void UFGBuildGunState::BeginBuildGunDelay(){ }
void UFGBuildGunState::ResetBuildGunDelay(){ }
bool UFGBuildGunState::BuildGunDelayIsComplete(){ return bool(); }
bool UFGBuildGunState::HasBuildGunDelay(){ return bool(); }
void UFGBuildGunState::BindInputActions( UFGEnhancedInputComponent* inputComponent){ }
void UFGBuildGunState::ClearInputActions( UEnhancedInputComponent* inputComponent){ }
bool UFGBuildGunState::CanSampleBuildings() const{ return bool(); }
bool UFGBuildGunState::CanSampleCustomizations() const{ return bool(); }
bool UFGBuildGunState::CanSampleBlueprints() const{ return bool(); }
AFGBuildGun::AFGBuildGun(){ }
void AFGBuildGun::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildGun::BeginPlay(){ }
void AFGBuildGun::Tick(float dt){ }
bool AFGBuildGun::ShouldSaveState() const{ return bool(); }
void AFGBuildGun::Equip( AFGCharacterPlayer* character){ }
void AFGBuildGun::UnEquip(){ }
void AFGBuildGun::OnInteractWidgetAddedOrRemoved(UFGInteractWidget* widget, bool added){ }
bool AFGBuildGun::OnShortcutPressed(int32 shortcutIndex){ return bool(); }
void AFGBuildGun::TraceForBuilding(APawn* owningPawn, FHitResult& hitresult) const{ }
void AFGBuildGun::GetAvailableRecipes(TArray< TSubclassOf<  UFGRecipe > >& out_recipes, TArray < TSubclassOf<  UFGCustomizationRecipe > >& out_customizationRecipes) const{ }
TArray< FItemAmount > AFGBuildGun::GetCostForRecipe(TSubclassOf<  UFGRecipe > recipe) const{ return TArray<FItemAmount>(); }
UFGInventoryComponent* AFGBuildGun::GetInventory() const{ return nullptr; }
float AFGBuildGun::GetCurrentBuildGunDelayPercentage() const{ return float(); }
FText AFGBuildGun::GetCurrentBuildGunDelayMessage() const{ return FText(); }
bool AFGBuildGun::CompareActiveRecipeTo(TSubclassOf<  UFGRecipe > recipe){ return bool(); }
bool AFGBuildGun::CompareActiveCustomizationRecipeTo(TSubclassOf<  UFGCustomizationRecipe > recipe){ return bool(); }
bool AFGBuildGun::IsBlueprintDescriptorActive( UFGBlueprintDescriptor* blueprintDescriptor) const{ return bool(); }
bool AFGBuildGun::IsInState(EBuildGunState inState){ return bool(); }
void AFGBuildGun::OnPrimaryFirePressed(){ }
void AFGBuildGun::OnPrimaryFireReleased(){ }
void AFGBuildGun::OnSecondaryFirePressed(){ }
void AFGBuildGun::OnSecondaryFireReleased(){ }
void AFGBuildGun::OnModeSelectPressed(){ }
void AFGBuildGun::OnModeSelectReleased(){ }
void AFGBuildGun::OnBuildSamplePressed(){ }
void AFGBuildGun::OnBuildSampleReleased(){ }
void AFGBuildGun::Server_Scroll_Implementation(int32 delta){ }
void AFGBuildGun::Scroll(int32 delta){ }
void AFGBuildGun::Input_PrimaryFire(const FInputActionValue& actionValue){ }
void AFGBuildGun::Input_SecondaryFire(const FInputActionValue& actionValue){ }
void AFGBuildGun::Input_ModeSelect(const FInputActionValue& actionValue){ }
void AFGBuildGun::Input_ScrollAxis(const FInputActionValue& actionValue){ }
void AFGBuildGun::Input_BuildSample(const FInputActionValue& actionValue){ }
void AFGBuildGun::GotoMenuState(){ }
void AFGBuildGun::GotoBuildState(TSubclassOf<  UFGRecipe > recipe){ }
void AFGBuildGun::GotoPaintState(TSubclassOf<  UFGCustomizationRecipe > customizationRecipe, bool clearCache){ }
void AFGBuildGun::GotoDismantleState(){ }
void AFGBuildGun::SetDesiredBlueprint(const FString& blueprintName){ }
void AFGBuildGun::SetCustomizationDataForSlot(uint8 slotIndex, FFactoryCustomizationColorSlot slotData){ }
void AFGBuildGun::Server_SetCustomizationDataForSlot_Implementation(uint8 slotIndex, FFactoryCustomizationColorSlot slotData){ }
void AFGBuildGun::SetAllowRayClearanceHit(bool allow){ }
void AFGBuildGun::SetAllowRayBlueprintProxyHit(bool allow){ }
void AFGBuildGun::SetPendingEntryState(EBuildGunState state){ }
void AFGBuildGun::SetMenuStateSection(EMenuStateSection desiredSection, bool broadcastUpdate){ }
void AFGBuildGun::TryBuildSample(){ }
void AFGBuildGun::SetCurrentBuildGunMode(TSubclassOf< UFGBuildGunModeDescriptor > mode){ }
bool AFGBuildGun::IsCurrentBuildGunMode(TSubclassOf< UFGBuildGunModeDescriptor > buildMode) const{ return bool(); }
void AFGBuildGun::CycleBuildMode(int32 deltaIndex){ }
float AFGBuildGun::GetBuildGunRange() const{ return float(); }
void AFGBuildGun::AddEquipmentActionBindings(){ }
void AFGBuildGun::Server_PrimaryFire_Implementation(){ }
bool AFGBuildGun::Server_PrimaryFire_Validate(){ return bool(); }
void AFGBuildGun::Server_SecondaryFire_Implementation(){ }
bool AFGBuildGun::Server_SecondaryFire_Validate(){ return bool(); }
void AFGBuildGun::Server_GotoBuildState_Implementation(TSubclassOf<  UFGRecipe > recipe){ }
bool AFGBuildGun::Server_GotoBuildState_Validate(TSubclassOf<  UFGRecipe > recipe){ return bool(); }
void AFGBuildGun::Server_SetDesiredBlueprint_Implementation(const FString& blueprintName){ }
void AFGBuildGun::Server_GotoPaintState_Implementation(TSubclassOf<  UFGCustomizationRecipe > customizationRecipe){ }
bool AFGBuildGun::Server_GotoPaintState_Validate(TSubclassOf<  UFGCustomizationRecipe > customizationRecipe){ return bool(); }
void AFGBuildGun::Server_SetCurrentBuildGunMode_Implementation(TSubclassOf< UFGBuildGunModeDescriptor > mode){ }
void AFGBuildGun::GotoState(EBuildGunState state){ }
void AFGBuildGun::Server_GotoState_Implementation(EBuildGunState state){ }
bool AFGBuildGun::Server_GotoState_Validate(EBuildGunState state){ return bool(); }
void AFGBuildGun::GotoStateInternal(EBuildGunState state){ }
void AFGBuildGun::OnRep_CurrentBuildGunMode(){ }
void AFGBuildGun::CreateBuildGunState(EBuildGunState state, FName StateName, TSubclassOf<UFGBuildGunState> stateClass){ }
