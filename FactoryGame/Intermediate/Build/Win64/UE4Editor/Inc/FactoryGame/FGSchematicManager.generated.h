// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGSchematic;
class AFGSchematicManager;
struct FItemAmount;
enum class ESchematicType : uint8;
class UObject;
#ifdef FACTORYGAME_FGSchematicManager_generated_h
#error "FGSchematicManager.generated.h already included, missing '#pragma once' in FGSchematicManager.h"
#endif
#define FACTORYGAME_FGSchematicManager_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSchematicCost_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FSchematicCost>();

#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_18_DELEGATE \
struct _Script_FactoryGame_eventOnActiveSchematicChanged_Parms \
{ \
	TSubclassOf<UFGSchematic>  activeSchematic; \
}; \
static inline void FOnActiveSchematicChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActiveSchematicChanged, TSubclassOf<UFGSchematic>  activeSchematic) \
{ \
	_Script_FactoryGame_eventOnActiveSchematicChanged_Parms Parms; \
	Parms.activeSchematic=activeSchematic; \
	OnActiveSchematicChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_17_DELEGATE \
struct _Script_FactoryGame_eventPaidOffOnSchematicDelegate_Parms \
{ \
	AFGSchematicManager* schematicManager; \
}; \
static inline void FPaidOffOnSchematicDelegate_DelegateWrapper(const FMulticastScriptDelegate& PaidOffOnSchematicDelegate, AFGSchematicManager* schematicManager) \
{ \
	_Script_FactoryGame_eventPaidOffOnSchematicDelegate_Parms Parms; \
	Parms.schematicManager=schematicManager; \
	PaidOffOnSchematicDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_16_DELEGATE \
struct _Script_FactoryGame_eventPurchasedSchematicDelegate_Parms \
{ \
	TSubclassOf<UFGSchematic>  purchasedSchematic; \
}; \
static inline void FPurchasedSchematicDelegate_DelegateWrapper(const FMulticastScriptDelegate& PurchasedSchematicDelegate, TSubclassOf<UFGSchematic>  purchasedSchematic) \
{ \
	_Script_FactoryGame_eventPurchasedSchematicDelegate_Parms Parms; \
	Parms.purchasedSchematic=purchasedSchematic; \
	PurchasedSchematicDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_PaidOffOnSchematic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PaidOffOnSchematic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PurchasedSchematic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PurchasedSchematic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ActiveSchematic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ActiveSchematic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxAllowedTechTier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxAllowedTechTier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHighestAvailableTechTier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHighestAvailableTechTier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeUntilShipReturn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeUntilShipReturn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsShipAtTradingPost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsShipAtTradingPost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchShip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchShip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveSchematic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGSchematic> *)Z_Param__Result=P_THIS->GetActiveSchematic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSetAsActiveSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inSchematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanSetAsActiveSchematic(Z_Param_inSchematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newActiveSchematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetActiveSchematic(Z_Param_newActiveSchematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPayOffOnSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_GET_TARRAY_REF(FItemAmount,Z_Param_Out_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PayOffOnSchematic(Z_Param_schematic,Z_Param_Out_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSchematicPaidOff) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSchematicPaidOff(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPaidOffCostFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=P_THIS->GetPaidOffCostFor(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRemainingCostFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=P_THIS->GetRemainingCostFor(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCostFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=P_THIS->GetCostFor(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAvailableSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematicClassToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAvailableSchematic(Z_Param_schematicClassToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveAccessToSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematicClass); \
		P_GET_UBOOL(Z_Param_accessedViaCheats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveAccessToSchematic(Z_Param_schematicClass,Z_Param_accessedViaCheats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSchematicPurchased) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematicClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSchematicPurchased(Z_Param_schematicClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllSchematicsOfTypeFilteredOnDependency) \
	{ \
		P_GET_ENUM(ESchematicType,Z_Param_type); \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllSchematicsOfTypeFilteredOnDependency(ESchematicType(Z_Param_type),Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllSchematicsOfType) \
	{ \
		P_GET_ENUM(ESchematicType,Z_Param_type); \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllSchematicsOfType(ESchematicType(Z_Param_type),Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllSchematics) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllSchematics(Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllPurchasedSchematics) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllPurchasedSchematics(Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPurchasedSchematicsOfTypes) \
	{ \
		P_GET_TARRAY(ESchematicType,Z_Param_types); \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPurchasedSchematicsOfTypes(Z_Param_types,Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableSchematics) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAvailableSchematics(Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGSchematicManager**)Z_Param__Result=AFGSchematicManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_PaidOffOnSchematic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PaidOffOnSchematic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_PurchasedSchematic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PurchasedSchematic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ActiveSchematic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ActiveSchematic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxAllowedTechTier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxAllowedTechTier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHighestAvailableTechTier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHighestAvailableTechTier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeUntilShipReturn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeUntilShipReturn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsShipAtTradingPost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsShipAtTradingPost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchShip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchShip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveSchematic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGSchematic> *)Z_Param__Result=P_THIS->GetActiveSchematic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSetAsActiveSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inSchematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanSetAsActiveSchematic(Z_Param_inSchematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newActiveSchematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetActiveSchematic(Z_Param_newActiveSchematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPayOffOnSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_GET_TARRAY_REF(FItemAmount,Z_Param_Out_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PayOffOnSchematic(Z_Param_schematic,Z_Param_Out_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSchematicPaidOff) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSchematicPaidOff(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPaidOffCostFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=P_THIS->GetPaidOffCostFor(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRemainingCostFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=P_THIS->GetRemainingCostFor(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCostFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=P_THIS->GetCostFor(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAvailableSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematicClassToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAvailableSchematic(Z_Param_schematicClassToAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveAccessToSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematicClass); \
		P_GET_UBOOL(Z_Param_accessedViaCheats); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveAccessToSchematic(Z_Param_schematicClass,Z_Param_accessedViaCheats); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSchematicPurchased) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematicClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSchematicPurchased(Z_Param_schematicClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllSchematicsOfTypeFilteredOnDependency) \
	{ \
		P_GET_ENUM(ESchematicType,Z_Param_type); \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllSchematicsOfTypeFilteredOnDependency(ESchematicType(Z_Param_type),Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllSchematicsOfType) \
	{ \
		P_GET_ENUM(ESchematicType,Z_Param_type); \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllSchematicsOfType(ESchematicType(Z_Param_type),Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllSchematics) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllSchematics(Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllPurchasedSchematics) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllPurchasedSchematics(Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPurchasedSchematicsOfTypes) \
	{ \
		P_GET_TARRAY(ESchematicType,Z_Param_types); \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPurchasedSchematicsOfTypes(Z_Param_types,Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableSchematics) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematic> ,Z_Param_Out_out_schematics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAvailableSchematics(Z_Param_Out_out_schematics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGSchematicManager**)Z_Param__Result=AFGSchematicManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGSchematicManager(); \
	friend struct Z_Construct_UClass_AFGSchematicManager_Statics; \
public: \
	DECLARE_CLASS(AFGSchematicManager, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGSchematicManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGSchematicManager*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_INCLASS \
private: \
	static void StaticRegisterNativesAFGSchematicManager(); \
	friend struct Z_Construct_UClass_AFGSchematicManager_Statics; \
public: \
	DECLARE_CLASS(AFGSchematicManager, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGSchematicManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGSchematicManager*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGSchematicManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGSchematicManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGSchematicManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGSchematicManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGSchematicManager(AFGSchematicManager&&); \
	NO_API AFGSchematicManager(const AFGSchematicManager&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGSchematicManager(AFGSchematicManager&&); \
	NO_API AFGSchematicManager(const AFGSchematicManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGSchematicManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGSchematicManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGSchematicManager)


#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mAllSchematics() { return STRUCT_OFFSET(AFGSchematicManager, mAllSchematics); } \
	FORCEINLINE static uint32 __PPO__mAvailableSchematics() { return STRUCT_OFFSET(AFGSchematicManager, mAvailableSchematics); } \
	FORCEINLINE static uint32 __PPO__mPurchasedSchematics() { return STRUCT_OFFSET(AFGSchematicManager, mPurchasedSchematics); } \
	FORCEINLINE static uint32 __PPO__mPaidOffSchematic() { return STRUCT_OFFSET(AFGSchematicManager, mPaidOffSchematic); } \
	FORCEINLINE static uint32 __PPO__mActiveSchematic() { return STRUCT_OFFSET(AFGSchematicManager, mActiveSchematic); } \
	FORCEINLINE static uint32 __PPO__mOnActiveSchematicChanged() { return STRUCT_OFFSET(AFGSchematicManager, mOnActiveSchematicChanged); } \
	FORCEINLINE static uint32 __PPO__mShipLandTimeStamp() { return STRUCT_OFFSET(AFGSchematicManager, mShipLandTimeStamp); } \
	FORCEINLINE static uint32 __PPO__mShipLandTimeStampSave() { return STRUCT_OFFSET(AFGSchematicManager, mShipLandTimeStampSave); } \
	FORCEINLINE static uint32 __PPO__mHasTechTierLimit() { return STRUCT_OFFSET(AFGSchematicManager, mHasTechTierLimit); } \
	FORCEINLINE static uint32 __PPO__mMaxAllowedTechTier() { return STRUCT_OFFSET(AFGSchematicManager, mMaxAllowedTechTier); } \
	FORCEINLINE static uint32 __PPO__mShipReturnedMessage() { return STRUCT_OFFSET(AFGSchematicManager, mShipReturnedMessage); }


#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_40_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGSchematicManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGSchematicManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
