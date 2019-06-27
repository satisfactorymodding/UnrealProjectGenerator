// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGConstructDisqualifier;
#ifdef FACTORYGAME_FGConstructDisqualifier_generated_h
#error "FGConstructDisqualifier.generated.h already included, missing '#pragma once' in FGConstructDisqualifier.h"
#endif
#define FACTORYGAME_FGConstructDisqualifier_generated_h

#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDisqualifyingText) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGConstructDisqualifier::GetDisqualifyingText(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDisqualifyingText) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGConstructDisqualifier::GetDisqualifyingText(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGConstructDisqualifier(); \
	friend struct Z_Construct_UClass_UFGConstructDisqualifier_Statics; \
public: \
	DECLARE_CLASS(UFGConstructDisqualifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGConstructDisqualifier)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGConstructDisqualifier(); \
	friend struct Z_Construct_UClass_UFGConstructDisqualifier_Statics; \
public: \
	DECLARE_CLASS(UFGConstructDisqualifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGConstructDisqualifier)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGConstructDisqualifier(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGConstructDisqualifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGConstructDisqualifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGConstructDisqualifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGConstructDisqualifier(UFGConstructDisqualifier&&); \
	NO_API UFGConstructDisqualifier(const UFGConstructDisqualifier&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGConstructDisqualifier(UFGConstructDisqualifier&&); \
	NO_API UFGConstructDisqualifier(const UFGConstructDisqualifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGConstructDisqualifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGConstructDisqualifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGConstructDisqualifier)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDisqfualifyingText() { return STRUCT_OFFSET(UFGConstructDisqualifier, mDisqfualifyingText); }


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDInitializing(); \
	friend struct Z_Construct_UClass_UFGCDInitializing_Statics; \
public: \
	DECLARE_CLASS(UFGCDInitializing, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInitializing)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDInitializing(); \
	friend struct Z_Construct_UClass_UFGCDInitializing_Statics; \
public: \
	DECLARE_CLASS(UFGCDInitializing, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInitializing)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDInitializing(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDInitializing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInitializing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInitializing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInitializing(UFGCDInitializing&&); \
	NO_API UFGCDInitializing(const UFGCDInitializing&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInitializing(UFGCDInitializing&&); \
	NO_API UFGCDInitializing(const UFGCDInitializing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInitializing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInitializing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDInitializing)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_35_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDInvalidAimLocation(); \
	friend struct Z_Construct_UClass_UFGCDInvalidAimLocation_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidAimLocation, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidAimLocation)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDInvalidAimLocation(); \
	friend struct Z_Construct_UClass_UFGCDInvalidAimLocation_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidAimLocation, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidAimLocation)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDInvalidAimLocation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDInvalidAimLocation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInvalidAimLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInvalidAimLocation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInvalidAimLocation(UFGCDInvalidAimLocation&&); \
	NO_API UFGCDInvalidAimLocation(const UFGCDInvalidAimLocation&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInvalidAimLocation(UFGCDInvalidAimLocation&&); \
	NO_API UFGCDInvalidAimLocation(const UFGCDInvalidAimLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInvalidAimLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInvalidAimLocation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDInvalidAimLocation)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_46_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDUnaffordable(); \
	friend struct Z_Construct_UClass_UFGCDUnaffordable_Statics; \
public: \
	DECLARE_CLASS(UFGCDUnaffordable, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDUnaffordable)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDUnaffordable(); \
	friend struct Z_Construct_UClass_UFGCDUnaffordable_Statics; \
public: \
	DECLARE_CLASS(UFGCDUnaffordable, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDUnaffordable)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDUnaffordable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDUnaffordable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDUnaffordable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDUnaffordable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDUnaffordable(UFGCDUnaffordable&&); \
	NO_API UFGCDUnaffordable(const UFGCDUnaffordable&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDUnaffordable(UFGCDUnaffordable&&); \
	NO_API UFGCDUnaffordable(const UFGCDUnaffordable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDUnaffordable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDUnaffordable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDUnaffordable)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_57_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDInvalidPlacement(); \
	friend struct Z_Construct_UClass_UFGCDInvalidPlacement_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidPlacement, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidPlacement)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDInvalidPlacement(); \
	friend struct Z_Construct_UClass_UFGCDInvalidPlacement_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidPlacement, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidPlacement)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDInvalidPlacement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDInvalidPlacement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInvalidPlacement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInvalidPlacement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInvalidPlacement(UFGCDInvalidPlacement&&); \
	NO_API UFGCDInvalidPlacement(const UFGCDInvalidPlacement&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInvalidPlacement(UFGCDInvalidPlacement&&); \
	NO_API UFGCDInvalidPlacement(const UFGCDInvalidPlacement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInvalidPlacement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInvalidPlacement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDInvalidPlacement)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_69_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDEncroachingClearance(); \
	friend struct Z_Construct_UClass_UFGCDEncroachingClearance_Statics; \
public: \
	DECLARE_CLASS(UFGCDEncroachingClearance, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDEncroachingClearance)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDEncroachingClearance(); \
	friend struct Z_Construct_UClass_UFGCDEncroachingClearance_Statics; \
public: \
	DECLARE_CLASS(UFGCDEncroachingClearance, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDEncroachingClearance)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDEncroachingClearance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDEncroachingClearance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDEncroachingClearance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDEncroachingClearance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDEncroachingClearance(UFGCDEncroachingClearance&&); \
	NO_API UFGCDEncroachingClearance(const UFGCDEncroachingClearance&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDEncroachingClearance(UFGCDEncroachingClearance&&); \
	NO_API UFGCDEncroachingClearance(const UFGCDEncroachingClearance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDEncroachingClearance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDEncroachingClearance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDEncroachingClearance)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_80_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDEncroachingPlayer(); \
	friend struct Z_Construct_UClass_UFGCDEncroachingPlayer_Statics; \
public: \
	DECLARE_CLASS(UFGCDEncroachingPlayer, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDEncroachingPlayer)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDEncroachingPlayer(); \
	friend struct Z_Construct_UClass_UFGCDEncroachingPlayer_Statics; \
public: \
	DECLARE_CLASS(UFGCDEncroachingPlayer, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDEncroachingPlayer)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDEncroachingPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDEncroachingPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDEncroachingPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDEncroachingPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDEncroachingPlayer(UFGCDEncroachingPlayer&&); \
	NO_API UFGCDEncroachingPlayer(const UFGCDEncroachingPlayer&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDEncroachingPlayer(UFGCDEncroachingPlayer&&); \
	NO_API UFGCDEncroachingPlayer(const UFGCDEncroachingPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDEncroachingPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDEncroachingPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDEncroachingPlayer)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_91_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDInvalidFloor(); \
	friend struct Z_Construct_UClass_UFGCDInvalidFloor_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidFloor, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidFloor)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDInvalidFloor(); \
	friend struct Z_Construct_UClass_UFGCDInvalidFloor_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidFloor, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidFloor)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDInvalidFloor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDInvalidFloor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInvalidFloor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInvalidFloor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInvalidFloor(UFGCDInvalidFloor&&); \
	NO_API UFGCDInvalidFloor(const UFGCDInvalidFloor&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInvalidFloor(UFGCDInvalidFloor&&); \
	NO_API UFGCDInvalidFloor(const UFGCDInvalidFloor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInvalidFloor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInvalidFloor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDInvalidFloor)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_102_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDUniqueBuilding(); \
	friend struct Z_Construct_UClass_UFGCDUniqueBuilding_Statics; \
public: \
	DECLARE_CLASS(UFGCDUniqueBuilding, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDUniqueBuilding)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDUniqueBuilding(); \
	friend struct Z_Construct_UClass_UFGCDUniqueBuilding_Statics; \
public: \
	DECLARE_CLASS(UFGCDUniqueBuilding, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDUniqueBuilding)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDUniqueBuilding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDUniqueBuilding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDUniqueBuilding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDUniqueBuilding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDUniqueBuilding(UFGCDUniqueBuilding&&); \
	NO_API UFGCDUniqueBuilding(const UFGCDUniqueBuilding&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDUniqueBuilding(UFGCDUniqueBuilding&&); \
	NO_API UFGCDUniqueBuilding(const UFGCDUniqueBuilding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDUniqueBuilding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDUniqueBuilding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDUniqueBuilding)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_113_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustSnap)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustSnap)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDMustSnap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDMustSnap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDMustSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDMustSnap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDMustSnap(UFGCDMustSnap&&); \
	NO_API UFGCDMustSnap(const UFGCDMustSnap&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDMustSnap(UFGCDMustSnap&&); \
	NO_API UFGCDMustSnap(const UFGCDMustSnap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDMustSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDMustSnap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDMustSnap)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_124_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDShouldntSnap(); \
	friend struct Z_Construct_UClass_UFGCDShouldntSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDShouldntSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDShouldntSnap)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDShouldntSnap(); \
	friend struct Z_Construct_UClass_UFGCDShouldntSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDShouldntSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDShouldntSnap)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDShouldntSnap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDShouldntSnap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDShouldntSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDShouldntSnap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDShouldntSnap(UFGCDShouldntSnap&&); \
	NO_API UFGCDShouldntSnap(const UFGCDShouldntSnap&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDShouldntSnap(UFGCDShouldntSnap&&); \
	NO_API UFGCDShouldntSnap(const UFGCDShouldntSnap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDShouldntSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDShouldntSnap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDShouldntSnap)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_135_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDNeedsResourceNode(); \
	friend struct Z_Construct_UClass_UFGCDNeedsResourceNode_Statics; \
public: \
	DECLARE_CLASS(UFGCDNeedsResourceNode, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDNeedsResourceNode)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDNeedsResourceNode(); \
	friend struct Z_Construct_UClass_UFGCDNeedsResourceNode_Statics; \
public: \
	DECLARE_CLASS(UFGCDNeedsResourceNode, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDNeedsResourceNode)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDNeedsResourceNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDNeedsResourceNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDNeedsResourceNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDNeedsResourceNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDNeedsResourceNode(UFGCDNeedsResourceNode&&); \
	NO_API UFGCDNeedsResourceNode(const UFGCDNeedsResourceNode&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDNeedsResourceNode(UFGCDNeedsResourceNode&&); \
	NO_API UFGCDNeedsResourceNode(const UFGCDNeedsResourceNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDNeedsResourceNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDNeedsResourceNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDNeedsResourceNode)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_146_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDResourceNodeIsOccuped(); \
	friend struct Z_Construct_UClass_UFGCDResourceNodeIsOccuped_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceNodeIsOccuped, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceNodeIsOccuped)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDResourceNodeIsOccuped(); \
	friend struct Z_Construct_UClass_UFGCDResourceNodeIsOccuped_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceNodeIsOccuped, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceNodeIsOccuped)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDResourceNodeIsOccuped(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDResourceNodeIsOccuped) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDResourceNodeIsOccuped); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDResourceNodeIsOccuped); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDResourceNodeIsOccuped(UFGCDResourceNodeIsOccuped&&); \
	NO_API UFGCDResourceNodeIsOccuped(const UFGCDResourceNodeIsOccuped&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDResourceNodeIsOccuped(UFGCDResourceNodeIsOccuped&&); \
	NO_API UFGCDResourceNodeIsOccuped(const UFGCDResourceNodeIsOccuped&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDResourceNodeIsOccuped); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDResourceNodeIsOccuped); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDResourceNodeIsOccuped)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_157_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_160_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDResourceDeposit(); \
	friend struct Z_Construct_UClass_UFGCDResourceDeposit_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceDeposit, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceDeposit)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDResourceDeposit(); \
	friend struct Z_Construct_UClass_UFGCDResourceDeposit_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceDeposit, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceDeposit)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDResourceDeposit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDResourceDeposit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDResourceDeposit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDResourceDeposit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDResourceDeposit(UFGCDResourceDeposit&&); \
	NO_API UFGCDResourceDeposit(const UFGCDResourceDeposit&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDResourceDeposit(UFGCDResourceDeposit&&); \
	NO_API UFGCDResourceDeposit(const UFGCDResourceDeposit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDResourceDeposit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDResourceDeposit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDResourceDeposit)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_168_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_171_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDWireSnap(); \
	friend struct Z_Construct_UClass_UFGCDWireSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireSnap)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDWireSnap(); \
	friend struct Z_Construct_UClass_UFGCDWireSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireSnap)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDWireSnap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDWireSnap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDWireSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDWireSnap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDWireSnap(UFGCDWireSnap&&); \
	NO_API UFGCDWireSnap(const UFGCDWireSnap&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDWireSnap(UFGCDWireSnap&&); \
	NO_API UFGCDWireSnap(const UFGCDWireSnap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDWireSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDWireSnap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDWireSnap)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_179_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDWireTooLong(); \
	friend struct Z_Construct_UClass_UFGCDWireTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireTooLong)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDWireTooLong(); \
	friend struct Z_Construct_UClass_UFGCDWireTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireTooLong)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDWireTooLong(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDWireTooLong) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDWireTooLong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDWireTooLong); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDWireTooLong(UFGCDWireTooLong&&); \
	NO_API UFGCDWireTooLong(const UFGCDWireTooLong&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDWireTooLong(UFGCDWireTooLong&&); \
	NO_API UFGCDWireTooLong(const UFGCDWireTooLong&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDWireTooLong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDWireTooLong); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDWireTooLong)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_190_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_193_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDWireTooManyConnections(); \
	friend struct Z_Construct_UClass_UFGCDWireTooManyConnections_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireTooManyConnections, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireTooManyConnections)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDWireTooManyConnections(); \
	friend struct Z_Construct_UClass_UFGCDWireTooManyConnections_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireTooManyConnections, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireTooManyConnections)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDWireTooManyConnections(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDWireTooManyConnections) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDWireTooManyConnections); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDWireTooManyConnections); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDWireTooManyConnections(UFGCDWireTooManyConnections&&); \
	NO_API UFGCDWireTooManyConnections(const UFGCDWireTooManyConnections&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDWireTooManyConnections(UFGCDWireTooManyConnections&&); \
	NO_API UFGCDWireTooManyConnections(const UFGCDWireTooManyConnections&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDWireTooManyConnections); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDWireTooManyConnections); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDWireTooManyConnections)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_201_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_204_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDBeltMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDBeltMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDBeltMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDBeltMustSnap)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDBeltMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDBeltMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDBeltMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDBeltMustSnap)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDBeltMustSnap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDBeltMustSnap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDBeltMustSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDBeltMustSnap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDBeltMustSnap(UFGCDBeltMustSnap&&); \
	NO_API UFGCDBeltMustSnap(const UFGCDBeltMustSnap&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDBeltMustSnap(UFGCDBeltMustSnap&&); \
	NO_API UFGCDBeltMustSnap(const UFGCDBeltMustSnap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDBeltMustSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDBeltMustSnap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDBeltMustSnap)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_212_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_215_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooLong(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooLong)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooLong(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooLong)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDConveyorTooLong(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDConveyorTooLong) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorTooLong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorTooLong); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorTooLong(UFGCDConveyorTooLong&&); \
	NO_API UFGCDConveyorTooLong(const UFGCDConveyorTooLong&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorTooLong(UFGCDConveyorTooLong&&); \
	NO_API UFGCDConveyorTooLong(const UFGCDConveyorTooLong&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorTooLong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorTooLong); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorTooLong)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_223_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_226_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooShort(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooShort_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooShort, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooShort)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooShort(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooShort_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooShort, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooShort)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDConveyorTooShort(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDConveyorTooShort) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorTooShort); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorTooShort); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorTooShort(UFGCDConveyorTooShort&&); \
	NO_API UFGCDConveyorTooShort(const UFGCDConveyorTooShort&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorTooShort(UFGCDConveyorTooShort&&); \
	NO_API UFGCDConveyorTooShort(const UFGCDConveyorTooShort&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorTooShort); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorTooShort); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorTooShort)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_234_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_237_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooSteep(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooSteep_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooSteep, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooSteep)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooSteep(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooSteep_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooSteep, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooSteep)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDConveyorTooSteep(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDConveyorTooSteep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorTooSteep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorTooSteep); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorTooSteep(UFGCDConveyorTooSteep&&); \
	NO_API UFGCDConveyorTooSteep(const UFGCDConveyorTooSteep&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorTooSteep(UFGCDConveyorTooSteep&&); \
	NO_API UFGCDConveyorTooSteep(const UFGCDConveyorTooSteep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorTooSteep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorTooSteep); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorTooSteep)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_245_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_248_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorInvalidShape(); \
	friend struct Z_Construct_UClass_UFGCDConveyorInvalidShape_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorInvalidShape, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorInvalidShape)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorInvalidShape(); \
	friend struct Z_Construct_UClass_UFGCDConveyorInvalidShape_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorInvalidShape, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorInvalidShape)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDConveyorInvalidShape(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDConveyorInvalidShape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorInvalidShape); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorInvalidShape); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorInvalidShape(UFGCDConveyorInvalidShape&&); \
	NO_API UFGCDConveyorInvalidShape(const UFGCDConveyorInvalidShape&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorInvalidShape(UFGCDConveyorInvalidShape&&); \
	NO_API UFGCDConveyorInvalidShape(const UFGCDConveyorInvalidShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorInvalidShape); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorInvalidShape); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorInvalidShape)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_256_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_259_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorAttachmentTooSharpTurn(); \
	friend struct Z_Construct_UClass_UFGCDConveyorAttachmentTooSharpTurn_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorAttachmentTooSharpTurn, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorAttachmentTooSharpTurn)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorAttachmentTooSharpTurn(); \
	friend struct Z_Construct_UClass_UFGCDConveyorAttachmentTooSharpTurn_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorAttachmentTooSharpTurn, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorAttachmentTooSharpTurn)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDConveyorAttachmentTooSharpTurn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDConveyorAttachmentTooSharpTurn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorAttachmentTooSharpTurn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorAttachmentTooSharpTurn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorAttachmentTooSharpTurn(UFGCDConveyorAttachmentTooSharpTurn&&); \
	NO_API UFGCDConveyorAttachmentTooSharpTurn(const UFGCDConveyorAttachmentTooSharpTurn&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorAttachmentTooSharpTurn(UFGCDConveyorAttachmentTooSharpTurn&&); \
	NO_API UFGCDConveyorAttachmentTooSharpTurn(const UFGCDConveyorAttachmentTooSharpTurn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorAttachmentTooSharpTurn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorAttachmentTooSharpTurn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorAttachmentTooSharpTurn)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_267_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_270_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDMustHaveRailRoadTrack(); \
	friend struct Z_Construct_UClass_UFGCDMustHaveRailRoadTrack_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustHaveRailRoadTrack, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustHaveRailRoadTrack)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDMustHaveRailRoadTrack(); \
	friend struct Z_Construct_UClass_UFGCDMustHaveRailRoadTrack_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustHaveRailRoadTrack, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustHaveRailRoadTrack)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDMustHaveRailRoadTrack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDMustHaveRailRoadTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDMustHaveRailRoadTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDMustHaveRailRoadTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDMustHaveRailRoadTrack(UFGCDMustHaveRailRoadTrack&&); \
	NO_API UFGCDMustHaveRailRoadTrack(const UFGCDMustHaveRailRoadTrack&); \
public:


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDMustHaveRailRoadTrack(UFGCDMustHaveRailRoadTrack&&); \
	NO_API UFGCDMustHaveRailRoadTrack(const UFGCDMustHaveRailRoadTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDMustHaveRailRoadTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDMustHaveRailRoadTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDMustHaveRailRoadTrack)


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_278_PROLOG
#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_INCLASS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h_281_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGConstructDisqualifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
