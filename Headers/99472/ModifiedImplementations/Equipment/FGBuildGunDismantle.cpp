// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildGunDismantle.h"

void UFGBuildGunStateDismantle::BeginState_Implementation(){ }
void UFGBuildGunStateDismantle::EndState_Implementation(){ }
void UFGBuildGunStateDismantle::TickState_Implementation( float deltaTime){ }
void UFGBuildGunStateDismantle::PrimaryFire_Implementation(){ }
void UFGBuildGunStateDismantle::SecondaryFire_Implementation(){ }
AActor* UFGBuildGunStateDismantle::GetSelectedActor() const{ return nullptr; }
bool UFGBuildGunStateDismantle::CanDismantle() const{ return bool(); }
TArray< FInventoryStack > UFGBuildGunStateDismantle::GetDismantleRefund() const{ return TArray<FInventoryStack>(); }
bool UFGBuildGunStateDismantle::CanBeginBuildGunDelay() const{ return bool(); }
void UFGBuildGunStateDismantle::BeginBuildGunDelay(){ }
void UFGBuildGunStateDismantle::ResetBuildGunDelay(){ }
void UFGBuildGunStateDismantle::SetSelectedActor(  AActor* selected){ }
void UFGBuildGunStateDismantle::Server_DismantleActor_Implementation(  AActor* actorToDismantle){ }
bool UFGBuildGunStateDismantle::Server_DismantleActor_Validate(  AActor* actorToDismantle){ return bool(); }
