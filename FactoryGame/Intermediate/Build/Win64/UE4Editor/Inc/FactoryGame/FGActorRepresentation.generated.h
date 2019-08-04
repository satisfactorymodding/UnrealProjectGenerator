// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECompassViewDistance : uint8;
enum class EFogOfWarRevealType : uint8;
enum class ERepresentationType : uint8;
struct FLinearColor;
class UTexture2D;
struct FRotator;
struct FVector;
class AActor;
#ifdef FACTORYGAME_FGActorRepresentation_generated_h
#error "FGActorRepresentation.generated.h already included, missing '#pragma once' in FGActorRepresentation.h"
#endif
#define FACTORYGAME_FGActorRepresentation_generated_h

#define FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ActorRepresentationUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ActorRepresentationUpdated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ShouldShowOnMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ShouldShowOnMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ShouldShowInCompass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ShouldShowInCompass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompassViewDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECompassViewDistance*)Z_Param__Result=P_THIS->GetCompassViewDistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFogOfWarRevealRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFogOfWarRevealRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFogOfWarRevealType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EFogOfWarRevealType*)Z_Param__Result=P_THIS->GetFogOfWarRevealType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShouldShowOnMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShouldShowOnMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShouldShowInCompass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShouldShowInCompass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRepresentationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERepresentationType*)Z_Param__Result=P_THIS->GetRepresentationType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRepresentationColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetRepresentationColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRepresentationText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetRepresentationText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRepresentationTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetRepresentationTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetActorRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetActorLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActorStatic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActorStatic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsTemporary) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsTemporary(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRealActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetRealActor(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ActorRepresentationUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ActorRepresentationUpdated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ShouldShowOnMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ShouldShowOnMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ShouldShowInCompass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ShouldShowInCompass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompassViewDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECompassViewDistance*)Z_Param__Result=P_THIS->GetCompassViewDistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFogOfWarRevealRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFogOfWarRevealRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFogOfWarRevealType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EFogOfWarRevealType*)Z_Param__Result=P_THIS->GetFogOfWarRevealType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShouldShowOnMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShouldShowOnMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShouldShowInCompass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetShouldShowInCompass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRepresentationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERepresentationType*)Z_Param__Result=P_THIS->GetRepresentationType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRepresentationColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetRepresentationColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRepresentationText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetRepresentationText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRepresentationTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetRepresentationTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetActorRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetActorLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActorStatic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActorStatic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsTemporary) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsTemporary(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRealActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetRealActor(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGActorRepresentation(); \
	friend struct Z_Construct_UClass_UFGActorRepresentation_Statics; \
public: \
	DECLARE_CLASS(UFGActorRepresentation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGActorRepresentation)


#define FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUFGActorRepresentation(); \
	friend struct Z_Construct_UClass_UFGActorRepresentation_Statics; \
public: \
	DECLARE_CLASS(UFGActorRepresentation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGActorRepresentation)


#define FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGActorRepresentation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGActorRepresentation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGActorRepresentation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGActorRepresentation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGActorRepresentation(UFGActorRepresentation&&); \
	NO_API UFGActorRepresentation(const UFGActorRepresentation&); \
public:


#define FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGActorRepresentation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGActorRepresentation(UFGActorRepresentation&&); \
	NO_API UFGActorRepresentation(const UFGActorRepresentation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGActorRepresentation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGActorRepresentation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGActorRepresentation)


#define FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mRealActor() { return STRUCT_OFFSET(UFGActorRepresentation, mRealActor); } \
	FORCEINLINE static uint32 __PPO__mActorLocation() { return STRUCT_OFFSET(UFGActorRepresentation, mActorLocation); } \
	FORCEINLINE static uint32 __PPO__mActorRotation() { return STRUCT_OFFSET(UFGActorRepresentation, mActorRotation); } \
	FORCEINLINE static uint32 __PPO__mIsStatic() { return STRUCT_OFFSET(UFGActorRepresentation, mIsStatic); } \
	FORCEINLINE static uint32 __PPO__mRepresentationTexture() { return STRUCT_OFFSET(UFGActorRepresentation, mRepresentationTexture); } \
	FORCEINLINE static uint32 __PPO__mRepresentationText() { return STRUCT_OFFSET(UFGActorRepresentation, mRepresentationText); } \
	FORCEINLINE static uint32 __PPO__mRepresentationColor() { return STRUCT_OFFSET(UFGActorRepresentation, mRepresentationColor); } \
	FORCEINLINE static uint32 __PPO__mRepresentationType() { return STRUCT_OFFSET(UFGActorRepresentation, mRepresentationType); } \
	FORCEINLINE static uint32 __PPO__mFogOfWarRevealType() { return STRUCT_OFFSET(UFGActorRepresentation, mFogOfWarRevealType); } \
	FORCEINLINE static uint32 __PPO__mFogOfWarRevealRadius() { return STRUCT_OFFSET(UFGActorRepresentation, mFogOfWarRevealRadius); } \
	FORCEINLINE static uint32 __PPO__mShouldShowInCompass() { return STRUCT_OFFSET(UFGActorRepresentation, mShouldShowInCompass); } \
	FORCEINLINE static uint32 __PPO__mShouldShowOnMap() { return STRUCT_OFFSET(UFGActorRepresentation, mShouldShowOnMap); } \
	FORCEINLINE static uint32 __PPO__mCompassViewDistance() { return STRUCT_OFFSET(UFGActorRepresentation, mCompassViewDistance); }


#define FactoryGame_Source_FactoryGame_FGActorRepresentation_h_52_PROLOG
#define FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_INCLASS \
	FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGActorRepresentation_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGActorRepresentation_h


#define FOREACH_ENUM_ECOMPASSVIEWDISTANCE(op) \
	op(ECompassViewDistance::CVD_Off) \
	op(ECompassViewDistance::CVD_Near) \
	op(ECompassViewDistance::CVD_Mid) \
	op(ECompassViewDistance::CVD_Far) \
	op(ECompassViewDistance::CVD_Always) 
#define FOREACH_ENUM_EFOGOFWARREVEALTYPE(op) \
	op(EFogOfWarRevealType::FOWRT_None) \
	op(EFogOfWarRevealType::FOWRT_Static) \
	op(EFogOfWarRevealType::FOWRT_Intermittent) \
	op(EFogOfWarRevealType::FOWRT_Dynamic) 
#define FOREACH_ENUM_EREPRESENTATIONTYPE(op) \
	op(ERepresentationType::RT_Default) \
	op(ERepresentationType::RT_Beacon) \
	op(ERepresentationType::RT_Crate) \
	op(ERepresentationType::RT_Hub) \
	op(ERepresentationType::RT_Ping) \
	op(ERepresentationType::RT_Player) \
	op(ERepresentationType::RT_RadarTower) \
	op(ERepresentationType::RT_Resource) \
	op(ERepresentationType::RT_SpaceElevator) \
	op(ERepresentationType::RT_StartingPod) \
	op(ERepresentationType::RT_Train) \
	op(ERepresentationType::RT_TrainStation) \
	op(ERepresentationType::RT_Vehicle) \
	op(ERepresentationType::RT_VehicleDockingStation) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
