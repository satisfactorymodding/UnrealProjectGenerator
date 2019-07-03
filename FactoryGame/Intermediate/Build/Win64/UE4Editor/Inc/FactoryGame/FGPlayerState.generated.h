// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
class UFGRecipe;
class UFGHotbarShortcut;
class UFGMessageBase;
struct FMessageData;
enum class EMessageType : uint8;
class UFGTutorialSubsystem;
struct FUniqueNetIdRepl;
struct FSlotData;
#ifdef FACTORYGAME_FGPlayerState_generated_h
#error "FGPlayerState.generated.h already included, missing '#pragma once' in FGPlayerState.h"
#endif
#define FACTORYGAME_FGPlayerState_generated_h

#define FactoryGame_Source_FactoryGame_FGPlayerState_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMessageData_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlotData_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_19_DELEGATE \
struct _Script_FactoryGame_eventOnBuildableConstructedNew_Parms \
{ \
	TSubclassOf<UFGItemDescriptor>  itemDesc; \
}; \
static inline void FOnBuildableConstructedNew_DelegateWrapper(const FMulticastScriptDelegate& OnBuildableConstructedNew, TSubclassOf<UFGItemDescriptor>  itemDesc) \
{ \
	_Script_FactoryGame_eventOnBuildableConstructedNew_Parms Parms; \
	Parms.itemDesc=itemDesc; \
	OnBuildableConstructedNew.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_67_RPC_WRAPPERS \
	virtual bool Server_RemoveRecipe_Validate(TSubclassOf<UFGRecipe>  ); \
	virtual void Server_RemoveRecipe_Implementation(TSubclassOf<UFGRecipe>  recipe); \
 \
	DECLARE_FUNCTION(execOnRep_HotbarShortcuts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HotbarShortcuts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddArmSlots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_slotsToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddArmSlots(Z_Param_slotsToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumArmSlots) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumArmSlots(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_RemoveRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_RemoveRecipe_Validate(Z_Param_recipe)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_RemoveRecipe_Validate")); \
			return; \
		} \
		P_THIS->Server_RemoveRecipe_Implementation(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateShortcut) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_shortcutClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGHotbarShortcut**)Z_Param__Result=P_THIS->CreateShortcut(Z_Param_shortcutClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllMessageData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FMessageData>*)Z_Param__Result=P_THIS->GetAllMessageData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllMessages) \
	{ \
		P_GET_ENUM(EMessageType,Z_Param_messageType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGMessageBase> >*)Z_Param__Result=P_THIS->GetAllMessages(EMessageType(Z_Param_messageType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTutorialSubsystem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGTutorialSubsystem**)Z_Param__Result=P_THIS->GetTutorialSubsystem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSteamID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqeNetId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetUniqeNetId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUserID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUserName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlotData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FSlotData>*)Z_Param__Result=P_THIS->GetSlotData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlotNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSlotNum(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_RemoveRecipe_Validate(TSubclassOf<UFGRecipe>  ); \
	virtual void Server_RemoveRecipe_Implementation(TSubclassOf<UFGRecipe>  recipe); \
 \
	DECLARE_FUNCTION(execOnRep_HotbarShortcuts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HotbarShortcuts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddArmSlots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_slotsToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddArmSlots(Z_Param_slotsToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumArmSlots) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumArmSlots(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_RemoveRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_RemoveRecipe_Validate(Z_Param_recipe)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_RemoveRecipe_Validate")); \
			return; \
		} \
		P_THIS->Server_RemoveRecipe_Implementation(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateShortcut) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_shortcutClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGHotbarShortcut**)Z_Param__Result=P_THIS->CreateShortcut(Z_Param_shortcutClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadMessage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReadMessage(Z_Param_inMessage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllMessageData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FMessageData>*)Z_Param__Result=P_THIS->GetAllMessageData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllMessages) \
	{ \
		P_GET_ENUM(EMessageType,Z_Param_messageType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGMessageBase> >*)Z_Param__Result=P_THIS->GetAllMessages(EMessageType(Z_Param_messageType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTutorialSubsystem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGTutorialSubsystem**)Z_Param__Result=P_THIS->GetTutorialSubsystem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSteamID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUniqeNetId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->GetUniqeNetId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUserID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUserName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlotData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FSlotData>*)Z_Param__Result=P_THIS->GetSlotData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlotNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSlotNum(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_67_EVENT_PARMS \
	struct FGPlayerState_eventServer_RemoveRecipe_Parms \
	{ \
		TSubclassOf<UFGRecipe>  recipe; \
	};


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_67_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGPlayerState_h_67_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AFGPlayerState, NO_API)


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGPlayerState(); \
	friend struct Z_Construct_UClass_AFGPlayerState_Statics; \
public: \
	DECLARE_CLASS(AFGPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPlayerState) \
	FactoryGame_Source_FactoryGame_FGPlayerState_h_67_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGPlayerState*>(this); }


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_67_INCLASS \
private: \
	static void StaticRegisterNativesAFGPlayerState(); \
	friend struct Z_Construct_UClass_AFGPlayerState_Statics; \
