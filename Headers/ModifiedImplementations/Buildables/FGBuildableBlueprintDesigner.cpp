// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableBlueprintDesigner.h"

#if WITH_EDITOR
void AFGBuildableBlueprintDesigner::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent){ Super::PostEditChangeProperty(PropertyChangedEvent); }
#endif 
AFGBuildableBlueprintDesigner::AFGBuildableBlueprintDesigner(){ }
void AFGBuildableBlueprintDesigner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableBlueprintDesigner::BeginPlay(){ }
void AFGBuildableBlueprintDesigner::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableBlueprintDesigner::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableBlueprintDesigner::GetDismantleRefund_Implementation(TArray< FInventoryStack >& out_refund, bool noBuildCostEnabled) const{ }
void AFGBuildableBlueprintDesigner::Dismantle_Implementation(){ }
bool AFGBuildableBlueprintDesigner::CanDismantle_Implementation() const{ return bool(); }
void AFGBuildableBlueprintDesigner::RegisterInteractingPlayer_Implementation(AFGCharacterPlayer* player){ }
void AFGBuildableBlueprintDesigner::BuildTiledMeshes(UInstancedStaticMeshComponent* tiledMeshComp, const FIntVector& dims){ }
void AFGBuildableBlueprintDesigner::GatherBuildables(TArray< AFGBuildable* >& out_Buildables){ }
void AFGBuildableBlueprintDesigner::OnBuildableConstructedInsideDesigner(AFGBuildable* buildable){ }
void AFGBuildableBlueprintDesigner::OnBuildableDismantledInsideDesigner(AFGBuildable* buildable){ }
void AFGBuildableBlueprintDesigner::OnBuildableChangedInsideDesigner(AFGBuildable* buildable){ }
void AFGBuildableBlueprintDesigner::CalculateBlueprintCost(TArray<FItemAmount>& cost) const{ }
void AFGBuildableBlueprintDesigner::SaveBlueprint(FBlueprintRecord blueprintRecord, AFGPlayerController* controller){ }
void AFGBuildableBlueprintDesigner::DismantleCurrentBuildables(AFGPlayerController* controller){ }
void AFGBuildableBlueprintDesigner::GetCurrentBuildablesDismantleRefund(TArray< FInventoryStack >& out_refund, bool noBuildCostEnabled){ }
EBlueprintDesignerLoadResult AFGBuildableBlueprintDesigner::LoadBlueprintIntoDesigner(UFGBlueprintDescriptor* blueprintDescriptor, AFGPlayerController* controller){ return EBlueprintDesignerLoadResult(); }
FVector AFGBuildableBlueprintDesigner::GetBlueprintDesignerSize() const{ return FVector(); }
bool AFGBuildableBlueprintDesigner::IsTransformOnPerimeterOfDesigner(const FTransform& trans) const{ return bool(); }
bool AFGBuildableBlueprintDesigner::IsLocationOnPerimeterOfDesigner(const FVector& location) const{ return bool(); }
bool AFGBuildableBlueprintDesigner::IsLocationInsideDesigner(const FVector& location) const{ return bool(); }
void AFGBuildableBlueprintDesigner::GetOffsetTransform(FTransform& out_transform) const{ }
UFGInventoryComponent* AFGBuildableBlueprintDesigner::GetInteractingPlayerInventory(){ return nullptr; }
bool AFGBuildableBlueprintDesigner::CanAffordToLoad(UFGBlueprintDescriptor* blueprintDesc, UFGInventoryComponent* playerInv){ return bool(); }
void AFGBuildableBlueprintDesigner::RemoveCostToLoad(UFGBlueprintDescriptor* blueprintDescriptor, UFGInventoryComponent* playerInv){ }
void AFGBuildableBlueprintDesigner::OnBuildEffectFinished(){ }
void AFGBuildableBlueprintDesigner::OnRep_Storage(){ }
void AFGBuildableBlueprintDesigner::OnBuildingsChanged(){ }
void AFGBuildableBlueprintDesigner::RecalculateBlueprintCost(){ }
void AFGBuildableBlueprintDesigner::OnRep_Buildables(){ }
void AFGBuildableBlueprintDesigner::OnRep_RecordData(){ }
void AFGBuildableBlueprintDesigner::OnRep_CostChanged(){ }
