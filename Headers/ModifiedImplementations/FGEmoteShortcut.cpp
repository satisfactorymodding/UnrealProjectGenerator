// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGEmoteShortcut.h"

void UFGEmoteShortcut::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void UFGEmoteShortcut::SetEmote(TSubclassOf<  UFGEmote > emote, bool silent){ }
void UFGEmoteShortcut::Execute_Implementation( AFGPlayerController* owner){ }
bool UFGEmoteShortcut::IsValidShortcut_Implementation( AFGPlayerController* owner) const{ return bool(); }
UTexture2D* UFGEmoteShortcut::GetDisplayImage_Implementation() const{ return nullptr; }
bool UFGEmoteShortcut::IsActive_Implementation( AFGPlayerController* owner) const{ return bool(); }
bool UFGEmoteShortcut::IsSame_Implementation(UFGHotbarShortcut* shortcut) const{ return bool(); }
FString UFGEmoteShortcut::DescribeShortcut_Implementation() const{ return FString(); }
void UFGEmoteShortcut::OnRep_Emote(){ }
