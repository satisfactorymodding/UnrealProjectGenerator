// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStackSize : uint8;
class UFGResourceDescriptor;
class AActor;
struct FResourceDepositPackage;
#ifdef FACTORYGAME_FGResourceSettings_generated_h
#error "FGResourceSettings.generated.h already included, missing '#pragma once' in FGResourceSettings.h"
#endif
#define FACTORYGAME_FGResourceSettings_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FResourceDepositPackage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FResourceDepositPackage>();

#define FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FItemSettings>();

#define FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStackSizeFromEnum) \
	{ \
		P_GET_ENUM(EStackSize,Z_Param_stackSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStackSizeFromEnum(EStackSize(Z_Param_stackSize)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceDepositDataFromClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_desiredResourceClass); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_resourceDepositPackageIdx); \
		P_GET_OBJECT(AActor,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FResourceDepositPackage*)Z_Param__Result=UFGResourceSettings::GetResourceDepositDataFromClass(Z_Param_desiredResourceClass,Z_Param_Out_out_resourceDepositPackageIdx,Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomResourceDepositData) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_resourceDepositPackageIdx); \
		P_GET_OBJECT(AActor,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FResourceDepositPackage*)Z_Param__Result=UFGResourceSettings::GetRandomResourceDepositData(Z_Param_Out_out_resourceDepositPackageIdx,Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStackSizeFromEnum) \
	{ \
		P_GET_ENUM(EStackSize,Z_Param_stackSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStackSizeFromEnum(EStackSize(Z_Param_stackSize)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceDepositDataFromClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_desiredResourceClass); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_resourceDepositPackageIdx); \
		P_GET_OBJECT(AActor,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FResourceDepositPackage*)Z_Param__Result=UFGResourceSettings::GetResourceDepositDataFromClass(Z_Param_desiredResourceClass,Z_Param_Out_out_resourceDepositPackageIdx,Z_Param_worldContext); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomResourceDepositData) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_resourceDepositPackageIdx); \
		P_GET_OBJECT(AActor,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FResourceDepositPackage*)Z_Param__Result=UFGResourceSettings::GetRandomResourceDepositData(Z_Param_Out_out_resourceDepositPackageIdx,Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGResourceSettings(); \
	friend struct Z_Construct_UClass_UFGResourceSettings_Statics; \
public: \
	DECLARE_CLASS(UFGResourceSettings, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGResourceSettings)


#define FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUFGResourceSettings(); \
	friend struct Z_Construct_UClass_UFGResourceSettings_Statics; \
public: \
	DECLARE_CLASS(UFGResourceSettings, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGResourceSettings)


#define FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGResourceSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGResourceSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGResourceSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGResourceSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGResourceSettings(UFGResourceSettings&&); \
	NO_API UFGResourceSettings(const UFGResourceSettings&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGResourceSettings(UFGResourceSettings&&); \
	NO_API UFGResourceSettings(const UFGResourceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGResourceSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGResourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGResourceSettings)


#define FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_77_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGResourceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGResourceSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
