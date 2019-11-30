// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGCharacterPlayer;
struct FVector;
enum class EEquipmentSlot : uint8;
#ifdef FACTORYGAME_FGEquipmentAttachment_generated_h
#error "FGEquipmentAttachment.generated.h already included, missing '#pragma once' in FGEquipmentAttachment.h"
#endif
#define FACTORYGAME_FGEquipmentAttachment_generated_h

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_RPC_WRAPPERS \
	virtual void PlayUseEffect_Implementation(FVector useLocation); \
	virtual void OnDetach_Implementation(); \
	virtual void OnAttach_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_OnAnimationStateUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OnAnimationStateUpdated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_UseLocationUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_UseLocationUpdated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachSocket) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetAttachSocket(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachedTo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetAttachedTo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayUseEffect) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_useLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayUseEffect_Implementation(Z_Param_useLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquippedSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EEquipmentSlot*)Z_Param__Result=P_THIS->GetEquippedSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAttached) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAttached(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDetach) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDetach_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAttach) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttach_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PlayUseEffect_Implementation(FVector useLocation); \
	virtual void OnDetach_Implementation(); \
	virtual void OnAttach_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_OnAnimationStateUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_OnAnimationStateUpdated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_UseLocationUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_UseLocationUpdated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachSocket) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetAttachSocket(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachedTo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetAttachedTo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayUseEffect) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_useLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayUseEffect_Implementation(Z_Param_useLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquippedSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EEquipmentSlot*)Z_Param__Result=P_THIS->GetEquippedSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAttached) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAttached(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDetach) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDetach_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAttach) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttach_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_EVENT_PARMS \
	struct FGEquipmentAttachment_eventOnAttachmentUseStateUpdated_Parms \
	{ \
		int32 newUseState; \
	}; \
	struct FGEquipmentAttachment_eventPlayUseEffect_Parms \
	{ \
		FVector useLocation; \
	};


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGEquipmentAttachment(); \
	friend struct Z_Construct_UClass_AFGEquipmentAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGEquipmentAttachment, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGEquipmentAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFGEquipmentAttachment(); \
	friend struct Z_Construct_UClass_AFGEquipmentAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGEquipmentAttachment, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGEquipmentAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGEquipmentAttachment(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGEquipmentAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEquipmentAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEquipmentAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEquipmentAttachment(AFGEquipmentAttachment&&); \
	NO_API AFGEquipmentAttachment(const AFGEquipmentAttachment&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEquipmentAttachment(AFGEquipmentAttachment&&); \
	NO_API AFGEquipmentAttachment(const AFGEquipmentAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEquipmentAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEquipmentAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGEquipmentAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mUseLocation() { return STRUCT_OFFSET(AFGEquipmentAttachment, mUseLocation); } \
	FORCEINLINE static uint32 __PPO__mAttachSocket() { return STRUCT_OFFSET(AFGEquipmentAttachment, mAttachSocket); } \
	FORCEINLINE static uint32 __PPO__mArmAnimation() { return STRUCT_OFFSET(AFGEquipmentAttachment, mArmAnimation); } \
	FORCEINLINE static uint32 __PPO__mBackAnimation() { return STRUCT_OFFSET(AFGEquipmentAttachment, mBackAnimation); } \
	FORCEINLINE static uint32 __PPO__mAttachedTo() { return STRUCT_OFFSET(AFGEquipmentAttachment, mAttachedTo); } \
	FORCEINLINE static uint32 __PPO__mEquipmentSlot() { return STRUCT_OFFSET(AFGEquipmentAttachment, mEquipmentSlot); } \
	FORCEINLINE static uint32 __PPO__mAnimationState() { return STRUCT_OFFSET(AFGEquipmentAttachment, mAnimationState); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_12_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGEquipmentAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipmentAttachment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
