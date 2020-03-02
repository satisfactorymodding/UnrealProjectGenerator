// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
struct FPickedUpInstance;
class AFGFoliagePickup;
class USceneComponent;
struct FTransform;
struct FVector;
#ifdef FACTORYGAME_FGChainsaw_generated_h
#error "FGChainsaw.generated.h already included, missing '#pragma once' in FGChainsaw.h"
#endif
#define FACTORYGAME_FGChainsaw_generated_h

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPickedUpInstance_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FPickedUpInstance>();

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_RPC_WRAPPERS \
	virtual bool Server_StopSawing_Validate(); \
	virtual void Server_StopSawing_Implementation(); \
	virtual void BroadcastPickup_Implementation(TArray<FPickedUpInstance> const& pickups, AFGFoliagePickup* instigatorPlayer); \
	virtual bool Server_RemoveChainsawedObject_Validate(USceneComponent* , FTransform , FVector ); \
	virtual void Server_RemoveChainsawedObject_Implementation(USceneComponent* sawingComponent, FTransform foliageToRemoveTransform, FVector effectLocation); \
	virtual bool Server_StartSawing_Validate(); \
	virtual void Server_StartSawing_Implementation(); \
	virtual bool CanStartSawing_Implementation(); \
 \
	DECLARE_FUNCTION(execGetFuelClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemDescriptor> *)Z_Param__Result=P_THIS->GetFuelClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyFuel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnyFuel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StopSawing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_StopSawing_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_StopSawing_Validate")); \
			return; \
		} \
		P_THIS->Server_StopSawing_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBroadcastPickup) \
	{ \
		P_GET_TARRAY(FPickedUpInstance,Z_Param_pickups); \
		P_GET_OBJECT(AFGFoliagePickup,Z_Param_instigatorPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BroadcastPickup_Implementation(Z_Param_pickups,Z_Param_instigatorPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_RemoveChainsawedObject) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_sawingComponent); \
		P_GET_STRUCT(FTransform,Z_Param_foliageToRemoveTransform); \
		P_GET_STRUCT(FVector,Z_Param_effectLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_RemoveChainsawedObject_Validate(Z_Param_sawingComponent,Z_Param_foliageToRemoveTransform,Z_Param_effectLocation)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_RemoveChainsawedObject_Validate")); \
			return; \
		} \
		P_THIS->Server_RemoveChainsawedObject_Implementation(Z_Param_sawingComponent,Z_Param_foliageToRemoveTransform,Z_Param_effectLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StartSawing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_StartSawing_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_StartSawing_Validate")); \
			return; \
		} \
		P_THIS->Server_StartSawing_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanStartSawing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanStartSawing_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSawProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SawProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSawing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSawing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSawEngaged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSawEngaged(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_StopSawing_Validate(); \
	virtual void Server_StopSawing_Implementation(); \
	virtual void BroadcastPickup_Implementation(TArray<FPickedUpInstance> const& pickups, AFGFoliagePickup* instigatorPlayer); \
	virtual bool Server_RemoveChainsawedObject_Validate(USceneComponent* , FTransform , FVector ); \
	virtual void Server_RemoveChainsawedObject_Implementation(USceneComponent* sawingComponent, FTransform foliageToRemoveTransform, FVector effectLocation); \
	virtual bool Server_StartSawing_Validate(); \
	virtual void Server_StartSawing_Implementation(); \
	virtual bool CanStartSawing_Implementation(); \
 \
	DECLARE_FUNCTION(execGetFuelClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemDescriptor> *)Z_Param__Result=P_THIS->GetFuelClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyFuel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnyFuel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StopSawing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_StopSawing_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_StopSawing_Validate")); \
			return; \
		} \
		P_THIS->Server_StopSawing_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBroadcastPickup) \
	{ \
		P_GET_TARRAY(FPickedUpInstance,Z_Param_pickups); \
		P_GET_OBJECT(AFGFoliagePickup,Z_Param_instigatorPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BroadcastPickup_Implementation(Z_Param_pickups,Z_Param_instigatorPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_RemoveChainsawedObject) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_sawingComponent); \
		P_GET_STRUCT(FTransform,Z_Param_foliageToRemoveTransform); \
		P_GET_STRUCT(FVector,Z_Param_effectLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_RemoveChainsawedObject_Validate(Z_Param_sawingComponent,Z_Param_foliageToRemoveTransform,Z_Param_effectLocation)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_RemoveChainsawedObject_Validate")); \
			return; \
		} \
		P_THIS->Server_RemoveChainsawedObject_Implementation(Z_Param_sawingComponent,Z_Param_foliageToRemoveTransform,Z_Param_effectLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StartSawing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_StartSawing_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_StartSawing_Validate")); \
			return; \
		} \
		P_THIS->Server_StartSawing_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanStartSawing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanStartSawing_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSawProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SawProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSawing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSawing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSawEngaged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSawEngaged(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_EVENT_PARMS \
	struct FGChainsaw_eventBroadcastPickup_Parms \
	{ \
		TArray<FPickedUpInstance> pickups; \
		AFGFoliagePickup* instigatorPlayer; \
	}; \
	struct FGChainsaw_eventCanStartSawing_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGChainsaw_eventCanStartSawing_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGChainsaw_eventServer_RemoveChainsawedObject_Parms \
	{ \
		USceneComponent* sawingComponent; \
		FTransform foliageToRemoveTransform; \
		FVector effectLocation; \
	};


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGChainsaw(); \
	friend struct Z_Construct_UClass_AFGChainsaw_Statics; \
public: \
	DECLARE_CLASS(AFGChainsaw, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGChainsaw)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_INCLASS \
private: \
	static void StaticRegisterNativesAFGChainsaw(); \
	friend struct Z_Construct_UClass_AFGChainsaw_Statics; \
public: \
	DECLARE_CLASS(AFGChainsaw, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGChainsaw)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGChainsaw(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGChainsaw) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGChainsaw); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGChainsaw); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGChainsaw(AFGChainsaw&&); \
	NO_API AFGChainsaw(const AFGChainsaw&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGChainsaw(AFGChainsaw&&); \
	NO_API AFGChainsaw(const AFGChainsaw&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGChainsaw); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGChainsaw); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGChainsaw)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mFuelClass() { return STRUCT_OFFSET(AFGChainsaw, mFuelClass); } \
	FORCEINLINE static uint32 __PPO__mEnergyConsumption() { return STRUCT_OFFSET(AFGChainsaw, mEnergyConsumption); } \
	FORCEINLINE static uint32 __PPO__mSawDownTreeTime() { return STRUCT_OFFSET(AFGChainsaw, mSawDownTreeTime); } \
	FORCEINLINE static uint32 __PPO__mCollateralPickupRadius() { return STRUCT_OFFSET(AFGChainsaw, mCollateralPickupRadius); } \
	FORCEINLINE static uint32 __PPO__mExcludeChainsawableFoliage() { return STRUCT_OFFSET(AFGChainsaw, mExcludeChainsawableFoliage); } \
	FORCEINLINE static uint32 __PPO__mEnergyStored() { return STRUCT_OFFSET(AFGChainsaw, mEnergyStored); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_40_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGChainsaw>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Equipment_FGChainsaw_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
