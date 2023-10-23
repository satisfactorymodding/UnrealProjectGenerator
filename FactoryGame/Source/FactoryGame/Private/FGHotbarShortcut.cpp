// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGHotbarShortcut.h"
#include "Net/UnrealNetwork.h"

void UFGHotbarShortcut::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGHotbarShortcut, mShortcutIndex);
	DOREPLIFETIME(UFGHotbarShortcut, mShortcutJustBound);
}
int32 UFGHotbarShortcut::GetFunctionCallspace(UFunction* Function, FFrame* Stack){ return int32(); }
bool UFGHotbarShortcut::CallRemoteFunction(UFunction* Function, void* Parms, FOutParmRec* OutParms, FFrame* Stack){ return bool(); }
void UFGHotbarShortcut::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGHotbarShortcut::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGHotbarShortcut::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGHotbarShortcut::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGHotbarShortcut::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool UFGHotbarShortcut::NeedTransform_Implementation(){ return bool(); }
bool UFGHotbarShortcut::ShouldSave_Implementation() const{ return bool(); }
UWorld* UFGHotbarShortcut::GetWorld() const{ return nullptr; }
void UFGHotbarShortcut::Execute_Implementation( AFGPlayerController* owner){ }
void UFGHotbarShortcut::UpdateActiveShortcut( AFGPlayerController* owner){ }
bool UFGHotbarShortcut::IsValidShortcut_Implementation( AFGPlayerController* owner) const{ return bool(); }
UTexture2D* UFGHotbarShortcut::GetDisplayImage_Implementation() const{ return nullptr; }
bool UFGHotbarShortcut::IsActive_Implementation( AFGPlayerController* owner) const{ return bool(); }
bool UFGHotbarShortcut::IsSame_Implementation(UFGHotbarShortcut* shortcut) const{ return bool(); }
FString UFGHotbarShortcut::DescribeShortcut_Implementation() const{ return FString(); }
void UFGHotbarShortcut::Internal_TryInitializeShortcut(){ }
void UFGHotbarShortcut::Internal_ConditionalDestroyShortcut(){ }
void UFGHotbarShortcut::NotifyShortcutChanged(){ }
void UFGHotbarShortcut::InitializeShortcut_Implementation(){ }
void UFGHotbarShortcut::DestroyShortcut_Implementation(){ }
void UFGHotbarShortcut::OnClientSubsystemsValid(){ }
void UFGHotbarShortcut::TryInitializeWithGameState(){ }
void UFGHotbarShortcut::OnRep_ShortcutBound(){ }
void UFGHotbarShortcut::Client_ResetShortcutJustBound_Implementation(){ }
AFGBuildGun* UFGHotbarShortcut::GetBuildGun( AFGPlayerController* playerController) const{ return nullptr; }
AFGCharacterPlayer* UFGHotbarShortcut::GetValidPlayerCharacter( AFGPlayerController* playerController) const{ return nullptr; }
void UFGHotbarShortcut::SetShortcutJustBound(){ }
void UFGHotbarShortcut::TryFireShortcutBoundDelegate(){ }
