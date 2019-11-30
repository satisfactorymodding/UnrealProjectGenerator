// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGPoleDescriptor;
struct FPoleHeightMesh;
#ifdef FACTORYGAME_FGPoleDescriptor_generated_h
#error "FGPoleDescriptor.generated.h already included, missing '#pragma once' in FGPoleDescriptor.h"
#endif
#define FACTORYGAME_FGPoleDescriptor_generated_h

#define FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoleHeightMesh_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FPoleHeightMesh>();

#define FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHeightMeshes) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_TARRAY_REF(FPoleHeightMesh,Z_Param_Out_out_heightMeshes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGPoleDescriptor::GetHeightMeshes(Z_Param_inClass,Z_Param_Out_out_heightMeshes); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHeightMeshes) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_TARRAY_REF(FPoleHeightMesh,Z_Param_Out_out_heightMeshes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGPoleDescriptor::GetHeightMeshes(Z_Param_inClass,Z_Param_Out_out_heightMeshes); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGPoleDescriptor(); \
	friend struct Z_Construct_UClass_UFGPoleDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGPoleDescriptor, UFGBuildingDescriptor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPoleDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUFGPoleDescriptor(); \
	friend struct Z_Construct_UClass_UFGPoleDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGPoleDescriptor, UFGBuildingDescriptor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPoleDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPoleDescriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPoleDescriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPoleDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPoleDescriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPoleDescriptor(UFGPoleDescriptor&&); \
	NO_API UFGPoleDescriptor(const UFGPoleDescriptor&); \
public:


#define FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPoleDescriptor() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPoleDescriptor(UFGPoleDescriptor&&); \
	NO_API UFGPoleDescriptor(const UFGPoleDescriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPoleDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPoleDescriptor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGPoleDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mHeightMeshes() { return STRUCT_OFFSET(UFGPoleDescriptor, mHeightMeshes); }


#define FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_35_PROLOG
#define FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_INCLASS \
	FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGPoleDescriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Resources_FGPoleDescriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
