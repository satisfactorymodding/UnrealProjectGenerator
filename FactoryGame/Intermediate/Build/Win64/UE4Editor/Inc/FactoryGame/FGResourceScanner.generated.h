// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGResourceDescriptor;
struct FNodeClusterData;
#ifdef FACTORYGAME_FGResourceScanner_generated_h
#error "FGResourceScanner.generated.h already included, missing '#pragma once' in FGResourceScanner.h"
#endif
#define FACTORYGAME_FGResourceScanner_generated_h

#define FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNodeClusterData_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_RPC_WRAPPERS \
	virtual bool Server_ScanReleased_Validate(); \
	virtual void Server_ScanReleased_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_ScanReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ScanReleased_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ScanReleased_Validate")); \
			return; \
		} \
		P_THIS->Server_ScanReleased_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPressingScan) \
	{ \
		P_GET_UBOOL(Z_Param_isPressingScan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPressingScan(Z_Param_isPressingScan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResourceDescriptorToScanFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResourceDescriptorToScanFor(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScannableResources) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGResourceDescriptor> >*)Z_Param__Result=P_THIS->GetScannableResources(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceDescriptorToScanFor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGResourceDescriptor> *)Z_Param__Result=P_THIS->GetResourceDescriptorToScanFor(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_ScanReleased_Validate(); \
	virtual void Server_ScanReleased_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_ScanReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ScanReleased_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ScanReleased_Validate")); \
			return; \
		} \
		P_THIS->Server_ScanReleased_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPressingScan) \
	{ \
		P_GET_UBOOL(Z_Param_isPressingScan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPressingScan(Z_Param_isPressingScan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResourceDescriptorToScanFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResourceDescriptorToScanFor(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScannableResources) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGResourceDescriptor> >*)Z_Param__Result=P_THIS->GetScannableResources(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceDescriptorToScanFor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGResourceDescriptor> *)Z_Param__Result=P_THIS->GetResourceDescriptorToScanFor(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_EVENT_PARMS \
	struct FGResourceScanner_eventPlayClusterEffects_Parms \
	{ \
		TArray<FNodeClusterData> clusters; \
	};


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGResourceScanner(); \
	friend struct Z_Construct_UClass_AFGResourceScanner_Statics; \
public: \
	DECLARE_CLASS(AFGResourceScanner, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGResourceScanner)


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_INCLASS \
private: \
	static void StaticRegisterNativesAFGResourceScanner(); \
	friend struct Z_Construct_UClass_AFGResourceScanner_Statics; \
public: \
	DECLARE_CLASS(AFGResourceScanner, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGResourceScanner)


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGResourceScanner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGResourceScanner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGResourceScanner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGResourceScanner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGResourceScanner(AFGResourceScanner&&); \
	NO_API AFGResourceScanner(const AFGResourceScanner&); \
public:


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGResourceScanner(AFGResourceScanner&&); \
	NO_API AFGResourceScanner(const AFGResourceScanner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGResourceScanner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGResourceScanner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGResourceScanner)


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mResourceDescriptorToScanFor() { return STRUCT_OFFSET(AFGResourceScanner, mResourceDescriptorToScanFor); } \
	FORCEINLINE static uint32 __PPO__mNrOfClosestClustersToMark() { return STRUCT_OFFSET(AFGResourceScanner, mNrOfClosestClustersToMark); } \
	FORCEINLINE static uint32 __PPO__mLastPressedTimeStamp() { return STRUCT_OFFSET(AFGResourceScanner, mLastPressedTimeStamp); } \
	FORCEINLINE static uint32 __PPO__mHoldDownDurationForUI() { return STRUCT_OFFSET(AFGResourceScanner, mHoldDownDurationForUI); } \
	FORCEINLINE static uint32 __PPO__mIsPressingScan() { return STRUCT_OFFSET(AFGResourceScanner, mIsPressingScan); } \
	FORCEINLINE static uint32 __PPO__mIsWaitingForSelectionUI() { return STRUCT_OFFSET(AFGResourceScanner, mIsWaitingForSelectionUI); } \
	FORCEINLINE static uint32 __PPO__mDistBetweenNodesInCluster() { return STRUCT_OFFSET(AFGResourceScanner, mDistBetweenNodesInCluster); } \
	FORCEINLINE static uint32 __PPO__mNodeClusters() { return STRUCT_OFFSET(AFGResourceScanner, mNodeClusters); }


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_38_PROLOG \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_INCLASS \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Equipment_FGResourceScanner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
