// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef FACTORYGAME_FGChainsawableInterface_generated_h
#error "FGChainsawableInterface.generated.h already included, missing '#pragma once' in FGChainsawableInterface.h"
#endif
#define FACTORYGAME_FGChainsawableInterface_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_RPC_WRAPPERS \
	virtual UStaticMeshComponent* GetMeshComponent_Implementation() { return NULL; }; \
	virtual bool IsChainsawable_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execGetMeshComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetMeshComponent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsChainsawable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsChainsawable_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UStaticMeshComponent* GetMeshComponent_Implementation() { return NULL; }; \
	virtual bool IsChainsawable_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execGetMeshComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetMeshComponent_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsChainsawable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsChainsawable_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_EVENT_PARMS \
	struct FGChainsawableInterface_eventGetMeshComponent_Parms \
	{ \
		UStaticMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGChainsawableInterface_eventGetMeshComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGChainsawableInterface_eventIsChainsawable_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGChainsawableInterface_eventIsChainsawable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGChainsawableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGChainsawableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGChainsawableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGChainsawableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGChainsawableInterface(UFGChainsawableInterface&&); \
	NO_API UFGChainsawableInterface(const UFGChainsawableInterface&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGChainsawableInterface(UFGChainsawableInterface&&); \
	NO_API UFGChainsawableInterface(const UFGChainsawableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGChainsawableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGChainsawableInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGChainsawableInterface)


#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGChainsawableInterface(); \
	friend struct Z_Construct_UClass_UFGChainsawableInterface_Statics; \
public: \
	DECLARE_CLASS(UFGChainsawableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGChainsawableInterface)


#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFGChainsawableInterface() {} \
public: \
	typedef UFGChainsawableInterface UClassType; \
	typedef IFGChainsawableInterface ThisClass; \
	static UStaticMeshComponent* Execute_GetMeshComponent(UObject* O); \
	static bool Execute_IsChainsawable(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IFGChainsawableInterface() {} \
public: \
	typedef UFGChainsawableInterface UClassType; \
	typedef IFGChainsawableInterface ThisClass; \
	static UStaticMeshComponent* Execute_GetMeshComponent(UObject* O); \
	static bool Execute_IsChainsawable(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_14_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGChainsawableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGChainsawableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
