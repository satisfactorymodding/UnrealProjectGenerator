// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableSubsystem.h"

#if STATS
#endif 
AFGBuildableSubsystem::AFGBuildableSubsystem(){ }
void AFGBuildableSubsystem::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableSubsystem::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableSubsystem::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableSubsystem::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableSubsystem::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGBuildableSubsystem::NeedTransform_Implementation(){ return bool(); }
bool AFGBuildableSubsystem::ShouldSave_Implementation() const{ return bool(); }
void AFGBuildableSubsystem::BeginPlay(){ }
void AFGBuildableSubsystem::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableSubsystem::Tick(float dt){ }
void AFGBuildableSubsystem::TickFactory(float dt, ELevelTick TickType){ }
AFGBuildableSubsystem* AFGBuildableSubsystem::Get(UWorld* world){ return nullptr; }
AFGBuildableSubsystem* AFGBuildableSubsystem::Get(UObject* worldContext){ return nullptr; }
AFGBuildable* AFGBuildableSubsystem::BeginSpawnBuildable(TSubclassOf<  AFGBuildable > inClass, const FTransform& inTransform){ return nullptr; }
void AFGBuildableSubsystem::AddBuildable( AFGBuildable* buildable){ }
void AFGBuildableSubsystem::AddConveyor(AFGBuildableConveyorBase* conveyor){ }
AFGBuildableConveyorBase* AFGBuildableSubsystem::GetConnectedConveyorBelt( UFGFactoryConnectionComponent* connection){ return nullptr; }
void AFGBuildableSubsystem::RemoveBuildable( AFGBuildable* buildable){ }
void AFGBuildableSubsystem::RemoveConveyor(AFGBuildableConveyorBase* conveyor){ }
void AFGBuildableSubsystem::RemoveConveyorFromBucket(AFGBuildableConveyorBase* conveyorToRemove){ }
void AFGBuildableSubsystem::RearrangeConveyorBuckets(int32 emptiedBucketID){ }
void AFGBuildableSubsystem::RemoveAndSplitConveyorBucket(AFGBuildableConveyorBase* conveyorToRemove){ }
bool AFGBuildableSubsystem::IsServerSubSystem() const{ return bool(); }
void AFGBuildableSubsystem::GetTypedBuildable(TSubclassOf<  AFGBuildable > inClass, TArray<  AFGBuildable* >& out_buildables) const{ }
void AFGBuildableSubsystem::GetOcclusionAffectingBuildebles(TArray<AFGBuildable*>& Out, const FVector& RequestLocation, float Range, bool bParallel) const{ }
void AFGBuildableSubsystem::ReplayBuildingEffects(){ }
const FFactoryCustomizationColorSlot& AFGBuildableSubsystem::GetColorSlot_Data(uint8 index) const{ return *(new FFactoryCustomizationColorSlot); }
void AFGBuildableSubsystem::SetColorSlot_Data(uint8 index, FFactoryCustomizationColorSlot color){ }
TSubclassOf< class UFGFactoryCustomizationCollection > AFGBuildableSubsystem::GetCollectionForCustomizationClass(TSubclassOf<  UFGFactoryCustomizationDescriptor > collectionClassType) const{ return TSubclassOf<class UFGFactoryCustomizationCollection>(); }
FLinearColor AFGBuildableSubsystem::GetBuildableLightColorSlot(int32 index) const{ return FLinearColor(); }
TArray<FLinearColor> AFGBuildableSubsystem::GetBuildableLightColorSlots() const{ return TArray<FLinearColor>(); }
void AFGBuildableSubsystem::BuildableLightColorSlotsUpdated(const TArray< FLinearColor >& colors){ }
void AFGBuildableSubsystem::UpdateBuildableCullDistances(float newFactor){ }
UMaterialInstanceDynamic* AFGBuildableSubsystem::GetConveyorBelTrackMaterialFromSpeed(float speed, UMaterialInterface* currentMaterial){ return nullptr; }
void AFGBuildableSubsystem::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGBuildableSubsystem::DebugGetFactoryActors(TArray< AActor* >& out_actors){ }
FName AFGBuildableSubsystem::GetMeshMapName(UStaticMesh* mesh, UMeshComponent* sourceComponent){ return FName(); }
FNetConstructionID AFGBuildableSubsystem::GetNewNetConstructionID(){ return FNetConstructionID(); }
void AFGBuildableSubsystem::GetNewNetConstructionID(FNetConstructionID& clientConstructionID){ }
void AFGBuildableSubsystem::SpawnPendingConstructionHologram(FNetConstructionID netConstructionID,  AFGHologram* templateHologram,  AFGBuildGun* instigatingBuildGun){ }
void AFGBuildableSubsystem::AddPendingConstructionHologram(FNetConstructionID netConstructionID,  AFGHologram* hologram){ }
void AFGBuildableSubsystem::RemovePendingConstructionHologram(FNetConstructionID netConstructionID){ }
void AFGBuildableSubsystem::ApplyCustomizationPreview( IFGColorInterface* colorInterface, const FFactoryCustomizationData& previewData){ }
void AFGBuildableSubsystem::ClearCustomizationPreview( IFGColorInterface* colorInterface){ }
void AFGBuildableSubsystem::ClearAllCustomizationPreviews(){ }
void AFGBuildableSubsystem::TryRemovePendingDetailActor( AFGReplicationDetailActor* detailActor){ }
void AFGBuildableSubsystem::AddPendingRemovalDetailActor( AFGReplicationDetailActor* detailActor){ }
AFGPlayerController* AFGBuildableSubsystem::GetLocalPlayerController() const{ return nullptr; }
float AFGBuildableSubsystem::GetDistanceSqToBoundingBox(const FVector& point,  AFGBuildable* buildable) const{ return float(); }
void AFGBuildableSubsystem::RegisterFactoryTickFunction(bool shouldRegister){ }
void AFGBuildableSubsystem::CreateFactoryStatID() const{ }
void AFGBuildableSubsystem::UpdateReplayEffects(float dt){ }
void AFGBuildableSubsystem::AddToTickGroup(AFGBuildable* buildable){ }
void AFGBuildableSubsystem::RemoveFromTickGroup(AFGBuildable* buildable){ }
void AFGBuildableSubsystem::SetupColoredMeshInstances(AFGBuildable* buildable){ }
void AFGBuildableSubsystem::SetupProductionIndicatorInstancing( AFGBuildable* buildable){ }
void AFGBuildableSubsystem::TickFactoryActors(float dt){ }
void AFGBuildableSubsystem::UpdateConveyorRenderType(FString cvar){ }
UFGColoredInstanceManager* AFGBuildableSubsystem::GetColoredInstanceManager( UFGColoredInstanceMeshProxy* proxy){ return nullptr; }
UFGFactoryLegInstanceManager* AFGBuildableSubsystem::GetFactoryLegInstanceManager( UFGFactoryLegInstanceMeshProxy* proxy){ return nullptr; }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Swatch > AFGBuildableSubsystem::GetMigrationSwatchForSlot(int32 slotID){ return TSubclassOf<class UFGFactoryCustomizationDescriptor_Swatch>(); }
bool AFGBuildableSubsystem::IsBasedOn(const UMaterialInterface* instance, const UMaterial* base){ return bool(); }
uint8 AFGBuildableSubsystem::mCurrentSubStep = uint8();
uint8 AFGBuildableSubsystem::mCurrentSubStepMax = uint8();
