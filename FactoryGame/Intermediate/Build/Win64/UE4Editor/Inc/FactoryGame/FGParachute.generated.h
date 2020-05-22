// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FACTORYGAME_FGParachute_generated_h
#error "FGParachute.generated.h already included, missing '#pragma once' in FGParachute.h"
#endif
#define FACTORYGAME_FGParachute_generated_h

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGParachuteCameraShake(); \
	friend struct Z_Construct_UClass_UFGParachuteCameraShake_Statics; \
public: \
	DECLARE_CLASS(UFGParachuteCameraShake, UCameraShake, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGParachuteCameraShake)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGParachuteCameraShake(); \
	friend struct Z_Construct_UClass_UFGParachuteCameraShake_Statics; \
public: \
	DECLARE_CLASS(UFGParachuteCameraShake, UCameraShake, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGParachuteCameraShake)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGParachuteCameraShake(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGParachuteCameraShake) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGParachuteCameraShake); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGParachuteCameraShake); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGParachuteCameraShake(UFGParachuteCameraShake&&); \
	NO_API UFGParachuteCameraShake(const UFGParachuteCameraShake&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGParachuteCameraShake(UFGParachuteCameraShake&&); \
	NO_API UFGParachuteCameraShake(const UFGParachuteCameraShake&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGParachuteCameraShake); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGParachuteCameraShake); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGParachuteCameraShake)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGParachuteCameraShake>();

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_RPC_WRAPPERS \
	virtual FVector ModifyVelocity_Implementation(float deltaTime, FVector const& oldVelocity); \
	virtual bool Server_Deploy_Validate(); \
	virtual void Server_Deploy_Implementation(); \
 \
	DECLARE_FUNCTION(execIsDeployed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDeployed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaTime); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_oldVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ModifyVelocity_Implementation(Z_Param_deltaTime,Z_Param_Out_oldVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_Deploy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_Deploy_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_Deploy_Validate")); \
			return; \
		} \
		P_THIS->Server_Deploy_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector ModifyVelocity_Implementation(float deltaTime, FVector const& oldVelocity); \
	virtual bool Server_Deploy_Validate(); \
	virtual void Server_Deploy_Implementation(); \
 \
	DECLARE_FUNCTION(execIsDeployed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDeployed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execModifyVelocity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaTime); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_oldVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ModifyVelocity_Implementation(Z_Param_deltaTime,Z_Param_Out_oldVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_Deploy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_Deploy_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_Deploy_Validate")); \
			return; \
		} \
		P_THIS->Server_Deploy_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_EVENT_PARMS \
	struct FGParachute_eventModifyVelocity_Parms \
	{ \
		float deltaTime; \
		FVector oldVelocity; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGParachute_eventModifyVelocity_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGParachute(); \
	friend struct Z_Construct_UClass_AFGParachute_Statics; \
public: \
	DECLARE_CLASS(AFGParachute, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGParachute)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAFGParachute(); \
	friend struct Z_Construct_UClass_AFGParachute_Statics; \
public: \
	DECLARE_CLASS(AFGParachute, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGParachute)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGParachute(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGParachute) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGParachute); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGParachute); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGParachute(AFGParachute&&); \
	NO_API AFGParachute(const AFGParachute&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGParachute(AFGParachute&&); \
	NO_API AFGParachute(const AFGParachute&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGParachute); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGParachute); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGParachute)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mTerminalVelocityZ() { return STRUCT_OFFSET(AFGParachute, mTerminalVelocityZ); } \
	FORCEINLINE static uint32 __PPO__mIsDeployed() { return STRUCT_OFFSET(AFGParachute, mIsDeployed); } \
	FORCEINLINE static uint32 __PPO__mCachedMovementComponent() { return STRUCT_OFFSET(AFGParachute, mCachedMovementComponent); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_27_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGParachute>();

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsDeployed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsDeployed(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsDeployed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsDeployed(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGParachuteAttachment(); \
	friend struct Z_Construct_UClass_AFGParachuteAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGParachuteAttachment, AFGEquipmentAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGParachuteAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_INCLASS \
private: \
	static void StaticRegisterNativesAFGParachuteAttachment(); \
	friend struct Z_Construct_UClass_AFGParachuteAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGParachuteAttachment, AFGEquipmentAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGParachuteAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGParachuteAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGParachuteAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGParachuteAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGParachuteAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGParachuteAttachment(AFGParachuteAttachment&&); \
	NO_API AFGParachuteAttachment(const AFGParachuteAttachment&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGParachuteAttachment() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGParachuteAttachment(AFGParachuteAttachment&&); \
	NO_API AFGParachuteAttachment(const AFGParachuteAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGParachuteAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGParachuteAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGParachuteAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mIsDeployed() { return STRUCT_OFFSET(AFGParachuteAttachment, mIsDeployed); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_84_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGParachuteAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Equipment_FGParachute_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
