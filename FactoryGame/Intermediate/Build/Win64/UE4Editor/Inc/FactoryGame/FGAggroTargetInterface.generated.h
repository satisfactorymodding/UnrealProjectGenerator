// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AFGEnemyController;
class UPrimitiveComponent;
class AActor;
#ifdef FACTORYGAME_FGAggroTargetInterface_generated_h
#error "FGAggroTargetInterface.generated.h already included, missing '#pragma once' in FGAggroTargetInterface.h"
#endif
#define FACTORYGAME_FGAggroTargetInterface_generated_h

#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_RPC_WRAPPERS \
	virtual FVector GetAttackLocation_Implementation() const { return FVector(ForceInit); }; \
	virtual bool IsAlive_Implementation() const { return false; }; \
	virtual float GetEnemyTargetDesirability_Implementation(AFGEnemyController* forController) { return 0; }; \
	virtual UPrimitiveComponent* GetTargetComponent_Implementation() { return NULL; }; \
	virtual AActor* GetActor_Implementation() { return NULL; }; \
	virtual void UnregisterAttacker_Implementation(AFGEnemyController* forController) {}; \
	virtual void RegisterIncomingAttacker_Implementation(AFGEnemyController* forController) {}; \
	virtual bool ShouldAutoregisterAsTargetable_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execGetAttackLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetAttackLocation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAlive_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnemyTargetDesirability) \
	{ \
		P_GET_OBJECT(AFGEnemyController,Z_Param_forController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEnemyTargetDesirability_Implementation(Z_Param_forController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetTargetComponent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterAttacker) \
	{ \
		P_GET_OBJECT(AFGEnemyController,Z_Param_forController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterAttacker_Implementation(Z_Param_forController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterIncomingAttacker) \
	{ \
		P_GET_OBJECT(AFGEnemyController,Z_Param_forController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterIncomingAttacker_Implementation(Z_Param_forController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldAutoregisterAsTargetable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldAutoregisterAsTargetable_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetAttackLocation_Implementation() const { return FVector(ForceInit); }; \
	virtual bool IsAlive_Implementation() const { return false; }; \
	virtual float GetEnemyTargetDesirability_Implementation(AFGEnemyController* forController) { return 0; }; \
	virtual UPrimitiveComponent* GetTargetComponent_Implementation() { return NULL; }; \
	virtual AActor* GetActor_Implementation() { return NULL; }; \
	virtual void UnregisterAttacker_Implementation(AFGEnemyController* forController) {}; \
	virtual void RegisterIncomingAttacker_Implementation(AFGEnemyController* forController) {}; \
	virtual bool ShouldAutoregisterAsTargetable_Implementation() const { return false; }; \
 \
	DECLARE_FUNCTION(execGetAttackLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetAttackLocation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAlive_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnemyTargetDesirability) \
	{ \
		P_GET_OBJECT(AFGEnemyController,Z_Param_forController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEnemyTargetDesirability_Implementation(Z_Param_forController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetTargetComponent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterAttacker) \
	{ \
		P_GET_OBJECT(AFGEnemyController,Z_Param_forController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterAttacker_Implementation(Z_Param_forController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterIncomingAttacker) \
	{ \
		P_GET_OBJECT(AFGEnemyController,Z_Param_forController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterIncomingAttacker_Implementation(Z_Param_forController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldAutoregisterAsTargetable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldAutoregisterAsTargetable_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_EVENT_PARMS \
	struct FGAggroTargetInterface_eventGetActor_Parms \
	{ \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGAggroTargetInterface_eventGetActor_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGAggroTargetInterface_eventGetAttackLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGAggroTargetInterface_eventGetAttackLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FGAggroTargetInterface_eventGetEnemyTargetDesirability_Parms \
	{ \
		AFGEnemyController* forController; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGAggroTargetInterface_eventGetEnemyTargetDesirability_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct FGAggroTargetInterface_eventGetTargetComponent_Parms \
	{ \
		UPrimitiveComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGAggroTargetInterface_eventGetTargetComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGAggroTargetInterface_eventIsAlive_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGAggroTargetInterface_eventIsAlive_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGAggroTargetInterface_eventRegisterIncomingAttacker_Parms \
	{ \
		AFGEnemyController* forController; \
	}; \
	struct FGAggroTargetInterface_eventShouldAutoregisterAsTargetable_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGAggroTargetInterface_eventShouldAutoregisterAsTargetable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGAggroTargetInterface_eventUnregisterAttacker_Parms \
	{ \
		AFGEnemyController* forController; \
	};


#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGAggroTargetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGAggroTargetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAggroTargetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAggroTargetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAggroTargetInterface(UFGAggroTargetInterface&&); \
	NO_API UFGAggroTargetInterface(const UFGAggroTargetInterface&); \
public:


#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGAggroTargetInterface(UFGAggroTargetInterface&&); \
	NO_API UFGAggroTargetInterface(const UFGAggroTargetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGAggroTargetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGAggroTargetInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGAggroTargetInterface)


#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGAggroTargetInterface(); \
	friend struct Z_Construct_UClass_UFGAggroTargetInterface_Statics; \
public: \
	DECLARE_CLASS(UFGAggroTargetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGAggroTargetInterface)


#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFGAggroTargetInterface() {} \
public: \
	typedef UFGAggroTargetInterface UClassType; \
	typedef IFGAggroTargetInterface ThisClass; \
	static AActor* Execute_GetActor(UObject* O); \
	static FVector Execute_GetAttackLocation(const UObject* O); \
	static float Execute_GetEnemyTargetDesirability(UObject* O, AFGEnemyController* forController); \
	static UPrimitiveComponent* Execute_GetTargetComponent(UObject* O); \
	static bool Execute_IsAlive(const UObject* O); \
	static void Execute_RegisterIncomingAttacker(UObject* O, AFGEnemyController* forController); \
	static bool Execute_ShouldAutoregisterAsTargetable(const UObject* O); \
	static void Execute_UnregisterAttacker(UObject* O, AFGEnemyController* forController); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IFGAggroTargetInterface() {} \
public: \
	typedef UFGAggroTargetInterface UClassType; \
	typedef IFGAggroTargetInterface ThisClass; \
	static AActor* Execute_GetActor(UObject* O); \
	static FVector Execute_GetAttackLocation(const UObject* O); \
	static float Execute_GetEnemyTargetDesirability(UObject* O, AFGEnemyController* forController); \
	static UPrimitiveComponent* Execute_GetTargetComponent(UObject* O); \
	static bool Execute_IsAlive(const UObject* O); \
	static void Execute_RegisterIncomingAttacker(UObject* O, AFGEnemyController* forController); \
	static bool Execute_ShouldAutoregisterAsTargetable(const UObject* O); \
	static void Execute_UnregisterAttacker(UObject* O, AFGEnemyController* forController); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_12_PROLOG \
	FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGAggroTargetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_AI_FGAggroTargetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
