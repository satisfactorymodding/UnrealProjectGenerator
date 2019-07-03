// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableRailroadTrack.h"

FRailroadTrackPosition::FRailroadTrackPosition(){ }
FRailroadTrackPosition::FRailroadTrackPosition(  AFGBuildableRailroadTrack* track, float offset, float forward){ }
FRailroadTrackPosition::FRailroadTrackPosition( const FRailroadTrackPosition& position){ }
FRailroadTrackPosition::~FRailroadTrackPosition(){ }
bool FRailroadTrackPosition::Serialize( FArchive& ar){ return bool(); }
void FRailroadTrackPosition::GetWorldLocationAndDirection( FVector& out_location, FVector& out_direction) const{ }
FVector FRailroadTrackPosition::GetWorldLocation() const{ return FVector(); }
FVector FRailroadTrackPosition::GetWorldDirection() const{ return FVector(); }
float FRailroadTrackPosition::GetForwardOffset() const{ return float(); }
float FRailroadTrackPosition::GetReverseOffset() const{ return float(); }
AFGBuildableRailroadTrack::AFGBuildableRailroadTrack(){ }
void AFGBuildableRailroadTrack::GetLifetimeReplicatedProps( TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableRailroadTrack::BeginPlay(){ }
void AFGBuildableRailroadTrack::Destroyed(){ }
void AFGBuildableRailroadTrack::Dismantle_Implementation(){ }
FRailroadTrackPosition AFGBuildableRailroadTrack::FindTrackPositionClosestToWorldLocation( const FVector& worldLocation){ return FRailroadTrackPosition(); }
void AFGBuildableRailroadTrack::GetWorldLocationAndDirectionAtPosition( const  FRailroadTrackPosition& position, FVector& out_location, FVector& out_direction) const{ }
void AFGBuildableRailroadTrack::RegisterRailroadInterface( UObject* object, const FRailroadTrackPosition& position){ }
void AFGBuildableRailroadTrack::UnregisterRailroadInterface( UObject* object){ }
void AFGBuildableRailroadTrack::BuildSplineCollisions(
		 USplineComponent* spline,
		const FVector& collisionExtent,
		float collisionSpacing,
		const FVector& collisionOffset,
		FName collisionProfile){ }
void AFGBuildableRailroadTrack::SetTrackGraphID( int32 trackGraphID){ }
