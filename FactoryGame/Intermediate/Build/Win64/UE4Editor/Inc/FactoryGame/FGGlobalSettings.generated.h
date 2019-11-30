// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGSignSettings;
class UFGSubsystemClasses;
class UFGEnvironmentSettings;
class UFGHardDriveSettings;
class UFGDropPodSettings;
class UFGFactorySettings;
class UFGResourceSettings;
class UFGGlobalSettings;
#ifdef FACTORYGAME_FGGlobalSettings_generated_h
#error "FGGlobalSettings.generated.h already included, missing '#pragma once' in FGGlobalSettings.h"
#endif
#define FACTORYGAME_FGGlobalSettings_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSignSettingsCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGSignSettings**)Z_Param__Result=UFGGlobalSettings::GetSignSettingsCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubsystemClassesCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGSubsystemClasses**)Z_Param__Result=UFGGlobalSettings::GetSubsystemClassesCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnvironmentSettingsCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGEnvironmentSettings**)Z_Param__Result=UFGGlobalSettings::GetEnvironmentSettingsCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHardDriveSettingsCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGHardDriveSettings**)Z_Param__Result=UFGGlobalSettings::GetHardDriveSettingsCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDropPodSettingsCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGDropPodSettings**)Z_Param__Result=UFGGlobalSettings::GetDropPodSettingsCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFactorySettingsCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGFactorySettings**)Z_Param__Result=UFGGlobalSettings::GetFactorySettingsCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceSettingsCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGResourceSettings**)Z_Param__Result=UFGGlobalSettings::GetResourceSettingsCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalSettingsClassCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGGlobalSettings**)Z_Param__Result=UFGGlobalSettings::GetGlobalSettingsClassCDO(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSignSettingsCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGSignSettings**)Z_Param__Result=UFGGlobalSettings::GetSignSettingsCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubsystemClassesCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGSubsystemClasses**)Z_Param__Result=UFGGlobalSettings::GetSubsystemClassesCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnvironmentSettingsCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGEnvironmentSettings**)Z_Param__Result=UFGGlobalSettings::GetEnvironmentSettingsCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHardDriveSettingsCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGHardDriveSettings**)Z_Param__Result=UFGGlobalSettings::GetHardDriveSettingsCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDropPodSettingsCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGDropPodSettings**)Z_Param__Result=UFGGlobalSettings::GetDropPodSettingsCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFactorySettingsCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGFactorySettings**)Z_Param__Result=UFGGlobalSettings::GetFactorySettingsCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceSettingsCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGResourceSettings**)Z_Param__Result=UFGGlobalSettings::GetResourceSettingsCDO(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGlobalSettingsClassCDO) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGGlobalSettings**)Z_Param__Result=UFGGlobalSettings::GetGlobalSettingsClassCDO(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGGlobalSettings(); \
	friend struct Z_Construct_UClass_UFGGlobalSettings_Statics; \
public: \
	DECLARE_CLASS(UFGGlobalSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGlobalSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGGlobalSettings(); \
	friend struct Z_Construct_UClass_UFGGlobalSettings_Statics; \
public: \
	DECLARE_CLASS(UFGGlobalSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGlobalSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGGlobalSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGlobalSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGlobalSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGlobalSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGlobalSettings(UFGGlobalSettings&&); \
	NO_API UFGGlobalSettings(const UFGGlobalSettings&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGGlobalSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGlobalSettings(UFGGlobalSettings&&); \
	NO_API UFGGlobalSettings(const UFGGlobalSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGlobalSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGlobalSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGlobalSettings)


#define FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mResourceSettings() { return STRUCT_OFFSET(UFGGlobalSettings, mResourceSettings); } \
	FORCEINLINE static uint32 __PPO__mFactorySettings() { return STRUCT_OFFSET(UFGGlobalSettings, mFactorySettings); } \
	FORCEINLINE static uint32 __PPO__mDropPodSettings() { return STRUCT_OFFSET(UFGGlobalSettings, mDropPodSettings); } \
	FORCEINLINE static uint32 __PPO__mHardDriveSettings() { return STRUCT_OFFSET(UFGGlobalSettings, mHardDriveSettings); } \
	FORCEINLINE static uint32 __PPO__mEnvironmentSettings() { return STRUCT_OFFSET(UFGGlobalSettings, mEnvironmentSettings); } \
	FORCEINLINE static uint32 __PPO__mSubsystemClasses() { return STRUCT_OFFSET(UFGGlobalSettings, mSubsystemClasses); } \
	FORCEINLINE static uint32 __PPO__mSignSettings() { return STRUCT_OFFSET(UFGGlobalSettings, mSignSettings); } \
	FORCEINLINE static uint32 __PPO__mGlobalSettingsClassName() { return STRUCT_OFFSET(UFGGlobalSettings, mGlobalSettingsClassName); }


#define FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGGlobalSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
