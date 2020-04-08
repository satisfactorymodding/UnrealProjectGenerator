// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystem;
#ifdef FACTORYGAME_FGExplosiveDestroyableInterface_generated_h
#error "FGExplosiveDestroyableInterface.generated.h already included, missing '#pragma once' in FGExplosiveDestroyableInterface.h"
#endif
#define FACTORYGAME_FGExplosiveDestroyableInterface_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_RPC_WRAPPERS \
	virtual bool NotifyExploded_Implementation() { return false; }; \
	virtual UParticleSystem* GetDestroyEffect_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execNotifyExploded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NotifyExploded_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestroyEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetDestroyEffect_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool NotifyExploded_Implementation() { return false; }; \
	virtual UParticleSystem* GetDestroyEffect_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execNotifyExploded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NotifyExploded_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDestroyEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetDestroyEffect_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_EVENT_PARMS \
	struct FGExplosiveDestroyableInterface_eventGetDestroyEffect_Parms \
	{ \
		UParticleSystem* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGExplosiveDestroyableInterface_eventGetDestroyEffect_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGExplosiveDestroyableInterface_eventNotifyExploded_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGExplosiveDestroyableInterface_eventNotifyExploded_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGExplosiveDestroyableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGExplosiveDestroyableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGExplosiveDestroyableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGExplosiveDestroyableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGExplosiveDestroyableInterface(UFGExplosiveDestroyableInterface&&); \
	NO_API UFGExplosiveDestroyableInterface(const UFGExplosiveDestroyableInterface&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGExplosiveDestroyableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGExplosiveDestroyableInterface(UFGExplosiveDestroyableInterface&&); \
	NO_API UFGExplosiveDestroyableInterface(const UFGExplosiveDestroyableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGExplosiveDestroyableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGExplosiveDestroyableInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGExplosiveDestroyableInterface)


#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGExplosiveDestroyableInterface(); \
	friend struct Z_Construct_UClass_UFGExplosiveDestroyableInterface_Statics; \
public: \
	DECLARE_CLASS(UFGExplosiveDestroyableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGExplosiveDestroyableInterface)


#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	FORCEINLINE virtual ~IFGExplosiveDestroyableInterface() {} \
public: \
	typedef UFGExplosiveDestroyableInterface UClassType; \
	typedef IFGExplosiveDestroyableInterface ThisClass; \
	static UParticleSystem* Execute_GetDestroyEffect(UObject* O); \
	static bool Execute_NotifyExploded(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_INCLASS_IINTERFACE \
protected: \
	FORCEINLINE virtual ~IFGExplosiveDestroyableInterface() {} \
public: \
	typedef UFGExplosiveDestroyableInterface UClassType; \
	typedef IFGExplosiveDestroyableInterface ThisClass; \
	static UParticleSystem* Execute_GetDestroyEffect(UObject* O); \
	static bool Execute_NotifyExploded(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_9_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGExplosiveDestroyableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGExplosiveDestroyableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
