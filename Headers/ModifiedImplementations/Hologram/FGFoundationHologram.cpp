// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFoundationHologram.h"
#include "FGBuildableFoundation.h"
#include "FGBuildableRailroadTrack.h"
#include "FGBuildableRoad.h"
#include "FGBuildableWall.h"

AFGFoundationHologram::AFGFoundationHologram() : Super() {
	this->mMaxPlacementFloorAngle = 85;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableWall::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->bHidden = true;
	this->bReplicates = true;
}
void AFGFoundationHologram::BeginPlay(){ }
bool AFGFoundationHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGFoundationHologram::ConfigureSnappedBuilding( AFGBuildable* inBuildable) const{ }
void AFGFoundationHologram::CheckValidFloor(){ }
bool AFGFoundationHologram::CanSnapVertically( AFGBuildableFoundation* toFoundation, float dirZ) const{ return bool(); }
