// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGPoleHologram.h"
#include "Components/SceneComponent.h"

AFGPoleHologram::AFGPoleHologram() : Super() {
	this->mPoleMesh.Mesh = nullptr;
	this->mPoleMesh.Height = 0.0;
	this->mPoleMeshComponent = nullptr;
	this->mPoleHeightComponent = nullptr;
	this->mInstancedMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Instanced Mesh Component"));
	this->mPoleHeight = 0.0;
	this->mMaxZoopAmount = 9;
	this->mBuildModeZoop = nullptr;
	this->mClearanceExtent.X = 0.0;
	this->mClearanceExtent.Y = 0.0;
	this->mClearanceExtent.Z = 0.0;
	this->mUseGradualFoundationRotations = true;
	this->mInstancedMeshComponent->SetupAttachment(RootComponent);
}
void AFGPoleHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGPoleHologram, mPoleMesh);
}
void AFGPoleHologram::BeginPlay(){ }
bool AFGPoleHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
bool AFGPoleHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGPoleHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGPoleHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
AActor* AFGPoleHologram::Construct(TArray<AActor*>& out_children, FNetConstructionID constructionID){ return nullptr; }
void AFGPoleHologram::GetSupportedBuildModes_Implementation(TArray< TSubclassOf< UFGHologramBuildModeDescriptor > >& out_buildmodes) const{ }
void AFGPoleHologram::OnBuildModeChanged(){ }
int32 AFGPoleHologram::GetBaseCostMultiplier() const{ return int32(); }
void AFGPoleHologram::ResetBuildSteps(){ }
void AFGPoleHologram::SetPoleHeight(float height){ }
void AFGPoleHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGPoleHologram::ServerPostConstructMessageDeserialization(){ }
void AFGPoleHologram::OnConstructMessagedDeserialized_Implementation(){ }
void AFGPoleHologram::OnPendingConstructionHologramCreated_Implementation( AFGHologram* fromHologram){ }
float AFGPoleHologram::GetActiveMeshHeight() const{ return float(); }
void AFGPoleHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGPoleHologram::CheckValidPlacement(){ }
void AFGPoleHologram::OnRep_PoleMesh(){ }
void AFGPoleHologram::UpdatePoleHeightRelativeLoc(){ }
