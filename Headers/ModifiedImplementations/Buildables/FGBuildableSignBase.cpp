// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableSignBase.h"

bool UFGSignAttachmentPoint::CanAttach_Implementation(const  FFGAttachmentPoint& point, const  FFGAttachmentPoint& targetPoint) const{ return bool(); }
AFGBuildableSignBase::AFGBuildableSignBase(){ }
void AFGBuildableSignBase::BeginPlay(){ }
AFGBuildable* AFGBuildableSignBase::GetBuildable_Implementation(){ return nullptr; }
TSubclassOf< UFGSignTypeDescriptor > AFGBuildableSignBase::GetSignTypeDescriptor_Implementation(){ return TSubclassOf<UFGSignTypeDescriptor>(); }
FVector2D AFGBuildableSignBase::GetSignDimensions_Implementation(){ return FVector2D(); }
FVector2D AFGBuildableSignBase::GetWorldDimensions_Implementation(){ return FVector2D(); }
FVector2D AFGBuildableSignBase::GetGridSquareDimensions_Implementation(){ return FVector2D(); }
void AFGBuildableSignBase::GetChildDismantleActors_Implementation(TArray<AActor*>& out_ChildDismantleActors) const{ }
