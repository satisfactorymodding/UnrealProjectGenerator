// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFactoryLegsComponent.h"

uint8 FFeetOffset::GetFeetIndexFromSocketName(const FName socket){ return uint8(); }
FFeetOffset::FFeetOffset(){ }
FFeetOffset::FFeetOffset(const FName socket){ }
FName FFeetOffset::GetSocket() const{ return FName(); }
#if WITH_EDITOR
void UFGFactoryLegsComponent::OnRegister(){ Super::OnRegister(); }
void UFGFactoryLegsComponent::OnUnregister(){ Super::OnUnregister(); }
#endif 
UFGFactoryLegsComponent::UFGFactoryLegsComponent() : Super() {
	this->SetIsReplicated(true);
}
void UFGFactoryLegsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void UFGFactoryLegsComponent::BeginPlay(){ }
void UFGFactoryLegsComponent::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void UFGFactoryLegsComponent::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGFactoryLegsComponent::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGFactoryLegsComponent::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGFactoryLegsComponent::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGFactoryLegsComponent::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool UFGFactoryLegsComponent::NeedTransform_Implementation(){ return bool(); }
bool UFGFactoryLegsComponent::ShouldSave_Implementation() const{ return bool(); }
TArray< FFeetOffset > UFGFactoryLegsComponent::TraceFeetOffsets(const FTransform& actorTransform, AActor* ignoreActor) const{ return TArray<FFeetOffset>(); }
void UFGFactoryLegsComponent::SetFeetOffsets(const TArray< FFeetOffset >& offsets){ }
void UFGFactoryLegsComponent::ClearFeetOffsets(){ }
void UFGFactoryLegsComponent::SetFeetOffsetsToZero(){ }
float UFGFactoryLegsComponent::GetMaxLegLength() const{ return float(); }
FFeetOffset UFGFactoryLegsComponent::TraceFootOffset(FName socket, const FTransform& actorTransform, AActor* ignoreActor) const{ return FFeetOffset(); }
UStaticMesh* UFGFactoryLegsComponent::GetLegMesh() const{ return nullptr; }
UStaticMesh* UFGFactoryLegsComponent::GetFootMesh() const{ return nullptr; }
void UFGFactoryLegsComponent::CreateLegs(){ }
void UFGFactoryLegsComponent::RemoveLegs(){ }
void UFGFactoryLegsComponent::CreateFoot(const FFeetOffset& offset){ }
