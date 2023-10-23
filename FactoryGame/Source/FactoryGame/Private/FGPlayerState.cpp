// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "ShoppingList/FGShoppingListComponent.h"

UFGPlayerHotbar::UFGPlayerHotbar() : Super() {

}
void UFGPlayerHotbar::PostInitProperties(){ Super::PostInitProperties(); }
void UFGPlayerHotbar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UFGPlayerHotbar, mShortcuts);
}
UWorld* UFGPlayerHotbar::GetWorld() const{ return nullptr; }
int32 UFGPlayerHotbar::GetFunctionCallspace(UFunction* Function, FFrame* Stack){ return int32(); }
bool UFGPlayerHotbar::CallRemoteFunction(UFunction* Function, void* Parms, FOutParmRec* OutParms, FFrame* Stack){ return bool(); }
void UFGPlayerHotbar::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGPlayerHotbar::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGPlayerHotbar::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGPlayerHotbar::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGPlayerHotbar::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool UFGPlayerHotbar::NeedTransform_Implementation(){ return bool(); }
bool UFGPlayerHotbar::ShouldSave_Implementation() const{ return bool(); }
UFGHotbarShortcut* UFGPlayerHotbar::GetShortcutAtIndex(int32 index) const{ return nullptr; }
UFGHotbarShortcut* UFGPlayerHotbar::K2_CreateShortcutAtIndex(int32 index, TSubclassOf<UFGHotbarShortcut> inClass, bool silent){ return nullptr; }
void UFGPlayerHotbar::RemoveShortcutAtIndex(int32 index, bool silent){ }
void UFGPlayerHotbar::CollapseDuplicateShortcuts(int32 index){ }
void UFGPlayerHotbar::CopyFromHotbar(const UFGPlayerHotbar* otherHotbar, int32 filterIndex){ }
void UFGPlayerHotbar::SetRecipeShortcutAtIndex(int32 index, TSubclassOf<UFGRecipe> recipe, bool silent){ }
void UFGPlayerHotbar::SetFactoryCustomizationShortcutAtIndex(int32 index, TSubclassOf<UFGCustomizationRecipe> customization, bool silent){ }
void UFGPlayerHotbar::SetBlueprintAtIndex(int32 index, const FString& blueprintName, bool silent){ }
void UFGPlayerHotbar::SetEmoteAtIndex(int32 index, TSubclassOf<UFGEmote> inEmote, bool silent){ }
void UFGPlayerHotbar::UpdateActiveHotbar(AFGPlayerController* owner){ }
void UFGPlayerHotbar::Internal_LoadFromLegacyData(const  FHotbar& inLegacyHotbar){ }
void UFGPlayerHotbar::OnShortcutChanged(UFGHotbarShortcut* shortcut){ }
void UFGPlayerHotbar::GetAllShortcuts(TArray<UFGHotbarShortcut*>& out_shortcuts) const{ }
void UFGPlayerHotbar::OnRep_Shortcuts(){ }
void UFGPlayerHotbar::Client_NotifyShortcutUnbound_Implementation(int32 shortcutIndex){ }
void UFGPlayerHotbar::Internal_DestroyShortcutAtIndex(int32 shortcutIndex, bool silent){ }
void UFGPlayerHotbar::Internal_InitializeShortcutAtIndex(int32 shortcutIndex, UFGHotbarShortcut* newShortcut, bool silent){ }
void FPlayerRules::GetDebugOverlayData(TArray<FString>& out_debugOverlayData) const{ }
AFGPlayerState::AFGPlayerState() : Super() {
	this->mLastActivePlayerHotbar = nullptr;
	this->mDefaultEmoteShortcut = nullptr;
	this->mSlotNum = -1;
	this->mPlayerColorData.PingColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mPlayerColorData.NametagColor = FLinearColor(0.0, 0.0, 0.0, 0.0);
	this->mCreatureHostilityMode = EPlayerHostilityMode::PHM_Passive;
	this->mOwnedPawn = nullptr;
	this->mHasReceivedInitialItems = false;
	this->mIsServerAdmin = false;
	this->mCustomColorData.PrimaryColor = FLinearColor(0.0, 0.0, 0.0, 1.0);
	this->mCustomColorData.SecondaryColor = FLinearColor(0.0, 0.0, 0.0, 1.0);
	this->mCustomColorData.Metallic = 0.0;
	this->mCustomColorData.Roughness = 0.0;
	this->mShoppingListSettings.PublicTodoListVisibilty = false;
	this->mShoppingListSettings.PrivateTodoListVisibilty = false;
	this->mShoppingListSettings.RecipeListVisibilty = false;
	this->mShoppingListSettings.Size = 0.0;
	this->mTutorialSubsystem = nullptr;
	this->mTutorialSubsystemClass = nullptr;
	this->mNumArmSlots = 1;
	this->mOnlyShowAffordableRecipes = false;
	this->mLastSelectedResourceSinkShopCategory = nullptr;
	this->mPrivateTodoList = TEXT("");
	this->mShoppingListComponent = CreateDefaultSubobject<UFGShoppingListComponent>(TEXT("ShoppingListComponent"));
	this->PrimaryActorTick.TickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.EndTickGroup = ETickingGroup::TG_PrePhysics;
	this->PrimaryActorTick.bTickEvenWhenPaused = false;
	this->PrimaryActorTick.bCanEverTick = false;
	this->PrimaryActorTick.bStartWithTickEnabled = false;
	this->PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	this->PrimaryActorTick.TickInterval = 0.0;
	this->bReplicateUsingRegisteredSubObjectList = true;
	this->NetUpdateFrequency = 10.0;
}
void AFGPlayerState::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGPlayerState, mPlayerHotbars);
	DOREPLIFETIME(AFGPlayerState, mCurrentHotbarIndex);
	DOREPLIFETIME(AFGPlayerState, mBuildableSubCategoryDefaultMatDesc);
	DOREPLIFETIME(AFGPlayerState, mMaterialSubCategoryDefaultMatDesc);
	DOREPLIFETIME(AFGPlayerState, mNewRecipes);
	DOREPLIFETIME(AFGPlayerState, mSlotNum);
	DOREPLIFETIME(AFGPlayerState, mPlayerColorData);
	DOREPLIFETIME(AFGPlayerState, mPlayerRules);
	DOREPLIFETIME(AFGPlayerState, mIsServerAdmin);
	DOREPLIFETIME(AFGPlayerState, mVisitedAreas);
	DOREPLIFETIME(AFGPlayerState, mCustomColorData);
	DOREPLIFETIME(AFGPlayerState, mShoppingListSettings);
	DOREPLIFETIME(AFGPlayerState, mRememberedFirstTimeEquipmentClasses);
	DOREPLIFETIME(AFGPlayerState, mNumArmSlots);
	DOREPLIFETIME(AFGPlayerState, mOnlyShowAffordableRecipes);
	DOREPLIFETIME(AFGPlayerState, mCollapsedItemCategories);
	DOREPLIFETIME(AFGPlayerState, mFilteredOutMapTypes);
	DOREPLIFETIME(AFGPlayerState, mFilteredOutCompassTypes);
	DOREPLIFETIME(AFGPlayerState, mCollapsedMapCategories);
	DOREPLIFETIME(AFGPlayerState, mNumObservedInventorySlots);
	DOREPLIFETIME(AFGPlayerState, mFavoriteShopSchematics);
	DOREPLIFETIME(AFGPlayerState, mPrivateTodoList);
	DOREPLIFETIME(AFGPlayerState, mShoppingListComponent);
	DOREPLIFETIME(AFGPlayerState, mOpenedWidgetsPersistent);
	DOREPLIFETIME(AFGPlayerState, mPlayerSpecificSchematics);
}
void AFGPlayerState::BeginPlay(){ }
void AFGPlayerState::CopyProperties(APlayerState* playerState){ }
void AFGPlayerState::ClientInitialize(AController* C){ }
void AFGPlayerState::RegisterPlayerWithSession(bool bWasFromInvite){ }
void AFGPlayerState::UnregisterPlayerWithSession(){ }
void AFGPlayerState::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPlayerState::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPlayerState::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPlayerState::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPlayerState::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGPlayerState::NeedTransform_Implementation(){ return bool(); }
bool AFGPlayerState::ShouldSave_Implementation() const{ return bool(); }
void AFGPlayerState::SetPlayerColorData(FPlayerColorData slotData){ }
void AFGPlayerState::SetCreatureHostility(EPlayerHostilityMode hostility){ }
void AFGPlayerState::Server_SetCreatureHostility_Implementation(EPlayerHostilityMode hostility){ }
void AFGPlayerState::SetKeepInventory(const EPlayerKeepInventoryMode keepInventoryMode){ }
void AFGPlayerState::Server_SetKeepInventory_Implementation(const EPlayerKeepInventoryMode keepInventoryMode){ }
FString AFGPlayerState::GetUserName() const{ return FString(); }
FString AFGPlayerState::GetUserID() const{ return FString(); }
FUniqueNetIdRepl AFGPlayerState::GetUniqueNetId() const{ return FUniqueNetIdRepl(); }
void AFGPlayerState::CreateTutorialSubsystem(){ }
TArray< TSubclassOf< class UFGMessageBase > > AFGPlayerState::GetAllMessages(EMessageType messageType){ return TArray<TSubclassOf<class UFGMessageBase> >(); }
void AFGPlayerState::ReadMessage(TSubclassOf<  UFGMessageBase > inMessage){ }
void AFGPlayerState::AddMessage(TSubclassOf<  UFGMessageBase > inMessage){ }
void AFGPlayerState::RemoveMessage(TSubclassOf<  UFGMessageBase > inMessage){ }
void AFGPlayerState::SetHotbarIndex(int32 newHotbarIndex){ }
UFGPlayerHotbar* AFGPlayerState::GetActiveHotbar() const{ return nullptr; }
UFGPlayerHotbar* AFGPlayerState::GetHotbarAtIndex(int32 hotbarIndex) const{ return nullptr; }
int32 AFGPlayerState::FindHotbarIndex(UFGPlayerHotbar* hotbar) const{ return int32(); }
void AFGPlayerState::GetAllHotbars(TArray<UFGPlayerHotbar*>& out_hotbars) const{ }
bool AFGPlayerState::GetAndSetFirstTimeEquipped( AFGEquipment* equipment){ return bool(); }
AFGPlayerController* AFGPlayerState::GetOwningController() const{ return nullptr; }
UFGGameUI* AFGPlayerState::GetGameUI() const{ return nullptr; }
void AFGPlayerState::AddNewRecipe(TSubclassOf< UFGRecipe > recipe){ }
void AFGPlayerState::GetNewRecipes(TArray<TSubclassOf<class UFGRecipe>>& out_newRecipes) const{ }
void AFGPlayerState::RemoveRecipe(TSubclassOf< UFGRecipe > recipe){ }
void AFGPlayerState::Server_RemoveRecipe_Implementation(TSubclassOf< UFGRecipe > recipe){ }
bool AFGPlayerState::Server_RemoveRecipe_Validate(TSubclassOf< UFGRecipe > recipe){ return bool(); }
void AFGPlayerState::AddArmSlots(int32 slotsToAdd){ }
void AFGPlayerState::SetOnlyShowAffordableRecipes(bool enabled){ }
void AFGPlayerState::Server_SetOnlyShowAffordableRecipes_Implementation(bool enabled){ }
bool AFGPlayerState::Server_SetOnlyShowAffordableRecipes_Validate(bool enabled){ return bool(); }
void AFGPlayerState::SetItemCategoryCollapsed(TSubclassOf<  UFGItemCategory > itemCategory, bool collapsed){ }
void AFGPlayerState::Server_SetItemCategoryCollapsed_Implementation(TSubclassOf<  UFGItemCategory > itemCategory, bool collapsed){ }
bool AFGPlayerState::Server_SetItemCategoryCollapsed_Validate(TSubclassOf<  UFGItemCategory > itemCategory, bool collapsed){ return bool(); }
void AFGPlayerState::SetMapFilter(ERepresentationType representationType, bool visible){ }
void AFGPlayerState::Server_SetMapFilter_Implementation(ERepresentationType representationType, bool visible){ }
bool AFGPlayerState::Server_SetMapFilter_Validate(ERepresentationType representationType, bool visible){ return bool(); }
void AFGPlayerState::SetCompassFilter(ERepresentationType representationType, bool visible){ }
void AFGPlayerState::Server_SetCompassFilter_Implementation(ERepresentationType representationType, bool visible){ }
bool AFGPlayerState::Server_SetCompassFilter_Validate(ERepresentationType representationType, bool visible){ return bool(); }
void AFGPlayerState::SetMapCategoryCollapsed(ERepresentationType mapCategory, bool collapsed){ }
void AFGPlayerState::Server_SetMapCategoryCollapsed_Implementation(ERepresentationType mapCategory, bool collapsed){ }
void AFGPlayerState::UpdateOwningPawnActorRepresentation() const{ }
void AFGPlayerState::DumpHotbars(){ }
void AFGPlayerState::UpdateNumObservedInventorySlots(){ }
bool AFGPlayerState::IsShopFavorite(TSubclassOf<class UFGSchematic> schematic) const{ return bool(); }
TArray<TSubclassOf<class UFGSchematic>> AFGPlayerState::GetShopFavorites() const{ return TArray<TSubclassOf<class UFGSchematic>>(); }
void AFGPlayerState::SaveAsShopFavorite(TSubclassOf<class UFGSchematic> schematic){ }
void AFGPlayerState::RemoveAsShopFavorite(TSubclassOf<class UFGSchematic> schematic){ }
void AFGPlayerState::RemoveAllShopFavorites(){ }
TMap< TSubclassOf< class UFGSchematic >, int32 > AFGPlayerState::GetShoppingCart() const{ return TMap<TSubclassOf<class UFGSchematic>,int32>(); }
void AFGPlayerState::SetShoppingCart(TMap< TSubclassOf<  UFGSchematic >, int32 > shoppingCart){ }
void AFGPlayerState::SetPlayerCustomizationSlotData(FFactoryCustomizationColorSlot customColorData){ }
void AFGPlayerState::Server_SetPlayerCustomizationSlotData_Implementation(FFactoryCustomizationColorSlot customColorData){ }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Material > AFGPlayerState::GetSavedMatDescForBuildableCategory(TSubclassOf<  UFGCategory > category, TSubclassOf<  UFGCategory > subCategory){ return TSubclassOf<class UFGFactoryCustomizationDescriptor_Material>(); }
void AFGPlayerState::SetSavedMatDescForBuildableCategory(TSubclassOf<  UFGCategory > category, TSubclassOf< UFGFactoryCustomizationDescriptor_Material > materialDesc, bool skipRep){ }
void AFGPlayerState::Server_SetSavedMatDescForBuildableCategory_Implementation(TSubclassOf<  UFGCategory > category, TSubclassOf< UFGFactoryCustomizationDescriptor_Material > materialDesc){ }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Material > AFGPlayerState::GetSavedMatDescForMaterialCategory(TSubclassOf<  UFGCategory > category){ return TSubclassOf<class UFGFactoryCustomizationDescriptor_Material>(); }
void AFGPlayerState::SetSavedMatDescForMaterialCategory(TSubclassOf<  UFGCategory > category, TSubclassOf< UFGFactoryCustomizationDescriptor_Material > materialDesc, bool updateHotbarShortcuts){ }
void AFGPlayerState::Server_SetSavedMatDescForMaterialCategory_Implementation(TSubclassOf<  UFGCategory > category, TSubclassOf< UFGFactoryCustomizationDescriptor_Material > materialDesc){ }
void AFGPlayerState::UpdateHotbarShortcutsForMaterialDesc(TSubclassOf<  UFGFactoryCustomizationDescriptor_Material > newDefaultMaterialDesc){ }
void AFGPlayerState::SetPublicTodoList(const FString& newTodoList){ }
void AFGPlayerState::Server_SetPublicTodoList_Implementation(const FString& newTodoList){ }
void AFGPlayerState::Client_UpdatePublicTodoList_Implementation(const FString& updatedTodoList){ }
void AFGPlayerState::SetPrivateTodoList(const FString& newTodoList){ }
void AFGPlayerState::Server_SetPrivateTodoList_Implementation(const FString& newTodoList){ }
FString AFGPlayerState::GetPublicTodoList() const{ return FString(); }
void AFGPlayerState::SetShoppingListSettings(const FShoppingListSettings& newShoppingListSettings){ }
void AFGPlayerState::Server_SetShoppingListSettings_Implementation(const FShoppingListSettings& newShoppingListSettings){ }
void AFGPlayerState::CopyFactoryClipboard(UObject* object){ }
void AFGPlayerState::PasteFactoryClipboard(UObject* object){ }
bool AFGPlayerState::GetWidgetHasBeenOpened(TSubclassOf<  UUserWidget > widget, bool& openedThisSession){ return bool(); }
void AFGPlayerState::SetWidgetHasBeenOpened(TSubclassOf<  UUserWidget > widget, bool save){ }
void AFGPlayerState::Server_SetWidgetHasBeenOpened_Implementation(TSubclassOf<  UUserWidget > widget){ }
void AFGPlayerState::Client_OnRecipeConstructed_Implementation(TSubclassOf<  UFGRecipe > recipe, int32 numConstructed){ }
void AFGPlayerState::Native_OnRecipeConstructed(TSubclassOf<  UFGRecipe > recipe, int32 numConstructed){ }
void AFGPlayerState::Native_OnBlueprintConstructed(const FString& blueprintName, int32 numConstructed){ }
void AFGPlayerState::Server_OnBlueprintRemoved_Implementation(const FString& blueprintName){ }
void AFGPlayerState::Client_OnBlueprintRemoved_Implementation(const FString& blueprintName){ }
bool AFGPlayerState::IsInPlayerArray(){ return bool(); }
void AFGPlayerState::SetFlightMode(const bool flightMode){ }
void AFGPlayerState::Server_SetFlightMode_Implementation(const bool flightMode){ }
void AFGPlayerState::SetGodMode(const bool godMode){ }
void AFGPlayerState::Server_SetGodMode_Implementation(const bool godMode){ }
bool AFGPlayerState::IsPlayerSpecificSchematicPurchased(TSubclassOf<  UFGSchematic > schematic){ return bool(); }
void AFGPlayerState::GiveAccessToPlayerSpecificSchematic(TSubclassOf<  UFGSchematic > schematic){ }
void AFGPlayerState::Native_OnFactoryClipboardCopied(UObject* object,  UFGFactoryClipboardSettings* factoryClipboard){ }
void AFGPlayerState::Native_OnFactoryClipboardPasted(UObject* object,  UFGFactoryClipboardSettings* factoryClipboard){ }
void AFGPlayerState::OnRep_PlayerHotbars(){ }
void AFGPlayerState::OnRep_CurrentHotbarIndex(){ }
void AFGPlayerState::OnRep_PlayerColorData(){ }
void AFGPlayerState::OnRep_PlayerRules(){ }
void AFGPlayerState::CreateDefaultHotbars(){ }
void AFGPlayerState::Server_UpdateRecipeShortcut_Implementation(UFGPlayerHotbar* hotbar, int32 shortcutIndex, TSubclassOf<UFGRecipe> newRecipe){ }
void AFGPlayerState::Server_UpdateNumObservedInventorySlots_Implementation(){ }
bool AFGPlayerState::Server_UpdateNumObservedInventorySlots_Validate(){ return bool(); }
void AFGPlayerState::Native_OnPlayerColorDataUpdated(){ }
void AFGPlayerState::SetupCreatureHostility(){ }
void AFGPlayerState::SetupPlayerRules(){ }
void AFGPlayerState::PushPlayerRulesToAdvancedGameSettings(){ }
void AFGPlayerState::OnCreatureHostilityModeUpdated(FString strId, FVariant value){ }
void AFGPlayerState::OnNoBuildCostUpdated(FString strId, FVariant value){ }
void AFGPlayerState::OnKeepInventoryUpdated(FString strId, FVariant value){ }
void AFGPlayerState::OnFlightModeUpdated(FString strId, FVariant value){ }
void AFGPlayerState::OnGodModeUpdated(FString strId, FVariant value){ }
void AFGPlayerState::SetNoBuildCost(const bool noBuildCost){ }
void AFGPlayerState::Server_SetNoBuildCost_Implementation(const bool noBuildCost){ }
void AFGPlayerState::OnRep_PlayerSpecificSchematics(TArray< TSubclassOf< UFGSchematic > > previousPlayerSpecificSchematics){ }
void AFGPlayerState::UpdateActiveHotbarState(){ }
void AFGPlayerState::SubscribeToHotbar(UFGPlayerHotbar* hotbar){ }
void AFGPlayerState::UnsubscribeFromHotbar(UFGPlayerHotbar* hotbar){ }
void AFGPlayerState::OnShortcutConstructed(UFGHotbarShortcut* shortcut){ }
void AFGPlayerState::OnShortcutDestroyed(UFGHotbarShortcut* shortcut){ }
