// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGObjectScanner.h"

AFGObjectScanner::AFGObjectScanner(){ }
void AFGObjectScanner::BeginPlay(){ }
void AFGObjectScanner::Tick(float deltaTime){ }
void AFGObjectScanner::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const{ }
void AFGObjectScanner::Equip(AFGCharacterPlayer* character){ }
void AFGObjectScanner::UnEquip(){ }
void AFGObjectScanner::OnCameraModeChanged_Implementation(ECameraMode newCameraMode){ }
bool AFGObjectScanner::ShouldSaveState() const{ return bool(); }
void AFGObjectScanner::AddEquipmentActionBindings(){ }
bool AFGObjectScanner::CycleForward(){ return bool(); }
bool AFGObjectScanner::CycleBackward(){ return bool(); }
bool AFGObjectScanner::HasValidCurrentDetails() const{ return bool(); }
void AFGObjectScanner::GetAvailableScannableDescriptors(TArray < TSubclassOf<UFGItemDescriptor> >& out_availableDescriptors){ }
void AFGObjectScanner::SetScannableDescriptor(TSubclassOf<UFGItemDescriptor> newScannableDescriptor, EFGScannerCycleDirection cycleDirection){ }
void AFGObjectScanner::OnScannableResourceChanged(){ }
void AFGObjectScanner::OpenScannerInteractUI(){ }
void AFGObjectScanner::ForceCloseScannerInteractUI(){ }
void AFGObjectScanner::Input_OpenMenu(const FInputActionValue& actionValue){ }
void AFGObjectScanner::Input_Cycle(const FInputActionValue& actionValue){ }
void AFGObjectScanner::Server_SetScannableDescriptor_Implementation(TSubclassOf<UFGItemDescriptor> newScannableDescriptor, EFGScannerCycleDirection cycleDirection){ }
void AFGObjectScanner::Multicast_PlayCycleAnimation_Implementation(EFGScannerCycleDirection cycleDirection){ }
void AFGObjectScanner::Multicast_PlayBeepAnimation_Implementation(){ }
void AFGObjectScanner::OnRep_CurrentScannableDescriptor(){ }
void AFGObjectScanner::OnRep_ClosestObject(){ }
bool AFGObjectScanner::Internal_CycleObjects(EFGScannerCycleDirection direction){ return bool(); }
void AFGObjectScanner::UpdateClosestObject(){ }
void AFGObjectScanner::UpdateDistanceToClosestObject(bool force){ }
void AFGObjectScanner::RecreateScreenMaterial(){ }
void AFGObjectScanner::DestroyScreenMaterial(){ }
void AFGObjectScanner::UpdateScreenMaterialData(float dt){ }
void AFGObjectScanner::RepaintScreenRenderTarget() const{ }
void AFGObjectScanner::Internal_PlayBeep(){ }
void AFGObjectScanner::Local_PlayBeep(){ }
void AFGObjectScanner::EquipDefaultScannableResource(){ }
