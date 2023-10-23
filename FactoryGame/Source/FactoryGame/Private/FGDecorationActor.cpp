// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDecorationActor.h"
#include "Net/UnrealNetwork.h"

AFGDecorationActor::AFGDecorationActor() : Super() {
	this->mDecorationDescriptor = nullptr;
}
void AFGDecorationActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGDecorationActor, mDecorationDescriptor);
}
void AFGDecorationActor::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDecorationActor::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDecorationActor::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDecorationActor::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDecorationActor::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGDecorationActor::NeedTransform_Implementation(){ return bool(); }
bool AFGDecorationActor::ShouldSave_Implementation() const{ return bool(); }
void AFGDecorationActor::UpdateUseState_Implementation( AFGCharacterPlayer* byCharacter, const FVector& atLocation,  UPrimitiveComponent* componentHit, FUseState& out_useState){ }
FText AFGDecorationActor::GetLookAtDecription_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGDecorationActor::StartIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
void AFGDecorationActor::StopIsLookedAt_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
