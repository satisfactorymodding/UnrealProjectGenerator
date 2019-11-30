// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGBuildableConveyorBelt;
class AFGCharacterPlayer;
#ifdef FACTORYGAME_FGBuildableConveyorBase_generated_h
#error "FGBuildableConveyorBase.generated.h already included, missing '#pragma once' in FGBuildableConveyorBase.h"
#endif
#define FACTORYGAME_FGBuildableConveyorBase_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_288_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConveyorBeltItems_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConveyorBeltItem_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_RPC_WRAPPERS \
	virtual bool Server_OnUse_Validate(AFGBuildableConveyorBelt* , AFGCharacterPlayer* , int32 , int8 ); \
	virtual void Server_OnUse_Implementation(AFGBuildableConveyorBelt* target, AFGCharacterPlayer* byCharacter, int32 itemIndex, int8 repVersion); \
 \
	DECLARE_FUNCTION(execServer_OnUse) \
	{ \
		P_GET_OBJECT(AFGBuildableConveyorBelt,Z_Param_target); \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_PROPERTY(UIntProperty,Z_Param_itemIndex); \
		P_GET_PROPERTY(UInt8Property,Z_Param_repVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_OnUse_Validate(Z_Param_target,Z_Param_byCharacter,Z_Param_itemIndex,Z_Param_repVersion)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_OnUse_Validate")); \
			return; \
		} \
		P_THIS->Server_OnUse_Implementation(Z_Param_target,Z_Param_byCharacter,Z_Param_itemIndex,Z_Param_repVersion); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_OnUse_Validate(AFGBuildableConveyorBelt* , AFGCharacterPlayer* , int32 , int8 ); \
	virtual void Server_OnUse_Implementation(AFGBuildableConveyorBelt* target, AFGCharacterPlayer* byCharacter, int32 itemIndex, int8 repVersion); \
 \
	DECLARE_FUNCTION(execServer_OnUse) \
	{ \
		P_GET_OBJECT(AFGBuildableConveyorBelt,Z_Param_target); \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_PROPERTY(UIntProperty,Z_Param_itemIndex); \
		P_GET_PROPERTY(UInt8Property,Z_Param_repVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_OnUse_Validate(Z_Param_target,Z_Param_byCharacter,Z_Param_itemIndex,Z_Param_repVersion)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_OnUse_Validate")); \
			return; \
		} \
		P_THIS->Server_OnUse_Implementation(Z_Param_target,Z_Param_byCharacter,Z_Param_itemIndex,Z_Param_repVersion); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_EVENT_PARMS \
	struct FGConveyorRemoteCallObject_eventServer_OnUse_Parms \
	{ \
		AFGBuildableConveyorBelt* target; \
		AFGCharacterPlayer* byCharacter; \
		int32 itemIndex; \
		int8 repVersion; \
	};


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGConveyorRemoteCallObject(); \
	friend struct Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics; \
public: \
	DECLARE_CLASS(UFGConveyorRemoteCallObject, UFGRemoteCallObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGConveyorRemoteCallObject)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUFGConveyorRemoteCallObject(); \
	friend struct Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics; \
public: \
	DECLARE_CLASS(UFGConveyorRemoteCallObject, UFGRemoteCallObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGConveyorRemoteCallObject)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGConveyorRemoteCallObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGConveyorRemoteCallObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGConveyorRemoteCallObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGConveyorRemoteCallObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGConveyorRemoteCallObject(UFGConveyorRemoteCallObject&&); \
	NO_API UFGConveyorRemoteCallObject(const UFGConveyorRemoteCallObject&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGConveyorRemoteCallObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGConveyorRemoteCallObject(UFGConveyorRemoteCallObject&&); \
	NO_API UFGConveyorRemoteCallObject(const UFGConveyorRemoteCallObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGConveyorRemoteCallObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGConveyorRemoteCallObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGConveyorRemoteCallObject)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_23_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPresistentConveyorPackagingData(); \
	friend struct Z_Construct_UClass_UPresistentConveyorPackagingData_Statics; \
public: \
	DECLARE_CLASS(UPresistentConveyorPackagingData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UPresistentConveyorPackagingData)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_INCLASS \
private: \
	static void StaticRegisterNativesUPresistentConveyorPackagingData(); \
	friend struct Z_Construct_UClass_UPresistentConveyorPackagingData_Statics; \
public: \
	DECLARE_CLASS(UPresistentConveyorPackagingData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UPresistentConveyorPackagingData)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPresistentConveyorPackagingData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPresistentConveyorPackagingData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPresistentConveyorPackagingData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPresistentConveyorPackagingData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPresistentConveyorPackagingData(UPresistentConveyorPackagingData&&); \
	NO_API UPresistentConveyorPackagingData(const UPresistentConveyorPackagingData&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPresistentConveyorPackagingData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPresistentConveyorPackagingData(UPresistentConveyorPackagingData&&); \
	NO_API UPresistentConveyorPackagingData(const UPresistentConveyorPackagingData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPresistentConveyorPackagingData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPresistentConveyorPackagingData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPresistentConveyorPackagingData)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_248_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_251_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsSignificant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsSignificant(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsSignificant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsSignificant(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AFGBuildableConveyorBase, NO_API)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableConveyorBase(); \
	friend struct Z_Construct_UClass_AFGBuildableConveyorBase_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableConveyorBase, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableConveyorBase) \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableConveyorBase*>(this); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableConveyorBase(); \
	friend struct Z_Construct_UClass_AFGBuildableConveyorBase_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableConveyorBase, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableConveyorBase) \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildableConveyorBase*>(this); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableConveyorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableConveyorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableConveyorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableConveyorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableConveyorBase(AFGBuildableConveyorBase&&); \
	NO_API AFGBuildableConveyorBase(const AFGBuildableConveyorBase&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableConveyorBase(AFGBuildableConveyorBase&&); \
	NO_API AFGBuildableConveyorBase(const AFGBuildableConveyorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableConveyorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableConveyorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableConveyorBase)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSpeed() { return STRUCT_OFFSET(AFGBuildableConveyorBase, mSpeed); } \
	FORCEINLINE static uint32 __PPO__mItems() { return STRUCT_OFFSET(AFGBuildableConveyorBase, mItems); } \
	FORCEINLINE static uint32 __PPO__mConnection0() { return STRUCT_OFFSET(AFGBuildableConveyorBase, mConnection0); } \
	FORCEINLINE static uint32 __PPO__mConnection1() { return STRUCT_OFFSET(AFGBuildableConveyorBase, mConnection1); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_602_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h_605_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
