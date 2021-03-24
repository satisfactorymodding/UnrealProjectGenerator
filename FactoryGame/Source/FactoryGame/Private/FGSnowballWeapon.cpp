// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSnowballWeapon.h"
#include "DamageTypes/FGDamageType.h"

AFGSnowballWeapon::AFGSnowballWeapon() : Super() {
	this->mDelayBetweenExplosions = 0.25;
	this->mMagSize = 5;
	this->mDamageTypeClass = UFGDamageType::StaticClass();
	this->mReloadTime = 1.5;
	this->mFireRate = 0.5;
	this->mEquipmentSlot = EEquipmentSlot::ES_ARMS;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bOnlyRelevantToOwner = true;
	this->bNetUseOwnerRelevancy = true;
	this->SetReplicates(true);
}
void AFGSnowballWeapon::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
bool AFGSnowballWeapon::ShouldSaveState() const{ return bool(); }
void AFGSnowballWeapon::BeginPrimaryFire(){ }
void AFGSnowballWeapon::EndPrimaryFire(){ }
void AFGSnowballWeapon::Equip( AFGCharacterPlayer* character){ }
void AFGSnowballWeapon::UnEquip(){ }
float AFGSnowballWeapon::GetChargePct(){ return float(); }
void AFGSnowballWeapon::SpawnExplosive(FTransform spawnTransform, int32 throwForce){ }
void AFGSnowballWeapon::Server_SpawnExplosive_Implementation(FTransform spawnTransform, int32 throwForce){ }
bool AFGSnowballWeapon::Server_SpawnExplosive_Validate(FTransform spawnTransform, int32 throwForce){ return bool(); }
void AFGSnowballWeapon::StartDetonations(){ }
void AFGSnowballWeapon::Server_StartDetonations_Implementation(){ }
bool AFGSnowballWeapon::Server_StartDetonations_Validate(){ return bool(); }
void AFGSnowballWeapon::ExecutePrimaryFire(){ }
void AFGSnowballWeapon::Server_ExecutePrimaryFire_Implementation(){ }
bool AFGSnowballWeapon::Server_ExecutePrimaryFire_Validate(){ return bool(); }
void AFGSnowballWeapon::SecondaryFirePressed(){ }
void AFGSnowballWeapon::OnSecondaryFirePressed_Implementation(){ }
void AFGSnowballWeapon::ExecuteSecondaryFire(){ }
void AFGSnowballWeapon::Server_ExecuteSecondaryFire_Implementation(){ }
bool AFGSnowballWeapon::Server_ExecuteSecondaryFire_Validate(){ return bool(); }
void AFGSnowballWeapon::OnViewportFocusChanged(bool isOpen, TSubclassOf<  UUserWidget > interactionClass){ }
void AFGSnowballWeapon::AddEquipmentActionBindings(){ }
