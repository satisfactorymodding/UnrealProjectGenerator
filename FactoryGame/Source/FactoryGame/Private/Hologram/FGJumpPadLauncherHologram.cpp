// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGJumpPadLauncherHologram.h"
#include "Buildables/FGBuildableWall.h"
#include "Buildables/FGBuildableRoad.h"
#include "Buildables/FGBuildableRailroadTrack.h"
#include "Buildables/FGBuildableFoundation.h"
#include "Components/SplineComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

AFGJumpPadLauncherHologram::AFGJumpPadLauncherHologram() : Super() {
	this->mLaunchAngle = 45;
	this->mLauncherMeshComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("LauncherMeshComponent")); this->mLauncherMeshComponent->SetupAttachment(this->RootComponent);
	this->mSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent")); this->mSplineComponent->SetupAttachment(this->RootComponent);
	/* Skipping UFGInstancedSplineMeshComponent this->mInstancedSplineMeshComponent */
	this->mDestinationMeshComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("DestinationMeshComponent")); this->mDestinationMeshComponent->SetupAttachment(this->RootComponent);
	this->mDestinationMeshHeightOffset = 400;
	this->mTrajectoryMeshSeparationDistance = 200;
	this->mNumArrows = 5;
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass()); this->mValidHitClasses.Add(AFGBuildableWall::StaticClass()); this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass());
	this->mUseBuildClearanceOverlapSnapp = true;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->SetHidden(true);
	this->SetReplicates(true);
}
void AFGJumpPadLauncherHologram::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGJumpPadLauncherHologram::BeginPlay(){ }
bool AFGJumpPadLauncherHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGJumpPadLauncherHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
void AFGJumpPadLauncherHologram::SetMaterial( UMaterialInterface* material){ }
void AFGJumpPadLauncherHologram::ScrollRotate(int32 delta, int32 step){ }
bool AFGJumpPadLauncherHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
bool AFGJumpPadLauncherHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
void AFGJumpPadLauncherHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
int32 AFGJumpPadLauncherHologram::GetRotationStep() const{ return int32(); }
void AFGJumpPadLauncherHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGJumpPadLauncherHologram::SimulateTrajectory(){ }
void AFGJumpPadLauncherHologram::OnRep_LaunchAngle(){ }
