// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventoryStack;
class UFGInventoryComponent;
#ifdef FACTORYGAME_FGPortableMiner_generated_h
#error "FGPortableMiner.generated.h already included, missing '#pragma once' in FGPortableMiner.h"
#endif
#define FACTORYGAME_FGPortableMiner_generated_h

#define FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsProducing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsProducing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtractionProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetExtractionProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDismantleInventoryReturns) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FInventoryStack>*)Z_Param__Result=P_THIS->GetDismantleInventoryReturns(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutputInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetOutputInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanProduce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanProduce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProducing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsProducing(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsProducing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsProducing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtractionProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetExtractionProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDismantleInventoryReturns) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FInventoryStack>*)Z_Param__Result=P_THIS->GetDismantleInventoryReturns(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutputInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetOutputInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanProduce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanProduce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProducing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsProducing(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGPortableMiner(); \
	friend struct Z_Construct_UClass_AFGPortableMiner_Statics; \
public: \
	DECLARE_CLASS(AFGPortableMiner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPortableMiner) \
	virtual UObject* _getUObject() const override { return const_cast<AFGPortableMiner*>(this); }


#define FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFGPortableMiner(); \
	friend struct Z_Construct_UClass_AFGPortableMiner_Statics; \
public: \
	DECLARE_CLASS(AFGPortableMiner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPortableMiner) \
	virtual UObject* _getUObject() const override { return const_cast<AFGPortableMiner*>(this); }


#define FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGPortableMiner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGPortableMiner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPortableMiner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPortableMiner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPortableMiner(AFGPortableMiner&&); \
	NO_API AFGPortableMiner(const AFGPortableMiner&); \
public:


#define FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPortableMiner(AFGPortableMiner&&); \
	NO_API AFGPortableMiner(const AFGPortableMiner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPortableMiner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPortableMiner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGPortableMiner)


#define FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mIsProducing() { return STRUCT_OFFSET(AFGPortableMiner, mIsProducing); }


#define FactoryGame_Source_FactoryGame_FGPortableMiner_h_12_PROLOG
#define FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_INCLASS \
	FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGPortableMiner_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGPortableMiner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGPortableMiner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
