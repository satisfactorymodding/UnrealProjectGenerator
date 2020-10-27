// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableLadder.h"
#include "FGLadderHologram.h"
#include "FGLadderComponent.h"

AFGBuildableLadder::AFGBuildableLadder() : Super() {
	this->mMaxSegmentCount = 1;
	this->mFrontLadderComponent = CreateDefaultSubobject<UFGLadderComponent>(TEXT("Front Ladder Component")); this->mFrontLadderComponent->SetupAttachment(this->RootComponent);
	this->mBackLadderComponent = CreateDefaultSubobject<UFGLadderComponent>(TEXT("Back Ladder Component")); this->mBackLadderComponent->SetupAttachment(this->RootComponent);
	this->mHologramClass = AFGLadderHologram::StaticClass();
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = false; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->bReplicates = true;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildableLadder::BeginPlay(){ }
void AFGBuildableLadder::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
int32 AFGBuildableLadder::GetDismantleRefundReturnsMultiplier() const{ return int32(); }
void AFGBuildableLadder::SetNumSegments(int32 Num, bool ForceUpdate){ }
void AFGBuildableLadder::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableLadder::OnRep_NumSegments(){ }
