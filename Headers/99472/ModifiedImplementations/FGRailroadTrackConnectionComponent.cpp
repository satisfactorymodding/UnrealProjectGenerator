// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRailroadTrackConnectionComponent.h"

UFGRailroadTrackConnectionComponent::UFGRailroadTrackConnectionComponent(){ }
void UFGRailroadTrackConnectionComponent::OnComponentDestroyed( bool isDestroyingHierarchy){ }
void UFGRailroadTrackConnectionComponent::RegisteredOnTrack_Implementation( const FRailroadTrackPosition& position){ }
void UFGRailroadTrackConnectionComponent::UnregisteredFromTrack_Implementation(){ }
FRailroadTrackPosition UFGRailroadTrackConnectionComponent::GetTrackPosition_Implementation() const{ return FRailroadTrackPosition(); }
void UFGRailroadTrackConnectionComponent::AddConnection( UFGRailroadTrackConnectionComponent* toComponent){ }
void UFGRailroadTrackConnectionComponent::RemoveConnection( UFGRailroadTrackConnectionComponent* toComponent){ }
void UFGRailroadTrackConnectionComponent::SetTrackPosition( const FRailroadTrackPosition& position){ }
void UFGRailroadTrackConnectionComponent::SetSwitchPosition( int32 position){ }
AFGBuildableRailroadSwitchControl* UFGRailroadTrackConnectionComponent::GetAttachedSwitchControl() const{ return nullptr; }
UFGRailroadTrackConnectionComponent* UFGRailroadTrackConnectionComponent::GetOpposite() const{ return nullptr; }
void UFGRailroadTrackConnectionComponent::AddConnectionInternal( UFGRailroadTrackConnectionComponent* toComponent){ }
void UFGRailroadTrackConnectionComponent::RemoveConnectionInternal( UFGRailroadTrackConnectionComponent* toComponent){ }
