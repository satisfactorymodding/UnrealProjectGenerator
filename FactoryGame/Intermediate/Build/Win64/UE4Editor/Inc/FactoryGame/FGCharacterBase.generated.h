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
class USkeletalMeshComponent;
struct FVector;
struct FHitResult;
class AFGVehicle;
class UParticleSystem;
class UAkAudioEvent;
class UFGDamageType;
class UFGHealthComponent;
class UCurveFloat;
class UPrimitiveComponent;
#ifdef FACTORYGAME_FGCharacterBase_generated_h
#error "FGCharacterBase.generated.h already included, missing '#pragma once' in FGCharacterBase.h"
#endif
#define FACTORYGAME_FGCharacterBase_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootstepEffectWater_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FFootstepEffectWater>();

#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootstepEffectSurface_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FFootstepEffectSurface>();

#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootstepEffect_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FFootstepEffect>();

#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_RPC_WRAPPERS \
	virtual void PlayFootstepEffect_Implementation(int32 footDown, bool playSound); \
	virtual int32 CalculateFallDamage_Implementation(float zSpeed) const; \
 \
	DECLARE_FUNCTION(execOnRep_IsPossessed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsPossessed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsRagdolled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsRagdolled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfShouldDestroy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckIfShouldDestroy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageAmount); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->AdjustDamage(Z_Param_damagedActor,Z_Param_damageAmount,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMainMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMesh3P) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh3P(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRagdollCharacter) \
	{ \
		P_GET_UBOOL(Z_Param_newRagdoll); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RagdollCharacter(Z_Param_newRagdoll); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRagdolled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRagdolled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTraceForGround) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_traceStart); \
		P_GET_STRUCT(FVector,Z_Param_traceEnd); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_out_hitResult); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_out_waterDepth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TraceForGround(Z_Param_traceStart,Z_Param_traceEnd,Z_Param_Out_out_hitResult,Z_Param_Out_out_waterDepth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFootstepEffect) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_footDown); \
		P_GET_UBOOL(Z_Param_playSound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFootstepEffect_Implementation(Z_Param_footDown,Z_Param_playSound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushedByVehicle) \
	{ \
		P_GET_OBJECT(AFGVehicle,Z_Param_vehicle); \
		P_GET_STRUCT(FVector,Z_Param_pushVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PushedByVehicle(Z_Param_vehicle,Z_Param_pushVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAliveAndWell) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAliveAndWell(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTakeDamageParticle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetTakeDamageParticle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeathSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetDeathSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTakeDamageSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetTakeDamageSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFallDamageDamageType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGDamageType> *)Z_Param__Result=P_THIS->GetFallDamageDamageType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGHealthComponent**)Z_Param__Result=P_THIS->GetHealthComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFallDamageOverride) \
	{ \
		P_GET_OBJECT(UCurveFloat,Z_Param_fallDamageCurveOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFallDamageOverride(Z_Param_fallDamageCurveOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateFallDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_zSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->CalculateFallDamage_Implementation(Z_Param_zSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTakeRadialDamage) \
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
		P_THIS->OnTakeRadialDamage(Z_Param_damagedActor,Z_Param_damage,Z_Param_damageType,Z_Param_hitLocation,Z_Param_hitInfo,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTakePointDamage) \
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
		P_THIS->OnTakePointDamage(Z_Param_damagedActor,Z_Param_damage,Z_Param_instigatedBy,Z_Param_hitLocation,Z_Param_hitComponent,Z_Param_boneName,Z_Param_shotFromDirection,Z_Param_damageType,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTakeDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageAmount); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTakeDamage(Z_Param_damagedActor,Z_Param_damageAmount,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDied) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_thisActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Died(Z_Param_thisActor); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PlayFootstepEffect_Implementation(int32 footDown, bool playSound); \
	virtual int32 CalculateFallDamage_Implementation(float zSpeed) const; \
 \
	DECLARE_FUNCTION(execOnRep_IsPossessed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsPossessed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsRagdolled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsRagdolled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckIfShouldDestroy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckIfShouldDestroy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdjustDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageAmount); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->AdjustDamage(Z_Param_damagedActor,Z_Param_damageAmount,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMainMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMesh3P) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh3P(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRagdollCharacter) \
	{ \
		P_GET_UBOOL(Z_Param_newRagdoll); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RagdollCharacter(Z_Param_newRagdoll); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRagdolled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRagdolled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTraceForGround) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_traceStart); \
		P_GET_STRUCT(FVector,Z_Param_traceEnd); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_out_hitResult); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_out_waterDepth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TraceForGround(Z_Param_traceStart,Z_Param_traceEnd,Z_Param_Out_out_hitResult,Z_Param_Out_out_waterDepth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFootstepEffect) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_footDown); \
		P_GET_UBOOL(Z_Param_playSound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFootstepEffect_Implementation(Z_Param_footDown,Z_Param_playSound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushedByVehicle) \
	{ \
		P_GET_OBJECT(AFGVehicle,Z_Param_vehicle); \
		P_GET_STRUCT(FVector,Z_Param_pushVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PushedByVehicle(Z_Param_vehicle,Z_Param_pushVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAliveAndWell) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAliveAndWell(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTakeDamageParticle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetTakeDamageParticle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeathSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetDeathSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTakeDamageSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetTakeDamageSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFallDamageDamageType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGDamageType> *)Z_Param__Result=P_THIS->GetFallDamageDamageType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGHealthComponent**)Z_Param__Result=P_THIS->GetHealthComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFallDamageOverride) \
	{ \
		P_GET_OBJECT(UCurveFloat,Z_Param_fallDamageCurveOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFallDamageOverride(Z_Param_fallDamageCurveOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateFallDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_zSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->CalculateFallDamage_Implementation(Z_Param_zSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTakeRadialDamage) \
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
		P_THIS->OnTakeRadialDamage(Z_Param_damagedActor,Z_Param_damage,Z_Param_damageType,Z_Param_hitLocation,Z_Param_hitInfo,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTakePointDamage) \
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
		P_THIS->OnTakePointDamage(Z_Param_damagedActor,Z_Param_damage,Z_Param_instigatedBy,Z_Param_hitLocation,Z_Param_hitComponent,Z_Param_boneName,Z_Param_shotFromDirection,Z_Param_damageType,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTakeDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damageAmount); \
		P_GET_OBJECT(UDamageType,Z_Param_damageType); \
		P_GET_OBJECT(AController,Z_Param_instigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTakeDamage(Z_Param_damagedActor,Z_Param_damageAmount,Z_Param_damageType,Z_Param_instigatedBy,Z_Param_damageCauser); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDied) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_thisActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Died(Z_Param_thisActor); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_EVENT_PARMS \
	struct FGCharacterBase_eventCalculateFallDamage_Parms \
	{ \
		float zSpeed; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGCharacterBase_eventCalculateFallDamage_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct FGCharacterBase_eventNotifyOnTakeDamage_Parms \
	{ \
		AActor* damagedActor; \
		float damageAmount; \
		const UDamageType* damageType; \
		AController* instigatedBy; \
		AActor* damageCauser; \
	}; \
	struct FGCharacterBase_eventNotifyOnTakePointDamage_Parms \
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
	struct FGCharacterBase_eventNotifyOnTakeRadialDamage_Parms \
	{ \
		AActor* damagedActor; \
		float damage; \
		AController* instigatedBy; \
		const UDamageType* damageType; \
		AActor* damageCauser; \
	}; \
	struct FGCharacterBase_eventOnLocallyPossessedChanged_Parms \
	{ \
		bool isLocallyPossessed; \
	}; \
	struct FGCharacterBase_eventPlayFootstepEffect_Parms \
	{ \
		int32 footDown; \
		bool playSound; \
	}; \
	struct FGCharacterBase_eventReceivedAdjustDamage_Parms \
	{ \
		float damageAmount; \
		const UDamageType* damageType; \
		AController* instigatedBy; \
		AActor* damageCauser; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGCharacterBase_eventReceivedAdjustDamage_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCharacterBase(); \
	friend struct Z_Construct_UClass_AFGCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AFGCharacterBase, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AFGCharacterBase*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_INCLASS \
private: \
	static void StaticRegisterNativesAFGCharacterBase(); \
	friend struct Z_Construct_UClass_AFGCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AFGCharacterBase, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<AFGCharacterBase*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCharacterBase(AFGCharacterBase&&); \
	NO_API AFGCharacterBase(const AFGCharacterBase&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCharacterBase(AFGCharacterBase&&); \
	NO_API AFGCharacterBase(const AFGCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCharacterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCharacterBase)


#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mFeetNames() { return STRUCT_OFFSET(AFGCharacterBase, mFeetNames); } \
	FORCEINLINE static uint32 __PPO__mDefaultFootstepEffect() { return STRUCT_OFFSET(AFGCharacterBase, mDefaultFootstepEffect); } \
	FORCEINLINE static uint32 __PPO__mFootstepEffect() { return STRUCT_OFFSET(AFGCharacterBase, mFootstepEffect); } \
	FORCEINLINE static uint32 __PPO__mFootstepAudioEvents() { return STRUCT_OFFSET(AFGCharacterBase, mFootstepAudioEvents); } \
	FORCEINLINE static uint32 __PPO__mMaxFootstepParticleSpawnDistance() { return STRUCT_OFFSET(AFGCharacterBase, mMaxFootstepParticleSpawnDistance); } \
	FORCEINLINE static uint32 __PPO__mMaxFootstepDecalSpawnDistance() { return STRUCT_OFFSET(AFGCharacterBase, mMaxFootstepDecalSpawnDistance); } \
	FORCEINLINE static uint32 __PPO__mFootstepDecalSize() { return STRUCT_OFFSET(AFGCharacterBase, mFootstepDecalSize); } \
	FORCEINLINE static uint32 __PPO__mFootstepDecalLifetime() { return STRUCT_OFFSET(AFGCharacterBase, mFootstepDecalLifetime); } \
	FORCEINLINE static uint32 __PPO__mHealthComponent() { return STRUCT_OFFSET(AFGCharacterBase, mHealthComponent); } \
	FORCEINLINE static uint32 __PPO__mFallDamageCurve() { return STRUCT_OFFSET(AFGCharacterBase, mFallDamageCurve); } \
	FORCEINLINE static uint32 __PPO__mFallDamageCurveOverride() { return STRUCT_OFFSET(AFGCharacterBase, mFallDamageCurveOverride); } \
	FORCEINLINE static uint32 __PPO__mFallDamageDamageType() { return STRUCT_OFFSET(AFGCharacterBase, mFallDamageDamageType); } \
	FORCEINLINE static uint32 __PPO__mMaxDeathStayTime() { return STRUCT_OFFSET(AFGCharacterBase, mMaxDeathStayTime); } \
	FORCEINLINE static uint32 __PPO__mDeathRemoveCheckTime() { return STRUCT_OFFSET(AFGCharacterBase, mDeathRemoveCheckTime); } \
	FORCEINLINE static uint32 __PPO__mEnemyTargetDesirability() { return STRUCT_OFFSET(AFGCharacterBase, mEnemyTargetDesirability); } \
	FORCEINLINE static uint32 __PPO__mTakeDamageSound() { return STRUCT_OFFSET(AFGCharacterBase, mTakeDamageSound); } \
	FORCEINLINE static uint32 __PPO__mDeathSound() { return STRUCT_OFFSET(AFGCharacterBase, mDeathSound); } \
	FORCEINLINE static uint32 __PPO__mLandEvent() { return STRUCT_OFFSET(AFGCharacterBase, mLandEvent); } \
	FORCEINLINE static uint32 __PPO__mTakeDamageParticle() { return STRUCT_OFFSET(AFGCharacterBase, mTakeDamageParticle); } \
	FORCEINLINE static uint32 __PPO__mMinVehiclePushVelocityForRagdoll() { return STRUCT_OFFSET(AFGCharacterBase, mMinVehiclePushVelocityForRagdoll); } \
	FORCEINLINE static uint32 __PPO__mTimeToGetUpFromRagdoll() { return STRUCT_OFFSET(AFGCharacterBase, mTimeToGetUpFromRagdoll); } \
	FORCEINLINE static uint32 __PPO__mMaxDistanceMovedToGetUp() { return STRUCT_OFFSET(AFGCharacterBase, mMaxDistanceMovedToGetUp); } \
	FORCEINLINE static uint32 __PPO__mIsRagdolled() { return STRUCT_OFFSET(AFGCharacterBase, mIsRagdolled); } \
	FORCEINLINE static uint32 __PPO__mRagdollMeshLoc() { return STRUCT_OFFSET(AFGCharacterBase, mRagdollMeshLoc); } \
	FORCEINLINE static uint32 __PPO__mRagdollMeshVelocity() { return STRUCT_OFFSET(AFGCharacterBase, mRagdollMeshVelocity); } \
	FORCEINLINE static uint32 __PPO__mRagdollMeshLocBoneName() { return STRUCT_OFFSET(AFGCharacterBase, mRagdollMeshLocBoneName); } \
	FORCEINLINE static uint32 __PPO__mRagdollMeshPhysicsBoneName() { return STRUCT_OFFSET(AFGCharacterBase, mRagdollMeshPhysicsBoneName); } \
	FORCEINLINE static uint32 __PPO__mSyncBodyMaxDistance() { return STRUCT_OFFSET(AFGCharacterBase, mSyncBodyMaxDistance); } \
	FORCEINLINE static uint32 __PPO__mApplyDamageMomentum() { return STRUCT_OFFSET(AFGCharacterBase, mApplyDamageMomentum); } \
	FORCEINLINE static uint32 __PPO__mIgnoredDamageTypes() { return STRUCT_OFFSET(AFGCharacterBase, mIgnoredDamageTypes); } \
	FORCEINLINE static uint32 __PPO__mWeakspotMultiplier() { return STRUCT_OFFSET(AFGCharacterBase, mWeakspotMultiplier); } \
	FORCEINLINE static uint32 __PPO__mWeakspotBoneNames() { return STRUCT_OFFSET(AFGCharacterBase, mWeakspotBoneNames); } \
	FORCEINLINE static uint32 __PPO__mNormalDamageMultiplier() { return STRUCT_OFFSET(AFGCharacterBase, mNormalDamageMultiplier); } \
	FORCEINLINE static uint32 __PPO__mIsPossessed() { return STRUCT_OFFSET(AFGCharacterBase, mIsPossessed); }


#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_69_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
