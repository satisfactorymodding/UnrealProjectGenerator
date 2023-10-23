// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGResourceMiner.h"

AFGResourceMiner::AFGResourceMiner(){ }
void AFGResourceMiner::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGResourceMiner::Tick(float DeltaSeconds){ }
void AFGResourceMiner::UnEquip(){ }
void AFGResourceMiner::HandleDefaultEquipmentActionEvent(EDefaultEquipmentAction action, EDefaultEquipmentActionEvent actionEvent){ }
bool AFGResourceMiner::ShouldSaveState() const{ return bool(); }
void AFGResourceMiner::ForceStopMining(){ }
void AFGResourceMiner::StopMiningIfNotToggleBased(){ }
void AFGResourceMiner::AttemptAutoEquipAndStartMining(AFGResourceNode* resourceNode){ }
void AFGResourceMiner::UpdatePendingResourceNode(AFGResourceNode* preferredResourceNode){ }
void AFGResourceMiner::OnPendingResourceNodeChanged_Implementation(AFGResourceNode* oldResourceNode){ }
void AFGResourceMiner::UpdateActiveMining(float dt, bool forceStopMining){ }
bool AFGResourceMiner::TraceForResourceNode(FHitResult& out_hitResult) const{ return bool(); }
bool AFGResourceMiner::OverlapForResourceNode(TArray<FOverlapResult>& out_overlapResults) const{ return bool(); }
void AFGResourceMiner::Server_GiveMiningRewards_Implementation(){ }
void AFGResourceMiner::LocalCompleteMiningCycle(){ }
void AFGResourceMiner::Client_ForceStopMining_Implementation(){ }
void AFGResourceMiner::Server_ClientStartedMining_Implementation(AFGResourceNode* resourceNode){ }
void AFGResourceMiner::Server_MiningCycleCompleted_Implementation(){ }
void AFGResourceMiner::Multicast_MiningCycleCompleted_Implementation(){ }
void AFGResourceMiner::Server_AttemptAutoEquipAndStartMining_Implementation(AFGResourceNode* resourceNode){ }
void AFGResourceMiner::Client_StartServerGuidedMining_Implementation(AFGResourceNode* resourceNode){ }
void AFGResourceMiner::OnRep_ActiveResourceNode(AFGResourceNode* oldResourceNode){ }
