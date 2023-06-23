// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPlayerController.h"

#if WITH_CHEATS
void AFGPlayerController::ToggleCheatBoard(){ }
#endif 
AFGPlayerController::AFGPlayerController(){ }
bool AFGPlayerController::ProcessConsoleExec(const TCHAR* cmd, FOutputDevice& ar, UObject* executor){ return bool(); }
void AFGPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGPlayerController::PostInitializeComponents(){ Super::PostInitializeComponents(); }
void AFGPlayerController::BeginPlay(){ }
void AFGPlayerController::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGPlayerController::Destroyed(){ }
void AFGPlayerController::OnRep_PlayerState(){ }
void AFGPlayerController::SetPawn(APawn* inPawn){ }
void AFGPlayerController::OnPossess(APawn* aPawn){ }
void AFGPlayerController::OnUnPossess(){ }
void AFGPlayerController::PawnLeavingGame(){ }
void AFGPlayerController::PlayerTick(float DeltaTime){ }
void AFGPlayerController::PreClientTravel(const FString& pendingURL, ETravelType travelType, bool isSeamlessTravel){ }
void AFGPlayerController::NotifyLoadedWorld(FName worldPackageName, bool isFinalDest){ }
UFGRemoteCallObject* AFGPlayerController::GetRemoteCallObjectOfClass(TSubclassOf< UFGRemoteCallObject > inClass){ return nullptr; }
UFGRemoteCallObject* AFGPlayerController::RegisterRemoteCallObjectClass(TSubclassOf< UFGRemoteCallObject > inClass){ return nullptr; }
void AFGPlayerController::OnControlledCharacterDied( AFGCharacterBase* character){ }
void AFGPlayerController::OnControlledCharacterRevived(AFGCharacterBase* character){ }
void AFGPlayerController::StartRespawn(){ }
void AFGPlayerController::Server_Respawn_Implementation(){ }
bool AFGPlayerController::Server_Respawn_Validate(){ return bool(); }
void AFGPlayerController::Suicide(){ }
bool AFGPlayerController::NeedRespawn() const{ return bool(); }
void AFGPlayerController::SetRespawningFromDeath(bool respawningFromDeath){ }
bool AFGPlayerController::GetRespawningFromDeath(){ return bool(); }
void AFGPlayerController::OnFOVUpdated(FString cvar){ }
void AFGPlayerController::ExecuteShortcut(int32 shortcutIndex){ }
void AFGPlayerController::GetCurrentShortcuts(TArray<  UFGHotbarShortcut* >& out_shortcuts){ }
void AFGPlayerController::GetPresetShortcuts(int32 presetHotbarIndex, TArray<  UFGHotbarShortcut* >& out_shortcuts){ }
bool AFGPlayerController::DoesHotbarContainMaterialCustomization(){ return bool(); }
void AFGPlayerController::GetAllPresetHotbars(TArray<FPresetHotbar>& out_presetHotbars){ }
void AFGPlayerController::GetPresetHotbar(int32 presetHotbarIndex, FPresetHotbar& out_presetHotbar){ }
bool AFGPlayerController::CreatePresetHotbarFromCurrentHotbar(const FText& presetName, int32 iconIndex){ return bool(); }
bool AFGPlayerController::CanCreateNewPresetHotbar() const{ return bool(); }
bool AFGPlayerController::CopyCurrentHotbarToPresetHotbar(int32 presetHotbarIndex){ return bool(); }
void AFGPlayerController::ChangeNameOfPresetHotbar(int32 presetHotbarIndex, const FText& newName){ }
void AFGPlayerController::ChangeIconIndexOfPresetHotbar(int32 presetHotbarIndex, int32 iconIndex){ }
bool AFGPlayerController::RemovePresetHotbar(int32 presetHotbarIndex){ return bool(); }
void AFGPlayerController::CopyPresetHotbarToCurrentHotbar(int32 presetHotbarIndex){ }
void AFGPlayerController::SetRecipeShortcutOnIndex(TSubclassOf<  UFGRecipe > recipe, int32 onIndex, int32 onHotbarIndex){ }
void AFGPlayerController::SetCustomizationShortcutOnIndex(TSubclassOf<  UFGCustomizationRecipe > customizationRecipe, int32 onIndex){ }
void AFGPlayerController::SetEmoteShortcutOnIndex(TSubclassOf<  UFGEmote > emote, int32 onIndex){ }
void AFGPlayerController::SetBlueprintShortcutOnIndex(const FString& blueprintName, int32 onIndex){ }
void AFGPlayerController::RemovePlayerColorPresetAtIndex(int32 index){ }
void AFGPlayerController::Server_RemovePlayerColorPresetAtIndex_Implementation(int32 index){ }
void AFGPlayerController::AddPlayerColorPreset(FText presetName, FLinearColor color){ }
void AFGPlayerController::Server_AddPlayerColorPreset_Implementation(const FText& presetName, FLinearColor color){ }
void AFGPlayerController::SetDefaultSwatchForBuildableGroup(TSubclassOf<  UFGSwatchGroup > swatchGroup, TSubclassOf<  UFGFactoryCustomizationDescriptor_Swatch > newSwatch){ }
void AFGPlayerController::Server_SetDefaultSwatchForBuildableGroup_Implementation(TSubclassOf<  UFGSwatchGroup > swatchGroup, TSubclassOf<  UFGFactoryCustomizationDescriptor_Swatch > newSwatch){ }
void AFGPlayerController::SetHotbarIndex(int32 newIndex){ }
int32 AFGPlayerController::GetCurrentHotbarIndex(){ return int32(); }
int32 AFGPlayerController::GetNumHotbars(){ return int32(); }
int32 AFGPlayerController::GetNumPresetHotbars() const{ return int32(); }
int32 AFGPlayerController::GetMaxNumPresetHotbars(){ return int32(); }
int32 AFGPlayerController::GetNumSlotsPerHotbar(){ return int32(); }
int32 AFGPlayerController::GetRecipeShortcutIndex(TSubclassOf<  UFGRecipe > recipe) const{ return int32(); }
int32 AFGPlayerController::GetShortcutIndexFromKey(const FKeyEvent& key){ return int32(); }
void AFGPlayerController::Server_RequestFogOfWarData_Implementation(){ }
bool AFGPlayerController::Server_RequestFogOfWarData_Validate(){ return bool(); }
void AFGPlayerController::Client_TransferFogOfWarData_Implementation(const TArray<uint8>& fogOfWarRawData, int32 finalIndex){ }
void AFGPlayerController::Server_RequestMapMarkerData_Implementation(){ }
void AFGPlayerController::Client_TransferMapMarkerData_Implementation(const TArray<FMapMarker>& mapMarkers){ }
void AFGPlayerController::Server_AddMapMarker_Implementation(FMapMarker mapMarker){ }
void AFGPlayerController::Client_OnMapMarkerAdded_Implementation(FMapMarker mapMarker){ }
void AFGPlayerController::Server_RemoveMapMarker_Implementation(int32 index){ }
void AFGPlayerController::Client_OnMapMarkerRemoved_Implementation(int32 index){ }
void AFGPlayerController::Server_SetHighlightRepresentation_Implementation( AFGPlayerState* fgPlayerState,  UFGActorRepresentation* actorRepresentation){ }
void AFGPlayerController::Server_SetHighlighMarker_Implementation( AFGPlayerState* fgPlayerState, int32 markerID){ }
void AFGPlayerController::Client_OnRepresentationHighlighted_Implementation( AFGPlayerState* fgPlayerState,  UFGActorRepresentation* actorRepresentation){ }
void AFGPlayerController::Client_OnMarkerHighlighted_Implementation( AFGPlayerState* fgPlayerState, int32 markerID){ }
void AFGPlayerController::ClientPlayCameraAnimationSequence_Implementation( UCameraAnimationSequence* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraShakePlaySpace Space, FRotator CustomPlaySpace){ }
float AFGPlayerController::GetObjectScreenRadius(AActor* actor, float boundingRadius){ return float(); }
float AFGPlayerController::GetScreenBasedObjectRadius(AActor* actor, float screenRadius){ return float(); }
void AFGPlayerController::Client_AddMessage_Implementation(TSubclassOf<class UFGMessageBase> newMessage){ }
bool AFGPlayerController::GetPlayerHasMessage(TSubclassOf<  UFGMessageBase > newMessage){ return bool(); }
void AFGPlayerController::SetDisabledInputGate(FDisabledInputGate newDisabledInputGate){ }
void AFGPlayerController::Client_NotifyHitFeedback_Implementation(EHitFeedbackType feedbackType, AActor* damageCauser, AFGCharacterBase* hitCharacter){ }
void AFGPlayerController::Client_SendChatMessage_Implementation(const FChatMessageStruct& chatMessage){ }
FString AFGPlayerController::GetScreenshotPath(bool isHighRes){ return FString(); }
bool AFGPlayerController::DestroyNetworkActorHandled(){ return bool(); }
void AFGPlayerController::AcknowledgePossession( APawn* P){ }
void AFGPlayerController::CycleToNextHotbar(){ }
void AFGPlayerController::CycleToPreviousHotbar(){ }
bool AFGPlayerController::GetPresenceState(FPlayerPresenceState& outState) const{ return bool(); }
TSubclassOf< UFGMapArea > AFGPlayerController::GetCurrentMapArea() const{ return TSubclassOf<UFGMapArea>(); }
void AFGPlayerController::OnAreaEnteredServer_Implementation(TSubclassOf< UFGMapArea > newArea){ }
void AFGPlayerController::OnBuildGunStateChanged(EBuildGunState newState){ }
void AFGPlayerController::OnBuildGunRecipeChanged(TSubclassOf<class UFGRecipe> recipe){ }
void AFGPlayerController::OnInteractWidgetAddedOrRemoved( UFGInteractWidget* widget, bool added){ }
int32 AFGPlayerController::GetMappingContextPriority() const{ return int32(); }
UFGGameUI* AFGPlayerController::GetGameUI() const{ return nullptr; }
void AFGPlayerController::PonderRemoveDeadPawn(){ }
AFGCharacterBase* AFGPlayerController::GetControlledCharacter() const{ return nullptr; }
bool AFGPlayerController::ControlledCharacterIsAliveAndWell() const{ return bool(); }
void AFGPlayerController::SetupInputComponent(){ }
void AFGPlayerController::TraceLocationForPing(FHitResult& hitResult){ }
void AFGPlayerController::SpawnAttentionPingFrom2DLoc(FVector2D normalizedLocation){ }
bool AFGPlayerController::AddMapMarkerFrom2DLoc(const FMapMarker& mapMarker, FVector2D normalizedLocation, FMapMarker& out_NewMapMarker){ return bool(); }
void AFGPlayerController::EnterMapMarkerMode(){ }
void AFGPlayerController::ExitMapMarkerMode(){ }
void AFGPlayerController::OnAddMapMarkerPressed(){ }
void AFGPlayerController::UpdateHoveredMapMarker(){ }
void AFGPlayerController::OnDismantlePortableMiner_Implementation( AFGPortableMiner* PortableMiner){ }
void AFGPlayerController::OnDismantleGolfCart_Implementation( AFGWheeledVehicle* inGolfCart){ }
void AFGPlayerController::CheckPawnMapArea(){ }
bool AFGPlayerController::InitMapAreaCheckFunction(){ return bool(); }
void AFGPlayerController::EnterChatMessage(const FString& inMessage){ }
void AFGPlayerController::OnDisabledInputGateChanged_Implementation(){ }
void AFGPlayerController::EnablePhotoMode(bool isEnabled){ }
void AFGPlayerController::TogglePhotoMode(){ }
void AFGPlayerController::ToggleHiResPhotoMode(){ }
bool AFGPlayerController::GiveItemStacks(TSubclassOf<  UFGItemDescriptor > itemDescriptor, int32 numberOfStacks){ return bool(); }
void AFGPlayerController::Server_GiveItemStacks_Implementation(TSubclassOf<  UFGItemDescriptor > itemDescriptor, int32 numberOfStacks){ }
bool AFGPlayerController::GiveItemSingle(TSubclassOf<  UFGItemDescriptor > itemDescriptor, int32 numberOfItems){ return bool(); }
void AFGPlayerController::Server_GiveItemSingle_Implementation(TSubclassOf<  UFGItemDescriptor > itemDescriptor, int32 numberOfItems){ }
void AFGPlayerController::SetupTutorial(){ }
void AFGPlayerController::FinishRespawn(){ }
void AFGPlayerController::Server_SetRecipeShortcutOnIndex_Implementation(TSubclassOf<class UFGRecipe> recipe, int32 onIndex, int32 onHotbarIndex){ }
bool AFGPlayerController::Server_SetRecipeShortcutOnIndex_Validate(TSubclassOf<class UFGRecipe> recipe, int32 onIndex, int32 onHotbarIndex){ return bool(); }
void AFGPlayerController::Server_SetCustomizationShortcutOnIndex_Implementation(TSubclassOf<  UFGCustomizationRecipe > customizationRecipe, int32 onIndex){ }
void AFGPlayerController::Server_SetEmoteShortcutOnIndex_Implementation(TSubclassOf<  UFGEmote > emote, int32 onIndex){ }
void AFGPlayerController::Server_SetBlueprintShortcutOnIndex_Implementation(const FString& blueprintName, int32 onIndex){ }
void AFGPlayerController::Server_SetHotbarIndex_Implementation(int32 index){ }
bool AFGPlayerController::Server_SetHotbarIndex_Validate(int32 index){ return bool(); }
void AFGPlayerController::Server_CreatePresetHotbarFromCurrentHotbar_Implementation(const FText& presetName, int32 iconIndex){ }
bool AFGPlayerController::Server_CreatePresetHotbarFromCurrentHotbar_Validate(const FText& presetName, int32 iconIndex){ return bool(); }
void AFGPlayerController::Server_CopyCurrentHotbarToPresetHotbar_Implementation(int32 presetHotbarIndex){ }
bool AFGPlayerController::Server_CopyCurrentHotbarToPresetHotbar_Validate(int32 presetHotbarIndex){ return bool(); }
void AFGPlayerController::Server_CopyPresetHotbarToCurrentHotbar_Implementation(int32 presetHotbarIndex){ }
bool AFGPlayerController::Server_CopyPresetHotbarToCurrentHotbar_Validate(int32 presetHotbarIndex){ return bool(); }
void AFGPlayerController::Server_SendChatMessage_Implementation(const FChatMessageStruct& newMessage){ }
bool AFGPlayerController::Server_SendChatMessage_Validate(const FChatMessageStruct& newMessage){ return bool(); }
void AFGPlayerController::Server_SpawnAttentionPingActor_Implementation(FVector pingLocation, FVector pingNormal){ }
bool AFGPlayerController::Server_SpawnAttentionPingActor_Validate(FVector pingLocation, FVector pingNormal){ return bool(); }
void AFGPlayerController::Server_Suicide_Implementation(){ }
bool AFGPlayerController::Server_Suicide_Validate(){ return bool(); }
void AFGPlayerController::Server_StartRespawn_Implementation(){ }
bool AFGPlayerController::Server_StartRespawn_Validate(){ return bool(); }
void AFGPlayerController::Server_FinishRespawn_Implementation(){ }
bool AFGPlayerController::Server_FinishRespawn_Validate(){ return bool(); }
void AFGPlayerController::Server_WaitForLevelStreaming(){ }
void AFGPlayerController::Client_WaitForLevelStreaming_Implementation(){ }
void AFGPlayerController::OnRep_IsRespawning(){ }
void AFGPlayerController::DisablePawnMovement(bool isDisabled){ }
void AFGPlayerController::SetRespawnUIVisibility(bool respawnUIVisibility){ }
void AFGPlayerController::testAndProcesAdaMessages(AFGPlayerController* owner, const FString &inMessage, AFGPlayerState* playerState, float serverTimeSeconds,  APlayerState* PlayerState,  AFGGameState* fgGameState){ }
void AFGPlayerController::SetupSavedKeyMappings( UEnhancedInputLocalPlayerSubsystem* inputSubsystem){ }
void AFGPlayerController::Input_Respawn(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_HotbarShortcut1(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_HotbarShortcut2(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_HotbarShortcut3(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_HotbarShortcut4(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_HotbarShortcut5(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_HotbarShortcut6(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_HotbarShortcut7(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_HotbarShortcut8(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_HotbarShortcut9(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_HotbarShortcut10(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_Chat(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_Pause(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_CheatMenu(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_CycleHotbarAxis(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_AttentionPing(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_MapMarkerMode(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_MapMarkerPlace(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_ToggleMap(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_TogglePhotoMode(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_PhotoModeFOVScroll(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_PhotoModeToggleInstructionWidget(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_PhotoModeToggleHiRes(const FInputActionValue& ActionValue){ }
void AFGPlayerController::Input_ClipboardCopy(const FInputActionValue& actionValue){ }
void AFGPlayerController::Input_ClipboardPaste(const FInputActionValue& actionValue){ }
void AFGPlayerController::SetMappingContextBound(UInputMappingContext* context, bool bind, int32 priority){ }
FOnPlayerControllerBegunPlay AFGPlayerController::PlayerControllerBegunPlay = FOnPlayerControllerBegunPlay();
