// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableGenerator.h"

void AFGBuildableGenerator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableGenerator::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
AFGBuildableGenerator::AFGBuildableGenerator(){ }
void AFGBuildableGenerator::BeginPlay(){ }
void AFGBuildableGenerator::SetActorHiddenInGame(bool bNewHidden){ }
bool AFGBuildableGenerator::CanProduce_Implementation() const{ return bool(); }
bool AFGBuildableGenerator::Factory_HasPower() const{ return bool(); }
EProductionStatus AFGBuildableGenerator::GetProductionIndicatorStatus() const{ return EProductionStatus(); }
float AFGBuildableGenerator::GetPowerProductionCapacity() const{ return float(); }
float AFGBuildableGenerator::GetDefaultPowerProductionCapacity() const{ return float(); }
float AFGBuildableGenerator::CalcPowerProductionCapacityForPotential(float potential) const{ return float(); }
bool AFGBuildableGenerator::CanStartPowerProduction_Implementation() const{ return bool(); }
void AFGBuildableGenerator::Factory_TickProducing(float dt){ }
void AFGBuildableGenerator::Factory_StartProducing(){ }
void AFGBuildableGenerator::Factory_StopProducing(){ }
void AFGBuildableGenerator::Factory_StartPowerProduction_Implementation(){ }
void AFGBuildableGenerator::Factory_StopPowerProduction_Implementation(){ }
void AFGBuildableGenerator::Factory_TickPowerProduction_Implementation(float dt){ }
