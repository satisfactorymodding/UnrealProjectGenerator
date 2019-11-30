// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGMapArea;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FACTORYGAME_FGVolumeMapArea_generated_h
#error "FGVolumeMapArea.generated.h already included, missing '#pragma once' in FGVolumeMapArea.h"
#endif
#define FACTORYGAME_FGVolumeMapArea_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMapArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGMapArea> *)Z_Param__Result=P_THIS->GetMapArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPrimitiveComponentEntered) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_fromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrimitiveComponentEntered(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_fromSweep,Z_Param_Out_sweepResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMapArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGMapArea> *)Z_Param__Result=P_THIS->GetMapArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPrimitiveComponentEntered) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_fromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrimitiveComponentEntered(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_fromSweep,Z_Param_Out_sweepResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGVolumeMapArea(); \
	friend struct Z_Construct_UClass_AFGVolumeMapArea_Statics; \
public: \
	DECLARE_CLASS(AFGVolumeMapArea, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGVolumeMapArea)


#define FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFGVolumeMapArea(); \
	friend struct Z_Construct_UClass_AFGVolumeMapArea_Statics; \
public: \
	DECLARE_CLASS(AFGVolumeMapArea, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGVolumeMapArea)


#define FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGVolumeMapArea(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGVolumeMapArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGVolumeMapArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGVolumeMapArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGVolumeMapArea(AFGVolumeMapArea&&); \
	NO_API AFGVolumeMapArea(const AFGVolumeMapArea&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGVolumeMapArea(AFGVolumeMapArea&&); \
	NO_API AFGVolumeMapArea(const AFGVolumeMapArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGVolumeMapArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGVolumeMapArea); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGVolumeMapArea)


#define FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mMapArea() { return STRUCT_OFFSET(AFGVolumeMapArea, mMapArea); }


#define FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_17_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGVolumeMapArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
