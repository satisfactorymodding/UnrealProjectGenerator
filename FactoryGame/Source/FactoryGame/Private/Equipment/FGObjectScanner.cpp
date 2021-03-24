// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGObjectScanner.h"

AFGObjectScanner::AFGObjectScanner() : Super() {
	this->mBeepDelayMax = 1.5;
	this->mBeepDelayMin = 0.200000002980232;
	this->mDetectionRange = 500;
	this->mUpdateClosestObjectTime = 2;
	this->mShouldBeepEvenIfNoObject = true;
	this->mEquipmentSlot = EEquipmentSlot::ES_ARMS;
	this->mArmAnimation = EArmEquipment::AE_ObjectScanner;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bOnlyRelevantToOwner = true;
	this->bNetUseOwnerRelevancy = true;
	this->SetReplicates(true);
}
void AFGObjectScanner::BeginPlay(){ }
void AFGObjectScanner::Tick(float deltaTime){ }
void AFGObjectScanner::Equip( AFGCharacterPlayer* character){ }
void AFGObjectScanner::UnEquip(){ }
bool AFGObjectScanner::CycleForward(){ return bool(); }
bool AFGObjectScanner::CycleBackward(){ return bool(); }
FScannableDetails AFGObjectScanner::GetCurrentDetails(){ return FScannableDetails(); }
TArray < FScannableDetails > AFGObjectScanner::GetAvailableObjectDetails(){ return TArray< FScannableDetails>(); }
void AFGObjectScanner::SetScannableEntry(TSubclassOf< AActor > scannableClass){ }
void AFGObjectScanner::PrecacheObjects(){ }
bool AFGObjectScanner::Internal_CycleObjects(ECycleDirection direction){ return bool(); }
void AFGObjectScanner::RemoveInvalidObjectsFromCache(TSubclassOf< AActor > scannableClass){ }
void AFGObjectScanner::UpdateClosestObject(){ }
void AFGObjectScanner::Internal_PlayBeep(){ }
void AFGObjectScanner::GetAllActorsOfClassAsWeakPtr(TSubclassOf<  AActor > actorClass, TArray< TWeakObjectPtr<  AActor > > &out_Actors){ }
TArray<TTuple<FScannableDetails, int32>> AFGObjectScanner::GetCurrentDetailsWithIndex(){ return TArray<TTuple<FScannableDetails,int32>>(); }
void AFGObjectScanner::TryToEquipDefaultObject(){ }
void AFGObjectScannerAttachment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGObjectScannerAttachment::OnRep_IsBeeping(){ }
void AFGObjectScannerAttachment::OnRep_ScannerLightColor(){ }
