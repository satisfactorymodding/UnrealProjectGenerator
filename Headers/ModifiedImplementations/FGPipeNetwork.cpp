// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPipeNetwork.h"

PipeJunction::PipeJunction(  UFGPipeConnectionComponent* previous,  UFGPipeConnectionComponent* current){ }
void AFGPipeNetwork::GetLifetimeReplicatedProps( TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGPipeNetwork::BeginPlay(){ }
void AFGPipeNetwork::EndPlay( EEndPlayReason::Type endPlayReason){ }
void AFGPipeNetwork::PreSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGPipeNetwork::PostSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGPipeNetwork::PreLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGPipeNetwork::PostLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGPipeNetwork::GatherDependencies_Implementation( TArray< UObject* >& out_dependentObjects){ }
bool AFGPipeNetwork::NeedTransform_Implementation(){ return bool(); }
bool AFGPipeNetwork::ShouldSave_Implementation() const{ return bool(); }
bool AFGPipeNetwork::ShouldTickNetwork() const{ return bool(); }
void AFGPipeNetwork::UpdateSimulation( float dt){ }
int32 AFGPipeNetwork::GetPipeNetworkID() const{ return int32(); }
void AFGPipeNetwork::SetPipeNetworkID( int32 id){ }
void AFGPipeNetwork::AddFluidIntegrant(  IFGFluidIntegrantInterface* fluidIntegrant){ }
void AFGPipeNetwork::RemoveFluidIntegrant(  IFGFluidIntegrantInterface* fluidIntegrant){ }
int32 AFGPipeNetwork::NumFluidIntegrants() const{ return int32(); }
void AFGPipeNetwork::MergeNetworks(  AFGPipeNetwork* network){ }
void AFGPipeNetwork::RemoveAllFluidIntegrants(){ }
IFGFluidIntegrantInterface* AFGPipeNetwork::GetFirstFluidIntegrant(){ return nullptr; }
void AFGPipeNetwork::TrySetFluidDescriptor( TSubclassOf< UFGItemDescriptor > newItemDescriptor){ }
void AFGPipeNetwork::TryPropagateFluidDescriptorFrom(  AFGPipeNetwork* network){ }
void AFGPipeNetwork::FlushIntegrant(  IFGFluidIntegrantInterface*){ }
void AFGPipeNetwork::FlushNetwork(){ }
void AFGPipeNetwork::MarkForFullRebuild(){ }
bool AFGPipeNetwork::NeedFullRebuild() const{ return bool(); }
void AFGPipeNetwork::OnFullRebuildCompleted(){ }
void AFGPipeNetwork::DisplayDebugDetails(  UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos, float indent){ }
void AFGPipeNetwork::RebuildUpdateList(){ }
void AFGPipeNetwork::UpdateFluidDescriptor( TSubclassOf< UFGItemDescriptor > descriptor){ }
int32 AFGPipeNetwork::CreatePressureGroup(){ return int32(); }
void AFGPipeNetwork::UpdatePressureGroups( PipeJunction& junction, float dt){ }
void AFGPipeNetwork::UpdatePressure( PipeJunction& junction, float dt){ }
void AFGPipeNetwork::PostUpdatePressureGroups( PipeJunction& junction){ }
void AFGPipeNetwork::PreUpdateFlow( PipeJunction& junction){ }
void AFGPipeNetwork::UpdateFlow( PipeJunction& junction, float dt){ }
void AFGPipeNetwork::UpdateContent( PipeJunction& junction, float dt){ }
