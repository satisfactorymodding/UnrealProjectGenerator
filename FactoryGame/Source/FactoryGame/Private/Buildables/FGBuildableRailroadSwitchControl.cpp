// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableRailroadSwitchControl.h"

AFGBuildableRailroadSwitchControl::AFGBuildableRailroadSwitchControl() : Super() {
	this->mControlledConnection = nullptr;
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = false;
	this->PrimaryActorTick.bStartWithTickEnabled = false;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
}
void AFGBuildableRailroadSwitchControl::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableRailroadSwitchControl, mControlledConnection);
	DOREPLIFETIME(AFGBuildableRailroadSwitchControl, mSwitchData);
}
void AFGBuildableRailroadSwitchControl::BeginPlay(){ }
void AFGBuildableRailroadSwitchControl::Destroyed(){ }
bool AFGBuildableRailroadSwitchControl::CanDismantle_Implementation() const{ return bool(); }
void AFGBuildableRailroadSwitchControl::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState) const{ }
void AFGBuildableRailroadSwitchControl::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildableRailroadSwitchControl::OnUseStop_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGBuildableRailroadSwitchControl::IsUseable_Implementation() const{ return bool(); }
void AFGBuildableRailroadSwitchControl::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
FText AFGBuildableRailroadSwitchControl::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGBuildableRailroadSwitchControl::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGBuildableRailroadSwitchControl::ToggleSwitchPosition(){ }
void AFGBuildableRailroadSwitchControl::OnSwitchPositionChanged(int32 newPosition, int32 numPositions){ }
void AFGBuildableRailroadSwitchControl::SetControlledConnection( UFGRailroadTrackConnectionComponent* controlledConnection){ }
void AFGBuildableRailroadSwitchControl::OnRep_SwitchData(){ }
