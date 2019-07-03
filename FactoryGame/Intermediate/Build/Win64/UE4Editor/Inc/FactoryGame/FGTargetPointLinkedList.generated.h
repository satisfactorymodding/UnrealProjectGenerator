// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGTargetPoint;
#ifdef FACTORYGAME_FGTargetPointLinkedList_generated_h
#error "FGTargetPointLinkedList.generated.h already included, missing '#pragma once' in FGTargetPointLinkedList.h"
#endif
#define FACTORYGAME_FGTargetPointLinkedList_generated_h

#define FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClosestPointAsTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClosestPointAsTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNextTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPathVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_inVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPathVisibility(Z_Param_inVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTargetPoint**)Z_Param__Result=P_THIS->GetLastTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTargetPoint**)Z_Param__Result=P_THIS->GetFirstTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentTarget) \
	{ \
		P_GET_OBJECT(AFGTargetPoint,Z_Param_newTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentTarget(Z_Param_newTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTargetPoint**)Z_Param__Result=P_THIS->GetCurrentTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveItem) \
	{ \
		P_GET_OBJECT(AFGTargetPoint,Z_Param_targetToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveItem(Z_Param_targetToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsertItem) \
	{ \
		P_GET_OBJECT(AFGTargetPoint,Z_Param_newTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InsertItem(Z_Param_newTarget); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClosestPointAsTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetClosestPointAsTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNextTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPathVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_inVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPathVisibility(Z_Param_inVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTargetPoint**)Z_Param__Result=P_THIS->GetLastTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTargetPoint**)Z_Param__Result=P_THIS->GetFirstTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentTarget) \
	{ \
		P_GET_OBJECT(AFGTargetPoint,Z_Param_newTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentTarget(Z_Param_newTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGTargetPoint**)Z_Param__Result=P_THIS->GetCurrentTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveItem) \
	{ \
		P_GET_OBJECT(AFGTargetPoint,Z_Param_targetToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveItem(Z_Param_targetToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsertItem) \
	{ \
		P_GET_OBJECT(AFGTargetPoint,Z_Param_newTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InsertItem(Z_Param_newTarget); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGTargetPointLinkedList(); \
	friend struct Z_Construct_UClass_UFGTargetPointLinkedList_Statics; \
public: \
	DECLARE_CLASS(UFGTargetPointLinkedList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGTargetPointLinkedList) \
	virtual UObject* _getUObject() const override { return const_cast<UFGTargetPointLinkedList*>(this); }


#define FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFGTargetPointLinkedList(); \
	friend struct Z_Construct_UClass_UFGTargetPointLinkedList_Statics; \
public: \
	DECLARE_CLASS(UFGTargetPointLinkedList, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGTargetPointLinkedList) \
	virtual UObject* _getUObject() const override { return const_cast<UFGTargetPointLinkedList*>(this); }


#define FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGTargetPointLinkedList(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGTargetPointLinkedList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGTargetPointLinkedList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGTargetPointLinkedList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGTargetPointLinkedList(UFGTargetPointLinkedList&&); \
	NO_API UFGTargetPointLinkedList(const UFGTargetPointLinkedList&); \
public:


#define FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGTargetPointLinkedList(UFGTargetPointLinkedList&&); \
	NO_API UFGTargetPointLinkedList(const UFGTargetPointLinkedList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGTargetPointLinkedList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGTargetPointLinkedList); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGTargetPointLinkedList)


#define FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCurrentTarget() { return STRUCT_OFFSET(UFGTargetPointLinkedList, mCurrentTarget); } \
	FORCEINLINE static uint32 __PPO__mMaxLength() { return STRUCT_OFFSET(UFGTargetPointLinkedList, mMaxLength); }


#define FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_15_PROLOG
#define FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_INCLASS \
	FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGTargetPointLinkedList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
