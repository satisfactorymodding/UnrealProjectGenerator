// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UUserWidget;
class UObject;
struct FLinearColor;
struct FVector;
class AFGCharacterPlayer;
class UFGItemCategory;
class UFGItemDescriptor;
class UWidget;
class UFGBuildCategory;
class UFGBuildSubCategory;
class UFGRecipe;
class APawn;
class AActor;
struct FUseState;
class UFGUseState;
class UPrimitiveComponent;
enum class EOutlineColor : uint8;
#ifdef FACTORYGAME_FGBlueprintFunctionLibrary_generated_h
#error "FGBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in FGBlueprintFunctionLibrary.h"
#endif
#define FACTORYGAME_FGBlueprintFunctionLibrary_generated_h

#define FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClosePopup) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::ClosePopup(Z_Param_controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPopupWithCloseDelegate) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_controller); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Title); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Body); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CloseDelegate); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PopupID); \
		P_GET_OBJECT(UClass,Z_Param_popupClass); \
		P_GET_OBJECT(UObject,Z_Param_popupInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddPopupWithCloseDelegate(Z_Param_controller,Z_Param_Title,Z_Param_Body,FPopupClosed(Z_Param_Out_CloseDelegate),EPopupId(Z_Param_PopupID),Z_Param_popupClass,Z_Param_popupInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPopup) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_controller); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Title); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Body); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_ConfirmClickDelegate); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PopupID); \
		P_GET_OBJECT(UClass,Z_Param_popupClass); \
		P_GET_OBJECT(UObject,Z_Param_popupInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddPopup(Z_Param_controller,Z_Param_Title,Z_Param_Body,FPopupConfirmClicked(Z_Param_Out_ConfirmClickDelegate),EPopupId(Z_Param_PopupID),Z_Param_popupClass,Z_Param_popupInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColorToHex) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_inColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGBlueprintFunctionLibrary::LinearColorToHex(Z_Param_inColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTravelToMainMenu) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::TravelToMainMenu(Z_Param_playerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSessionAndTravelToMap) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_player); \
		P_GET_PROPERTY(UStrProperty,Z_Param_mapName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_options); \
		P_GET_PROPERTY(UStrProperty,Z_Param_sessionName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_sessionVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::CreateSessionAndTravelToMap(Z_Param_player,Z_Param_mapName,Z_Param_options,Z_Param_sessionName,ESessionVisibility(Z_Param_sessionVisibility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocationNearABase) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT(FVector,Z_Param_inLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_closeDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::IsLocationNearABase(Z_Param_worldContext,Z_Param_inLocation,Z_Param_closeDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCategoriesWithAffordableRecipes) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_playerPawn); \
		P_GET_OBJECT(UClass,Z_Param_forProducer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGItemCategory> >*)Z_Param__Result=UFGBlueprintFunctionLibrary::GetCategoriesWithAffordableRecipes(Z_Param_playerPawn,Z_Param_forProducer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllItemsInCategory) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(UClass,Z_Param_itemCategory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGItemDescriptor> >*)Z_Param__Result=UFGBlueprintFunctionLibrary::GetAllItemsInCategory(Z_Param_worldContext,Z_Param_itemCategory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsOfClassInHierarchy) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_hierarchyContext); \
		P_GET_OBJECT(UClass,Z_Param_widgetClass); \
		P_GET_TARRAY_REF(UWidget*,Z_Param_Out_foundWidgets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::GetAllWidgetsOfClassInHierarchy(Z_Param_hierarchyContext,Z_Param_widgetClass,Z_Param_Out_foundWidgets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableSubCategoriesForCategory) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(UClass,Z_Param_buildCategory); \
		P_GET_TARRAY_REF(TSubclassOf<UFGBuildSubCategory> ,Z_Param_Out_out_subCategories); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::GetAvailableSubCategoriesForCategory(Z_Param_worldContext,Z_Param_buildCategory,Z_Param_Out_out_subCategories); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableRecipesInSubCategory) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(UClass,Z_Param_subCategory); \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::GetAvailableRecipesInSubCategory(Z_Param_worldContext,Z_Param_subCategory,Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableRecipesInCategory) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(UClass,Z_Param_buildCategory); \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::GetAvailableRecipesInCategory(Z_Param_worldContext,Z_Param_buildCategory,Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllBuildCategories) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_TARRAY_REF(TSubclassOf<UFGBuildCategory> ,Z_Param_Out_out_buildCategories); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::GetAllBuildCategories(Z_Param_worldContext,Z_Param_Out_out_buildCategories); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBeOnConveyor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::CanBeOnConveyor(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlphaBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::IsAlphaBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVersionString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGBlueprintFunctionLibrary::GetVersionString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocallyHumanControlled) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::IsLocallyHumanControlled(Z_Param_pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImpactEffectIsWithinDistance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(APawn,Z_Param_instigator); \
		P_GET_STRUCT(FVector,Z_Param_spawnLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_visibleCullDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::ImpactEffectIsWithinDistance(Z_Param_worldContext,Z_Param_instigator,Z_Param_spawnLocation,Z_Param_visibleCullDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImpactEffectIsRelevant) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(APawn,Z_Param_instigator); \
		P_GET_STRUCT(FVector,Z_Param_spawnLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_visibleCullDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alwaysSuccessDistance); \
		P_GET_UBOOL(Z_Param_skipLOSCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::ImpactEffectIsRelevant(Z_Param_worldContext,Z_Param_instigator,Z_Param_spawnLocation,Z_Param_visibleCullDistance,Z_Param_alwaysSuccessDistance,Z_Param_skipLOSCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTrainFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveTrainFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTrainToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddTrainToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAmbientSoundSplineFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveAmbientSoundSplineFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAmbientSoundSplineToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddAmbientSoundSplineToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAudioVolumeFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveAudioVolumeFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAudioVolumeToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddAudioVolumeToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGainSignificanceObjectFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveGainSignificanceObjectFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGainSignificanceObjectToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_desiredGainDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddGainSignificanceObjectToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj,Z_Param_desiredGainDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveConveyorBeltFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveConveyorBeltFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddConveyorBeltToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddConveyorBeltToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFactoryObjectFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveFactoryObjectFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddFactoryObjectToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddFactoryObjectToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGenericTickObjectFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveGenericTickObjectFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGenericTickObjectToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddGenericTickObjectToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInAlwaysLoadedLevel) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::IsInAlwaysLoadedLevel(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCmS2KmH) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CmS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGBlueprintFunctionLibrary::CmS2KmH(Z_Param_CmS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentFlagSoftLanding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UFGBlueprintFunctionLibrary::GetComponentFlagSoftLanding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRoundFloatWithPrecision) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumFractionalDigits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGBlueprintFunctionLibrary::RoundFloatWithPrecision(Z_Param_value,Z_Param_MaximumFractionalDigits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogX) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_base); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGBlueprintFunctionLibrary::LogX(Z_Param_base,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGameWorld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::IsGameWorld(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorWorld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::IsEditorWorld(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLanguage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGBlueprintFunctionLibrary::GetLanguage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeLanguage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::ChangeLanguage(Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllDescriptorsSorted) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_TARRAY_REF(TSubclassOf<UFGItemDescriptor> ,Z_Param_Out_out_descriptors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::GetAllDescriptorsSorted(Z_Param_worldContext,Z_Param_Out_out_descriptors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheat_GetAllDescriptors) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGItemDescriptor> ,Z_Param_Out_out_descriptors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::Cheat_GetAllDescriptors(Z_Param_Out_out_descriptors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateUseState) \
	{ \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_state); \
		P_GET_OBJECT(UClass,Z_Param_newState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::UpdateUseState(Z_Param_Out_state,Z_Param_newState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideOutline) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_comp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::HideOutline(Z_Param_comp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOutline) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_comp); \
		P_GET_ENUM(EOutlineColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::ShowOutline(Z_Param_comp,EOutlineColor(Z_Param_color)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOuterActor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UFGBlueprintFunctionLibrary::GetOuterActor(Z_Param_obj); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClosePopup) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::ClosePopup(Z_Param_controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPopupWithCloseDelegate) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_controller); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Title); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Body); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_CloseDelegate); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PopupID); \
		P_GET_OBJECT(UClass,Z_Param_popupClass); \
		P_GET_OBJECT(UObject,Z_Param_popupInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddPopupWithCloseDelegate(Z_Param_controller,Z_Param_Title,Z_Param_Body,FPopupClosed(Z_Param_Out_CloseDelegate),EPopupId(Z_Param_PopupID),Z_Param_popupClass,Z_Param_popupInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPopup) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_controller); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Title); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Body); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_ConfirmClickDelegate); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PopupID); \
		P_GET_OBJECT(UClass,Z_Param_popupClass); \
		P_GET_OBJECT(UObject,Z_Param_popupInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddPopup(Z_Param_controller,Z_Param_Title,Z_Param_Body,FPopupConfirmClicked(Z_Param_Out_ConfirmClickDelegate),EPopupId(Z_Param_PopupID),Z_Param_popupClass,Z_Param_popupInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearColorToHex) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_inColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGBlueprintFunctionLibrary::LinearColorToHex(Z_Param_inColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTravelToMainMenu) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::TravelToMainMenu(Z_Param_playerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSessionAndTravelToMap) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_player); \
		P_GET_PROPERTY(UStrProperty,Z_Param_mapName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_options); \
		P_GET_PROPERTY(UStrProperty,Z_Param_sessionName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_sessionVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::CreateSessionAndTravelToMap(Z_Param_player,Z_Param_mapName,Z_Param_options,Z_Param_sessionName,ESessionVisibility(Z_Param_sessionVisibility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocationNearABase) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_STRUCT(FVector,Z_Param_inLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_closeDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::IsLocationNearABase(Z_Param_worldContext,Z_Param_inLocation,Z_Param_closeDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCategoriesWithAffordableRecipes) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_playerPawn); \
		P_GET_OBJECT(UClass,Z_Param_forProducer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGItemCategory> >*)Z_Param__Result=UFGBlueprintFunctionLibrary::GetCategoriesWithAffordableRecipes(Z_Param_playerPawn,Z_Param_forProducer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllItemsInCategory) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(UClass,Z_Param_itemCategory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGItemDescriptor> >*)Z_Param__Result=UFGBlueprintFunctionLibrary::GetAllItemsInCategory(Z_Param_worldContext,Z_Param_itemCategory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllWidgetsOfClassInHierarchy) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_hierarchyContext); \
		P_GET_OBJECT(UClass,Z_Param_widgetClass); \
		P_GET_TARRAY_REF(UWidget*,Z_Param_Out_foundWidgets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::GetAllWidgetsOfClassInHierarchy(Z_Param_hierarchyContext,Z_Param_widgetClass,Z_Param_Out_foundWidgets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableSubCategoriesForCategory) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(UClass,Z_Param_buildCategory); \
		P_GET_TARRAY_REF(TSubclassOf<UFGBuildSubCategory> ,Z_Param_Out_out_subCategories); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::GetAvailableSubCategoriesForCategory(Z_Param_worldContext,Z_Param_buildCategory,Z_Param_Out_out_subCategories); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableRecipesInSubCategory) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(UClass,Z_Param_subCategory); \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::GetAvailableRecipesInSubCategory(Z_Param_worldContext,Z_Param_subCategory,Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableRecipesInCategory) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(UClass,Z_Param_buildCategory); \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::GetAvailableRecipesInCategory(Z_Param_worldContext,Z_Param_buildCategory,Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllBuildCategories) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_TARRAY_REF(TSubclassOf<UFGBuildCategory> ,Z_Param_Out_out_buildCategories); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::GetAllBuildCategories(Z_Param_worldContext,Z_Param_Out_out_buildCategories); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBeOnConveyor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::CanBeOnConveyor(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlphaBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::IsAlphaBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVersionString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGBlueprintFunctionLibrary::GetVersionString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocallyHumanControlled) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::IsLocallyHumanControlled(Z_Param_pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImpactEffectIsWithinDistance) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(APawn,Z_Param_instigator); \
		P_GET_STRUCT(FVector,Z_Param_spawnLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_visibleCullDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::ImpactEffectIsWithinDistance(Z_Param_worldContext,Z_Param_instigator,Z_Param_spawnLocation,Z_Param_visibleCullDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execImpactEffectIsRelevant) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_OBJECT(APawn,Z_Param_instigator); \
		P_GET_STRUCT(FVector,Z_Param_spawnLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_visibleCullDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alwaysSuccessDistance); \
		P_GET_UBOOL(Z_Param_skipLOSCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::ImpactEffectIsRelevant(Z_Param_worldContext,Z_Param_instigator,Z_Param_spawnLocation,Z_Param_visibleCullDistance,Z_Param_alwaysSuccessDistance,Z_Param_skipLOSCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTrainFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveTrainFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTrainToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddTrainToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAmbientSoundSplineFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveAmbientSoundSplineFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAmbientSoundSplineToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddAmbientSoundSplineToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAudioVolumeFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveAudioVolumeFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAudioVolumeToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddAudioVolumeToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGainSignificanceObjectFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveGainSignificanceObjectFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGainSignificanceObjectToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_desiredGainDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddGainSignificanceObjectToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj,Z_Param_desiredGainDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveConveyorBeltFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveConveyorBeltFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddConveyorBeltToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddConveyorBeltToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFactoryObjectFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveFactoryObjectFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddFactoryObjectToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddFactoryObjectToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGenericTickObjectFromSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::RemoveGenericTickObjectFromSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGenericTickObjectToSignificanceManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::AddGenericTickObjectToSignificanceManager(Z_Param_WorldContextObject,Z_Param_obj); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInAlwaysLoadedLevel) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::IsInAlwaysLoadedLevel(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCmS2KmH) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CmS); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGBlueprintFunctionLibrary::CmS2KmH(Z_Param_CmS); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentFlagSoftLanding) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UFGBlueprintFunctionLibrary::GetComponentFlagSoftLanding(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRoundFloatWithPrecision) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaximumFractionalDigits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGBlueprintFunctionLibrary::RoundFloatWithPrecision(Z_Param_value,Z_Param_MaximumFractionalDigits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogX) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_base); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGBlueprintFunctionLibrary::LogX(Z_Param_base,Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGameWorld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::IsGameWorld(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorWorld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGBlueprintFunctionLibrary::IsEditorWorld(Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLanguage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGBlueprintFunctionLibrary::GetLanguage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeLanguage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::ChangeLanguage(Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllDescriptorsSorted) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_GET_TARRAY_REF(TSubclassOf<UFGItemDescriptor> ,Z_Param_Out_out_descriptors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::GetAllDescriptorsSorted(Z_Param_worldContext,Z_Param_Out_out_descriptors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheat_GetAllDescriptors) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGItemDescriptor> ,Z_Param_Out_out_descriptors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::Cheat_GetAllDescriptors(Z_Param_Out_out_descriptors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateUseState) \
	{ \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_state); \
		P_GET_OBJECT(UClass,Z_Param_newState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::UpdateUseState(Z_Param_Out_state,Z_Param_newState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideOutline) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_comp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::HideOutline(Z_Param_comp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowOutline) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_comp); \
		P_GET_ENUM(EOutlineColor,Z_Param_color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGBlueprintFunctionLibrary::ShowOutline(Z_Param_comp,EOutlineColor(Z_Param_color)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOuterActor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_obj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UFGBlueprintFunctionLibrary::GetOuterActor(Z_Param_obj); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBlueprintFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUFGBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBlueprintFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBlueprintFunctionLibrary(UFGBlueprintFunctionLibrary&&); \
	NO_API UFGBlueprintFunctionLibrary(const UFGBlueprintFunctionLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBlueprintFunctionLibrary(UFGBlueprintFunctionLibrary&&); \
	NO_API UFGBlueprintFunctionLibrary(const UFGBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGBlueprintFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_27_PROLOG
#define FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_INCLASS \
	FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGBlueprintFunctionLibrary_h


#define FOREACH_ENUM_EOUTLINECOLOR(op) \
	op(EOutlineColor::OC_NONE) \
	op(EOutlineColor::OC_USABLE) \
	op(EOutlineColor::OC_HOLOGRAM) \
	op(EOutlineColor::OC_RED) 

enum class EOutlineColor : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EOutlineColor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
