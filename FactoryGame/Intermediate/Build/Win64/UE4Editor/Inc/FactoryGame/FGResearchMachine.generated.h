// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGCharacterPlayer;
class UFGSchematic;
class UCurveFloat;
class UStaticMeshComponent;
class UFGResearchRecipe;
#ifdef FACTORYGAME_FGResearchMachine_generated_h
#error "FGResearchMachine.generated.h already included, missing '#pragma once' in FGResearchMachine.h"
#endif
#define FACTORYGAME_FGResearchMachine_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ResearchMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ResearchMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchBeingConducted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchBeingConducted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMachineUser) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMachineUser(Z_Param_player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnResearchConcluded) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResearchConcluded(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnResearchStarted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResearchStarted(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResearchMeshCurveScale) \
	{ \
		P_GET_OBJECT(UCurveFloat,Z_Param_curveScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResearchMeshCurveScale(Z_Param_curveScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResearchMeshComponent) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_staticMeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResearchMeshComponent(Z_Param_staticMeshComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchMeshComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetResearchMeshComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMachineUser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetMachineUser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResearchRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResearchRecipe(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ResearchMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ResearchMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsResearchBeingConducted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsResearchBeingConducted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMachineUser) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMachineUser(Z_Param_player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnResearchConcluded) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResearchConcluded(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnResearchStarted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_schematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnResearchStarted(Z_Param_schematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResearchMeshCurveScale) \
	{ \
		P_GET_OBJECT(UCurveFloat,Z_Param_curveScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResearchMeshCurveScale(Z_Param_curveScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResearchMeshComponent) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_staticMeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResearchMeshComponent(Z_Param_staticMeshComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchMeshComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetResearchMeshComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMachineUser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetMachineUser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResearchRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_researchRecipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResearchRecipe(Z_Param_researchRecipe); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGResearchMachine(); \
	friend struct Z_Construct_UClass_UFGResearchMachine_Statics; \
public: \
	DECLARE_CLASS(UFGResearchMachine, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGResearchMachine) \
	virtual UObject* _getUObject() const override { return const_cast<UFGResearchMachine*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFGResearchMachine(); \
	friend struct Z_Construct_UClass_UFGResearchMachine_Statics; \
public: \
	DECLARE_CLASS(UFGResearchMachine, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGResearchMachine) \
	virtual UObject* _getUObject() const override { return const_cast<UFGResearchMachine*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGResearchMachine(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGResearchMachine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGResearchMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGResearchMachine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGResearchMachine(UFGResearchMachine&&); \
	NO_API UFGResearchMachine(const UFGResearchMachine&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGResearchMachine(UFGResearchMachine&&); \
	NO_API UFGResearchMachine(const UFGResearchMachine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGResearchMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGResearchMachine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGResearchMachine)


#define FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCurrentResearchRecipe() { return STRUCT_OFFSET(UFGResearchMachine, mCurrentResearchRecipe); } \
	FORCEINLINE static uint32 __PPO__mPlayerUsingMachine() { return STRUCT_OFFSET(UFGResearchMachine, mPlayerUsingMachine); } \
	FORCEINLINE static uint32 __PPO__mResearchingMeshComponent() { return STRUCT_OFFSET(UFGResearchMachine, mResearchingMeshComponent); } \
	FORCEINLINE static uint32 __PPO__mResearchingMesh() { return STRUCT_OFFSET(UFGResearchMachine, mResearchingMesh); } \
	FORCEINLINE static uint32 __PPO__mItemScaleCurve() { return STRUCT_OFFSET(UFGResearchMachine, mItemScaleCurve); }


#define FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_16_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGResearchMachine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGResearchMachine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
