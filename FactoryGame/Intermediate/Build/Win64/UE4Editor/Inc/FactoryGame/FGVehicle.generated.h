// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APhysicsVolume;
class AActor;
class UDamageType;
class AController;
class AAIController;
class UFGHealthComponent;
struct FInventoryStack;
#ifdef FACTORYGAME_FGVehicle_generated_h
#error "FGVehicle.generated.h already included, missing '#pragma once' in FGVehicle.h"
#endif
#define FACTORYGAME_FGVehicle_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleSeat_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FVehicleSeat>();

#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehiclePhysicsData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FVehiclePhysicsData>();

#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGUseState_VehicleHasDriver(); \
	friend struct Z_Construct_UClass_UFGUseState_VehicleHasDriver_Statics; \
public: \
	DECLARE_CLASS(UFGUseState_VehicleHasDriver, UFGUseState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState_VehicleHasDriver)


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUFGUseState_VehicleHasDriver(); \
	friend struct Z_Construct_UClass_UFGUseState_VehicleHasDriver_Statics; \
public: \
	DECLARE_CLASS(UFGUseState_VehicleHasDriver, UFGUseState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState_VehicleHasDriver)


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGUseState_VehicleHasDriver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGUseState_VehicleHasDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState_VehicleHasDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState_VehicleHasDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState_VehicleHasDriver(UFGUseState_VehicleHasDriver&&); \
	NO_API UFGUseState_VehicleHasDriver(const UFGUseState_VehicleHasDriver&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState_VehicleHasDriver(UFGUseState_VehicleHasDriver&&); \
	NO_API UFGUseState_VehicleHasDriver(const UFGUseState_VehicleHasDriver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState_VehicleHasDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState_VehicleHasDriver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGUseState_VehicleHasDriver)


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_44_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGUseState_VehicleHasDriver>();

#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGUseState_VehicleInWater(); \
	friend struct Z_Construct_UClass_UFGUseState_VehicleInWater_Statics; \
public: \
	DECLARE_CLASS(UFGUseState_VehicleInWater, UFGUseState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState_VehicleInWater)


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUFGUseState_VehicleInWater(); \
	friend struct Z_Construct_UClass_UFGUseState_VehicleInWater_Statics; \
public: \
	DECLARE_CLASS(UFGUseState_VehicleInWater, UFGUseState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState_VehicleInWater)


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGUseState_VehicleInWater(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGUseState_VehicleInWater) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState_VehicleInWater); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState_VehicleInWater); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState_VehicleInWater(UFGUseState_VehicleInWater&&); \
	NO_API UFGUseState_VehicleInWater(const UFGUseState_VehicleInWater&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState_VehicleInWater(UFGUseState_VehicleInWater&&); \
	NO_API UFGUseState_VehicleInWater(const UFGUseState_VehicleInWater&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState_VehicleInWater); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState_VehicleInWater); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGUseState_VehicleInWater)


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_55_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGUseState_VehicleInWater>();

#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGUseState_VehicleOccupied(); \
	friend struct Z_Construct_UClass_UFGUseState_VehicleOccupied_Statics; \
public: \
	DECLARE_CLASS(UFGUseState_VehicleOccupied, UFGUseState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState_VehicleOccupied)


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUFGUseState_VehicleOccupied(); \
	friend struct Z_Construct_UClass_UFGUseState_VehicleOccupied_Statics; \
public: \
	DECLARE_CLASS(UFGUseState_VehicleOccupied, UFGUseState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGUseState_VehicleOccupied)


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGUseState_VehicleOccupied(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGUseState_VehicleOccupied) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState_VehicleOccupied); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState_VehicleOccupied); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState_VehicleOccupied(UFGUseState_VehicleOccupied&&); \
	NO_API UFGUseState_VehicleOccupied(const UFGUseState_VehicleOccupied&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGUseState_VehicleOccupied(UFGUseState_VehicleOccupied&&); \
	NO_API UFGUseState_VehicleOccupied(const UFGUseState_VehicleOccupied&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGUseState_VehicleOccupied); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGUseState_VehicleOccupied); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGUseState_VehicleOccupied)


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_66_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGUseState_VehicleOccupied>();

