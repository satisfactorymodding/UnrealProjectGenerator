// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSaveSession.h"

FPerStreamingLevelSaveData& UFGSaveSession::GetLevelSaveData(ULevel* level){ return mRuntimeLevelState; }
FPerStreamingLevelSaveData& UFGSaveSession::GetLevelSaveData(const FString& levelName, bool isPersistent){ return mRuntimeLevelState; }

#if STATS
uint32 FPerBasicLevelSaveData::GetMemoryConsumption() const{ return uint32(); }
#endif 
void FPerStreamingLevelSaveData::PreAllocate(int32 initialBlobSize, int32 estimatedDestroyedActors){ }
void FPersistentAndRuntimeSaveData::ResetBlobData(){ }
UFGSaveSession::UFGSaveSession(){ }
UFGSaveSession::~UFGSaveSession(){ }
void UFGSaveSession::BeginDestroy(){ Super::BeginDestroy(); }
void UFGSaveSession::Init(bool willLoad,  AFGGameMode* gameMode){ }
void UFGSaveSession::OnAutosaveIntervalUpdated(FString cvar){ }
void UFGSaveSession::Cleanup(){ }
UFGSaveSession* UFGSaveSession::Get( UWorld* world){ return nullptr; }
UFGSaveSession* UFGSaveSession::Get( UObject* worldContext){ return nullptr; }
void UFGSaveSession::RoutePostLoadGame(){ }
void UFGSaveSession::SaveGame(const FString& fileName, FOnSaveGameComplete completeDelegate, void* userData){ }
bool UFGSaveSession::ReadRawSaveGameData(const FString& saveGameName, TArray< uint8 >& out_rawSaveData) const{ return bool(); }
bool UFGSaveSession::LoadGame(const FString& saveName){ return bool(); }
bool UFGSaveSession::SerializeHeader(FArchive& Ar, FSaveHeader& saveHeader){ return bool(); }
FString UFGSaveSession::SaveNameToFileName(const FString& saveName){ return FString(); }
void UFGSaveSession::SharedInventoryPtrLoaded( FSharedInventoryStatePtr& ptr){ }
FObjectReferenceDisc UFGSaveSession::FixupObjectReferenceForPartitionedWorld(const FObjectReferenceDisc& Reference, const  AFGWorldSettings& WorldSettings){ return FObjectReferenceDisc(); }
void UFGSaveSession::Autosave(){ }
void UFGSaveSession::SetAutosaveInterval(int32 newInterval){ }
void UFGSaveSession::DumpUnresolvedDestroyedActors(){ }
void UFGSaveSession::PurgeUnresolvedDestroyedActors(){ }
bool UFGSaveSession::LoadPreLevelStreamingSave(FString saveName){ return bool(); }
void UFGSaveSession::OnLevelAddedToWorld(ULevel* inLevel, UWorld* inWorld){ }
void UFGSaveSession::OnLevelRemovedFromWorld(ULevel* inLevel, UWorld* inWorld){ }
void UFGSaveSession::OnLevelPlacedActorDestroyed(AActor* destroyedActor){ }
void UFGSaveSession::OnRuntimeSpawnedActorDestroyed(AActor* destroyedActor){ }
void UFGSaveSession::OnActorSpawned(AActor* spawnedActor){ }
void UFGSaveSession::SaveLevelState(ULevel* forLevel, bool markAsUpToDate){ }
void UFGSaveSession::CleanupPerLevelData(){ }
void UFGSaveSession::DeleteSave(FString sessionName, int32 autosaveNum){ }
UWorld* UFGSaveSession::GetWorld() const{ return nullptr; }
FString UFGSaveSession::GenerateAutosaveName(int32& out_autosaveNum, const FString& sessionName){ return FString(); }
FString UFGSaveSession::GetFullMapName() const{ return FString(); }
void UFGSaveSession::SetupAutosave(){ }
void UFGSaveSession::CheckAutoSaveNotificationTimer(){ }
void UFGSaveSession::SortObjectsByDependency(TArray< UObject* >& io_objectsToSerialize){ }
void UFGSaveSession::CollectObjects(TArray<UObject*>& rootSet, TArray< UObject* >& out_objectsToSerialize){ }
void UFGSaveSession::GenerateRootSet( ULevel* level, TArray<UObject*>& out_rootSet){ }
void UFGSaveSession::LoadDestroyActors(ULevel* level){ }
void UFGSaveSession::LoadLegacyDestroyedActors(){ }
int32 UFGSaveSession::TryResolveLegacyDestroyedActors( ULevel* level){ return int32(); }
void UFGSaveSession::PrepareLevelActors(ULevel* level, bool prepareForLoad){ }
void UFGSaveSession::DeserializeStreamingLevelState(ULevel* level){ }
void UFGSaveSession::DeserializePersistentAndRuntimeState(){ }
void UFGSaveSession::MakeSureAllActorsAreSaved(){ }
TArray< AActor* > UFGSaveSession::GatherSaveActors(ULevel* level){ return TArray<AActor*>(); }
void UFGSaveSession::SaveWorldEndOfFrame( UWorld* world, ELevelTick, float){ }
void UFGSaveSession::SaveWorldImplementation(const FString& gameName){ }
bool UFGSaveSession::SaveToDiskWithCompression(const FString& fullFilePath, FBufferArchive64& memArchive, FSaveHeader& saveHeader){ return bool(); }
bool UFGSaveSession::LoadCompressedFileFromDisk(const FString& saveGameName){ return bool(); }
bool UFGSaveSession::LoadDeprecatedFileFromDisk(const FString& saveGameName){ return bool(); }
bool UFGSaveSession::PeekAtFileHeader(const FString& fullFilePath, FSaveHeader& out_fileHeader) const{ return bool(); }
bool UFGSaveSession::SerializeLoadedObjects(FArchive& memArchive, bool includesSaveHeader){ return bool(); }
bool UFGSaveSession::SerializeLoadedObjectsLegacy(FArchive& memArchive){ return bool(); }
void UFGSaveSession::BundledSaveWorldImplementation(FString gameName){ }
