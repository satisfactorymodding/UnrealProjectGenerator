// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/BoomBox/FGEquipmentBoomBox.h"

AFGEquipmentBoomBox::AFGEquipmentBoomBox(){ }
void AFGEquipmentBoomBox::SetBoomBoxPlayer( AFGBoomBoxPlayer* player){ }
void AFGEquipmentBoomBox::WasEquipped_Implementation(){ }
void AFGEquipmentBoomBox::WasUnEquipped_Implementation(){ }
void AFGEquipmentBoomBox::WasRemovedFromSlot_Implementation(){ }
void AFGEquipmentBoomBox::WasSlottedIn_Implementation( AFGCharacterPlayer* holder){ }
void AFGEquipmentBoomBox::BeginPlay(){ }
void AFGEquipmentBoomBox::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGEquipmentBoomBox::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
bool AFGEquipmentBoomBox::ShouldSaveState() const{ return bool(); }
void AFGEquipmentBoomBox::OnRep_BoomBoxPlayer( AFGBoomBoxPlayer* oldPlayer){ }
void AFGEquipmentBoomBox::AddEquipmentActionBindings(){ }
void AFGEquipmentBoomBox::Input_PlayPause(const FInputActionValue& actionValue){ }
void AFGEquipmentBoomBox::Input_Turbobass(const FInputActionValue& actionValue){ }
void AFGEquipmentBoomBox::Input_ToggleMenu(const FInputActionValue& actionValue){ }
void AFGEquipmentBoomBox::Input_PutDown(const FInputActionValue& actionValue){ }
void AFGEquipmentBoomBox::ReleaseBoomBoxPlayer(){ }
void AFGEquipmentBoomBox::TransferMontagesToNewBoomBoxPlayer(AFGBoomBoxPlayer* oldPlayer, AFGBoomBoxPlayer* newPlayer){ }
