// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPowerCircuit.h"

FPowerGraphPoint::FPowerGraphPoint(){ }
bool FPowerGraphPoint::NetSerialize(FArchive& ar,  UPackageMap* map, bool& out_success){ return bool(); }
FPowerCircuitStats::FPowerCircuitStats(){ }
bool FPowerCircuitStats::NetSerialize(FArchive& ar,  UPackageMap* map, bool& out_success){ return bool(); }
FPowerGraphPoint& FPowerCircuitStats::MakeAndAddGraphPoint(){ return *(new FPowerGraphPoint); }
FPowerGraphPoint& FPowerCircuitStats::AdvanceToNextGraphPoint(){ return *(new FPowerGraphPoint); }
void UFGPowerCircuit::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void UFGPowerCircuit::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
UFGPowerCircuit::UFGPowerCircuit(){ }
void UFGPowerCircuit::ResetFuse(){ }
void UFGPowerCircuit::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos, float indent){ }
bool UFGPowerCircuit::IsNoPowerCheatOn() const{ return bool(); }
void UFGPowerCircuit::OnCircuitChanged(){ }
bool UFGPowerCircuit::IsTrivial() const{ return bool(); }
void UFGPowerCircuit::OnRemoved(){ }
void UFGPowerCircuit::UpdateStatsGeneral(){ }
void UFGPowerCircuit::UpdateStatsGraph(){ }
void UFGPowerCircuit::PinStatsGraphPoint(){ }
void UFGPowerCircuit::StatFuseTriggered(){ }
UFGCircuit* UFGPowerCircuit::SplitCircuit(AFGCircuitSubsystem* subsystem) const{ return nullptr; }
UFGCircuitGroup* UFGPowerCircuit::CreateCircuitGroup(AFGCircuitSubsystem* subsystem) const{ return nullptr; }
void UFGPowerCircuit::SetHasPower(bool hasPower){ }
void UFGPowerCircuitGroup::ResetFuses(){ }
void UFGPowerCircuitGroup::RegisterPrioritySwitch( AFGBuildablePriorityPowerSwitch* circuitSwitch){ }
void UFGPowerCircuitGroup::PushCircuit(UFGCircuit* circuit){ }
bool UFGPowerCircuitGroup::PreTickCircuitGroup(float dt, bool hasAuthority){ return bool(); }
void UFGPowerCircuitGroup::TickCircuitGroup(float dt, bool hasAuthority){ }
void UFGPowerCircuitGroup::VisitCircuitBridge( AFGBuildableCircuitBridge* circuitBridge){ }
void UFGPowerCircuitGroup::TickPowerCircuitGroup(float deltaTime, bool hasAuthority, bool isNoPowerCheatOn){ }
float UFGPowerCircuitGroup::TickBatteries(float deltaTime, const float netPowerProduction, bool isFuseTriggered){ return float(); }
bool UFGPowerCircuitGroup::TryTurnOffPrioritySwitch(){ return bool(); }
void UFGPowerCircuitGroup::OnFuseSet(){ }
void UFGPowerCircuitGroup::OnFuseReset(){ }
void UFGPowerCircuitGroup::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos, float indent){ }
