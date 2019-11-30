// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef FACTORYGAME_FGHookshot_generated_h
#error "FGHookshot.generated.h already included, missing '#pragma once' in FGHookshot.h"
#endif
#define FACTORYGAME_FGHookshot_generated_h

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRestoreAudioSourceToOriginalLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestoreAudioSourceToOriginalLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveAudioSourceInFrontOfPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveAudioSourceInFrontOfPlayer(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRestoreAudioSourceToOriginalLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestoreAudioSourceToOriginalLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveAudioSourceInFrontOfPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveAudioSourceInFrontOfPlayer(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_EVENT_PARMS \
	struct FGHookshot_eventOnFire_Parms \
	{ \
		bool attachedToSomething; \
		FHitResult hitResult; \
	}; \
	struct FGHookshot_eventOwnerLanded_Parms \
	{ \
		FHitResult Hit; \
	};


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGHookshot(); \
	friend struct Z_Construct_UClass_AFGHookshot_Statics; \
public: \
	DECLARE_CLASS(AFGHookshot, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGHookshot)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFGHookshot(); \
	friend struct Z_Construct_UClass_AFGHookshot_Statics; \
public: \
	DECLARE_CLASS(AFGHookshot, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGHookshot)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGHookshot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGHookshot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGHookshot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGHookshot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGHookshot(AFGHookshot&&); \
	NO_API AFGHookshot(const AFGHookshot&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGHookshot(AFGHookshot&&); \
	NO_API AFGHookshot(const AFGHookshot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGHookshot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGHookshot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGHookshot)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mHookshotAudio() { return STRUCT_OFFSET(AFGHookshot, mHookshotAudio); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_9_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Equipment_FGHookshot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
