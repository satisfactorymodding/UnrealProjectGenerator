// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGRailroadSignalHologram.h"
#include "AkAudio/Classes/AkComponent.h"
#include "Components/SceneComponent.h"

AFGRailroadSignalHologram::AFGRailroadSignalHologram(){ 
	this->mSnappedConnection = nullptr;
	this->mLoopSound = CreateDefaultSubobject<UAkComponent>(TEXT("LoopSound"));
	this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->mLoopSound->SetupAttachment(RootComponent);
}
void AFGRailroadSignalHologram::BeginPlay(){ }
void AFGRailroadSignalHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGRailroadSignalHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGRailroadSignalHologram::CheckValidPlacement(){ }