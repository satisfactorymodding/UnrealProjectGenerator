// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableConveyorBase.h"

void UFGConveyorRemoteCallObject::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void UFGConveyorRemoteCallObject::Server_OnUse_Implementation( AFGBuildableConveyorBelt* target,  AFGCharacterPlayer* byCharacter, int32 itemIndex, int8 repVersion){ }
bool UFGConveyorRemoteCallObject::Server_OnUse_Validate( AFGBuildableConveyorBelt* target,  AFGCharacterPlayer* byCharacter, int32 itemIndex, int8 repVersion){ return bool(); }
FConveyorBeltItems::FConveyorBeltItems(){ }
int32 FConveyorBeltItems::GetIndexForItemByRepKey(FG_ConveyorItemRepKeyType itemID){ return int32(); }
bool FConveyorBeltItems::NetDeltaSerialize(FNetDeltaSerializeInfo& parms){ return bool(); }
void FConveyorBeltItems::MarkArrayDirty(){ }
void FConveyorBeltItems::UpdateLastestIDFromState(){ }
float FConveyorBeltItems::ConsumeAndUpdateConveyorOffsetDept(float dt){ return float(); }
FConveyorBeltItems::ItemHolderHistory* FConveyorBeltItems::GetHistoryVersion(FG_ConveyorVersionType version){ return nullptr; }
void FConveyorBeltItems::MarkItemDirty(FConveyorBeltItem& item){ }
AFGBuildableConveyorBase::AFGBuildableConveyorBase(){ }
void AFGBuildableConveyorBase::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildableConveyorBase::BeginPlay(){ }
void AFGBuildableConveyorBase::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGBuildableConveyorBase::Serialize(FArchive& ar){ Super::Serialize(ar);}
void AFGBuildableConveyorBase::Tick(float dt){ }
void AFGBuildableConveyorBase::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableConveyorBase::Factory_Tick(float deltaTime){ }
uint8 AFGBuildableConveyorBase::MaxNumGrab(float dt) const{ return uint8(); }
uint8 AFGBuildableConveyorBase::EstimatedMaxNumGrab_Threadsafe(float estimatedDeltaTime) const{ return uint8(); }
void AFGBuildableConveyorBase::GainedSignificance_Implementation(){ }
void AFGBuildableConveyorBase::LostSignificance_Implementation(){ }
void AFGBuildableConveyorBase::GainedSignificance_Native(){ }
void AFGBuildableConveyorBase::LostSignificance_Native(){ }
void AFGBuildableConveyorBase::SetupForSignificance(){ }
void AFGBuildableConveyorBase::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
void AFGBuildableConveyorBase::SetConveyorBucketID(int32 ID){ }
float AFGBuildableConveyorBase::GetAvailableSpace() const{ return float(); }
float AFGBuildableConveyorBase::GetCachedAvailableSpace_Threadsafe() const{ return float(); }
bool AFGBuildableConveyorBase::Factory_PeekOutput_Implementation(const  UFGFactoryConnectionComponent* connection, TArray< FInventoryItem >& out_items, TSubclassOf< UFGItemDescriptor > type) const{ return bool(); }
bool AFGBuildableConveyorBase::Factory_GrabOutput_Implementation( UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf< UFGItemDescriptor > type){ return bool(); }
void AFGBuildableConveyorBase::GetDismantleInventoryReturns(TArray< FInventoryStack >& out_returns) const{ }
int32 AFGBuildableConveyorBase::FindItemClosestToLocation(const FVector& location) const{ return int32(); }
bool AFGBuildableConveyorBase::Factory_HasItemAt(int32 index) const{ return bool(); }
const FConveyorBeltItem& AFGBuildableConveyorBase::Factory_PeekItemAt(int32 index) const{ return *(new FConveyorBeltItem); }
void AFGBuildableConveyorBase::Factory_RemoveItemAt(int32 index){ }
void AFGBuildableConveyorBase::Factory_DequeueItem(){ }
void AFGBuildableConveyorBase::Factory_EnqueueItem(const FInventoryItem& item, float initialOffset){ }
bool AFGBuildableConveyorBase::HasRoomOnBelt(float& out_availableSpace) const{ return bool(); }
bool AFGBuildableConveyorBase::HasRoomOnBelt_ThreadSafe(float& out_availableSpace) const{ return bool(); }
