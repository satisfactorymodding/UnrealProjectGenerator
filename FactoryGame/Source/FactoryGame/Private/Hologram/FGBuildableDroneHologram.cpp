// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGBuildableDroneHologram.h"
#include "Buildables/FGBuildableRoad.h"
#include "Buildables/FGBuildableRailroadTrack.h"
#include "Buildables/FGBuildableFoundation.h"

AFGBuildableDroneHologram::AFGBuildableDroneHologram() : Super() {
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass());
	this->SetHidden(true);
	this->SetReplicates(true);
}
void AFGBuildableDroneHologram::BeginPlay(){ }
void AFGBuildableDroneHologram::Destroyed(){ }
void AFGBuildableDroneHologram::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
bool AFGBuildableDroneHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
AFGVehicle* AFGBuildableDroneHologram::ConstructVehicle(FNetConstructionID netConstructionID) const{ return nullptr; }
