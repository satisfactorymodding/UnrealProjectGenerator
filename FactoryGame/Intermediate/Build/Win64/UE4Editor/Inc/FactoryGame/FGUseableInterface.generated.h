// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGCharacterPlayer;
struct FUseState;
struct FVector;
class UPrimitiveComponent;
#ifdef FACTORYGAME_FGUseableInterface_generated_h
#error "FGUseableInterface.generated.h already included, missing '#pragma once' in FGUseableInterface.h"
#endif
#define FACTORYGAME_FGUseableInterface_generated_h

#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUseState_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(FUseState, State); }


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGUseState(); \
	friend struct Z_Construct_UClass_UFGUseState_Statics; \
public: \
	DECLARE_CLASS(UFGUseState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState)


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUFGUseState(); \
	friend struct Z_Construct_UClass_UFGUseState_Statics; \
public: \
	DECLARE_CLASS(UFGUseState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState)


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGUseState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGUseState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState(UFGUseState&&); \
	NO_API UFGUseState(const UFGUseState&); \
public:


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGUseState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState(UFGUseState&&); \
	NO_API UFGUseState(const UFGUseState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGUseState)


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mWantAdditonalData() { return STRUCT_OFFSET(UFGUseState, mWantAdditonalData); } \
	FORCEINLINE static uint32 __PPO__mIsUsableState() { return STRUCT_OFFSET(UFGUseState, mIsUsableState); }


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_9_PROLOG
#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_INCLASS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGUseState_Valid(); \
	friend struct Z_Construct_UClass_UFGUseState_Valid_Statics; \
public: \
	DECLARE_CLASS(UFGUseState_Valid, UFGUseState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState_Valid)


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUFGUseState_Valid(); \
	friend struct Z_Construct_UClass_UFGUseState_Valid_Statics; \
public: \
	DECLARE_CLASS(UFGUseState_Valid, UFGUseState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState_Valid)


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGUseState_Valid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGUseState_Valid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState_Valid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState_Valid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState_Valid(UFGUseState_Valid&&); \
	NO_API UFGUseState_Valid(const UFGUseState_Valid&); \
