// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWallHologram.h"
#include "FGBuildableFoundation.h"
#include "FGBuildableRailroadTrack.h"
#include "FGBuildableRoad.h"
#include "FGBuildableWall.h"

AFGWallHologram::AFGWallHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildableWall::StaticClass()); this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->bHidden = true;
	this->bReplicates = true;
}
void AFGWallHologram::BeginPlay(){ }
bool AFGWallHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
AActor* AFGWallHologram::GetUpgradedActor() const{ return nullptr; }
bool AFGWallHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
bool AFGWallHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
int32 AFGWallHologram::GetRotationStep() const{ return int32(); }
