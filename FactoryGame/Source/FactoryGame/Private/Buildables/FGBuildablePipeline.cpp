// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildablePipeline.h"

void FQuantizedPipelineIndicatorData::SetFlowPct(float pct){ }
float FQuantizedPipelineIndicatorData::GetFlowPct() const{ return float(); }
void FQuantizedPipelineIndicatorData::SetContentPct(float pct){ }
float FQuantizedPipelineIndicatorData::GetContentPct() const{ return float(); }
AFGBuildablePipeline::AFGBuildablePipeline(){ }
void AFGBuildablePipeline::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildablePipeline::BeginPlay(){ }
void AFGBuildablePipeline::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGBuildablePipeline::Tick(float dt){ }
void AFGBuildablePipeline::Factory_Tick(float dt){ }
void AFGBuildablePipeline::Native_OnMaterialInstancesUpdated(){ }
void AFGBuildablePipeline::GainedSignificance_Implementation(){ }
void AFGBuildablePipeline::LostSignificance_Implementation(){ }
TSubclassOf< UFGPipeConnectionComponentBase > AFGBuildablePipeline::GetConnectionType_Implementation(){ return TSubclassOf<UFGPipeConnectionComponentBase>(); }
FFluidBox* AFGBuildablePipeline::GetFluidBox(){ return nullptr; }
TArray< class UFGPipeConnectionComponent* > AFGBuildablePipeline::GetPipeConnections(){ return TArray<class UFGPipeConnectionComponent*>(); }
void AFGBuildablePipeline::OnFluidDescriptorSet(){ }
TArray< AFGBuildablePipeline* > AFGBuildablePipeline::Split(AFGBuildablePipeline* pipeline, float offset, bool connectNewPipelines, AActor* instigator){ return TArray<AFGBuildablePipeline*>(); }
AFGBuildablePipeline* AFGBuildablePipeline::Merge(TArray< AFGBuildablePipeline* > pipelines, AActor* instigator){ return nullptr; }
float AFGBuildablePipeline::GetIndicatorContentPct() const{ return float(); }
float AFGBuildablePipeline::GetIndicatorFlowPct() const{ return float(); }
float AFGBuildablePipeline::GetIndicatorContent() const{ return float(); }
float AFGBuildablePipeline::GetIndicatorFlow() const{ return float(); }
TSubclassOf< UFGItemDescriptor > AFGBuildablePipeline::GetFluidDescriptor() const{ return TSubclassOf<UFGItemDescriptor>(); }
UFGPipelineFlowIndicatorComponent* AFGBuildablePipeline::GetFlowIndicatorComponent() const{ return nullptr; }
void AFGBuildablePipeline::FlushPipeNetwork(){ }
void AFGBuildablePipeline::UpdateSounds(){ }
bool AFGBuildablePipeline::FindBestInidicatorPlacement(FTransform& out_transform){ return bool(); }
FName AFGBuildablePipeline::mConnectionName0 = FName();
FName AFGBuildablePipeline::mConnectionName1 = FName();
