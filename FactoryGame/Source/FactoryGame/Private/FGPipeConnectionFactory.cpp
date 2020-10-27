// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPipeConnectionFactory.h"

UFGPipeConnectionFactory::UFGPipeConnectionFactory() : Super() {
	this->mFluidBoxVolume = 5;
	this->mApplyAdditionalPressure = true;
	this->mPipeType = "Fluid";
	this->bReplicates = true;
	this->bNetAddressable = true;
}
void UFGPipeConnectionFactory::BeginPlay(){ }
void UFGPipeConnectionFactory::EndPlay(const EEndPlayReason::Type reason){ }
FFluidBox* UFGPipeConnectionFactory::GetFluidBox(){ return nullptr; }
TArray< UFGPipeConnectionComponent* > UFGPipeConnectionFactory::GetPipeConnections(){ return TArray<UFGPipeConnectionComponent*>(); }
void UFGPipeConnectionFactory::OnDisconnectedFrom(){ }
