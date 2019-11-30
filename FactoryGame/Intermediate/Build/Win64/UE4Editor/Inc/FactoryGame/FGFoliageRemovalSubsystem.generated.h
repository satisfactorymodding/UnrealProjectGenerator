// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevel;
class UWorld;
class UHierarchicalInstancedStaticMeshComponent;
class UFGFoliageIdentifier;
struct FVector;
class AFGFoliageRemoval;
class UObject;
class AFGFoliageRemovalSubsystem;
#ifdef FACTORYGAME_FGFoliageRemovalSubsystem_generated_h
#error "FGFoliageRemovalSubsystem.generated.h already included, missing '#pragma once' in FGFoliageRemovalSubsystem.h"
#endif
#define FACTORYGAME_FGFoliageRemovalSubsystem_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLevelRemovedFromWorld) \
	{ \
		P_GET_OBJECT(ULevel,Z_Param_inLevel); \
		P_GET_OBJECT(UWorld,Z_Param_inWorld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLevelRemovedFromWorld(Z_Param_inLevel,Z_Param_inWorld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLevelAddedToWorld) \
	{ \
		P_GET_OBJECT(ULevel,Z_Param_inLevel); \
		P_GET_OBJECT(UWorld,Z_Param_inWorld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLevelAddedToWorld(Z_Param_inLevel,Z_Param_inWorld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasIdentifier) \
	{ \
		P_GET_OBJECT(UHierarchicalInstancedStaticMeshComponent,Z_Param_component); \
		P_GET_OBJECT(UClass,Z_Param_foliageIdentifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasIdentifier(Z_Param_component,Z_Param_foliageIdentifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFoliageWithinRadius) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_radius); \
		P_GET_UBOOL(Z_Param_isLocalSpace); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_out_instanceArray); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_out_locationArray); \
		P_GET_TARRAY_REF(UHierarchicalInstancedStaticMeshComponent*,Z_Param_Out_out_componentArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetFoliageWithinRadius(Z_Param_Out_location,Z_Param_radius,Z_Param_isLocalSpace,Z_Param_Out_out_instanceArray,Z_Param_Out_out_locationArray,Z_Param_Out_out_componentArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestFoliageArrayForComponent) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_locations); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_maxDistance); \
		P_GET_OBJECT(UHierarchicalInstancedStaticMeshComponent,Z_Param_component); \
		P_GET_UBOOL(Z_Param_isLocalSpace); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_out_instanceArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetClosestFoliageArrayForComponent(Z_Param_Out_locations,Z_Param_maxDistance,Z_Param_component,Z_Param_isLocalSpace,Z_Param_Out_out_instanceArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestFoliageForComponent) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_maxDistance); \
		P_GET_OBJECT(UHierarchicalInstancedStaticMeshComponent,Z_Param_component); \
		P_GET_UBOOL(Z_Param_isLocalSpace); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_instanceId); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_instanceLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetClosestFoliageForComponent(Z_Param_Out_location,Z_Param_maxDistance,Z_Param_component,Z_Param_isLocalSpace,Z_Param_Out_out_instanceId,Z_Param_Out_out_instanceLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestFoliage) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_maxDistance); \
		P_GET_OBJECT(UClass,Z_Param_foliageIdentifier); \
		P_GET_OBJECT_REF(UHierarchicalInstancedStaticMeshComponent,Z_Param_Out_out_component); \
		P_GET_UBOOL(Z_Param_isLocalSpace); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_instanceId); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_instanceLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetClosestFoliage(Z_Param_Out_location,Z_Param_maxDistance,Z_Param_foliageIdentifier,Z_Param_Out_out_component,Z_Param_isLocalSpace,Z_Param_Out_out_instanceId,Z_Param_Out_out_instanceLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLookAtFoliage) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_viewLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_endViewLocation); \
		P_GET_OBJECT(UClass,Z_Param_foliageIdentifier); \
		P_GET_OBJECT_REF(UHierarchicalInstancedStaticMeshComponent,Z_Param_Out_out_component); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_instanceId); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_instanceLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLookAtFoliage(Z_Param_Out_viewLocation,Z_Param_Out_endViewLocation,Z_Param_foliageIdentifier,Z_Param_Out_out_component,Z_Param_Out_out_instanceId,Z_Param_Out_out_instanceLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFoliageRemovalActor) \
	{ \
		P_GET_OBJECT(UHierarchicalInstancedStaticMeshComponent,Z_Param_fromComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGFoliageRemoval**)Z_Param__Result=P_THIS->GetFoliageRemovalActor(Z_Param_fromComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFoliageRemovalSubsystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGFoliageRemovalSubsystem**)Z_Param__Result=AFGFoliageRemovalSubsystem::GetFoliageRemovalSubsystem(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLevelRemovedFromWorld) \
	{ \
		P_GET_OBJECT(ULevel,Z_Param_inLevel); \
		P_GET_OBJECT(UWorld,Z_Param_inWorld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLevelRemovedFromWorld(Z_Param_inLevel,Z_Param_inWorld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLevelAddedToWorld) \
	{ \
		P_GET_OBJECT(ULevel,Z_Param_inLevel); \
		P_GET_OBJECT(UWorld,Z_Param_inWorld); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLevelAddedToWorld(Z_Param_inLevel,Z_Param_inWorld); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasIdentifier) \
	{ \
		P_GET_OBJECT(UHierarchicalInstancedStaticMeshComponent,Z_Param_component); \
		P_GET_OBJECT(UClass,Z_Param_foliageIdentifier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasIdentifier(Z_Param_component,Z_Param_foliageIdentifier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFoliageWithinRadius) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_radius); \
		P_GET_UBOOL(Z_Param_isLocalSpace); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_out_instanceArray); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_out_locationArray); \
		P_GET_TARRAY_REF(UHierarchicalInstancedStaticMeshComponent*,Z_Param_Out_out_componentArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetFoliageWithinRadius(Z_Param_Out_location,Z_Param_radius,Z_Param_isLocalSpace,Z_Param_Out_out_instanceArray,Z_Param_Out_out_locationArray,Z_Param_Out_out_componentArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestFoliageArrayForComponent) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_locations); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_maxDistance); \
		P_GET_OBJECT(UHierarchicalInstancedStaticMeshComponent,Z_Param_component); \
		P_GET_UBOOL(Z_Param_isLocalSpace); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_out_instanceArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetClosestFoliageArrayForComponent(Z_Param_Out_locations,Z_Param_maxDistance,Z_Param_component,Z_Param_isLocalSpace,Z_Param_Out_out_instanceArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestFoliageForComponent) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_maxDistance); \
		P_GET_OBJECT(UHierarchicalInstancedStaticMeshComponent,Z_Param_component); \
		P_GET_UBOOL(Z_Param_isLocalSpace); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_instanceId); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_instanceLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetClosestFoliageForComponent(Z_Param_Out_location,Z_Param_maxDistance,Z_Param_component,Z_Param_isLocalSpace,Z_Param_Out_out_instanceId,Z_Param_Out_out_instanceLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClosestFoliage) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_maxDistance); \
		P_GET_OBJECT(UClass,Z_Param_foliageIdentifier); \
		P_GET_OBJECT_REF(UHierarchicalInstancedStaticMeshComponent,Z_Param_Out_out_component); \
		P_GET_UBOOL(Z_Param_isLocalSpace); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_instanceId); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_instanceLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetClosestFoliage(Z_Param_Out_location,Z_Param_maxDistance,Z_Param_foliageIdentifier,Z_Param_Out_out_component,Z_Param_isLocalSpace,Z_Param_Out_out_instanceId,Z_Param_Out_out_instanceLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLookAtFoliage) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_viewLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_endViewLocation); \
		P_GET_OBJECT(UClass,Z_Param_foliageIdentifier); \
		P_GET_OBJECT_REF(UHierarchicalInstancedStaticMeshComponent,Z_Param_Out_out_component); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_instanceId); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_out_instanceLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetLookAtFoliage(Z_Param_Out_viewLocation,Z_Param_Out_endViewLocation,Z_Param_foliageIdentifier,Z_Param_Out_out_component,Z_Param_Out_out_instanceId,Z_Param_Out_out_instanceLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFoliageRemovalActor) \
	{ \
		P_GET_OBJECT(UHierarchicalInstancedStaticMeshComponent,Z_Param_fromComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGFoliageRemoval**)Z_Param__Result=P_THIS->GetFoliageRemovalActor(Z_Param_fromComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFoliageRemovalSubsystem) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGFoliageRemovalSubsystem**)Z_Param__Result=AFGFoliageRemovalSubsystem::GetFoliageRemovalSubsystem(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGFoliageRemovalSubsystem(); \
	friend struct Z_Construct_UClass_AFGFoliageRemovalSubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGFoliageRemovalSubsystem, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGFoliageRemovalSubsystem)


#define FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAFGFoliageRemovalSubsystem(); \
	friend struct Z_Construct_UClass_AFGFoliageRemovalSubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGFoliageRemovalSubsystem, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGFoliageRemovalSubsystem)


#define FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGFoliageRemovalSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGFoliageRemovalSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGFoliageRemovalSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGFoliageRemovalSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGFoliageRemovalSubsystem(AFGFoliageRemovalSubsystem&&); \
	NO_API AFGFoliageRemovalSubsystem(const AFGFoliageRemovalSubsystem&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGFoliageRemovalSubsystem(AFGFoliageRemovalSubsystem&&); \
	NO_API AFGFoliageRemovalSubsystem(const AFGFoliageRemovalSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGFoliageRemovalSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGFoliageRemovalSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGFoliageRemovalSubsystem)


#define FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_16_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGFoliageRemovalSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
