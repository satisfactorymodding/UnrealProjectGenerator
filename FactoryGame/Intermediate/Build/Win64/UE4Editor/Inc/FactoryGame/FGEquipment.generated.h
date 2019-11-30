// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGEquipment;
enum class EEquipmentSlot : uint8;
class UDamageType;
class AController;
class AActor;
class AFGEquipmentAttachment;
class AFGCharacterPlayer;
#ifdef FACTORYGAME_FGEquipment_generated_h
#error "FGEquipment.generated.h already included, missing '#pragma once' in FGEquipment.h"
#endif
#define FACTORYGAME_FGEquipment_generated_h

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_RPC_WRAPPERS \
	virtual bool Server_ChargeForUse_Validate(); \
	virtual void Server_ChargeForUse_Implementation(); \
	virtual void DidNotAffordUse_Implementation(); \
	virtual void WasUnEquipped_Implementation(); \
	virtual void WasEquipped_Implementation(); \
	virtual float AdjustDamage_Implementation(float damageAmount, const UDamageType* damageType, AController* instigatedBy, AActor* damageCauser); \
	virtual bool Server_UpdateAttachmentUseState_Validate(int32 ); \
	virtual void Server_UpdateAttachmentUseState_Implementation(int32 newUseState); \
 \
	DECLARE_FUNCTION(execServer_ChargeForUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ChargeForUse_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ChargeForUse_Validate")); \
			return; \
		} \
		P_THIS->Server_ChargeForUse_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChargeForUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChargeForUse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDidNotAffordUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DidNotAffordUse_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanAffordUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanAffordUse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasUnEquipped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasUnEquipped_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasEquipped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasEquipped_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowStinger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowStinger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentSlot) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EEquipmentSlot*)Z_Param__Result=AFGEquipment::GetEquipmentSlot(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageAmount); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->AdjustDamage_Implementation(Z_Param_damageAmount,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_UpdateAttachmentUseState) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newUseState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_UpdateAttachmentUseState_Validate(Z_Param_newUseState)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_UpdateAttachmentUseState_Validate")); \
			return; \
		} \
		P_THIS->Server_UpdateAttachmentUseState_Implementation(Z_Param_newUseState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecondaryAttachment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGEquipmentAttachment**)Z_Param__Result=P_THIS->GetSecondaryAttachment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGEquipmentAttachment**)Z_Param__Result=P_THIS->GetAttachment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocalInstigator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocalInstigator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstigatorCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetInstigatorCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEquipped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEquipped(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnEquip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquip) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Equip(Z_Param_character); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_ChargeForUse_Validate(); \
	virtual void Server_ChargeForUse_Implementation(); \
	virtual void DidNotAffordUse_Implementation(); \
	virtual void WasUnEquipped_Implementation(); \
	virtual void WasEquipped_Implementation(); \
	virtual float AdjustDamage_Implementation(float damageAmount, const UDamageType* damageType, AController* instigatedBy, AActor* damageCauser); \
	virtual bool Server_UpdateAttachmentUseState_Validate(int32 ); \
	virtual void Server_UpdateAttachmentUseState_Implementation(int32 newUseState); \
 \
	DECLARE_FUNCTION(execServer_ChargeForUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ChargeForUse_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ChargeForUse_Validate")); \
			return; \
		} \
		P_THIS->Server_ChargeForUse_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChargeForUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChargeForUse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDidNotAffordUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DidNotAffordUse_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanAffordUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanAffordUse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasUnEquipped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasUnEquipped_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasEquipped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasEquipped_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowStinger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowStinger(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentSlot) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EEquipmentSlot*)Z_Param__Result=AFGEquipment::GetEquipmentSlot(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageAmount); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->AdjustDamage_Implementation(Z_Param_damageAmount,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_UpdateAttachmentUseState) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newUseState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_UpdateAttachmentUseState_Validate(Z_Param_newUseState)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_UpdateAttachmentUseState_Validate")); \
			return; \
		} \
		P_THIS->Server_UpdateAttachmentUseState_Implementation(Z_Param_newUseState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecondaryAttachment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGEquipmentAttachment**)Z_Param__Result=P_THIS->GetSecondaryAttachment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGEquipmentAttachment**)Z_Param__Result=P_THIS->GetAttachment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLocalInstigator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLocalInstigator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstigatorCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetInstigatorCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEquipped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEquipped(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnEquip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquip) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Equip(Z_Param_character); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_EVENT_PARMS \
	struct FGEquipment_eventAdjustDamage_Parms \
	{ \
		float damageAmount; \
		const UDamageType* damageType; \
		AController* instigatedBy; \
		AActor* damageCauser; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGEquipment_eventAdjustDamage_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct FGEquipment_eventServer_UpdateAttachmentUseState_Parms \
	{ \
		int32 newUseState; \
	};


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGEquipment(); \
	friend struct Z_Construct_UClass_AFGEquipment_Statics; \
public: \
	DECLARE_CLASS(AFGEquipment, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGEquipment) \
	virtual UObject* _getUObject() const override { return const_cast<AFGEquipment*>(this); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAFGEquipment(); \
	friend struct Z_Construct_UClass_AFGEquipment_Statics; \
public: \
	DECLARE_CLASS(AFGEquipment, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGEquipment) \
	virtual UObject* _getUObject() const override { return const_cast<AFGEquipment*>(this); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGEquipment(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGEquipment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEquipment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEquipment(AFGEquipment&&); \
	NO_API AFGEquipment(const AFGEquipment&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEquipment(AFGEquipment&&); \
	NO_API AFGEquipment(const AFGEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEquipment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGEquipment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m1PAnimClass() { return STRUCT_OFFSET(AFGEquipment, m1PAnimClass); } \
	FORCEINLINE static uint32 __PPO__mAttachSocket() { return STRUCT_OFFSET(AFGEquipment, mAttachSocket); } \
	FORCEINLINE static uint32 __PPO__mChildEquipmentClass() { return STRUCT_OFFSET(AFGEquipment, mChildEquipmentClass); } \
	FORCEINLINE static uint32 __PPO__mCostToUse() { return STRUCT_OFFSET(AFGEquipment, mCostToUse); } \
	FORCEINLINE static uint32 __PPO__mArmAnimation() { return STRUCT_OFFSET(AFGEquipment, mArmAnimation); } \
	FORCEINLINE static uint32 __PPO__mBackAnimation() { return STRUCT_OFFSET(AFGEquipment, mBackAnimation); } \
	FORCEINLINE static uint32 __PPO__mHasPersistentOwner() { return STRUCT_OFFSET(AFGEquipment, mHasPersistentOwner); } \
	FORCEINLINE static uint32 __PPO__mAttachment() { return STRUCT_OFFSET(AFGEquipment, mAttachment); } \
	FORCEINLINE static uint32 __PPO__mSecondaryAttachment() { return STRUCT_OFFSET(AFGEquipment, mSecondaryAttachment); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_33_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Equipment_FGEquipment_h


#define FOREACH_ENUM_EEQUIPMENTSLOT(op) \
	op(EEquipmentSlot::ES_NONE) \
	op(EEquipmentSlot::ES_ARMS) \
	op(EEquipmentSlot::ES_BACK) 

enum class EEquipmentSlot : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EEquipmentSlot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
