// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FScannableDetails;
struct FColor;
#ifdef FACTORYGAME_FGObjectScanner_generated_h
#error "FGObjectScanner.generated.h already included, missing '#pragma once' in FGObjectScanner.h"
#endif
#define FACTORYGAME_FGObjectScanner_generated_h

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScannableDetails_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__RequiredSchematic() { return STRUCT_OFFSET(FScannableDetails, RequiredSchematic); }


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FScannableDetails>();

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetScannableEntry) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_scannableClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScannableEntry(Z_Param_scannableClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableObjectDetails) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FScannableDetails>*)Z_Param__Result=P_THIS->GetAvailableObjectDetails(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDetails) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FScannableDetails*)Z_Param__Result=P_THIS->GetCurrentDetails(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasValidCurrentDetails) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasValidCurrentDetails(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCycleBackward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CycleBackward(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCycleForward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CycleForward(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBeeping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBeeping(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetScannableEntry) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_scannableClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScannableEntry(Z_Param_scannableClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableObjectDetails) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FScannableDetails>*)Z_Param__Result=P_THIS->GetAvailableObjectDetails(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDetails) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FScannableDetails*)Z_Param__Result=P_THIS->GetCurrentDetails(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasValidCurrentDetails) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasValidCurrentDetails(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCycleBackward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CycleBackward(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCycleForward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CycleForward(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBeeping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBeeping(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_EVENT_PARMS \
	struct FGObjectScanner_eventPlayBeep_Parms \
	{ \
		bool isObjectInRange; \
	}; \
	struct FGObjectScanner_eventUpdateScannerVisuals_Parms \
	{ \
		bool wasChange; \
	};


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGObjectScanner(); \
	friend struct Z_Construct_UClass_AFGObjectScanner_Statics; \
public: \
	DECLARE_CLASS(AFGObjectScanner, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGObjectScanner)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_INCLASS \
private: \
	static void StaticRegisterNativesAFGObjectScanner(); \
	friend struct Z_Construct_UClass_AFGObjectScanner_Statics; \
public: \
	DECLARE_CLASS(AFGObjectScanner, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGObjectScanner)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGObjectScanner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGObjectScanner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGObjectScanner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGObjectScanner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGObjectScanner(AFGObjectScanner&&); \
	NO_API AFGObjectScanner(const AFGObjectScanner&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGObjectScanner(AFGObjectScanner&&); \
	NO_API AFGObjectScanner(const AFGObjectScanner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGObjectScanner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGObjectScanner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGObjectScanner)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mBeepDelayMax() { return STRUCT_OFFSET(AFGObjectScanner, mBeepDelayMax); } \
	FORCEINLINE static uint32 __PPO__mBeepDelayMin() { return STRUCT_OFFSET(AFGObjectScanner, mBeepDelayMin); } \
	FORCEINLINE static uint32 __PPO__mDetectionRange() { return STRUCT_OFFSET(AFGObjectScanner, mDetectionRange); } \
	FORCEINLINE static uint32 __PPO__mUpdateClosestObjectTime() { return STRUCT_OFFSET(AFGObjectScanner, mUpdateClosestObjectTime); } \
	FORCEINLINE static uint32 __PPO__mObjectDetails() { return STRUCT_OFFSET(AFGObjectScanner, mObjectDetails); } \
	FORCEINLINE static uint32 __PPO__mClosestObject() { return STRUCT_OFFSET(AFGObjectScanner, mClosestObject); } \
	FORCEINLINE static uint32 __PPO__mShouldBeepEvenIfNoObject() { return STRUCT_OFFSET(AFGObjectScanner, mShouldBeepEvenIfNoObject); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_81_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGObjectScanner>();

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ScannerLightColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ScannerLightColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsBeeping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsBeeping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScannerLightColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=P_THIS->GetScannerLightColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBeeping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBeeping(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ScannerLightColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ScannerLightColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsBeeping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsBeeping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScannerLightColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=P_THIS->GetScannerLightColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBeeping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBeeping(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGObjectScannerAttachment(); \
	friend struct Z_Construct_UClass_AFGObjectScannerAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGObjectScannerAttachment, AFGEquipmentAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGObjectScannerAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_INCLASS \
private: \
	static void StaticRegisterNativesAFGObjectScannerAttachment(); \
	friend struct Z_Construct_UClass_AFGObjectScannerAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGObjectScannerAttachment, AFGEquipmentAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGObjectScannerAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGObjectScannerAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGObjectScannerAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGObjectScannerAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGObjectScannerAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGObjectScannerAttachment(AFGObjectScannerAttachment&&); \
	NO_API AFGObjectScannerAttachment(const AFGObjectScannerAttachment&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGObjectScannerAttachment() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGObjectScannerAttachment(AFGObjectScannerAttachment&&); \
	NO_API AFGObjectScannerAttachment(const AFGObjectScannerAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGObjectScannerAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGObjectScannerAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGObjectScannerAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mIsBeeping() { return STRUCT_OFFSET(AFGObjectScannerAttachment, mIsBeeping); } \
	FORCEINLINE static uint32 __PPO__mScannerLightColor() { return STRUCT_OFFSET(AFGObjectScannerAttachment, mScannerLightColor); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_242_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h_245_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGObjectScannerAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Equipment_FGObjectScanner_h


#define FOREACH_ENUM_ECYCLEDIRECTION(op) \
	op(ECycleDirection::CD_Forward) \
	op(ECycleDirection::CD_Backward) 

enum class ECycleDirection : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<ECycleDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
