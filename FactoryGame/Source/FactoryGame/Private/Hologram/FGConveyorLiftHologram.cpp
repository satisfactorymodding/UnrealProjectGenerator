// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGConveyorLiftHologram.h"
#include "Buildables/FGBuildable.h"
#include "Buildables/FGBuildableRoad.h"
#include "Buildables/FGBuildableRailroadTrack.h"
#include "Buildables/FGBuildableFoundation.h"

AFGConveyorLiftHologram::AFGConveyorLiftHologram() : Super() {
	this->mArrowDirection = EFactoryConnectionDirection::FCD_ANY;
	this->mSplineData.SetNum(2); this->mSplineData[0].Location.X = 0; this->mSplineData[0].Location.Y = 0; this->mSplineData[0].Location.Z = 0; this->mSplineData[0].ArriveTangent.X = 1; this->mSplineData[0].ArriveTangent.Y = 0; this->mSplineData[0].ArriveTangent.Z = 0; this->mSplineData[0].LeaveTangent.X = 1; this->mSplineData[0].LeaveTangent.Y = 0; this->mSplineData[0].LeaveTangent.Z = 0; this->mSplineData[1].Location.X = 0; this->mSplineData[1].Location.Y = 0; this->mSplineData[1].Location.Z = 0; this->mSplineData[1].ArriveTangent.X = 1; this->mSplineData[1].ArriveTangent.Y = 0; this->mSplineData[1].ArriveTangent.Z = 0; this->mSplineData[1].LeaveTangent.X = 1; this->mSplineData[1].LeaveTangent.Y = 0; this->mSplineData[1].LeaveTangent.Z = 0;
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildable::StaticClass());
	this->SetHidden(true);
	this->SetReplicates(true);
}
void AFGConveyorLiftHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGConveyorLiftHologram::BeginPlay(){ }
void AFGConveyorLiftHologram::Destroyed(){ }
bool AFGConveyorLiftHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
void AFGConveyorLiftHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGConveyorLiftHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
bool AFGConveyorLiftHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
AActor* AFGConveyorLiftHologram::GetUpgradedActor() const{ return nullptr; }
int32 AFGConveyorLiftHologram::GetBaseCostMultiplier() const{ return int32(); }
void AFGConveyorLiftHologram::CheckClearance(){ }
void AFGConveyorLiftHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGConveyorLiftHologram::ServerPostConstructMessageDeserialization(){ }
void AFGConveyorLiftHologram::OnPendingConstructionHologramCreated_Implementation(AFGHologram* fromHologram){ }
void AFGConveyorLiftHologram::CheckValidFloor(){ }
void AFGConveyorLiftHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGConveyorLiftHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
int32 AFGConveyorLiftHologram::GetRotationStep() const{ return int32(); }
void AFGConveyorLiftHologram::CheckValidPlacement(){ }
void AFGConveyorLiftHologram::OnRep_TopTransform(){ }
void AFGConveyorLiftHologram::UpdateClearance(){ }
void AFGConveyorLiftHologram::OnRep_ArrowDirection(){ }
bool AFGConveyorLiftHologram::CanConnectToConnection(UFGFactoryConnectionComponent* from, UFGFactoryConnectionComponent* to) const{ return bool(); }
FVector AFGConveyorLiftHologram::GetGuideLinesBaseLocation() const{ return FVector(); }
