// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRailroadVehicleMovementComponent.h"

FWheelsetSetup::FWheelsetSetup(){ }
FCouplerSetup::FCouplerSetup(){ }
AFGRailroadVehicle* UFGRailroadVehicleMovementComponent::GetOwningRailroadVehicle() const{ return nullptr; }
void UFGRailroadVehicleMovementComponent::ComputeConstants(){ }
USkinnedMeshComponent* UFGRailroadVehicleMovementComponent::GetMesh() const{ return nullptr; }
void UFGRailroadVehicleMovementComponent::FixupSkeletalMesh(){ }
void UFGRailroadVehicleMovementComponent::PreTick( float dt){ }
void UFGRailroadVehicleMovementComponent::TickTractionAndFriction( float dt){ }
float UFGRailroadVehicleMovementComponent::MoveVehicle( float moveDelta){ return float(); }
void UFGRailroadVehicleMovementComponent::UpdateCouplerRotationAndLength(){ }
float UFGRailroadVehicleMovementComponent::GetMass() const{ return float(); }
void UFGRailroadVehicleMovementComponent::OnCreatePhysicsState(){ }
void UFGRailroadVehicleMovementComponent::OnDestroyPhysicsState(){ }
bool UFGRailroadVehicleMovementComponent::ShouldCreatePhysicsState() const{ return bool(); }
bool UFGRailroadVehicleMovementComponent::HasValidPhysicsState() const{ return bool(); }
FVector UFGRailroadVehicleMovementComponent::GetWheelsetRotation( int32 index) const{ return FVector(); }
float UFGRailroadVehicleMovementComponent::GetWheelsetOffset( int32 index) const{ return float(); }
FVector UFGRailroadVehicleMovementComponent::GetCouplerRotationAndExtention( int32 index, UPARAM( DisplayName="Extention" ) float& out_extention) const{ return FVector(); }
UFGRailroadVehicleMovementComponent* UFGRailroadVehicleMovementComponent::GetCoupledMovementAt( ERailroadVehicleCoupler coupler) const{ return nullptr; }
FVector UFGRailroadVehicleMovementComponent::CalcCouplerDistance( ERailroadVehicleCoupler coupler) const{ return FVector(); }
