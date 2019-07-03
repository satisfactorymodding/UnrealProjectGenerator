// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGBuildableDockingStation;
class UFGInventoryComponent;
enum class EDockStationType : uint8;
#ifdef FACTORYGAME_FGDockableInterface_generated_h
#error "FGDockableInterface.generated.h already included, missing '#pragma once' in FGDockableInterface.h"
#endif
#define FACTORYGAME_FGDockableInterface_generated_h

#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_RPC_WRAPPERS \
	virtual void OnTransferComplete_Implementation() {}; \
	virtual void OnBeginUnloadVehicle_Implementation() {}; \
	virtual void OnBeginLoadVehicle_Implementation() {}; \
	virtual void WasUndocked_Implementation() {}; \
	virtual void WasDocked_Implementation(AFGBuildableDockingStation* atStation) {}; \
	virtual UFGInventoryComponent* GetDockFuelInventory_Implementation() const { return NULL; }; \
	virtual UFGInventoryComponent* GetDockInventory_Implementation() const { return NULL; }; \
	virtual bool CanDock_Implementation(EDockStationType atStation) const { return false; }; \
 \
	DECLARE_FUNCTION(execOnTransferComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTransferComplete_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginUnloadVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginUnloadVehicle_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginLoadVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginLoadVehicle_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasUndocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasUndocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasDocked) \
	{ \
		P_GET_OBJECT(AFGBuildableDockingStation,Z_Param_atStation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasDocked_Implementation(Z_Param_atStation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDockFuelInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetDockFuelInventory_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDockInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetDockInventory_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDock) \
	{ \
		P_GET_ENUM(EDockStationType,Z_Param_atStation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDock_Implementation(EDockStationType(Z_Param_atStation)); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnTransferComplete_Implementation() {}; \
	virtual void OnBeginUnloadVehicle_Implementation() {}; \
	virtual void OnBeginLoadVehicle_Implementation() {}; \
	virtual void WasUndocked_Implementation() {}; \
	virtual void WasDocked_Implementation(AFGBuildableDockingStation* atStation) {}; \
	virtual UFGInventoryComponent* GetDockFuelInventory_Implementation() const { return NULL; }; \
	virtual UFGInventoryComponent* GetDockInventory_Implementation() const { return NULL; }; \
	virtual bool CanDock_Implementation(EDockStationType atStation) const { return false; }; \
 \
	DECLARE_FUNCTION(execOnTransferComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTransferComplete_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginUnloadVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginUnloadVehicle_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginLoadVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginLoadVehicle_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasUndocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasUndocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasDocked) \
	{ \
		P_GET_OBJECT(AFGBuildableDockingStation,Z_Param_atStation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasDocked_Implementation(Z_Param_atStation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDockFuelInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetDockFuelInventory_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDockInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetDockInventory_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDock) \
	{ \
		P_GET_ENUM(EDockStationType,Z_Param_atStation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDock_Implementation(EDockStationType(Z_Param_atStation)); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_EVENT_PARMS \
	struct FGDockableInterface_eventCanDock_Parms \
	{ \
		EDockStationType atStation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGDockableInterface_eventCanDock_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGDockableInterface_eventGetDockFuelInventory_Parms \
	{ \
		UFGInventoryComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGDockableInterface_eventGetDockFuelInventory_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGDockableInterface_eventGetDockInventory_Parms \
	{ \
		UFGInventoryComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGDockableInterface_eventGetDockInventory_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGDockableInterface_eventWasDocked_Parms \
	{ \
		AFGBuildableDockingStation* atStation; \
	};


#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGDockableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDockableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDockableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDockableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDockableInterface(UFGDockableInterface&&); \
	NO_API UFGDockableInterface(const UFGDockableInterface&); \
public:


#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDockableInterface(UFGDockableInterface&&); \
	NO_API UFGDockableInterface(const UFGDockableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDockableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDockableInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDockableInterface)


#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGDockableInterface(); \
	friend struct Z_Construct_UClass_UFGDockableInterface_Statics; \
public: \
	DECLARE_CLASS(UFGDockableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDockableInterface)


#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFGDockableInterface() {} \
public: \
	typedef UFGDockableInterface UClassType; \
	typedef IFGDockableInterface ThisClass; \
	static bool Execute_CanDock(const UObject* O, EDockStationType atStation); \
	static UFGInventoryComponent* Execute_GetDockFuelInventory(const UObject* O); \
	static UFGInventoryComponent* Execute_GetDockInventory(const UObject* O); \
	static void Execute_OnBeginLoadVehicle(UObject* O); \
	static void Execute_OnBeginUnloadVehicle(UObject* O); \
	static void Execute_OnTransferComplete(UObject* O); \
	static void Execute_WasDocked(UObject* O, AFGBuildableDockingStation* atStation); \
	static void Execute_WasUndocked(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_INCLASS_IINTERFACE \
protected: \
	virtual ~IFGDockableInterface() {} \
public: \
	typedef UFGDockableInterface UClassType; \
	typedef IFGDockableInterface ThisClass; \
	static bool Execute_CanDock(const UObject* O, EDockStationType atStation); \
	static UFGInventoryComponent* Execute_GetDockFuelInventory(const UObject* O); \
	static UFGInventoryComponent* Execute_GetDockInventory(const UObject* O); \
	static void Execute_OnBeginLoadVehicle(UObject* O); \
	static void Execute_OnBeginUnloadVehicle(UObject* O); \
	static void Execute_OnTransferComplete(UObject* O); \
	static void Execute_WasDocked(UObject* O, AFGBuildableDockingStation* atStation); \
	static void Execute_WasUndocked(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_25_PROLOG \
	FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGDockableInterface_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDockableInterface_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGDockableInterface_h


#define FOREACH_ENUM_EDOCKSTATIONTYPE(op) \
	op(EDockStationType::DST_NONE) \
	op(EDockStationType::DST_TRUCK) \
	op(EDockStationType::DST_TRAIN) \
	op(EDockStationType::DST_LAST_ENUM) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
