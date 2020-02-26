// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGSchematic;
struct FItemAmount;
class UWorld;
#ifdef FACTORYGAME_FGHardDriveSettings_generated_h
#error "FGHardDriveSettings.generated.h already included, missing '#pragma once' in FGHardDriveSettings.h"
#endif
#define FACTORYGAME_FGHardDriveSettings_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHardDriveResearchSchematic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGSchematic> *)Z_Param__Result=UFGHardDriveSettings::GetHardDriveResearchSchematic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFallbackReturnItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FItemAmount*)Z_Param__Result=P_THIS->GetFallbackReturnItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchRewardPackages) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_world); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGSchematic> >*)Z_Param__Result=UFGHardDriveSettings::GetResearchRewardPackages(Z_Param_world); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHardDriveResearchSchematic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGSchematic> *)Z_Param__Result=UFGHardDriveSettings::GetHardDriveResearchSchematic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFallbackReturnItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FItemAmount*)Z_Param__Result=P_THIS->GetFallbackReturnItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResearchRewardPackages) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_world); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UFGSchematic> >*)Z_Param__Result=UFGHardDriveSettings::GetResearchRewardPackages(Z_Param_world); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGHardDriveSettings(); \
	friend struct Z_Construct_UClass_UFGHardDriveSettings_Statics; \
public: \
	DECLARE_CLASS(UFGHardDriveSettings, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGHardDriveSettings)


#define FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFGHardDriveSettings(); \
	friend struct Z_Construct_UClass_UFGHardDriveSettings_Statics; \
public: \
	DECLARE_CLASS(UFGHardDriveSettings, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGHardDriveSettings)


#define FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGHardDriveSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGHardDriveSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGHardDriveSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGHardDriveSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGHardDriveSettings(UFGHardDriveSettings&&); \
	NO_API UFGHardDriveSettings(const UFGHardDriveSettings&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGHardDriveSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGHardDriveSettings(UFGHardDriveSettings&&); \
	NO_API UFGHardDriveSettings(const UFGHardDriveSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGHardDriveSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGHardDriveSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGHardDriveSettings)


#define FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mUniqueItemCount() { return STRUCT_OFFSET(UFGHardDriveSettings, mUniqueItemCount); } \
	FORCEINLINE static uint32 __PPO__mFallbackReturnItem() { return STRUCT_OFFSET(UFGHardDriveSettings, mFallbackReturnItem); } \
	FORCEINLINE static uint32 __PPO__mHardDriveResearchSchematic() { return STRUCT_OFFSET(UFGHardDriveSettings, mHardDriveResearchSchematic); }


#define FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_17_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGHardDriveSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGHardDriveSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
