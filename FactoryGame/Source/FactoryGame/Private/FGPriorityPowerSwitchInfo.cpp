// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPriorityPowerSwitchInfo.h"
#include "Net/UnrealNetwork.h"

AFGPriorityPowerSwitchInfo::AFGPriorityPowerSwitchInfo() : Super() {
	this->mSwitchName = TEXT("");
	this->mIsSwitchOn = false;
	this->mCircuitGroupID0 = -1;
	this->mCircuitGroupID1 = -1;
	this->bAlwaysRelevant = true;
	this->bReplicates = true;
}
void AFGPriorityPowerSwitchInfo::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGPriorityPowerSwitchInfo, mSwitchName);
	DOREPLIFETIME(AFGPriorityPowerSwitchInfo, mSwitchPriority);
	DOREPLIFETIME(AFGPriorityPowerSwitchInfo, mIsSwitchOn);
	DOREPLIFETIME(AFGPriorityPowerSwitchInfo, mCircuitGroupID0);
	DOREPLIFETIME(AFGPriorityPowerSwitchInfo, mCircuitGroupID1);
}
void AFGPriorityPowerSwitchInfo::BeginPlay(){ }
void AFGPriorityPowerSwitchInfo::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGPriorityPowerSwitchInfo::Init( AFGBuildablePriorityPowerSwitch* prioritySwitch){ }
void AFGPriorityPowerSwitchInfo::SetPriority(int32 priority){ }
void AFGPriorityPowerSwitchInfo::SetSwitchOn(bool on){ }
void AFGPriorityPowerSwitchInfo::OnRemoved() const{ }
void AFGPriorityPowerSwitchInfo::OnSwitchBuildingTagChanged(bool hasTag, const FString& tag){ }
void AFGPriorityPowerSwitchInfo::OnIsSwitchOnChanged(){ }
void AFGPriorityPowerSwitchInfo::OnSwitchPriorityChanged(int32 priority){ }
void AFGPriorityPowerSwitchInfo::OnCircuitsChanged(){ }
void AFGPriorityPowerSwitchInfo::OnRep_SwitchName() const{ }
void AFGPriorityPowerSwitchInfo::OnRep_SwitchPriority() const{ }
void AFGPriorityPowerSwitchInfo::OnRep_IsSwitchOn() const{ }
void AFGPriorityPowerSwitchInfo::OnRep_GroupIDX() const{ }
