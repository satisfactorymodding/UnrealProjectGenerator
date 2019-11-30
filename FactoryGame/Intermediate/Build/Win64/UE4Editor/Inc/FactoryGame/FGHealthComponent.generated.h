// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
struct FVector;
struct FHitResult;
class UPrimitiveComponent;
#ifdef FACTORYGAME_FGHealthComponent_generated_h
#error "FGHealthComponent.generated.h already included, missing '#pragma once' in FGHealthComponent.h"
#endif
#define FACTORYGAME_FGHealthComponent_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_17_DELEGATE \
struct _Script_FactoryGame_eventHealDelegate_Parms \
{ \
	float amount; \
}; \
static inline void FHealDelegate_DelegateWrapper(const FMulticastScriptDelegate& HealDelegate, float amount) \
{ \
	_Script_FactoryGame_eventHealDelegate_Parms Parms; \
	Parms.amount=amount; \
	HealDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_15_DELEGATE \
struct _Script_FactoryGame_eventAdjustDamageDelegate_Parms \
{ \
	AActor* damagedActor; \
	float damageAmount; \
	const UDamageType* damageType; \
	AController* instigatedBy; \
	AActor* damageCauser; \
	float ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_FactoryGame_eventAdjustDamageDelegate_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline float FAdjustDamageDelegate_DelegateWrapper(const FScriptDelegate& AdjustDamageDelegate, AActor* damagedActor, float damageAmount, const UDamageType* damageType, AController* instigatedBy, AActor* damageCauser) \
{ \
	_Script_FactoryGame_eventAdjustDamageDelegate_Parms Parms; \
	Parms.damagedActor=damagedActor; \
	Parms.damageAmount=damageAmount; \
	Parms.damageType=damageType; \
	Parms.instigatedBy=instigatedBy; \
	Parms.damageCauser=damageCauser; \
	AdjustDamageDelegate.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_13_DELEGATE \
struct _Script_FactoryGame_eventTakeAnyDamageDelegate_Parms \
{ \
	AActor* damagedActor; \
	float damageAmount; \
	const UDamageType* damageType; \
	AController* instigatedBy; \
	AActor* damageCauser; \
}; \
static inline void FTakeAnyDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& TakeAnyDamageDelegate, AActor* damagedActor, float damageAmount, const UDamageType* damageType, AController* instigatedBy, AActor* damageCauser) \
{ \
	_Script_FactoryGame_eventTakeAnyDamageDelegate_Parms Parms; \
	Parms.damagedActor=damagedActor; \
	Parms.damageAmount=damageAmount; \
	Parms.damageType=damageType; \
	Parms.instigatedBy=instigatedBy; \
	Parms.damageCauser=damageCauser; \
	TakeAnyDamageDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_11_DELEGATE \
struct _Script_FactoryGame_eventDeathDelegate_Parms \
{ \
	AActor* DeadActor; \
}; \
static inline void FDeathDelegate_DelegateWrapper(const FMulticastScriptDelegate& DeathDelegate, AActor* DeadActor) \
{ \
	_Script_FactoryGame_eventDeathDelegate_Parms Parms; \
	Parms.DeadActor=DeadActor; \
	DeathDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_RPC_WRAPPERS \
	virtual void Client_Heal_Implementation(float amount); \
	virtual void Client_Died_Implementation(AActor* deadActor); \
	virtual void Client_TakeRadialDamage_Implementation(AActor* damagedActor, float damage, const UDamageType* damageType, FVector hitLocation, FHitResult hitInfo, AController* instigatedBy, AActor* damageCauser); \
	virtual void Client_TakePointDamage_Implementation(AActor* damagedActor, float damage, AController* instigatedBy, FVector hitLocation, UPrimitiveComponent* hitComponent, FName boneName, FVector shotFromDirection, const UDamageType* damageType, AActor* damageCauser); \
	virtual void Client_TakeDamage_Implementation(AActor* damagedActor, float damageAmount, const UDamageType* damageType, AController* instigatedBy, AActor* damageCauser); \
 \
	DECLARE_FUNCTION(execRemoveAdjustDamageListener) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_adjustDamage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAdjustDamageListener(FAdjustDamageDelegate(Z_Param_adjustDamage)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAdjustDamageListener) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_adjustDamage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAdjustDamageListener(FAdjustDamageDelegate(Z_Param_adjustDamage)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKill) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Kill(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReviveResetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReviveResetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetHealthFromDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetHealthFromDeath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Heal(Z_Param_healAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_Heal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_Heal_Implementation(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_Died) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_deadActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_Died_Implementation(Z_Param_deadActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_TakeRadialDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_STRUCT(FVector,Z_Param_hitLocation); \
		P_GET_STRUCT(FHitResult,Z_Param_hitInfo); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_TakeRadialDamage_Implementation(Z_Param_damagedActor,Z_Param_damage,Z_Param_damageType,Z_Param_hitLocation,Z_Param_hitInfo,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_TakePointDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_STRUCT(FVector,Z_Param_hitLocation); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_boneName); \
		P_GET_STRUCT(FVector,Z_Param_shotFromDirection); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_TakePointDamage_Implementation(Z_Param_damagedActor,Z_Param_damage,Z_Param_instigatedBy,Z_Param_hitLocation,Z_Param_hitComponent,Z_Param_boneName,Z_Param_shotFromDirection,Z_Param_damageType,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_TakeDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageAmount); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_TakeDamage_Implementation(Z_Param_damagedActor,Z_Param_damageAmount,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeRadialDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_STRUCT(FVector,Z_Param_hitLocation); \
		P_GET_STRUCT(FHitResult,Z_Param_hitInfo); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeRadialDamage(Z_Param_damagedActor,Z_Param_damage,Z_Param_damageType,Z_Param_hitLocation,Z_Param_hitInfo,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakePointDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_STRUCT(FVector,Z_Param_hitLocation); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_boneName); \
		P_GET_STRUCT(FVector,Z_Param_shotFromDirection); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakePointDamage(Z_Param_damagedActor,Z_Param_damage,Z_Param_instigatedBy,Z_Param_hitLocation,Z_Param_hitComponent,Z_Param_boneName,Z_Param_shotFromDirection,Z_Param_damageType,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageAmount); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_damagedActor,Z_Param_damageAmount,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_Heal_Implementation(float amount); \
	virtual void Client_Died_Implementation(AActor* deadActor); \
	virtual void Client_TakeRadialDamage_Implementation(AActor* damagedActor, float damage, const UDamageType* damageType, FVector hitLocation, FHitResult hitInfo, AController* instigatedBy, AActor* damageCauser); \
	virtual void Client_TakePointDamage_Implementation(AActor* damagedActor, float damage, AController* instigatedBy, FVector hitLocation, UPrimitiveComponent* hitComponent, FName boneName, FVector shotFromDirection, const UDamageType* damageType, AActor* damageCauser); \
	virtual void Client_TakeDamage_Implementation(AActor* damagedActor, float damageAmount, const UDamageType* damageType, AController* instigatedBy, AActor* damageCauser); \
 \
	DECLARE_FUNCTION(execRemoveAdjustDamageListener) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_adjustDamage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAdjustDamageListener(FAdjustDamageDelegate(Z_Param_adjustDamage)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAdjustDamageListener) \
	{ \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_adjustDamage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAdjustDamageListener(FAdjustDamageDelegate(Z_Param_adjustDamage)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKill) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Kill(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReviveResetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReviveResetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetHealthFromDeath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetHealthFromDeath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_healAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Heal(Z_Param_healAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_Heal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_Heal_Implementation(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_Died) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_deadActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_Died_Implementation(Z_Param_deadActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_TakeRadialDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_STRUCT(FVector,Z_Param_hitLocation); \
		P_GET_STRUCT(FHitResult,Z_Param_hitInfo); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_TakeRadialDamage_Implementation(Z_Param_damagedActor,Z_Param_damage,Z_Param_damageType,Z_Param_hitLocation,Z_Param_hitInfo,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_TakePointDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_STRUCT(FVector,Z_Param_hitLocation); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_boneName); \
		P_GET_STRUCT(FVector,Z_Param_shotFromDirection); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_TakePointDamage_Implementation(Z_Param_damagedActor,Z_Param_damage,Z_Param_instigatedBy,Z_Param_hitLocation,Z_Param_hitComponent,Z_Param_boneName,Z_Param_shotFromDirection,Z_Param_damageType,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_TakeDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageAmount); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Client_TakeDamage_Implementation(Z_Param_damagedActor,Z_Param_damageAmount,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeRadialDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_STRUCT(FVector,Z_Param_hitLocation); \
		P_GET_STRUCT(FHitResult,Z_Param_hitInfo); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeRadialDamage(Z_Param_damagedActor,Z_Param_damage,Z_Param_damageType,Z_Param_hitLocation,Z_Param_hitInfo,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakePointDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_STRUCT(FVector,Z_Param_hitLocation); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_boneName); \
		P_GET_STRUCT(FVector,Z_Param_shotFromDirection); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakePointDamage(Z_Param_damagedActor,Z_Param_damage,Z_Param_instigatedBy,Z_Param_hitLocation,Z_Param_hitComponent,Z_Param_boneName,Z_Param_shotFromDirection,Z_Param_damageType,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageAmount); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_damagedActor,Z_Param_damageAmount,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_EVENT_PARMS \
	struct FGHealthComponent_eventClient_Died_Parms \
	{ \
		AActor* deadActor; \
	}; \
	struct FGHealthComponent_eventClient_Heal_Parms \
	{ \
		float amount; \
	}; \
	struct FGHealthComponent_eventClient_TakeDamage_Parms \
	{ \
		AActor* damagedActor; \
		float damageAmount; \
		const UDamageType* damageType; \
		AController* instigatedBy; \
		AActor* damageCauser; \
	}; \
	struct FGHealthComponent_eventClient_TakePointDamage_Parms \
	{ \
		AActor* damagedActor; \
		float damage; \
		AController* instigatedBy; \
		FVector hitLocation; \
		UPrimitiveComponent* hitComponent; \
		FName boneName; \
		FVector shotFromDirection; \
		const UDamageType* damageType; \
		AActor* damageCauser; \
	}; \
	struct FGHealthComponent_eventClient_TakeRadialDamage_Parms \
	{ \
		AActor* damagedActor; \
		float damage; \
		const UDamageType* damageType; \
		FVector hitLocation; \
		FHitResult hitInfo; \
		AController* instigatedBy; \
		AActor* damageCauser; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGHealthComponent(); \
	friend struct Z_Construct_UClass_UFGHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UFGHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGHealthComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UFGHealthComponent*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUFGHealthComponent(); \
	friend struct Z_Construct_UClass_UFGHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UFGHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGHealthComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UFGHealthComponent*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGHealthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGHealthComponent(UFGHealthComponent&&); \
	NO_API UFGHealthComponent(const UFGHealthComponent&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGHealthComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGHealthComponent(UFGHealthComponent&&); \
	NO_API UFGHealthComponent(const UFGHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGHealthComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGHealthComponent)


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mOnAdjustDamage() { return STRUCT_OFFSET(UFGHealthComponent, mOnAdjustDamage); } \
	FORCEINLINE static uint32 __PPO__mMaxHealth() { return STRUCT_OFFSET(UFGHealthComponent, mMaxHealth); } \
	FORCEINLINE static uint32 __PPO__mCurrentHealth() { return STRUCT_OFFSET(UFGHealthComponent, mCurrentHealth); } \
	FORCEINLINE static uint32 __PPO__mRespawnHealthFactor() { return STRUCT_OFFSET(UFGHealthComponent, mRespawnHealthFactor); }


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_19_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
