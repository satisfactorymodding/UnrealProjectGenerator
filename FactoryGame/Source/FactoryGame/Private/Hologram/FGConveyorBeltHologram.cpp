// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGConveyorBeltHologram.h"
#include "Buildables/FGBuildable.h"
#include "Buildables/FGBuildableRoad.h"
#include "Buildables/FGBuildableRailroadTrack.h"
#include "Buildables/FGBuildableFoundation.h"

AFGConveyorBeltHologram::AFGConveyorBeltHologram() : Super() {
	this->mBendRadius = 199;
	this->mMaxSplineLength = 5600.10009765625;
	this->mMaxIncline = 35;
	this->mConnectionArrowComponentDirection = EFactoryConnectionDirection::FCD_ANY;
	this->mSplineData.SetNum(2); this->mSplineData[0].Location.X = 0; this->mSplineData[0].Location.Y = 0; this->mSplineData[0].Location.Z = 0; this->mSplineData[0].ArriveTangent.X = 1; this->mSplineData[0].ArriveTangent.Y = 0; this->mSplineData[0].ArriveTangent.Z = 0; this->mSplineData[0].LeaveTangent.X = 1; this->mSplineData[0].LeaveTangent.Y = 0; this->mSplineData[0].LeaveTangent.Z = 0; this->mSplineData[1].Location.X = 0; this->mSplineData[1].Location.Y = 0; this->mSplineData[1].Location.Z = 0; this->mSplineData[1].ArriveTangent.X = 1; this->mSplineData[1].ArriveTangent.Y = 0; this->mSplineData[1].ArriveTangent.Z = 0; this->mSplineData[1].LeaveTangent.X = 1; this->mSplineData[1].LeaveTangent.Y = 0; this->mSplineData[1].LeaveTangent.Z = 0;
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildable::StaticClass());
	this->SetHidden(true);
	this->SetReplicates(true);
}
void AFGConveyorBeltHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGConveyorBeltHologram::BeginPlay(){ }
bool AFGConveyorBeltHologram::TryUpgrade(const FHitResult& hitResult){ return bool(); }
void AFGConveyorBeltHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGConveyorBeltHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
int32 AFGConveyorBeltHologram::GetBaseCostMultiplier() const{ return int32(); }
AActor* AFGConveyorBeltHologram::GetUpgradedActor() const{ return nullptr; }
void AFGConveyorBeltHologram::OnInvalidHitResult(){ }
void AFGConveyorBeltHologram::SpawnChildren(AActor* hologramOwner, FVector spawnLocation, APawn* hologramInstigator){ }
bool AFGConveyorBeltHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
void AFGConveyorBeltHologram::AdjustForGround(const FHitResult& hitResult, FVector& out_adjustedLocation, FRotator& out_adjustedRotation){ }
bool AFGConveyorBeltHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGConveyorBeltHologram::Scroll(int32 delta){ }
void AFGConveyorBeltHologram::GetSupportedScrollModes(TArray<EHologramScrollMode>* out_modes) const{ }
bool AFGConveyorBeltHologram::CanTakeNextBuildStep() const{ return bool(); }
void AFGConveyorBeltHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGConveyorBeltHologram::ClientPreConstructMessageSerialization(){ }
void AFGConveyorBeltHologram::ServerPostConstructMessageDeserialization(){ }
EFactoryConnectionDirection AFGConveyorBeltHologram::GetActiveConnectionDirection() const{ return EFactoryConnectionDirection(); }
TArray<AFGBuildable*> AFGConveyorBeltHologram::GetAnyConnectedBuildables(){ return TArray<AFGBuildable*>(); }
void AFGConveyorBeltHologram::CheckValidFloor(){ }
void AFGConveyorBeltHologram::CheckClearance(){ }
void AFGConveyorBeltHologram::CheckValidPlacement(){ }
void AFGConveyorBeltHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGConveyorBeltHologram::ConfigureComponents( AFGBuildable* inBuildable) const{ }
void AFGConveyorBeltHologram::SetupConveyorClearanceDetector(){ }
void AFGConveyorBeltHologram::UpdateSplineComponent(){ }
void AFGConveyorBeltHologram::OnRep_ConnectionArrowComponentDirection(){ }
void AFGConveyorBeltHologram::AutoRouteSpline(const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
bool AFGConveyorBeltHologram::ValidateIncline(){ return bool(); }
bool AFGConveyorBeltHologram::ValidateMinLength(){ return bool(); }