public: \
	DECLARE_CLASS(AFGPlayerState, APlayerState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPlayerState) \
	FactoryGame_Source_FactoryGame_FGPlayerState_h_67_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGPlayerState*>(this); }


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPlayerState(AFGPlayerState&&); \
	NO_API AFGPlayerState(const AFGPlayerState&); \
public:


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_67_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPlayerState(AFGPlayerState&&); \
	NO_API AFGPlayerState(const AFGPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGPlayerState)


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_67_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mHotbarShortcuts() { return STRUCT_OFFSET(AFGPlayerState, mHotbarShortcuts); } \
	FORCEINLINE static uint32 __PPO__mDefaultRecipeShortcuts() { return STRUCT_OFFSET(AFGPlayerState, mDefaultRecipeShortcuts); } \
	FORCEINLINE static uint32 __PPO__mNewRecipes() { return STRUCT_OFFSET(AFGPlayerState, mNewRecipes); } \
	FORCEINLINE static uint32 __PPO__mSlotNum() { return STRUCT_OFFSET(AFGPlayerState, mSlotNum); } \
	FORCEINLINE static uint32 __PPO__mSlotData() { return STRUCT_OFFSET(AFGPlayerState, mSlotData); } \
	FORCEINLINE static uint32 __PPO__mOwnedPawn() { return STRUCT_OFFSET(AFGPlayerState, mOwnedPawn); } \
	FORCEINLINE static uint32 __PPO__mTutorialSubsystem() { return STRUCT_OFFSET(AFGPlayerState, mTutorialSubsystem); } \
	FORCEINLINE static uint32 __PPO__mTutorialSubsystemClass() { return STRUCT_OFFSET(AFGPlayerState, mTutorialSubsystemClass); } \
	FORCEINLINE static uint32 __PPO__mMessageData() { return STRUCT_OFFSET(AFGPlayerState, mMessageData); } \
	FORCEINLINE static uint32 __PPO__mRememberedFirstTimeEquipmentClasses() { return STRUCT_OFFSET(AFGPlayerState, mRememberedFirstTimeEquipmentClasses); } \
	FORCEINLINE static uint32 __PPO__mNumArmSlots() { return STRUCT_OFFSET(AFGPlayerState, mNumArmSlots); }


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_64_PROLOG \
	FactoryGame_Source_FactoryGame_FGPlayerState_h_67_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGPlayerState_h_67_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGPlayerState_h_67_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGPlayerState_h_67_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGPlayerState_h_67_INCLASS \
	FactoryGame_Source_FactoryGame_FGPlayerState_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGPlayerState_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGPlayerState_h_67_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGPlayerState_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGPlayerState_h_67_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGPlayerState_h_67_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGPlayerState_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