#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdatePhysicsVolume) \
	{ \
		P_GET_OBJECT(APhysicsVolume,Z_Param_physicsVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePhysicsVolume(Z_Param_physicsVolume); \
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
	DECLARE_FUNCTION(execKickAllPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KickAllPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyPassengerSeatAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnyPassengerSeatAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSelfDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSelfDriving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelfDriverEnter) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_ai); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SelfDriverEnter(Z_Param_ai); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSelfDriverEnter) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_ai); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanSelfDriverEnter(Z_Param_ai); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDestructible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDestructible(); \
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
	DECLARE_FUNCTION(execGetIsSignificant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsSignificant(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdatePhysicsVolume) \
	{ \
		P_GET_OBJECT(APhysicsVolume,Z_Param_physicsVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePhysicsVolume(Z_Param_physicsVolume); \
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
	DECLARE_FUNCTION(execKickAllPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->KickAllPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAnyPassengerSeatAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAnyPassengerSeatAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSelfDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSelfDriving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelfDriverEnter) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_ai); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SelfDriverEnter(Z_Param_ai); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanSelfDriverEnter) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_ai); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanSelfDriverEnter(Z_Param_ai); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDestructible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDestructible(); \
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
	DECLARE_FUNCTION(execGetIsSignificant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsSignificant(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_EVENT_PARMS \
	struct FGVehicle_eventGetDismantleBlueprintReturns_Parms \
	{ \
		TArray<FInventoryStack> out_returns; \
	}; \
	struct FGVehicle_eventNotifyOnTakeDamage_Parms \
	{ \
		AActor* damagedActor; \
		float damageAmount; \
		const UDamageType* damageType; \
		AController* instigatedBy; \
		AActor* damageCauser; \
	}; \
	struct FGVehicle_eventReceiveDied_Parms \
	{ \
		AActor* thisActor; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AFGVehicle, NO_API)


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGVehicle(); \
	friend struct Z_Construct_UClass_AFGVehicle_Statics; \
public: \
	DECLARE_CLASS(AFGVehicle, AFGDriveablePawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGVehicle) \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGVehicle*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_INCLASS \
private: \
	static void StaticRegisterNativesAFGVehicle(); \
	friend struct Z_Construct_UClass_AFGVehicle_Statics; \
public: \
	DECLARE_CLASS(AFGVehicle, AFGDriveablePawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGVehicle) \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGVehicle*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGVehicle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGVehicle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGVehicle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGVehicle(AFGVehicle&&); \
	NO_API AFGVehicle(const AFGVehicle&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGVehicle(AFGVehicle&&); \
	NO_API AFGVehicle(const AFGVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGVehicle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGVehicle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGVehicle)


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mMesh() { return STRUCT_OFFSET(AFGVehicle, mMesh); } \
	FORCEINLINE static uint32 __PPO__mHealthComponent() { return STRUCT_OFFSET(AFGVehicle, mHealthComponent); } \
	FORCEINLINE static uint32 __PPO__mDisabledByWaterLocations() { return STRUCT_OFFSET(AFGVehicle, mDisabledByWaterLocations); } \
	FORCEINLINE static uint32 __PPO__mNetConstructionID() { return STRUCT_OFFSET(AFGVehicle, mNetConstructionID); } \
	FORCEINLINE static uint32 __PPO__mBuiltWithRecipe() { return STRUCT_OFFSET(AFGVehicle, mBuiltWithRecipe); } \
	FORCEINLINE static uint32 __PPO__mPrimaryColor() { return STRUCT_OFFSET(AFGVehicle, mPrimaryColor); } \
	FORCEINLINE static uint32 __PPO__mSecondaryColor() { return STRUCT_OFFSET(AFGVehicle, mSecondaryColor); } \
	FORCEINLINE static uint32 __PPO__mIsSelfDriving() { return STRUCT_OFFSET(AFGVehicle, mIsSelfDriving); } \
	FORCEINLINE static uint32 __PPO__mSelfDrivingController() { return STRUCT_OFFSET(AFGVehicle, mSelfDrivingController); } \
	FORCEINLINE static uint32 __PPO__mStoredPhysicsData() { return STRUCT_OFFSET(AFGVehicle, mStoredPhysicsData); } \
	FORCEINLINE static uint32 __PPO__mConstructSound() { return STRUCT_OFFSET(AFGVehicle, mConstructSound); } \
	FORCEINLINE static uint32 __PPO__mSubmergedAngularDamping() { return STRUCT_OFFSET(AFGVehicle, mSubmergedAngularDamping); } \
	FORCEINLINE static uint32 __PPO__mSubmergedLinearDamping() { return STRUCT_OFFSET(AFGVehicle, mSubmergedLinearDamping); } \
	FORCEINLINE static uint32 __PPO__mSubmergedBouyantForce() { return STRUCT_OFFSET(AFGVehicle, mSubmergedBouyantForce); } \
	FORCEINLINE static uint32 __PPO__mGasDamageType() { return STRUCT_OFFSET(AFGVehicle, mGasDamageType); } \
	FORCEINLINE static uint32 __PPO__mSignificanceBias() { return STRUCT_OFFSET(AFGVehicle, mSignificanceBias); } \
	FORCEINLINE static uint32 __PPO__mSignificanceRange() { return STRUCT_OFFSET(AFGVehicle, mSignificanceRange); }


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_115_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGVehicle_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGVehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
