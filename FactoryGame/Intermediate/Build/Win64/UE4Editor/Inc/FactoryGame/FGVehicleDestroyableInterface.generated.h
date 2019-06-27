// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystem;
class UAkAudioEvent;
#ifdef FACTORYGAME_FGVehicleDestroyableInterface_generated_h
#error "FGVehicleDestroyableInterface.generated.h already included, missing '#pragma once' in FGVehicleDestroyableInterface.h"
#endif
#define FACTORYGAME_FGVehicleDestroyableInterface_generated_h

#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_RPC_WRAPPERS \
	virtual UParticleSystem* GetDestroyEffect_Implementation() { return NULL; }; \
	virtual UAkAudioEvent* GetDestroyAudioEvent_Implementation() { return NULL; }; \
	virtual float GetForceThreshold_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execGetDestroyEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetDestroyEffect_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestroyAudioEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetDestroyAudioEvent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForceThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetForceThreshold_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UParticleSystem* GetDestroyEffect_Implementation() { return NULL; }; \
	virtual UAkAudioEvent* GetDestroyAudioEvent_Implementation() { return NULL; }; \
	virtual float GetForceThreshold_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execGetDestroyEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetDestroyEffect_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestroyAudioEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAkAudioEvent**)Z_Param__Result=P_THIS->GetDestroyAudioEvent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForceThreshold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetForceThreshold_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_EVENT_PARMS \
	struct FGVehicleDestroyableInterface_eventGetDestroyAudioEvent_Parms \
	{ \
		UAkAudioEvent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGVehicleDestroyableInterface_eventGetDestroyAudioEvent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGVehicleDestroyableInterface_eventGetDestroyEffect_Parms \
	{ \
		UParticleSystem* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGVehicleDestroyableInterface_eventGetDestroyEffect_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGVehicleDestroyableInterface_eventGetForceThreshold_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGVehicleDestroyableInterface_eventGetForceThreshold_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGVehicleDestroyableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGVehicleDestroyableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGVehicleDestroyableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGVehicleDestroyableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGVehicleDestroyableInterface(UFGVehicleDestroyableInterface&&); \
	NO_API UFGVehicleDestroyableInterface(const UFGVehicleDestroyableInterface&); \
public:


#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGVehicleDestroyableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGVehicleDestroyableInterface(UFGVehicleDestroyableInterface&&); \
	NO_API UFGVehicleDestroyableInterface(const UFGVehicleDestroyableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGVehicleDestroyableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGVehicleDestroyableInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGVehicleDestroyableInterface)


#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGVehicleDestroyableInterface(); \
	friend struct Z_Construct_UClass_UFGVehicleDestroyableInterface_Statics; \
public: \
	DECLARE_CLASS(UFGVehicleDestroyableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGVehicleDestroyableInterface)


#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFGVehicleDestroyableInterface() {} \
public: \
	typedef UFGVehicleDestroyableInterface UClassType; \
	typedef IFGVehicleDestroyableInterface ThisClass; \
	static UAkAudioEvent* Execute_GetDestroyAudioEvent(UObject* O); \
	static UParticleSystem* Execute_GetDestroyEffect(UObject* O); \
	static float Execute_GetForceThreshold(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IFGVehicleDestroyableInterface() {} \
public: \
	typedef UFGVehicleDestroyableInterface UClassType; \
	typedef IFGVehicleDestroyableInterface ThisClass; \
	static UAkAudioEvent* Execute_GetDestroyAudioEvent(UObject* O); \
	static UParticleSystem* Execute_GetDestroyEffect(UObject* O); \
	static float Execute_GetForceThreshold(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_12_PROLOG \
	FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGVehicleDestroyableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
