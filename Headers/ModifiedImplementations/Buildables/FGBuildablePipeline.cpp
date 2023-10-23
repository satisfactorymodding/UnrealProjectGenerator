// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildablePipeline.h"

void FQuantizedPipelineIndicatorData::SetFlowPct(float pct){ }
float FQuantizedPipelineIndicatorData::GetFlowPct() const{ return float(); }
void FQuantizedPipelineIndicatorData::SetContentPct(float pct){ }
float FQuantizedPipelineIndicatorData::GetContentPct() const{ return float(); }
AFGBuildablePipeline::AFGBuildablePipeline(){ }
void AFGBuildablePipeline::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildablePipeline::BeginPlay(){ }
void AFGBuildablePipeline::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGBuildablePipeline::Factory_Tick(float dt){ }
void AFGBuildablePipeline::Upgrade_Implementation(AActor* newActor){ }
void AFGBuildablePipeline::GainedSignificance_Implementation(){ }
void AFGBuildablePipeline::LostSignificance_Implementation(){ }
float AFGBuildablePipeline::GetSignificanceRange(){ return float(); }
TSubclassOf< UFGPipeConnectionComponentBase > AFGBuildablePipeline::GetConnectionType_Implementation(){ return TSubclassOf<UFGPipeConnectionComponentBase>(); }
void AFGBuildablePipeline::SetCustomizationData_Native(const FFactoryCustomizationData& customizationData){ }
void AFGBuildablePipeline::ApplyCustomizationData_Native(const FFactoryCustomizationData& customizationData){ }
void AFGBuildablePipeline::StartIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter, bool isValid){ }
void AFGBuildablePipeline::StopIsAimedAtForColor_Implementation( AFGCharacterPlayer* byCharacter){ }
void AFGBuildablePipeline::GetChildDismantleActors_Implementation(TArray< AActor* >& out_childDismantleActors) const{ }
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
AFGBuildablePipelineFlowIndicator* AFGBuildablePipeline::GetFlowIndicator() const{ return nullptr; }
void AFGBuildablePipeline::SmoothValues(float& flowPct,  float& contentPct, float dt) const{ }
void AFGBuildablePipeline::GetRawValues(float& flowPct,  float& contentPct) const{ }
void AFGBuildablePipeline::UpdateSounds(){ }
bool AFGBuildablePipeline::FindBestInidicatorPlacement(FTransform& out_transform){ return bool(); }
const FName AFGBuildablePipeline::mConnectionName0 = FName();
const FName AFGBuildablePipeline::mConnectionName1 = FName();
