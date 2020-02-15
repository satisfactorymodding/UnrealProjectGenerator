// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGeometry;
struct FPointerEvent;
class UFGInteractWidget;
class UFGAudioMessage;
class UFGMessageBase;
struct FPopupData;
class UFGPopupWidget;
struct FTutorialHintData;
class UUserWidget;
class AActor;
#ifdef FACTORYGAME_FGGameUI_generated_h
#error "FGGameUI.generated.h already included, missing '#pragma once' in FGGameUI.h"
#endif
#define FACTORYGAME_FGGameUI_generated_h

#define FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_16_DELEGATE \
struct _Script_FactoryGame_eventOnMouseButtonDown_Parms \
{ \
	FGeometry InGeometry; \
	FPointerEvent InMouseEvent; \
}; \
static inline void FOnMouseButtonDown_DelegateWrapper(const FMulticastScriptDelegate& OnMouseButtonDown, FGeometry const& InGeometry, FPointerEvent const& InMouseEvent) \
{ \
	_Script_FactoryGame_eventOnMouseButtonDown_Parms Parms; \
	Parms.InGeometry=InGeometry; \
	Parms.InMouseEvent=InMouseEvent; \
	OnMouseButtonDown.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_RPC_WRAPPERS \
	virtual void RemoveAudioMessage_Implementation(); \
	virtual bool CanReceiveMessage_Implementation(TSubclassOf<UFGMessageBase>  inMessage); \
	virtual void HandlePendingMessages_Implementation(); \
	virtual void AddInteractWidget_Implementation(UFGInteractWidget* widgetToAdd); \
	virtual void PopAllWidgets_Implementation(); \
 \
	DECLARE_FUNCTION(execResumeGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResumeGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindWidgetByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_widgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInteractWidget**)Z_Param__Result=P_THIS->FindWidgetByClass(Z_Param_widgetClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWindowWantsInventoryAddon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetWindowWantsInventoryAddon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWindowWantsInventoryAddon) \
	{ \
		P_GET_UBOOL(Z_Param_doWantAddon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWindowWantsInventoryAddon(Z_Param_doWantAddon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShowInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowInventory) \
	{ \
		P_GET_UBOOL(Z_Param_doShow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowInventory(Z_Param_doShow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAudioMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAudioMessage_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAudioMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGAudioMessage**)Z_Param__Result=P_THIS->GetCurrentAudioMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentAudioMessage) \
	{ \
		P_GET_OBJECT(UFGAudioMessage,Z_Param_newMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentAudioMessage(Z_Param_newMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanReceiveMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanReceiveMessage_Implementation(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandlePendingMessages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePendingMessages_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPendingMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPendingMessage(Z_Param_newMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPendingMessages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGMessageBase> >*)Z_Param__Result=P_THIS->GetPendingMessages(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInteractWidget) \
	{ \
		P_GET_OBJECT(UFGInteractWidget,Z_Param_widgetToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInteractWidget_Implementation(Z_Param_widgetToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInteractWidget) \
	{ \
		P_GET_OBJECT(UFGInteractWidget,Z_Param_widgetToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveInteractWidget(Z_Param_widgetToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInteractWidgetStack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFGInteractWidget*>*)Z_Param__Result=P_THIS->GetInteractWidgetStack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopAllWidgets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PopAllWidgets_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RemoveAudioMessage_Implementation(); \
	virtual bool CanReceiveMessage_Implementation(TSubclassOf<UFGMessageBase>  inMessage); \
	virtual void HandlePendingMessages_Implementation(); \
	virtual void AddInteractWidget_Implementation(UFGInteractWidget* widgetToAdd); \
	virtual void PopAllWidgets_Implementation(); \
 \
	DECLARE_FUNCTION(execResumeGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResumeGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindWidgetByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_widgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInteractWidget**)Z_Param__Result=P_THIS->FindWidgetByClass(Z_Param_widgetClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWindowWantsInventoryAddon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetWindowWantsInventoryAddon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWindowWantsInventoryAddon) \
	{ \
		P_GET_UBOOL(Z_Param_doWantAddon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWindowWantsInventoryAddon(Z_Param_doWantAddon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShowInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowInventory) \
	{ \
		P_GET_UBOOL(Z_Param_doShow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowInventory(Z_Param_doShow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAudioMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAudioMessage_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAudioMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGAudioMessage**)Z_Param__Result=P_THIS->GetCurrentAudioMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentAudioMessage) \
	{ \
		P_GET_OBJECT(UFGAudioMessage,Z_Param_newMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentAudioMessage(Z_Param_newMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanReceiveMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanReceiveMessage_Implementation(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandlePendingMessages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandlePendingMessages_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPendingMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPendingMessage(Z_Param_newMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPendingMessages) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGMessageBase> >*)Z_Param__Result=P_THIS->GetPendingMessages(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInteractWidget) \
	{ \
		P_GET_OBJECT(UFGInteractWidget,Z_Param_widgetToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddInteractWidget_Implementation(Z_Param_widgetToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInteractWidget) \
	{ \
		P_GET_OBJECT(UFGInteractWidget,Z_Param_widgetToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveInteractWidget(Z_Param_widgetToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInteractWidgetStack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFGInteractWidget*>*)Z_Param__Result=P_THIS->GetInteractWidgetStack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopAllWidgets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PopAllWidgets_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_EVENT_PARMS \
	struct FGGameUI_eventAddCheatWidget_Parms \
	{ \
		FPopupData popupData; \
		UFGPopupWidget* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGGameUI_eventAddCheatWidget_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGGameUI_eventAddInteractWidget_Parms \
	{ \
		UFGInteractWidget* widgetToAdd; \
	}; \
	struct FGGameUI_eventAddIntroTutorialInfo_Parms \
	{ \
		FTutorialHintData tutorialHintData; \
	}; \
	struct FGGameUI_eventAddPawnHUD_Parms \
	{ \
		UUserWidget* newContent; \
	}; \
	struct FGGameUI_eventCanReceiveMessage_Parms \
	{ \
		TSubclassOf<UFGMessageBase>  inMessage; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGGameUI_eventCanReceiveMessage_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGGameUI_eventOnRadiationIntensityUpdated_Parms \
	{ \
		float radiationIntensity; \
		float radiationImmunity; \
	}; \
	struct FGGameUI_eventPlayAudioMessage_Parms \
	{ \
		TSubclassOf<UFGAudioMessage>  messageClass; \
	}; \
	struct FGGameUI_eventPopWidget_Parms \
	{ \
		UFGInteractWidget* WidgetToRemove; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGGameUI_eventPopWidget_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGGameUI_eventPushWidget_Parms \
	{ \
		UFGInteractWidget* Widget; \
	}; \
	struct FGGameUI_eventReceivedMessage_Parms \
	{ \
		TSubclassOf<UFGMessageBase>  inMessage; \
	}; \
	struct FGGameUI_eventShowDirectionalSubtitle_Parms \
	{ \
		FText Subtitle; \
		AActor* Instigator; \
		float Duration; \
		bool bUseDuration; \
	}; \
	struct FGGameUI_eventStopSubtitle_Parms \
	{ \
		AActor* Instigator; \
	};


#define FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGGameUI(); \
	friend struct Z_Construct_UClass_UFGGameUI_Statics; \
public: \
	DECLARE_CLASS(UFGGameUI, UFGBaseUI, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameUI)


#define FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUFGGameUI(); \
	friend struct Z_Construct_UClass_UFGGameUI_Statics; \
public: \
	DECLARE_CLASS(UFGGameUI, UFGBaseUI, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameUI)


#define FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGGameUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGameUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameUI(UFGGameUI&&); \
	NO_API UFGGameUI(const UFGGameUI&); \
public:


#define FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGGameUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameUI(UFGGameUI&&); \
	NO_API UFGGameUI(const UFGGameUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGameUI)


#define FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mInteractWidgetStack() { return STRUCT_OFFSET(UFGGameUI, mInteractWidgetStack); } \
	FORCEINLINE static uint32 __PPO__mCurrentAudioMessage() { return STRUCT_OFFSET(UFGGameUI, mCurrentAudioMessage); } \
	FORCEINLINE static uint32 __PPO__mMinTimeBetweenAudioMessage() { return STRUCT_OFFSET(UFGGameUI, mMinTimeBetweenAudioMessage); }


#define FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_22_PROLOG \
	FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_INCLASS \
	FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGGameUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_UI_FGGameUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
