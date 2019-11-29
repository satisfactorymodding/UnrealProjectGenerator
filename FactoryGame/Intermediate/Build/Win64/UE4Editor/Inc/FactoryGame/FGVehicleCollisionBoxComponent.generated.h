// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FACTORYGAME_FGVehicleCollisionBoxComponent_generated_h
#error "FGVehicleCollisionBoxComponent.generated.h already included, missing '#pragma once' in FGVehicleCollisionBoxComponent.h"
#endif
#define FACTORYGAME_FGVehicleCollisionBoxComponent_generated_h

#define FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGVehicleCollisionBoxComponent(); \
	friend struct Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics; \
public: \
	DECLARE_CLASS(UFGVehicleCollisionBoxComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGVehicleCollisionBoxComponent)


#define FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFGVehicleCollisionBoxComponent(); \
	friend struct Z_Construct_UClass_UFGVehicleCollisionBoxComponent_Statics; \
public: \
	DECLARE_CLASS(UFGVehicleCollisionBoxComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGVehicleCollisionBoxComponent)


#define FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGVehicleCollisionBoxComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGVehicleCollisionBoxComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGVehicleCollisionBoxComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGVehicleCollisionBoxComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGVehicleCollisionBoxComponent(UFGVehicleCollisionBoxComponent&&); \
	NO_API UFGVehicleCollisionBoxComponent(const UFGVehicleCollisionBoxComponent&); \
public:


#define FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGVehicleCollisionBoxComponent(UFGVehicleCollisionBoxComponent&&); \
	NO_API UFGVehicleCollisionBoxComponent(const UFGVehicleCollisionBoxComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGVehicleCollisionBoxComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGVehicleCollisionBoxComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGVehicleCollisionBoxComponent)


#define FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_12_PROLOG
#define FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_INCLASS \
	FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGVehicleCollisionBoxComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGVehicleCollisionBoxComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