public:


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState_Valid(UFGUseState_Valid&&); \
	NO_API UFGUseState_Valid(const UFGUseState_Valid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState_Valid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState_Valid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGUseState_Valid)


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_35_PROLOG
#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_INCLASS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_RPC_WRAPPERS \
	virtual void UnregisterInteractingPlayer_Implementation(AFGCharacterPlayer* player) {}; \
	virtual void RegisterInteractingPlayer_Implementation(AFGCharacterPlayer* player) {}; \
	virtual FText GetLookAtDecription_Implementation(AFGCharacterPlayer* byCharacter, FUseState const& state) const { return FText::GetEmpty(); }; \
	virtual void StopIsLookedAt_Implementation(AFGCharacterPlayer* byCharacter, FUseState const& state) {}; \
	virtual void StartIsLookedAt_Implementation(AFGCharacterPlayer* byCharacter, FUseState const& state) {}; \
	virtual bool IsUseable_Implementation() const { return false; }; \
	virtual void OnUseStop_Implementation(AFGCharacterPlayer* byCharacter, FUseState const& state) {}; \
	virtual void OnUse_Implementation(AFGCharacterPlayer* byCharacter, FUseState const& state) {}; \
	virtual void UpdateUseState_Implementation(AFGCharacterPlayer* byCharacter, FVector const& atLocation, UPrimitiveComponent* componentHit, FUseState& out_useState) const {}; \
 \
	DECLARE_FUNCTION(execUnregisterInteractingPlayer) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterInteractingPlayer_Implementation(Z_Param_player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterInteractingPlayer) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterInteractingPlayer_Implementation(Z_Param_player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLookAtDecription) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetLookAtDecription_Implementation(Z_Param_byCharacter,Z_Param_Out_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopIsLookedAt) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopIsLookedAt_Implementation(Z_Param_byCharacter,Z_Param_Out_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartIsLookedAt) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartIsLookedAt_Implementation(Z_Param_byCharacter,Z_Param_Out_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUseable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUseable_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUseStop) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUseStop_Implementation(Z_Param_byCharacter,Z_Param_Out_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUse) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUse_Implementation(Z_Param_byCharacter,Z_Param_Out_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateUseState) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_atLocation); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_componentHit); \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_out_useState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateUseState_Implementation(Z_Param_byCharacter,Z_Param_Out_atLocation,Z_Param_componentHit,Z_Param_Out_out_useState); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UnregisterInteractingPlayer_Implementation(AFGCharacterPlayer* player) {}; \
	virtual void RegisterInteractingPlayer_Implementation(AFGCharacterPlayer* player) {}; \
	virtual FText GetLookAtDecription_Implementation(AFGCharacterPlayer* byCharacter, FUseState const& state) const { return FText::GetEmpty(); }; \
	virtual void StopIsLookedAt_Implementation(AFGCharacterPlayer* byCharacter, FUseState const& state) {}; \
	virtual void StartIsLookedAt_Implementation(AFGCharacterPlayer* byCharacter, FUseState const& state) {}; \
	virtual bool IsUseable_Implementation() const { return false; }; \
	virtual void OnUseStop_Implementation(AFGCharacterPlayer* byCharacter, FUseState const& state) {}; \
	virtual void OnUse_Implementation(AFGCharacterPlayer* byCharacter, FUseState const& state) {}; \
	virtual void UpdateUseState_Implementation(AFGCharacterPlayer* byCharacter, FVector const& atLocation, UPrimitiveComponent* componentHit, FUseState& out_useState) const {}; \
 \
	DECLARE_FUNCTION(execUnregisterInteractingPlayer) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterInteractingPlayer_Implementation(Z_Param_player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterInteractingPlayer) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterInteractingPlayer_Implementation(Z_Param_player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLookAtDecription) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetLookAtDecription_Implementation(Z_Param_byCharacter,Z_Param_Out_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopIsLookedAt) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopIsLookedAt_Implementation(Z_Param_byCharacter,Z_Param_Out_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartIsLookedAt) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartIsLookedAt_Implementation(Z_Param_byCharacter,Z_Param_Out_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUseable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUseable_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUseStop) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUseStop_Implementation(Z_Param_byCharacter,Z_Param_Out_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUse) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUse_Implementation(Z_Param_byCharacter,Z_Param_Out_state); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateUseState) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_atLocation); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_componentHit); \
		P_GET_STRUCT_REF(FUseState,Z_Param_Out_out_useState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateUseState_Implementation(Z_Param_byCharacter,Z_Param_Out_atLocation,Z_Param_componentHit,Z_Param_Out_out_useState); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_EVENT_PARMS \
	struct FGUseableInterface_eventGetLookAtDecription_Parms \
	{ \
		AFGCharacterPlayer* byCharacter; \
		FUseState state; \
		FText ReturnValue; \
	}; \
	struct FGUseableInterface_eventIsUseable_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGUseableInterface_eventIsUseable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGUseableInterface_eventOnUse_Parms \
	{ \
		AFGCharacterPlayer* byCharacter; \
		FUseState state; \
	}; \
	struct FGUseableInterface_eventOnUseStop_Parms \
	{ \
		AFGCharacterPlayer* byCharacter; \
		FUseState state; \
	}; \
	struct FGUseableInterface_eventRegisterInteractingPlayer_Parms \
	{ \
		AFGCharacterPlayer* player; \
	}; \
	struct FGUseableInterface_eventStartIsLookedAt_Parms \
	{ \
		AFGCharacterPlayer* byCharacter; \
		FUseState state; \
	}; \
	struct FGUseableInterface_eventStopIsLookedAt_Parms \
	{ \
		AFGCharacterPlayer* byCharacter; \
		FUseState state; \
	}; \
	struct FGUseableInterface_eventUnregisterInteractingPlayer_Parms \
	{ \
		AFGCharacterPlayer* player; \
	}; \
	struct FGUseableInterface_eventUpdateUseState_Parms \
	{ \
		AFGCharacterPlayer* byCharacter; \
		FVector atLocation; \
		UPrimitiveComponent* componentHit; \
		FUseState out_useState; \
	};


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGUseableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGUseableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseableInterface(UFGUseableInterface&&); \
	NO_API UFGUseableInterface(const UFGUseableInterface&); \
public:


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseableInterface(UFGUseableInterface&&); \
	NO_API UFGUseableInterface(const UFGUseableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseableInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGUseableInterface)


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGUseableInterface(); \
	friend struct Z_Construct_UClass_UFGUseableInterface_Statics; \
public: \
	DECLARE_CLASS(UFGUseableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseableInterface)


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFGUseableInterface() {} \
public: \
	typedef UFGUseableInterface UClassType; \
	typedef IFGUseableInterface ThisClass; \
	static FText Execute_GetLookAtDecription(const UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state); \
	static bool Execute_IsUseable(const UObject* O); \
	static void Execute_OnUse(UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state); \
	static void Execute_OnUseStop(UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state); \
	static void Execute_RegisterInteractingPlayer(UObject* O, AFGCharacterPlayer* player); \
	static void Execute_StartIsLookedAt(UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state); \
	static void Execute_StopIsLookedAt(UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state); \
	static void Execute_UnregisterInteractingPlayer(UObject* O, AFGCharacterPlayer* player); \
	static void Execute_UpdateUseState(const UObject* O, AFGCharacterPlayer* byCharacter, FVector const& atLocation, UPrimitiveComponent* componentHit, FUseState& out_useState); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_INCLASS_IINTERFACE \
protected: \
	virtual ~IFGUseableInterface() {} \
public: \
	typedef UFGUseableInterface UClassType; \
	typedef IFGUseableInterface ThisClass; \
	static FText Execute_GetLookAtDecription(const UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state); \
	static bool Execute_IsUseable(const UObject* O); \
	static void Execute_OnUse(UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state); \
	static void Execute_OnUseStop(UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state); \
	static void Execute_RegisterInteractingPlayer(UObject* O, AFGCharacterPlayer* player); \
	static void Execute_StartIsLookedAt(UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state); \
	static void Execute_StopIsLookedAt(UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state); \
	static void Execute_UnregisterInteractingPlayer(UObject* O, AFGCharacterPlayer* player); \
	static void Execute_UpdateUseState(const UObject* O, AFGCharacterPlayer* byCharacter, FVector const& atLocation, UPrimitiveComponent* componentHit, FUseState& out_useState); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_77_PROLOG \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGUseableInterface_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGUseableInterface_h_81_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGUseableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
