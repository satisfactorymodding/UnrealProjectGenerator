// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGSchematic;
class UFGRecipe;
struct FSlateBrush;
class UFGUnlock;
struct FItemAmount;
class UFGSchematicCategory;
enum class ESchematicType : uint8;
#ifdef FACTORYGAME_FGSchematic_generated_h
#error "FGSchematic.generated.h already included, missing '#pragma once' in FGSchematic.h"
#endif
#define FACTORYGAME_FGSchematic_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultipleItemStruct_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FMultipleItemStruct>();

#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsIncludedInBuild) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSchematic::IsIncludedInBuild(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRepeatPurchasesAllowed) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSchematic::IsRepeatPurchasesAllowed(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdditionalSchematicDependencies) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGSchematic> >*)Z_Param__Result=UFGSchematic::GetAdditionalSchematicDependencies(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDependentOnSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGSchematic> *)Z_Param__Result=UFGSchematic::GetDependentOnSchematic(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemIcon) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UFGSchematic::GetItemIcon(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeToComplete) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGSchematic::GetTimeToComplete(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTechTier) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGSchematic::GetTechTier(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnlocks) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFGUnlock*>*)Z_Param__Result=UFGSchematic::GetUnlocks(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCost) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=UFGSchematic::GetCost(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubCategories) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematicCategory> ,Z_Param_Out_out_subCategories); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSchematic::GetSubCategories(Z_Param_inClass,Z_Param_Out_out_subCategories); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSchematicCategory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGSchematicCategory> *)Z_Param__Result=UFGSchematic::GetSchematicCategory(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSchematicDisplayName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGSchematic::GetSchematicDisplayName(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetType) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESchematicType*)Z_Param__Result=UFGSchematic::GetType(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsIncludedInBuild) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSchematic::IsIncludedInBuild(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRepeatPurchasesAllowed) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSchematic::IsRepeatPurchasesAllowed(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdditionalSchematicDependencies) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGSchematic> >*)Z_Param__Result=UFGSchematic::GetAdditionalSchematicDependencies(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDependentOnSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGSchematic> *)Z_Param__Result=UFGSchematic::GetDependentOnSchematic(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemIcon) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UFGSchematic::GetItemIcon(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeToComplete) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGSchematic::GetTimeToComplete(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTechTier) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGSchematic::GetTechTier(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnlocks) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UFGUnlock*>*)Z_Param__Result=UFGSchematic::GetUnlocks(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCost) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=UFGSchematic::GetCost(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubCategories) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_TARRAY_REF(TSubclassOf<UFGSchematicCategory> ,Z_Param_Out_out_subCategories); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSchematic::GetSubCategories(Z_Param_inClass,Z_Param_Out_out_subCategories); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSchematicCategory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGSchematicCategory> *)Z_Param__Result=UFGSchematic::GetSchematicCategory(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSchematicDisplayName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGSchematic::GetSchematicDisplayName(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetType) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESchematicType*)Z_Param__Result=UFGSchematic::GetType(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#if WITH_EDITOR
#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSchematic::AddRecipe(Z_Param_inClass,Z_Param_recipe); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSchematic::AddRecipe(Z_Param_inClass,Z_Param_recipe); \
		P_NATIVE_END; \
	}


#else
#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_EDITOR_ONLY_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFGSchematic, NO_API)


#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGSchematic(); \
	friend struct Z_Construct_UClass_UFGSchematic_Statics; \
public: \
	DECLARE_CLASS(UFGSchematic, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSchematic) \
	FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUFGSchematic(); \
	friend struct Z_Construct_UClass_UFGSchematic_Statics; \
public: \
	DECLARE_CLASS(UFGSchematic, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSchematic) \
	FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSchematic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSchematic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSchematic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSchematic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSchematic(UFGSchematic&&); \
	NO_API UFGSchematic(const UFGSchematic&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSchematic(UFGSchematic&&); \
	NO_API UFGSchematic(const UFGSchematic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSchematic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSchematic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGSchematic)


#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mType() { return STRUCT_OFFSET(UFGSchematic, mType); } \
	FORCEINLINE static uint32 __PPO__mDisplayName() { return STRUCT_OFFSET(UFGSchematic, mDisplayName); } \
	FORCEINLINE static uint32 __PPO__mSchematicCategory() { return STRUCT_OFFSET(UFGSchematic, mSchematicCategory); } \
	FORCEINLINE static uint32 __PPO__mSubCategories() { return STRUCT_OFFSET(UFGSchematic, mSubCategories); } \
	FORCEINLINE static uint32 __PPO__mTechTier() { return STRUCT_OFFSET(UFGSchematic, mTechTier); } \
	FORCEINLINE static uint32 __PPO__mCost() { return STRUCT_OFFSET(UFGSchematic, mCost); } \
	FORCEINLINE static uint32 __PPO__mTimeToComplete() { return STRUCT_OFFSET(UFGSchematic, mTimeToComplete); } \
	FORCEINLINE static uint32 __PPO__mUnlocks() { return STRUCT_OFFSET(UFGSchematic, mUnlocks); } \
	FORCEINLINE static uint32 __PPO__mSchematicIcon() { return STRUCT_OFFSET(UFGSchematic, mSchematicIcon); } \
	FORCEINLINE static uint32 __PPO__mDependsOnSchematic() { return STRUCT_OFFSET(UFGSchematic, mDependsOnSchematic); } \
	FORCEINLINE static uint32 __PPO__mAdditionalSchematicDependencies() { return STRUCT_OFFSET(UFGSchematic, mAdditionalSchematicDependencies); } \
	FORCEINLINE static uint32 __PPO__mSchematicCategoryDeprecated() { return STRUCT_OFFSET(UFGSchematic, mSchematicCategoryDeprecated); } \
	FORCEINLINE static uint32 __PPO__mAssetBundleData() { return STRUCT_OFFSET(UFGSchematic, mAssetBundleData); }


#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_57_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_EDITOR_ONLY_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSchematic_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGSchematic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGSchematic_h


#define FOREACH_ENUM_ESCHEMATICTYPE(op) \
	op(ESchematicType::EST_Custom) \
	op(ESchematicType::EST_Cheat) \
	op(ESchematicType::EST_Tutorial) \
	op(ESchematicType::EST_Milestone) \
	op(ESchematicType::EST_Alternate) \
	op(ESchematicType::EST_Story) \
	op(ESchematicType::EST_MAM) \
	op(ESchematicType::EST_ResourceSink) \
	op(ESchematicType::EST_HardDrive) 

enum class ESchematicType : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<ESchematicType>();

#define FOREACH_ENUM_ESCHEMATICCATEGORY(op) \
	op(ESchematicCategory::ESC_LOGISTICS) \
	op(ESchematicCategory::ESC_PRODUCTION) \
	op(ESchematicCategory::ESC_EQUIPMENT) \
	op(ESchematicCategory::ESC_ORGANISATION) 

enum class ESchematicCategory : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<ESchematicCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
