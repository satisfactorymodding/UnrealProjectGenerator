// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGItemPickup_Spawnable.h"

AFGItemPickup_Spawnable::AFGItemPickup_Spawnable(){ }
void AFGItemPickup_Spawnable::PostLoad(){ Super::PostLoad(); }
void AFGItemPickup_Spawnable::BeginPlay(){ }
void AFGItemPickup_Spawnable::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
bool AFGItemPickup_Spawnable::ShouldSave_Implementation() const{ return bool(); }
bool AFGItemPickup_Spawnable::NeedTransform_Implementation(){ return bool(); }
void AFGItemPickup_Spawnable::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState){ }
void AFGItemPickup_Spawnable::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
AFGItemPickup_Spawnable* AFGItemPickup_Spawnable::CreateItemDrop( UWorld* world, const FInventoryStack& item, FVector spawnLocation, FRotator spawnRotation, TSubclassOf<class AFGItemPickup_Spawnable> itemDropClass){ return nullptr; }
void AFGItemPickup_Spawnable::OnColorUpdated(int32 index){ }
AFGItemPickup_Spawnable* AFGItemPickup_Spawnable::AddItemToWorldStackAtLocation( UWorld* world, const FInventoryStack& item, FVector spawnLocation, FRotator spawnRotation, TSubclassOf<class AFGItemPickup_Spawnable> itemDropClass){ return nullptr; }
void AFGItemPickup_Spawnable::CreateItemDropsInCylinder( UWorld* world, const TArray<FInventoryStack>& items, FVector aroundLocation, float sphereRadius, const TArray<class AActor*>& actorsToIgnore, TArray<class AFGItemPickup_Spawnable*>& out_itemDrops, TSubclassOf<class AFGItemPickup_Spawnable> itemDropClass){ }
void AFGItemPickup_Spawnable::SpawnInventoryCrate( UWorld* world, const TArray< FInventoryStack >& items, FVector spawnLocation, const TArray<class AActor*>& actorsToIgnore,  AFGCrate*& out_Crate, TSubclassOf< AFGCrate > crateClass){ }
void AFGItemPickup_Spawnable::FindGroundLocationAndRotation( UWorld* world, FVector fromLocation, const TArray<AActor*>& actorsToIgnore, FVector& out_location, FRotator& out_rotation){ }
void AFGItemPickup_Spawnable::FindGroundLocationInfrontOfActor(const AActor* sourceActor, float offsetLength, const FInventoryStack& item, FVector& out_location, FRotator& out_rotation){ }
bool AFGItemPickup_Spawnable::GenerateSpheresInCapsule(FVector center, float radius, float innerRadius, TArray<FVector>& out_result){ return bool(); }
