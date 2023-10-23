// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableBeam.h"
#include "Net/UnrealNetwork.h"

AFGBuildableBeam::AFGBuildableBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->mSize = 0.0;
	this->mDefaultLength = 0.0;
	this->mMaxLength = 0.0;
	this->mLength = 0.0;
}
void AFGBuildableBeam::BeginPlay(){ }
void AFGBuildableBeam::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGBuildableBeam, mLength);
}
void AFGBuildableBeam::GetAttachmentPoints(TArray< const FFGAttachmentPoint* >& out_points) const{ }
void AFGBuildableBeam::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
int32 AFGBuildableBeam::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
void AFGBuildableBeam::SetLength(float NewLength){ }
void AFGBuildableBeam::OnBuildEffectActorFinished(){ }
void AFGBuildableBeam::OnRep_Length(){ }
AFGBuildableBeamLightweight::AFGBuildableBeamLightweight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->mMeshComponentProxy = nullptr;
}
