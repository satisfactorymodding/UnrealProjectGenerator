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
UFGPowerCircuit::UFGPowerCircuit() : Super() {
	this->mCircuitID = -1;
}
void UFGPowerCircuit::ResetFuse(){ }
void UFGPowerCircuit::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos, float indent){ }
void UFGPowerCircuit::TickCircuit(float dt){ }
void UFGPowerCircuit::OnCircuitChanged(){ }
void UFGPowerCircuit::UpdateStatsGeneral(){ }
void UFGPowerCircuit::UpdateStatsGraph(){ }
void UFGPowerCircuit::PinStatsGraphPoint(){ }
void UFGPowerCircuit::StatFuseTriggered(){ }
void UFGPowerCircuit::OnFuseSet(){ }
void UFGPowerCircuit::OnFuseReset(){ }
