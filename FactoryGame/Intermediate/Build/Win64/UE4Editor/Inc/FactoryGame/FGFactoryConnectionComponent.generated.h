// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryItem;
class UFGItemDescriptor;
enum class EFactoryConnectionConnector : uint8;
enum class EFactoryConnectionDirection : uint8;
class UFGInventoryComponent;
#ifdef FACTORYGAME_FGFactoryConnectionComponent_generated_h
#error "FGFactoryConnectionComponent.generated.h already included, missing '#pragma once' in FGFactoryConnectionComponent.h"
#endif
#define FACTORYGAME_FGFactoryConnectionComponent_generated_h

#define FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFactory_Internal_GrabOutputInventory) \
	{ \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_out_item); \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Factory_Internal_GrabOutputInventory(Z_Param_Out_out_item,Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_Internal_PeekOutputInventory) \
	{ \
		P_GET_TARRAY_REF(FInventoryItem,Z_Param_Out_out_items); \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Factory_Internal_PeekOutputInventory(Z_Param_Out_out_items,Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_GrabOutput) \
	{ \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_out_item); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_out_OffsetBeyond); \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Factory_GrabOutput(Z_Param_Out_out_item,Z_Param_Out_out_OffsetBeyond,Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_PeekOutput) \
	{ \
		P_GET_TARRAY_REF(FInventoryItem,Z_Param_Out_out_items); \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Factory_PeekOutput(Z_Param_Out_out_items,Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConnectorClearance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetConnectorClearance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConnector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EFactoryConnectionConnector*)Z_Param__Result=P_THIS->GetConnector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EFactoryConnectionDirection*)Z_Param__Result=P_THIS->GetDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConnected(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFactory_Internal_GrabOutputInventory) \
	{ \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_out_item); \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Factory_Internal_GrabOutputInventory(Z_Param_Out_out_item,Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_Internal_PeekOutputInventory) \
	{ \
		P_GET_TARRAY_REF(FInventoryItem,Z_Param_Out_out_items); \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Factory_Internal_PeekOutputInventory(Z_Param_Out_out_items,Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_GrabOutput) \
	{ \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_out_item); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_out_OffsetBeyond); \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Factory_GrabOutput(Z_Param_Out_out_item,Z_Param_Out_out_OffsetBeyond,Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_PeekOutput) \
	{ \
		P_GET_TARRAY_REF(FInventoryItem,Z_Param_Out_out_items); \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Factory_PeekOutput(Z_Param_Out_out_items,Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConnectorClearance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetConnectorClearance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConnector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EFactoryConnectionConnector*)Z_Param__Result=P_THIS->GetConnector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EFactoryConnectionDirection*)Z_Param__Result=P_THIS->GetDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsConnected(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGFactoryConnectionComponent(); \
	friend struct Z_Construct_UClass_UFGFactoryConnectionComponent_Statics; \
public: \
	DECLARE_CLASS(UFGFactoryConnectionComponent, UFGConnectionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGFactoryConnectionComponent)


#define FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUFGFactoryConnectionComponent(); \
	friend struct Z_Construct_UClass_UFGFactoryConnectionComponent_Statics; \
public: \
	DECLARE_CLASS(UFGFactoryConnectionComponent, UFGConnectionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGFactoryConnectionComponent)


#define FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGFactoryConnectionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGFactoryConnectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGFactoryConnectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGFactoryConnectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGFactoryConnectionComponent(UFGFactoryConnectionComponent&&); \
	NO_API UFGFactoryConnectionComponent(const UFGFactoryConnectionComponent&); \
public:


#define FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGFactoryConnectionComponent(UFGFactoryConnectionComponent&&); \
	NO_API UFGFactoryConnectionComponent(const UFGFactoryConnectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGFactoryConnectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGFactoryConnectionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGFactoryConnectionComponent)


#define FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mConnector() { return STRUCT_OFFSET(UFGFactoryConnectionComponent, mConnector); } \
	FORCEINLINE static uint32 __PPO__mDirection() { return STRUCT_OFFSET(UFGFactoryConnectionComponent, mDirection); } \
	FORCEINLINE static uint32 __PPO__mConnectorClearance() { return STRUCT_OFFSET(UFGFactoryConnectionComponent, mConnectorClearance); } \
	FORCEINLINE static uint32 __PPO__mConnectedComponent() { return STRUCT_OFFSET(UFGFactoryConnectionComponent, mConnectedComponent); } \
	FORCEINLINE static uint32 __PPO__mHasConnectedComponent() { return STRUCT_OFFSET(UFGFactoryConnectionComponent, mHasConnectedComponent); } \
	FORCEINLINE static uint32 __PPO__mConnectionInventory() { return STRUCT_OFFSET(UFGFactoryConnectionComponent, mConnectionInventory); }


#define FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_53_PROLOG
#define FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_INCLASS \
	FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGFactoryConnectionComponent_h


#define FOREACH_ENUM_EFACTORYCONNECTIONDIRECTION(op) \
	op(EFactoryConnectionDirection::FCD_INPUT) \
	op(EFactoryConnectionDirection::FCD_OUTPUT) \
	op(EFactoryConnectionDirection::FCD_ANY) \
	op(EFactoryConnectionDirection::FCD_SNAP_ONLY) 
#define FOREACH_ENUM_EFACTORYCONNECTIONCONNECTOR(op) \
	op(EFactoryConnectionConnector::FCC_CONVEYOR) \
	op(EFactoryConnectionConnector::FCC_PIPE) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
