// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSaveSession.h"


UFGSaveSession::UFGSaveSession() : Super() {
	this->mNumRotatingAutosaves = 3;
}
UFGSaveSession::~UFGSaveSession(){ }
void UFGSaveSession::Init(bool willLoad){ }
UFGSaveSession* UFGSaveSession::Get( UWorld* world){ return nullptr; }
UFGSaveSession* UFGSaveSession::Get( UObject* worldContext){ return nullptr; }
void UFGSaveSession::RoutePostLoadGame(){ }
void UFGSaveSession::SaveGame(const FString& fileName, FOnSaveGameComplete completeDelegate, void* userData){ }
bool UFGSaveSession::ReadRawSaveGameData(const FString& saveGameName, TArray< uint8 >& out_rawSaveData) const{ return bool(); }
bool UFGSaveSession::LoadGame(const FString& saveName){ return bool(); }
bool UFGSaveSession::SerializeHeader(FArchive& Ar, FSaveHeader& saveHeader){ return bool(); }
FString UFGSaveSession::SaveNameToFileName(const FString& saveName){ return FString(); }
void UFGSaveSession::SharedInventoryPtrLoaded( FSharedInventoryStatePtr& ptr){ }
void UFGSaveSession::Autosave(){ }
void UFGSaveSession::SetAutosaveInterval(int32 newInterval){ }
UWorld* UFGSaveSession::GetWorld() const{ return nullptr; }
FString UFGSaveSession::GenerateAutosaveName(int32& out_autosaveNum, const FString& sessionName){ return FString(); }
FString UFGSaveSession::GetFullMapName() const{ return FString(); }
void UFGSaveSession::SetupAutosave(){ }
void UFGSaveSession::CheckAutoSaveNotificationTimer(){ }
void UFGSaveSession::SortObjectsByDependency(TArray< UObject* >& io_objectsToSerialize){ }
void UFGSaveSession::CollectObjects(TArray<UObject*> rootSet, TArray< UObject* >& out_objectsToSerialize){ }
void UFGSaveSession::CollectObjects(UObject* rootObject, TArray< UObject* >& out_objectsToSerialize){ }
void UFGSaveSession::GenerateRootSet(TArray<UObject*>& out_rootSet){ }
void UFGSaveSession::LoadDestroyActors(){ }
void UFGSaveSession::PrepareLevelActors(bool prepareForLoad){ }
void UFGSaveSession::OnActorDestroyed(AActor* destroyedActor){ }
void UFGSaveSession::SaveWorldEndOfFrame( UWorld* world, ELevelTick, float){ }
void UFGSaveSession::SaveWorldImplementation(const FString& gameName){ }
bool UFGSaveSession::SaveToDiskWithCompression(const FString& fullFilePath, FBufferArchive& memArchive, FSaveHeader& saveHeader){ return bool(); }
bool UFGSaveSession::LoadCompressedFileFromDisk(const FString& saveGameName){ return bool(); }
bool UFGSaveSession::LoadDeprecatedFileFromDisk(const FString& saveGameName){ return bool(); }
bool UFGSaveSession::PeekAtFileHeader(const FString& fullFilePath, FSaveHeader& out_fileHeader) const{ return bool(); }
bool UFGSaveSession::SerializeLoadedObjects(FArchive& memArchive, bool includesSaveHeader){ return bool(); }
void UFGSaveSession::BundledSaveWorldImplementation(FString gameName){ }
