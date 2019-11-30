// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AFGCreatureSpawner;
struct FVector;
enum class EMoveSpeed : uint8;
class UFGItemDescriptor;
class UMaterialInstance;
struct FRotator;
class AFGSplinePath;
#ifdef FACTORYGAME_FGCreature_generated_h
#error "FGCreature.generated.h already included, missing '#pragma once' in FGCreature.h"
#endif
#define FACTORYGAME_FGCreature_generated_h

#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoveSpeedPair_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_13_DELEGATE \
struct _Script_FactoryGame_eventRotationDoneDelegate_Parms \
{ \
	APawn* PawnRotated; \
}; \
static inline void FRotationDoneDelegate_DelegateWrapper(const FMulticastScriptDelegate& RotationDoneDelegate, APawn* PawnRotated) \
{ \
	_Script_FactoryGame_eventRotationDoneDelegate_Parms Parms; \
	Parms.PawnRotated=PawnRotated; \
	RotationDoneDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_RPC_WRAPPERS \
	virtual void SpawnDeathItem_Implementation(); \
	virtual void Multicast_ConsumeItem_Implementation(TSubclassOf<UFGItemDescriptor>  itemDescriptor, int32 amount); \
	virtual void ConfigureArachnophobiaMode_Implementation(bool isArachnophobiaMode); \
	virtual void CancelRotationMovement_Implementation(); \
	virtual void StartRotationMovement_Implementation(FRotator targetRotation); \
 \
	DECLARE_FUNCTION(execOnRep_IsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_TargetRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TargetRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpawner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCreatureSpawner**)Z_Param__Result=P_THIS->GetSpawner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDeathItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnDeathItem_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAiCalculateLeadTrajectory) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_targetPos); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_targetVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_fromPos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_interceptorSpeed); \
		P_GET_UBOOL_REF(Z_Param_Out_isPosibleToLead); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_interceptPoint); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_leadScaling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AFGCreature::AiCalculateLeadTrajectory(Z_Param_Out_targetPos,Z_Param_Out_targetVelocity,Z_Param_Out_fromPos,Z_Param_interceptorSpeed,Z_Param_Out_isPosibleToLead,Z_Param_Out_interceptPoint,Z_Param_leadScaling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMoveSpeed) \
	{ \
		P_GET_ENUM(EMoveSpeed,Z_Param_newMoveSpeedType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMoveSpeed(EMoveSpeed(Z_Param_newMoveSpeedType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticast_ConsumeItem) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemDescriptor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_ConsumeItem_Implementation(Z_Param_itemDescriptor,Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckRotationMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckRotationMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnArachnophobiaModeChanged) \
	{ \
		P_GET_UBOOL(Z_Param_isArachnophobiaMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnArachnophobiaModeChanged(Z_Param_isArachnophobiaMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDayTimePctAsNight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDayTimePctAsNight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConfigureArachnophobiaMode) \
	{ \
		P_GET_UBOOL(Z_Param_isArachnophobiaMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConfigureArachnophobiaMode_Implementation(Z_Param_isArachnophobiaMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArachnophobiaModeMaterials) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMaterialInstance*>*)Z_Param__Result=P_THIS->GetArachnophobiaModeMaterials(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsArachnid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsArachnid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetTargetRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelRotationMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelRotationMovement_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRotationMovement) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_targetRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRotationMovement_Implementation(Z_Param_targetRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPersistent) \
	{ \
		P_GET_UBOOL(Z_Param_persist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPersistent(Z_Param_persist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPersistent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPersistent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplinePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGSplinePath**)Z_Param__Result=P_THIS->GetSplinePath(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnDeathItem_Implementation(); \
	virtual void Multicast_ConsumeItem_Implementation(TSubclassOf<UFGItemDescriptor>  itemDescriptor, int32 amount); \
	virtual void ConfigureArachnophobiaMode_Implementation(bool isArachnophobiaMode); \
	virtual void CancelRotationMovement_Implementation(); \
	virtual void StartRotationMovement_Implementation(FRotator targetRotation); \
 \
	DECLARE_FUNCTION(execOnRep_IsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_TargetRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TargetRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpawner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCreatureSpawner**)Z_Param__Result=P_THIS->GetSpawner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnDeathItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnDeathItem_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAiCalculateLeadTrajectory) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_targetPos); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_targetVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_fromPos); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_interceptorSpeed); \
		P_GET_UBOOL_REF(Z_Param_Out_isPosibleToLead); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_interceptPoint); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_leadScaling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		AFGCreature::AiCalculateLeadTrajectory(Z_Param_Out_targetPos,Z_Param_Out_targetVelocity,Z_Param_Out_fromPos,Z_Param_interceptorSpeed,Z_Param_Out_isPosibleToLead,Z_Param_Out_interceptPoint,Z_Param_leadScaling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMoveSpeed) \
	{ \
		P_GET_ENUM(EMoveSpeed,Z_Param_newMoveSpeedType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMoveSpeed(EMoveSpeed(Z_Param_newMoveSpeedType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticast_ConsumeItem) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemDescriptor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_ConsumeItem_Implementation(Z_Param_itemDescriptor,Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckRotationMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckRotationMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnArachnophobiaModeChanged) \
	{ \
		P_GET_UBOOL(Z_Param_isArachnophobiaMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnArachnophobiaModeChanged(Z_Param_isArachnophobiaMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDayTimePctAsNight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDayTimePctAsNight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConfigureArachnophobiaMode) \
	{ \
		P_GET_UBOOL(Z_Param_isArachnophobiaMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConfigureArachnophobiaMode_Implementation(Z_Param_isArachnophobiaMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArachnophobiaModeMaterials) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMaterialInstance*>*)Z_Param__Result=P_THIS->GetArachnophobiaModeMaterials(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsArachnid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsArachnid(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetTargetRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelRotationMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelRotationMovement_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRotationMovement) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_targetRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRotationMovement_Implementation(Z_Param_targetRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPersistent) \
	{ \
		P_GET_UBOOL(Z_Param_persist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPersistent(Z_Param_persist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPersistent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPersistent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplinePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGSplinePath**)Z_Param__Result=P_THIS->GetSplinePath(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_EVENT_PARMS \
	struct FGCreature_eventConfigureArachnophobiaMode_Parms \
	{ \
		bool isArachnophobiaMode; \
	}; \
	struct FGCreature_eventMulticast_ConsumeItem_Parms \
	{ \
		TSubclassOf<UFGItemDescriptor>  itemDescriptor; \
		int32 amount; \
	}; \
	struct FGCreature_eventPlayConsumeItemEffect_Parms \
	{ \
		TSubclassOf<UFGItemDescriptor>  itemDescriptor; \
		int32 amount; \
	}; \
	struct FGCreature_eventStartRotationMovement_Parms \
	{ \
		FRotator targetRotation; \
	};


#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCreature(); \
	friend struct Z_Construct_UClass_AFGCreature_Statics; \
public: \
	DECLARE_CLASS(AFGCreature, AFGCharacterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCreature)


#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_INCLASS \
private: \
	static void StaticRegisterNativesAFGCreature(); \
	friend struct Z_Construct_UClass_AFGCreature_Statics; \
public: \
	DECLARE_CLASS(AFGCreature, AFGCharacterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCreature)


#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCreature(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCreature) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCreature); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCreature); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCreature(AFGCreature&&); \
	NO_API AFGCreature(const AFGCreature&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCreature(AFGCreature&&); \
	NO_API AFGCreature(const AFGCreature&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCreature); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCreature); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCreature)


#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mNavigationGenerationRadius() { return STRUCT_OFFSET(AFGCreature, mNavigationGenerationRadius); } \
	FORCEINLINE static uint32 __PPO__mNavigationRemovalRadius() { return STRUCT_OFFSET(AFGCreature, mNavigationRemovalRadius); } \
	FORCEINLINE static uint32 __PPO__mArachnophobiaModeMaterials() { return STRUCT_OFFSET(AFGCreature, mArachnophobiaModeMaterials); } \
	FORCEINLINE static uint32 __PPO__mIsArachnid() { return STRUCT_OFFSET(AFGCreature, mIsArachnid); } \
	FORCEINLINE static uint32 __PPO__mIsEnabled() { return STRUCT_OFFSET(AFGCreature, mIsEnabled); } \
	FORCEINLINE static uint32 __PPO__mItemToDrop() { return STRUCT_OFFSET(AFGCreature, mItemToDrop); } \
	FORCEINLINE static uint32 __PPO__mIsPersistent() { return STRUCT_OFFSET(AFGCreature, mIsPersistent); } \
	FORCEINLINE static uint32 __PPO__mActualAIControllerClass() { return STRUCT_OFFSET(AFGCreature, mActualAIControllerClass); } \
	FORCEINLINE static uint32 __PPO__mRotationTimerHandle() { return STRUCT_OFFSET(AFGCreature, mRotationTimerHandle); } \
	FORCEINLINE static uint32 __PPO__mTargetRotation() { return STRUCT_OFFSET(AFGCreature, mTargetRotation); } \
	FORCEINLINE static uint32 __PPO__mCanSpawnDuringDay() { return STRUCT_OFFSET(AFGCreature, mCanSpawnDuringDay); } \
	FORCEINLINE static uint32 __PPO__mCanSpawnDuringNight() { return STRUCT_OFFSET(AFGCreature, mCanSpawnDuringNight); } \
	FORCEINLINE static uint32 __PPO__mMoveDuringRotation() { return STRUCT_OFFSET(AFGCreature, mMoveDuringRotation); } \
	FORCEINLINE static uint32 __PPO__mRotationSpeedMultiplier() { return STRUCT_OFFSET(AFGCreature, mRotationSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO__mEyeLocationComponent() { return STRUCT_OFFSET(AFGCreature, mEyeLocationComponent); } \
	FORCEINLINE static uint32 __PPO__mArachnophobia_Sprite() { return STRUCT_OFFSET(AFGCreature, mArachnophobia_Sprite); } \
	FORCEINLINE static uint32 __PPO__mArachnophobia_Material() { return STRUCT_OFFSET(AFGCreature, mArachnophobia_Material); } \
	FORCEINLINE static uint32 __PPO__mArachnophobia_Particle() { return STRUCT_OFFSET(AFGCreature, mArachnophobia_Particle); } \
	FORCEINLINE static uint32 __PPO__mDayTimePctCountAsNight() { return STRUCT_OFFSET(AFGCreature, mDayTimePctCountAsNight); } \
	FORCEINLINE static uint32 __PPO__mOwningSpawner() { return STRUCT_OFFSET(AFGCreature, mOwningSpawner); }


#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_48_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Creature_FGCreature_h


#define FOREACH_ENUM_EMOVESPEED(op) \
	op(EMoveSpeed::MS_Undefined) \
	op(EMoveSpeed::MS_Walk) \
	op(EMoveSpeed::MS_Run) \
	op(EMoveSpeed::MS_Sprint) 
#define FOREACH_ENUM_EENABLED(op) \
	op(E_Enabled) \
	op(E_Disabled) \
	op(E_Unknown) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
