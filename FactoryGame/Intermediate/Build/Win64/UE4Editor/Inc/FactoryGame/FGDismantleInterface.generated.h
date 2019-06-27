// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGCharacterPlayer;
class AActor;
struct FVector;
struct FInventoryStack;
#ifdef FACTORYGAME_FGDismantleInterface_generated_h
#error "FGDismantleInterface.generated.h already included, missing '#pragma once' in FGDismantleInterface.h"
#endif
#define FACTORYGAME_FGDismantleInterface_generated_h

#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_RPC_WRAPPERS \
	virtual void StopIsLookedAtForDismantle_Implementation(AFGCharacterPlayer* byCharacter) {}; \
	virtual void StartIsLookedAtForDismantle_Implementation(AFGCharacterPlayer* byCharacter) {}; \
	virtual void Dismantle_Implementation() {}; \
	virtual void Upgrade_Implementation(AActor* newActor) {}; \
	virtual void PreUpgrade_Implementation() {}; \
	virtual FVector GetRefundSpawnLocationAndArea_Implementation(FVector const& aimHitLocation, float& out_radius) const { return FVector(ForceInit); }; \
	virtual void GetDismantleRefund_Implementation(TArray<FInventoryStack>& out_refund) const {}; \
	virtual bool CanDismantle_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execStopIsLookedAtForDismantle) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopIsLookedAtForDismantle_Implementation(Z_Param_byCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartIsLookedAtForDismantle) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartIsLookedAtForDismantle_Implementation(Z_Param_byCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDismantle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Dismantle_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpgrade) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_newActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Upgrade_Implementation(Z_Param_newActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreUpgrade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreUpgrade_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRefundSpawnLocationAndArea) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_aimHitLocation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_out_radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRefundSpawnLocationAndArea_Implementation(Z_Param_Out_aimHitLocation,Z_Param_Out_out_radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDismantleRefund) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_out_refund); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetDismantleRefund_Implementation(Z_Param_Out_out_refund); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDismantle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDismantle_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopIsLookedAtForDismantle_Implementation(AFGCharacterPlayer* byCharacter) {}; \
	virtual void StartIsLookedAtForDismantle_Implementation(AFGCharacterPlayer* byCharacter) {}; \
	virtual void Dismantle_Implementation() {}; \
	virtual void Upgrade_Implementation(AActor* newActor) {}; \
	virtual void PreUpgrade_Implementation() {}; \
	virtual FVector GetRefundSpawnLocationAndArea_Implementation(FVector const& aimHitLocation, float& out_radius) const { return FVector(ForceInit); }; \
	virtual void GetDismantleRefund_Implementation(TArray<FInventoryStack>& out_refund) const {}; \
	virtual bool CanDismantle_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execStopIsLookedAtForDismantle) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopIsLookedAtForDismantle_Implementation(Z_Param_byCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartIsLookedAtForDismantle) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartIsLookedAtForDismantle_Implementation(Z_Param_byCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDismantle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Dismantle_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpgrade) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_newActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Upgrade_Implementation(Z_Param_newActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreUpgrade) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreUpgrade_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRefundSpawnLocationAndArea) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_aimHitLocation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_out_radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRefundSpawnLocationAndArea_Implementation(Z_Param_Out_aimHitLocation,Z_Param_Out_out_radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDismantleRefund) \
	{ \
		P_GET_TARRAY_REF(FInventoryStack,Z_Param_Out_out_refund); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetDismantleRefund_Implementation(Z_Param_Out_out_refund); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDismantle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDismantle_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_EVENT_PARMS \
	struct FGDismantleInterface_eventCanDismantle_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGDismantleInterface_eventCanDismantle_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGDismantleInterface_eventGetDismantleRefund_Parms \
	{ \
		TArray<FInventoryStack> out_refund; \
	}; \
	struct FGDismantleInterface_eventGetRefundSpawnLocationAndArea_Parms \
	{ \
		FVector aimHitLocation; \
		float out_radius; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGDismantleInterface_eventGetRefundSpawnLocationAndArea_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FGDismantleInterface_eventStartIsLookedAtForDismantle_Parms \
	{ \
		AFGCharacterPlayer* byCharacter; \
	}; \
	struct FGDismantleInterface_eventStopIsLookedAtForDismantle_Parms \
	{ \
		AFGCharacterPlayer* byCharacter; \
	}; \
	struct FGDismantleInterface_eventUpgrade_Parms \
	{ \
		AActor* newActor; \
	};


#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGDismantleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDismantleInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDismantleInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDismantleInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDismantleInterface(UFGDismantleInterface&&); \
	NO_API UFGDismantleInterface(const UFGDismantleInterface&); \
public:


#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGDismantleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDismantleInterface(UFGDismantleInterface&&); \
	NO_API UFGDismantleInterface(const UFGDismantleInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDismantleInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDismantleInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDismantleInterface)


#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGDismantleInterface(); \
	friend struct Z_Construct_UClass_UFGDismantleInterface_Statics; \
public: \
	DECLARE_CLASS(UFGDismantleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDismantleInterface)


#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFGDismantleInterface() {} \
public: \
	typedef UFGDismantleInterface UClassType; \
	typedef IFGDismantleInterface ThisClass; \
	static bool Execute_CanDismantle(const UObject* O); \
	static void Execute_Dismantle(UObject* O); \
	static void Execute_GetDismantleRefund(const UObject* O, TArray<FInventoryStack>& out_refund); \
	static FVector Execute_GetRefundSpawnLocationAndArea(const UObject* O, FVector const& aimHitLocation, float& out_radius); \
	static void Execute_PreUpgrade(UObject* O); \
	static void Execute_StartIsLookedAtForDismantle(UObject* O, AFGCharacterPlayer* byCharacter); \
	static void Execute_StopIsLookedAtForDismantle(UObject* O, AFGCharacterPlayer* byCharacter); \
	static void Execute_Upgrade(UObject* O, AActor* newActor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IFGDismantleInterface() {} \
public: \
	typedef UFGDismantleInterface UClassType; \
	typedef IFGDismantleInterface ThisClass; \
	static bool Execute_CanDismantle(const UObject* O); \
	static void Execute_Dismantle(UObject* O); \
	static void Execute_GetDismantleRefund(const UObject* O, TArray<FInventoryStack>& out_refund); \
	static FVector Execute_GetRefundSpawnLocationAndArea(const UObject* O, FVector const& aimHitLocation, float& out_radius); \
	static void Execute_PreUpgrade(UObject* O); \
	static void Execute_StartIsLookedAtForDismantle(UObject* O, AFGCharacterPlayer* byCharacter); \
	static void Execute_StopIsLookedAtForDismantle(UObject* O, AFGCharacterPlayer* byCharacter); \
	static void Execute_Upgrade(UObject* O, AActor* newActor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_11_PROLOG \
	FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGDismantleInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDismantleInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGDismantleInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
