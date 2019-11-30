// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMaterialFlowGraph;
struct FMaterialFlowNode;
class UFGRecipe;
class AFGRecipeManager;
#ifdef FACTORYGAME_FGMaterialFlowAnalysisFunctionLibrary_generated_h
#error "FGMaterialFlowAnalysisFunctionLibrary.generated.h already included, missing '#pragma once' in FGMaterialFlowAnalysisFunctionLibrary.h"
#endif
#define FACTORYGAME_FGMaterialFlowAnalysisFunctionLibrary_generated_h

#define FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialFlowNode_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialFlowConnection_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialFlowGraph_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGraphNodes) \
	{ \
		P_GET_STRUCT_REF(FMaterialFlowGraph,Z_Param_Out_graph); \
		P_GET_PROPERTY(UIntProperty,Z_Param_depth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FMaterialFlowNode>*)Z_Param__Result=UFGMaterialFlowAnalysisFunctionLibrary::GetGraphNodes(Z_Param_Out_graph,Z_Param_depth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGraphDepth) \
	{ \
		P_GET_STRUCT_REF(FMaterialFlowGraph,Z_Param_Out_graph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGMaterialFlowAnalysisFunctionLibrary::GetGraphDepth(Z_Param_Out_graph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformMaterialFlowAnalysis) \
	{ \
		P_GET_TARRAY(TSubclassOf<UFGRecipe> ,Z_Param_recipes); \
		P_GET_OBJECT(AFGRecipeManager,Z_Param_recipeManager); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMaterialFlowGraph*)Z_Param__Result=UFGMaterialFlowAnalysisFunctionLibrary::PerformMaterialFlowAnalysis(Z_Param_recipes,Z_Param_recipeManager); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGraphNodes) \
	{ \
		P_GET_STRUCT_REF(FMaterialFlowGraph,Z_Param_Out_graph); \
		P_GET_PROPERTY(UIntProperty,Z_Param_depth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FMaterialFlowNode>*)Z_Param__Result=UFGMaterialFlowAnalysisFunctionLibrary::GetGraphNodes(Z_Param_Out_graph,Z_Param_depth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGraphDepth) \
	{ \
		P_GET_STRUCT_REF(FMaterialFlowGraph,Z_Param_Out_graph); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGMaterialFlowAnalysisFunctionLibrary::GetGraphDepth(Z_Param_Out_graph); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformMaterialFlowAnalysis) \
	{ \
		P_GET_TARRAY(TSubclassOf<UFGRecipe> ,Z_Param_recipes); \
		P_GET_OBJECT(AFGRecipeManager,Z_Param_recipeManager); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMaterialFlowGraph*)Z_Param__Result=UFGMaterialFlowAnalysisFunctionLibrary::PerformMaterialFlowAnalysis(Z_Param_recipes,Z_Param_recipeManager); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMaterialFlowAnalysisFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGMaterialFlowAnalysisFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMaterialFlowAnalysisFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUFGMaterialFlowAnalysisFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGMaterialFlowAnalysisFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGMaterialFlowAnalysisFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMaterialFlowAnalysisFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMaterialFlowAnalysisFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMaterialFlowAnalysisFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMaterialFlowAnalysisFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMaterialFlowAnalysisFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMaterialFlowAnalysisFunctionLibrary(UFGMaterialFlowAnalysisFunctionLibrary&&); \
	NO_API UFGMaterialFlowAnalysisFunctionLibrary(const UFGMaterialFlowAnalysisFunctionLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMaterialFlowAnalysisFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMaterialFlowAnalysisFunctionLibrary(UFGMaterialFlowAnalysisFunctionLibrary&&); \
	NO_API UFGMaterialFlowAnalysisFunctionLibrary(const UFGMaterialFlowAnalysisFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMaterialFlowAnalysisFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMaterialFlowAnalysisFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMaterialFlowAnalysisFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_107_PROLOG
#define FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_INCLASS \
	FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGMaterialFlowAnalysisFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
