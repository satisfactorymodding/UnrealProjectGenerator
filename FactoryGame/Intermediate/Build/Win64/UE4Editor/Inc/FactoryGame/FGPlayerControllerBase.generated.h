// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFGKeyMapping;
#ifdef FACTORYGAME_FGPlayerControllerBase_generated_h
#error "FGPlayerControllerBase.generated.h already included, missing '#pragma once' in FGPlayerControllerBase.h"
#endif
#define FACTORYGAME_FGPlayerControllerBase_generated_h

#define FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_8_DELEGATE \
static inline void FOnInputChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInputChanged) \
{ \
	OnInputChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_RPC_WRAPPERS \
	virtual bool Server_UpdateCappedBandwidth_Validate(int32 ); \
	virtual void Server_UpdateCappedBandwidth_Implementation(int32 cap); \
	virtual void Client_UpdateCappedBandwidth_Implementation(int32 cap); \
	virtual FString GetPresenceString_Implementation() const; \
 \
	DECLARE_FUNCTION(execDiscardInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DiscardInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSessionEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSessionEnabled(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPresenceEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPresenceEnabled(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_UpdateCappedBandwidth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_cap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_UpdateCappedBandwidth_Validate(Z_Param_cap)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_UpdateCappedBandwidth_Validate")); \
			return; \
		} \
		P_THIS->Server_UpdateCappedBandwidth_Implementation(Z_Param_cap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_UpdateCappedBandwidth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_cap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_UpdateCappedBandwidth_Implementation(Z_Param_cap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPresenceString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetPresenceString_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyNameForAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_inAction); \
		P_GET_UBOOL(Z_Param_getGamepadKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetKeyNameForAction(Z_Param_inAction,Z_Param_getGamepadKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultMouseSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDefaultMouseSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMouseSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newSense); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseSensitivity(Z_Param_newSense); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetInputBindings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetInputBindings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebindActionKey) \
	{ \
		P_GET_STRUCT(FFGKeyMapping,Z_Param_newKeyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RebindActionKey(Z_Param_newKeyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushPressedKeys) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlushPressedKeys(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsUsingGamepad) \
	{ \
		P_GET_UBOOL(Z_Param_newIsUsingGamepad); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsUsingGamepad(Z_Param_newIsUsingGamepad); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsUsingGamepad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsUsingGamepad(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_UpdateCappedBandwidth_Validate(int32 ); \
	virtual void Server_UpdateCappedBandwidth_Implementation(int32 cap); \
	virtual void Client_UpdateCappedBandwidth_Implementation(int32 cap); \
	virtual FString GetPresenceString_Implementation() const; \
 \
	DECLARE_FUNCTION(execDiscardInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DiscardInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSessionEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSessionEnabled(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPresenceEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPresenceEnabled(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_UpdateCappedBandwidth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_cap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_UpdateCappedBandwidth_Validate(Z_Param_cap)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_UpdateCappedBandwidth_Validate")); \
			return; \
		} \
		P_THIS->Server_UpdateCappedBandwidth_Implementation(Z_Param_cap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_UpdateCappedBandwidth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_cap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_UpdateCappedBandwidth_Implementation(Z_Param_cap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPresenceString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetPresenceString_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyNameForAction) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_inAction); \
		P_GET_UBOOL(Z_Param_getGamepadKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetKeyNameForAction(Z_Param_inAction,Z_Param_getGamepadKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultMouseSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDefaultMouseSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseSensitivity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMouseSensitivity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSensitivity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newSense); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseSensitivity(Z_Param_newSense); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetInputBindings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetInputBindings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebindActionKey) \
	{ \
		P_GET_STRUCT(FFGKeyMapping,Z_Param_newKeyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RebindActionKey(Z_Param_newKeyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushPressedKeys) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlushPressedKeys(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsUsingGamepad) \
	{ \
		P_GET_UBOOL(Z_Param_newIsUsingGamepad); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsUsingGamepad(Z_Param_newIsUsingGamepad); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsUsingGamepad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsUsingGamepad(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_EVENT_PARMS \
	struct FGPlayerControllerBase_eventClient_UpdateCappedBandwidth_Parms \
	{ \
		int32 cap; \
	}; \
	struct FGPlayerControllerBase_eventGetPresenceString_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct FGPlayerControllerBase_eventServer_UpdateCappedBandwidth_Parms \
	{ \
		int32 cap; \
	};


#define FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGPlayerControllerBase(); \
	friend struct Z_Construct_UClass_AFGPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(AFGPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPlayerControllerBase)


#define FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFGPlayerControllerBase(); \
	friend struct Z_Construct_UClass_AFGPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(AFGPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPlayerControllerBase)


#define FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGPlayerControllerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGPlayerControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPlayerControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPlayerControllerBase(AFGPlayerControllerBase&&); \
	NO_API AFGPlayerControllerBase(const AFGPlayerControllerBase&); \
public:


#define FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPlayerControllerBase(AFGPlayerControllerBase&&); \
	NO_API AFGPlayerControllerBase(const AFGPlayerControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPlayerControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGPlayerControllerBase)


#define FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDisableInputComponent() { return STRUCT_OFFSET(AFGPlayerControllerBase, mDisableInputComponent); } \
	FORCEINLINE static uint32 __PPO__mEnableInputComponent() { return STRUCT_OFFSET(AFGPlayerControllerBase, mEnableInputComponent); } \
	FORCEINLINE static uint32 __PPO__mAllowedInputWhenDead() { return STRUCT_OFFSET(AFGPlayerControllerBase, mAllowedInputWhenDead); }


#define FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_10_PROLOG \
	FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGPlayerControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
