// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSchematicManager.h"

#if WITH_EDITORONLY_DATA
#endif 
AFGSchematicManager* AFGSchematicManager::Get(UWorld* world){ return nullptr; }
AFGSchematicManager* AFGSchematicManager::Get(UObject* worldContext){ return nullptr; }
int32 AFGSchematicManager::GetTechTier(const FAssetData& schematicAsset){ return int32(); }
EIncludeInBuilds AFGSchematicManager::GetIncludedInBuild(const FAssetData& schematicAsset){ return EIncludeInBuilds(); }
AFGSchematicManager::AFGSchematicManager(){ }
void AFGSchematicManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGSchematicManager::PreInitializeComponents(){ Super::PreInitializeComponents(); }
void AFGSchematicManager::BeginPlay(){ }
void AFGSchematicManager::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGSchematicManager::Tick(float dt){ }
void AFGSchematicManager::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGSchematicManager::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGSchematicManager::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGSchematicManager::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGSchematicManager::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGSchematicManager::NeedTransform_Implementation(){ return bool(); }
bool AFGSchematicManager::ShouldSave_Implementation() const{ return bool(); }
void AFGSchematicManager::GetAvailableSchematics(TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetAvailableSchematicsOfTypes(TArray<ESchematicType> types, TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetPurchasedSchematicsOfTypes(TArray<ESchematicType> types, TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetAllPurchasedSchematics(TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetAllSchematics(TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetAllSchematicsOfType(ESchematicType type, TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetAllSchematicsOfTypeFilteredOnDependency(ESchematicType type, TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
void AFGSchematicManager::GetAllVisibleSchematicsOfType(ESchematicType type, TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
bool AFGSchematicManager::IsSchematicPurchased(TSubclassOf< UFGSchematic > schematicClass, APlayerController* owningPlayerController) const{ return bool(); }
void AFGSchematicManager::GiveAccessToSchematic(TSubclassOf< UFGSchematic > schematicClass,  AFGCharacterPlayer* accessInstigator, bool blockTelemetry){ }
void AFGSchematicManager::AddAvailableSchematic(TSubclassOf< UFGSchematic > schematicClassToAdd){ }
TArray< FItemAmount > AFGSchematicManager::GetCostFor(TSubclassOf< UFGSchematic > schematic){ return TArray<FItemAmount>(); }
TArray< FItemAmount > AFGSchematicManager::GetRemainingCostFor(TSubclassOf< UFGSchematic > schematic){ return TArray<FItemAmount>(); }
TArray< FItemAmount > AFGSchematicManager::GetPaidOffCostFor(TSubclassOf< UFGSchematic > schematic){ return TArray<FItemAmount>(); }
bool AFGSchematicManager::IsSchematicPaidOff(TSubclassOf< UFGSchematic > schematic){ return bool(); }
bool AFGSchematicManager::PayOffOnSchematic(TSubclassOf< UFGSchematic > schematic,  TArray< FItemAmount >& amount){ return bool(); }
bool AFGSchematicManager::SetActiveSchematic(TSubclassOf<  UFGSchematic > newActiveSchematic){ return bool(); }
bool AFGSchematicManager::CanSetAsActiveSchematic(TSubclassOf< UFGSchematic > inSchematic){ return bool(); }
void AFGSchematicManager::LaunchShip(){ }
bool AFGSchematicManager::IsShipAtTradingPost(){ return bool(); }
float AFGSchematicManager::GetTimeUntilShipReturn(){ return float(); }
int32 AFGSchematicManager::GetHighestAvailableTechTier(){ return int32(); }
int32 AFGSchematicManager::GetDefaultMaxAllowedTechTier(){ return int32(); }
int32 AFGSchematicManager::GetMaxAllowedTechTier() const{ return int32(); }
void AFGSchematicManager::ResetSchematicsOfType(ESchematicType type){ }
TSubclassOf< class UFGRecipe > AFGSchematicManager::FixupSave_FindBuiltByRecipe(AActor* forActor){ return TSubclassOf<class UFGRecipe>(); }
void AFGSchematicManager::Debug_DumpStateToLog() const{ }
TArray< TSubclassOf< class UFGRecipe > > AFGSchematicManager::Debug_GetAllRecipes() const{ return TArray<TSubclassOf<class UFGRecipe> >(); }
void AFGSchematicManager::Cheat_GiveAllSchematics(){ }
bool AFGSchematicManager::CanGiveAccessToSchematic(TSubclassOf< UFGSchematic > schematic) const{ return bool(); }
void AFGSchematicManager::GetVisibleSchematicCategoryData(ESchematicType schematicType, TArray< FSchematicCategoryData >& out_schematicCategoryData){ }
void AFGSchematicManager::UnlockAllSchematicsOfType(ESchematicType schematicType, bool requireDependency){ }
void AFGSchematicManager::UnlockSchematicsUpToTier(int32 tier){ }
void AFGSchematicManager::PopulateSchematicsLists(){ }
void AFGSchematicManager::PopulateAvailableSchematicsList(){ }
void AFGSchematicManager::OnRep_ActiveSchematic(){ }
void AFGSchematicManager::OnRep_PurchasedSchematic(TArray< TSubclassOf< UFGSchematic > > lastPurchasedSchematics){ }
void AFGSchematicManager::OnRep_PaidOffOnSchematic(){ }
int32 AFGSchematicManager::FindHighestAvailableTechTier(){ return int32(); }
FSchematicCost* AFGSchematicManager::FindSchematicPayOff(TSubclassOf<  UFGSchematic > schematic){ return nullptr; }
void AFGSchematicManager::AddSchematicPayOff(TSubclassOf<  UFGSchematic > schematic, const TArray< FItemAmount >& amount){ }
void AFGSchematicManager::RemoveSchematicPayOff(TSubclassOf<  UFGSchematic > schematic){ }
void AFGSchematicManager::SubmitUnlockSchematicTelemetry(TSubclassOf< UFGSchematic > schematicClass){ }
void AFGSchematicManager::SubmitMilestoneTelemetry(TSubclassOf< UFGSchematic > activeSchematic){ }
void AFGSchematicManager::TryUnlockNewSchematicsOfType(const FString& userSettingStrID, FTimerHandle& timerHandle, ESchematicType schematicType){ }
void AFGSchematicManager::Internal_TryUnlockNewSchematicsOfType(ESchematicType schematicType){ }
