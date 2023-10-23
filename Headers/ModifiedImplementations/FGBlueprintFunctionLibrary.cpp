// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBlueprintFunctionLibrary.h"

AActor* UFGBlueprintFunctionLibrary::GetOuterActor(const UObject* obj){ return nullptr; }
void UFGBlueprintFunctionLibrary::ShowOutline( UPrimitiveComponent* comp, EOutlineColor color){ }
void UFGBlueprintFunctionLibrary::OccludeOutlineByComponent( UPrimitiveComponent* comp, bool occlude){ }
void UFGBlueprintFunctionLibrary::OccludeOutlineByActor( AActor* actor, bool occlude){ }
void UFGBlueprintFunctionLibrary::HideOutline( UPrimitiveComponent* comp){ }
void UFGBlueprintFunctionLibrary::UpdateUseState(FUseState& state, TSubclassOf< UFGUseState > newState){ }
void UFGBlueprintFunctionLibrary::Cheat_GetAllDescriptors(TArray< TSubclassOf<  UFGItemDescriptor > >& out_descriptors){ }
void UFGBlueprintFunctionLibrary::ApplyCustomizationPrimitiveData( AActor* actor, const FFactoryCustomizationData& customizationData, int32 colorSlotFallback ,  UMeshComponent* onlyApplyToComponent){ }
void UFGBlueprintFunctionLibrary::ApplyDefaultColorPrimitiveData( AActor* actor){ }
void UFGBlueprintFunctionLibrary::GetAllMeshComponentsInClass(const TSubclassOf< AActor > inClass, TArray< UMeshComponent* >& out_components){ }
void UFGBlueprintFunctionLibrary::GetAllDescriptorsSorted(UObject* worldContext,  TArray< TSubclassOf< UFGItemDescriptor > >& out_descriptors){ }
void UFGBlueprintFunctionLibrary::ChangeLanguage(FString target){ }
FString UFGBlueprintFunctionLibrary::GetLanguage(){ return FString(); }
bool UFGBlueprintFunctionLibrary::IsEditorWorld( UObject* worldContext){ return bool(); }
bool UFGBlueprintFunctionLibrary::IsGameWorld( UObject* worldContext){ return bool(); }
float UFGBlueprintFunctionLibrary::LogX(float base, float value){ return float(); }
float UFGBlueprintFunctionLibrary::RoundFloatWithPrecision(float value, int32 MaximumFractionalDigits){ return float(); }
FName UFGBlueprintFunctionLibrary::GetComponentFlagSoftLanding(){ return FName(); }
bool UFGBlueprintFunctionLibrary::IsInAlwaysLoadedLevel(AActor* actor){ return bool(); }
UFGSignificanceManager* UFGBlueprintFunctionLibrary::GetSignificanceManager(UWorld* InWorld){ return nullptr; }
void UFGBlueprintFunctionLibrary::AddStaticSignificance(UObject* WorldContextObject, UObject* Object){ }
void UFGBlueprintFunctionLibrary::RemoveStaticSignificance(UObject* WorldContextObject, UObject* Object){ }
void UFGBlueprintFunctionLibrary::AddGenericTickObjectToSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::RemoveGenericTickObjectFromSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::AddFactoryObjectToSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::RemoveFactoryObjectFromSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::AddConveyorBeltToSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::RemoveConveyorBeltFromSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::AddPipelineToSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::RemoveFromSignificanceManagerGeneric(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::AddGainSignificanceObjectToSignificanceManager(UObject* WorldContextObject, UObject* obj, float desiredGainDistance){ }
void UFGBlueprintFunctionLibrary::RemoveGainSignificanceObjectFromSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::AddAudioVolumeToSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::RemoveAudioVolumeFromSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::AddAmbientSoundSplineToSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::RemoveAmbientSoundSplineFromSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::AddTrainToSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
void UFGBlueprintFunctionLibrary::RemoveTrainFromSignificanceManager(UObject* WorldContextObject, UObject* obj){ }
bool UFGBlueprintFunctionLibrary::ImpactEffectIsRelevant(UObject* worldContext, APawn* instigator, FVector spawnLocation, float visibleCullDistance , float alwaysSuccessDistance , bool skipLOSCheck){ return bool(); }
bool UFGBlueprintFunctionLibrary::ImpactEffectIsWithinDistance(UObject* worldContext, APawn* instigator, FVector spawnLocation, float visibleCullDistance){ return bool(); }
bool UFGBlueprintFunctionLibrary::IsLocallyHumanControlled(APawn* pawn){ return bool(); }
FString UFGBlueprintFunctionLibrary::GetVersionString(){ return FString(); }
bool UFGBlueprintFunctionLibrary::IsAlphaBuild(){ return bool(); }
bool UFGBlueprintFunctionLibrary::CanBeOnConveyor(TSubclassOf< UFGItemDescriptor > inClass){ return bool(); }
void UFGBlueprintFunctionLibrary::GetAvailableRecipesInCategory(UObject* worldContext, TSubclassOf<  UFGCategory > category, TArray< TSubclassOf<  UFGRecipe > >& out_recipes){ }
void UFGBlueprintFunctionLibrary::GetAvailableRecipesInSubCategory(UObject* worldContext, TSubclassOf<  UFGCategory > category, TSubclassOf<  UFGCategory > subCategory, TArray< TSubclassOf<  UFGRecipe > >& out_recipes){ }
void UFGBlueprintFunctionLibrary::GetAvailableRecipesWithDefaultMaterialInSubCategory(APlayerController* playerController, TSubclassOf<  UFGCategory > category, TSubclassOf<  UFGCategory > subCategory,
																	 TArray< TSubclassOf<  UFGRecipe > >& out_recipes){ }
void UFGBlueprintFunctionLibrary::GetAvailableRecipesForMaterialDescriptorInSubCategory(APlayerController* playerController, TSubclassOf<  UFGCategory > category, TSubclassOf<  UFGCategory > subCategory, 
																	 TSubclassOf<  UFGFactoryCustomizationDescriptor_Material > materialDesc,
																	 TArray< TSubclassOf<  UFGRecipe > >& out_recipes){ }
TArray< TSubclassOf< class UFGCategory > > UFGBlueprintFunctionLibrary::GetAvailableSubCategoriesForCategory(UObject* worldContext, TSubclassOf< UFGCategory > category, TSubclassOf<  UFGCategory > outputSubCategoryClass){ return TArray<TSubclassOf<class UFGCategory> >(); }
void UFGBlueprintFunctionLibrary::GetSubCategoriesForSchematicCategory(UObject* worldContext, TSubclassOf<  UFGSchematicCategory > category,  TArray< TSubclassOf<  UFGSchematicCategory > >& out_subCategories){ }
void UFGBlueprintFunctionLibrary::GetVisibleSubCategoriesForSchematicCategory(UObject* worldContext, TSubclassOf<  UFGSchematicCategory > category, ESchematicType schematicType, TArray< TSubclassOf<  UFGSchematicCategory > >& out_subCategories){ }
TArray< TSubclassOf< UFGCategory > > UFGBlueprintFunctionLibrary::GetAllCategoriesFromRecipes(TArray< TSubclassOf<  UFGRecipe > > recipes, TSubclassOf<  UFGCategory > outputCategoryClass){ return TArray<TSubclassOf<UFGCategory> >(); }
TSubclassOf< class UFGQuickSwitchGroup > UFGBlueprintFunctionLibrary::GetQuickSwitchGroupFromRecipe(TSubclassOf<  UFGRecipe > recipe){ return TSubclassOf<class UFGQuickSwitchGroup>(); }
void UFGBlueprintFunctionLibrary::GetMatchingQuickSwitchGroupRecipes(TSubclassOf<  UFGRecipe > recipe, TArray < TSubclassOf<  UFGRecipe > > recipesToMatchAgainst, TArray< TSubclassOf<  UFGRecipe > >& out_recipes){ }
void UFGBlueprintFunctionLibrary::GetAllWidgetsOfClassInHierarchy(UWidget* hierarchyContext, TSubclassOf< UWidget > widgetClass, TArray< UWidget* >& foundWidgets){ }
TArray< TSubclassOf< class UFGItemDescriptor > > UFGBlueprintFunctionLibrary::GetAllItemsInCategory(UObject* worldContext, TSubclassOf< UFGItemCategory > itemCategory){ return TArray<TSubclassOf<class UFGItemDescriptor> >(); }
TArray< TSubclassOf< class UFGItemCategory > > UFGBlueprintFunctionLibrary::GetCategoriesWithAffordableRecipes(AFGCharacterPlayer* playerPawn, TSubclassOf< UObject > forProducer){ return TArray<TSubclassOf<class UFGItemCategory> >(); }
void UFGBlueprintFunctionLibrary::GetAllAvailableCustomizations(UObject* worldContext, TArray< TSubclassOf<  UFGFactoryCustomizationDescriptor > >& out_customizations, TSubclassOf<  UFGFactoryCustomizationDescriptor > customizationClass){ }
void UFGBlueprintFunctionLibrary::GetValidMaterialRecipesSubCategory(UObject* worldContext, TSubclassOf<  UFGCategory > category, TSubclassOf<  UFGCategory > subCategory, TArray< TSubclassOf<  UFGCustomizationRecipe > >& out_matRecipes){ }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Material > UFGBlueprintFunctionLibrary::GetDefaultMatDescForBuildableCategory(APlayerController* playerController, TSubclassOf<  UFGCategory> category, TSubclassOf<  UFGCategory > subCategory){ return TSubclassOf<class UFGFactoryCustomizationDescriptor_Material>(); }
void UFGBlueprintFunctionLibrary::SetDefaultMatDescForBuildableCategory(APlayerController* playerController, TSubclassOf<  UFGCategory > category, TSubclassOf<  UFGFactoryCustomizationDescriptor_Material > materialDesc){ }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Material > UFGBlueprintFunctionLibrary::GetGlobalDefaultMatDescForMaterialCategory(APlayerController* playerController, TSubclassOf<  UFGCategory > category){ return TSubclassOf<class UFGFactoryCustomizationDescriptor_Material>(); }
void UFGBlueprintFunctionLibrary::SetGlobalDefaultMaterialDescriptor(APlayerController* playerController, TSubclassOf<  UFGFactoryCustomizationDescriptor_Material > materialDesc, bool updateHotbarShortcuts){ }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Material > UFGBlueprintFunctionLibrary::GetMaterialDescriptorForBuildingDescriptor(UObject* worldContext, TSubclassOf<  UFGBuildDescriptor > buildingDesc){ return TSubclassOf<class UFGFactoryCustomizationDescriptor_Material>(); }
TSubclassOf< class UFGFactoryCustomizationDescriptor_Material > UFGBlueprintFunctionLibrary::GetMaterialDescriptorForBuildableClass(UObject* worldContext, TSubclassOf<  AFGBuildable > buildable){ return TSubclassOf<class UFGFactoryCustomizationDescriptor_Material>(); }
void UFGBlueprintFunctionLibrary::UpdateHotbarShortcutsForSpecifiedMaterialDescriptor(APlayerController* playerController, TSubclassOf<  UFGFactoryCustomizationDescriptor_Material > materialDesc){ }
bool UFGBlueprintFunctionLibrary::IsLocationNearABase(const UObject* worldContext, FVector inLocation, float closeDistance){ return bool(); }
bool UFGBlueprintFunctionLibrary::IsLocationNearABaseFromResult(const UObject* worldContext, FVector inLocation, float closeDistance, const TArray< FOverlapResult >& Results){ return bool(); }
bool UFGBlueprintFunctionLibrary::TryConvertShortMapNameToTopLevelAssetPath(const FString& mapName, FTopLevelAssetPath& outAssetPath){ return bool(); }
USessionMigrationSequence* UFGBlueprintFunctionLibrary::CreateSessionAndTravelToMap(APlayerController* player, const FString& mapName, const FString& options, const FString& sessionName, ESessionVisibility sessionVisibility){ return nullptr; }
USessionMigrationSequence* UFGBlueprintFunctionLibrary::CreateSessionAndTravelToMapWithStartingLocation(APlayerController* player, const FString& mapName, const FString& startingLocation, const FString& sessionName, ESessionVisibility sessionVisibility, bool skipOnboarding){ return nullptr; }
USessionMigrationSequence* UFGBlueprintFunctionLibrary::LoadSaveFile(TScriptInterface<IFGSaveManagerInterface> saveManager, const FSaveHeader& saveGame,  APlayerController* player, bool enableAdvancedGameSettings){ return nullptr; }
void UFGBlueprintFunctionLibrary::TravelToMainMenu(APlayerController* playerController){ }
void UFGBlueprintFunctionLibrary::SendLocalPlayerToMainMenu(UWorld* world){ }
FString UFGBlueprintFunctionLibrary::LinearColorToHex(FLinearColor inColor){ return FString(); }
FLinearColor UFGBlueprintFunctionLibrary::HexToLinearColor(const FString& inHex){ return FLinearColor(); }
void UFGBlueprintFunctionLibrary::AddPopup(APlayerController* controller, FText Title, FText Body, const FPopupConfirmClicked& ConfirmClickDelegate, EPopupId PopupID , TSubclassOf< UUserWidget > popupClass , UObject* popupInstigator){ }
void UFGBlueprintFunctionLibrary::AddPopupWithCloseDelegate(APlayerController* controller, FText Title, FText Body, const FPopupClosed& CloseDelegate, EPopupId PopupID , TSubclassOf< UUserWidget > popupClass , UObject* popupInstigator){ }
void UFGBlueprintFunctionLibrary::AddPopupWithContent(APlayerController* controller, FText Title, FText Body, const FPopupClosed& CloseDelegate,  UFGPopupWidgetContent* Content, EPopupId PopupID , UObject* popupInstigator){ }
void UFGBlueprintFunctionLibrary::ClosePopup(APlayerController* controller){ }
void UFGBlueprintFunctionLibrary::ClearPopupQueueOfClass(APlayerController* controller, TSubclassOf< UUserWidget > widgetClass){ }
void UFGBlueprintFunctionLibrary::CopyTextToClipboard(FText textToCopy){ }
FText UFGBlueprintFunctionLibrary::CopyTextFromClipboard(){ return FText(); }
void UFGBlueprintFunctionLibrary::RemoveAndReleaseAllChildsFromPanel( AFGHUD* hud, UPanelWidget* panelWidget){ }
void UFGBlueprintFunctionLibrary::RemoveAndReleaseChildFromPanel( AFGHUD* hud, UPanelWidget* panelWidget, int32 index){ }
AFGPlayerController* UFGBlueprintFunctionLibrary::GetLocalPlayerController(const UObject* worldContext){ return nullptr; }
bool UFGBlueprintFunctionLibrary::EqualEqual_FrameTimeFrameTime(FFrameTime frameTimeA, FFrameTime frameTimeB){ return bool(); }
bool UFGBlueprintFunctionLibrary::NotEqual_FrameTimeFrameTime(FFrameTime frameTimeA, FFrameTime frameTimeB){ return bool(); }
FFrameTime UFGBlueprintFunctionLibrary::Conv_IntToFrameTime(int32 frameCount){ return FFrameTime(); }
int32 UFGBlueprintFunctionLibrary::Conv_FrameTimeToInt(FFrameTime frameTime){ return int32(); }
bool UFGBlueprintFunctionLibrary::EqualEqual_FMapMarkerFMapMarker(const FMapMarker& mapMarkerA, const FMapMarker& mapMarkerB){ return bool(); }
int32 UFGBlueprintFunctionLibrary::GetMapMarkerID(const FMapMarker& mapMarker,  bool& out_hasValidID){ return int32(); }
bool UFGBlueprintFunctionLibrary::EvaluateMathExpression(const FString& expression,  FText& out_Result){ return bool(); }
FString UFGBlueprintFunctionLibrary::SecondsToTimeString(float inSeconds){ return FString(); }
FString UFGBlueprintFunctionLibrary::Conv_IntToString(int64 InInt){ return FString(); }
bool UFGBlueprintFunctionLibrary::GetGIsEditor(){ return bool(); }
void UFGBlueprintFunctionLibrary::ScrollToEndAfterTwoTicks(UScrollBox* scrollBox){ }
void UFGBlueprintFunctionLibrary::SetMetadataTag(UObject* object, FName tag, const FString& value){ }
FString UFGBlueprintFunctionLibrary::GetMetadataTag(UObject* object, FName tag){ return FString(); }
bool UFGBlueprintFunctionLibrary::FileLoadString(FString AbsoluteFilePath, FString& String){ return bool(); }
FText UFGBlueprintFunctionLibrary::CutTextByPixelOffset(const FText& text, const FSlateFontInfo& inFontInfo, const int32 horizontalOffset, const FString& suffix){ return FText(); }
void UFGBlueprintFunctionLibrary::GetActorsInRadius(UObject* WorldContextObject, FVector inLocation,  float inRadius, TSubclassOf< AActor > inActorClass, TArray<  AActor* >& result){ }
bool UFGBlueprintFunctionLibrary::IsWidgetUnderCursor( ULocalPlayer* localPlayer,  UUserWidget* widget){ return bool(); }
UObject* UFGBlueprintFunctionLibrary::Conv_SessionSaveStructToObject(FSessionSaveStruct inSessionSaveStruct){ return nullptr; }
UObject* UFGBlueprintFunctionLibrary::Conv_SaveHeaderToObject(FSaveHeader inSaveHeader){ return nullptr; }
void UFGBlueprintFunctionLibrary::WaitForValidSubsystems(const UObject* WorldContextObject,  FLatentActionInfo LatentInfo){ }
void UFGBlueprintFunctionLibrary::WaitForPlayerState(const UObject* WorldContextObject, AFGPlayerController* PlayerController,  FLatentActionInfo LatentInfo,  AFGPlayerState*& out_playerState){ }
void UFGBlueprintFunctionLibrary::WaitForFGHud(const UObject* WorldContextObject,  FLatentActionInfo LatentInfo,  AFGHUD*& out_HUD){ }
void UFGBlueprintFunctionLibrary::WaitForGameUI(const UObject* WorldContextObject,  FLatentActionInfo LatentInfo,  UFGGameUI*& out_GameUI){ }
void UFGBlueprintFunctionLibrary::WaitForCondition(const UObject* WorldContextObject,  FLatentActionInfo LatentInfo, const FLatentActionPredicate& Predicate, bool ExecuteOnDedicatedServer){ }
void UFGBlueprintFunctionLibrary::GetAllPickupableItemDescriptors(UObject* WorldContextObject, TArray< TSubclassOf<  UFGItemDescriptor > >& out_itemDescriptors){ }
bool UFGBlueprintFunctionLibrary::ShouldShowUnstableSaveVersionWarning(){ return bool(); }
bool UFGBlueprintFunctionLibrary::ShouldShowOfflineSessionWarning(){ return bool(); }
FString UFGBlueprintFunctionLibrary::BuildSourceString(const FText& inText){ return FString(); }
void UFGBlueprintFunctionLibrary::BreakCustomizationColorSlot(const  FFactoryCustomizationColorSlot& customData, FLinearColor& primaryColor, FLinearColor& secondaryColor, float& metallic, float& roughness){ }
FFactoryCustomizationColorSlot UFGBlueprintFunctionLibrary::MakeCustomizationColorSlot(FLinearColor primaryColor, FLinearColor secondaryColor, float metallic, float roughness){ return FFactoryCustomizationColorSlot(); }
UTexture2D* UFGBlueprintFunctionLibrary::GetIconForCustomizationDesc(const TSubclassOf<  UFGFactoryCustomizationDescriptor > customizationDesc){ return nullptr; }
void UFGBlueprintFunctionLibrary::GetDescriptionForCustomizationDesc(const TSubclassOf<  UFGFactoryCustomizationDescriptor > customizationDesc, FText& out_description){ }
void UFGBlueprintFunctionLibrary::GetValidBuildablsForCustomization(TSubclassOf<  UFGFactoryCustomizationDescriptor > customizationDesc, TArray< TSubclassOf<  AFGBuildable > >& out_buildables){ }
int32 UFGBlueprintFunctionLibrary::GetIDForCustomizationDesc(const TSubclassOf<  UFGFactoryCustomizationDescriptor > customizationDesc){ return int32(); }
void UFGBlueprintFunctionLibrary::GetMaterialCustomizationBuildableMap(TSubclassOf<  UFGFactoryCustomizationDescriptor > materialCustomization,
													  TMap< TSubclassOf<  AFGBuildable >, TSubclassOf<  UFGRecipe > >& out_buildableMap){ }
void UFGBlueprintFunctionLibrary::GetCustomizationsFromCollectionClass(TSubclassOf<  UFGFactoryCustomizationCollection > collectionClass, TArray< TSubclassOf<  UFGFactoryCustomizationDescriptor > >& out_customizaitons){ }
void UFGBlueprintFunctionLibrary::GetSlotDataForSwatchDesc(TSubclassOf<  UFGFactoryCustomizationDescriptor_Swatch > swatchDesc,  AActor* worldContext, FFactoryCustomizationColorSlot& out_SlotData){ }
bool UFGBlueprintFunctionLibrary::GetIsCategoryDefaultForMaterialDesc(TSubclassOf<  UFGFactoryCustomizationDescriptor_Material > materialDesc){ return bool(); }
void UFGBlueprintFunctionLibrary::SortCustomizationRecipes(TArray< TSubclassOf<  UFGCustomizationRecipe > >& recipes){ }
void UFGBlueprintFunctionLibrary::ApplySkinDataToMeshArray(TArray< UMeshComponent* >& compArr, FFactorySkinComponentGroup& groupData){ }
float UFGBlueprintFunctionLibrary::GetPrimitiveDataFromIndex(int32 Index, UPrimitiveComponent* Component){ return float(); }
float UFGBlueprintFunctionLibrary::GetPrimitiveDefaultDataFromIndex(int32 Index, UPrimitiveComponent* Component){ return float(); }
void UFGBlueprintFunctionLibrary::CSS_SetAnimationAsset(USkeletalMeshComponent* Comp, UAnimationAsset* AnimationAsset){ }
int64 UFGBlueprintFunctionLibrary::GetFrameNumber(){ return int64(); }
float UFGBlueprintFunctionLibrary::FindClosestPlayerSq(AActor* source){ return float(); }
void UFGBlueprintFunctionLibrary::SetWaterCollisionSettings(UStaticMeshComponent* Target){ }
bool UFGBlueprintFunctionLibrary::SegmentIntersection(const FVector& SegmentBeginA, const FVector& SegmentEndA, const FVector& SegmentBeginB, const FVector& SegmentEndB){ return bool(); }
FString UFGBlueprintFunctionLibrary::GetActorGridStringRuntTime(AActor* InActor){ return FString(); }
FVector UFGBlueprintFunctionLibrary::GetEditorCameraLocation(){ return FVector(); }
void UFGBlueprintFunctionLibrary::ED_SetMinDrawDistance(UStaticMeshComponent* Comp, float Distance){ }
