// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRailroadTrackHologram.h"

AFGRailroadTrackHologram::AFGRailroadTrackHologram(){ }
void AFGRailroadTrackHologram::BeginPlay(){ }
USceneComponent* AFGRailroadTrackHologram::SetupComponent( USceneComponent* attachParent, UActorComponent* componentTemplate, const FName& componentName){ return nullptr; }
void AFGRailroadTrackHologram::SetHologramLocationAndRotation( const FHitResult& hitResult){ }
bool AFGRailroadTrackHologram::MultiStepPlacement(){ return bool(); }
void AFGRailroadTrackHologram::ConfigureActor(  AFGBuildable* inBuildable) const{ }
void AFGRailroadTrackHologram::ConfigureComponents(  AFGBuildable* inBuildable) const{ }
void AFGRailroadTrackHologram::SetLocationAndRotationFromPlatformConnections(  UFGTrainPlatformConnection* connectionOne,  UFGTrainPlatformConnection* connectionTwo){ }
void AFGRailroadTrackHologram::CheckValidPlacement(){ }
void AFGRailroadTrackHologram::CheckValidFloor(){ }
void AFGRailroadTrackHologram::CheckClearance(){ }
void AFGRailroadTrackHologram::OnRep_SplineData(){ }
int32 AFGRailroadTrackHologram::GetNumCostSections() const{ return int32(); }
bool AFGRailroadTrackHologram::ValidateGrade(){ return bool(); }
bool AFGRailroadTrackHologram::ValidateCurvature(){ return bool(); }
void AFGRailroadTrackHologram::AutoRouteSpline(
		const FVector& startConnectionPos,
		const FVector& startConnectionNormal,
		const FVector& endConnectionPos,
		const FVector& endConnectionNormal){ }
