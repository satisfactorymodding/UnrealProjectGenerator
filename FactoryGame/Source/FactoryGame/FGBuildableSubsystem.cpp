// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableSubsystem.h"

#if STATS
#endif 
AFGBuildableSubsystem::AFGBuildableSubsystem(){ }
void AFGBuildableSubsystem::PreSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGBuildableSubsystem::PostSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGBuildableSubsystem::PreLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGBuildableSubsystem::PostLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGBuildableSubsystem::GatherDependencies_Implementation( TArray< UObject* >& out_dependentObjects){ }
bool AFGBuildableSubsystem::NeedTransform_Implementation(){ return bool(); }
bool AFGBuildableSubsystem::ShouldSave_Implementation() const{ return bool(); }
void AFGBuildableSubsystem::BeginPlay(){ }
void AFGBuildableSubsystem::EndPlay( const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableSubsystem::Tick( float dt){ }
void AFGBuildableSubsystem::TickFactory( float dt, ELevelTick TickType){ }
AFGBuildableSubsystem* AFGBuildableSubsystem::Get( UWorld* world){ return nullptr; }
AFGBuildableSubsystem* AFGBuildableSubsystem::Get( UObject* worldContext){ return nullptr; }
AFGBuildable* AFGBuildableSubsystem::BeginSpawnBuildable( TSubclassOf<  AFGBuildable > inClass, const FTransform& inTransform){ return nullptr; }
void AFGBuildableSubsystem::AddBuildable(  AFGBuildable* buildable){ }
void AFGBuildableSubsystem::RemoveBuildable(  AFGBuildable* buildable){ }
void AFGBuildableSubsystem::GetTypedBuildable( TSubclassOf<  AFGBuildable > inClass, TArray<  AFGBuildable* >& out_buildables) const{ }
void AFGBuildableSubsystem::ReplayBuildingEffects(){ }
void AFGBuildableSubsystem::DisplayDebug(  UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGBuildableSubsystem::DebugEnableInstancing( bool enabled){ }
void AFGBuildableSubsystem::DebugGetFactoryActors( TArray< AActor* >& out_actors){ }
AFGPlayerController* AFGBuildableSubsystem::GetLocalPlayerController() const{ return nullptr; }
float AFGBuildableSubsystem::GetDistanceSqToBoundingBox( const FVector& point,   AFGBuildable* buildable) const{ return float(); }
void AFGBuildableSubsystem::RegisterFactoryTickFunction( bool shouldRegister){ }
void AFGBuildableSubsystem::CreateFactoryStatID() const{ }
void AFGBuildableSubsystem::UpdateReplayEffects( float dt){ }
void AFGBuildableSubsystem::AddBuildableMeshInstances(  AFGBuildable* buildable){ }
void AFGBuildableSubsystem::setColorSlotPrimary( uint8 index, FColor color){ }
void AFGBuildableSubsystem::setColorSlotSecondary( uint8 index, FColor color){ }
FColor AFGBuildableSubsystem::getColorSlotPrimary( uint8 index){ return FColor(); }
FColor AFGBuildableSubsystem::getColorSlotSecondary( uint8 index){ return FColor(); }
FLinearColor AFGBuildableSubsystem::GetColorSlotPrimaryLinear( uint8 index){ return FLinearColor(); }
FLinearColor AFGBuildableSubsystem::GetColorSlotSecondaryLinear( uint8 index){ return FLinearColor(); }
UFGColoredInstanceManager* AFGBuildableSubsystem::GetColoredInstanceManager(  UFGColoredInstanceMeshProxy* proxy){ return nullptr; }
