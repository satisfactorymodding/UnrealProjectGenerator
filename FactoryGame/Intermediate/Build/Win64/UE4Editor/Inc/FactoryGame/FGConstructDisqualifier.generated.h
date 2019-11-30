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

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDisqualifyingText) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGConstructDisqualifier::GetDisqualifyingText(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDisqualifyingText) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGConstructDisqualifier::GetDisqualifyingText(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGConstructDisqualifier(); \
	friend struct Z_Construct_UClass_UFGConstructDisqualifier_Statics; \
public: \
	DECLARE_CLASS(UFGConstructDisqualifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGConstructDisqualifier)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFGConstructDisqualifier(); \
	friend struct Z_Construct_UClass_UFGConstructDisqualifier_Statics; \
public: \
	DECLARE_CLASS(UFGConstructDisqualifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGConstructDisqualifier)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGConstructDisqualifier(UFGConstructDisqualifier&&); \
	NO_API UFGConstructDisqualifier(const UFGConstructDisqualifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGConstructDisqualifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGConstructDisqualifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGConstructDisqualifier)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDisqfualifyingText() { return STRUCT_OFFSET(UFGConstructDisqualifier, mDisqfualifyingText); }


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_15_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDInitializing(); \
	friend struct Z_Construct_UClass_UFGCDInitializing_Statics; \
public: \
	DECLARE_CLASS(UFGCDInitializing, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInitializing)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDInitializing(); \
	friend struct Z_Construct_UClass_UFGCDInitializing_Statics; \
public: \
	DECLARE_CLASS(UFGCDInitializing, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInitializing)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInitializing(UFGCDInitializing&&); \
	NO_API UFGCDInitializing(const UFGCDInitializing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInitializing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInitializing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDInitializing)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_37_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDInvalidAimLocation(); \
	friend struct Z_Construct_UClass_UFGCDInvalidAimLocation_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidAimLocation, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidAimLocation)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDInvalidAimLocation(); \
	friend struct Z_Construct_UClass_UFGCDInvalidAimLocation_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidAimLocation, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidAimLocation)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInvalidAimLocation(UFGCDInvalidAimLocation&&); \
	NO_API UFGCDInvalidAimLocation(const UFGCDInvalidAimLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInvalidAimLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInvalidAimLocation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDInvalidAimLocation)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_48_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDUnaffordable(); \
	friend struct Z_Construct_UClass_UFGCDUnaffordable_Statics; \
public: \
	DECLARE_CLASS(UFGCDUnaffordable, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDUnaffordable)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDUnaffordable(); \
	friend struct Z_Construct_UClass_UFGCDUnaffordable_Statics; \
public: \
	DECLARE_CLASS(UFGCDUnaffordable, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDUnaffordable)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDUnaffordable(UFGCDUnaffordable&&); \
	NO_API UFGCDUnaffordable(const UFGCDUnaffordable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDUnaffordable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDUnaffordable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDUnaffordable)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_59_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDInvalidPlacement(); \
	friend struct Z_Construct_UClass_UFGCDInvalidPlacement_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidPlacement, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidPlacement)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDInvalidPlacement(); \
	friend struct Z_Construct_UClass_UFGCDInvalidPlacement_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidPlacement, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidPlacement)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInvalidPlacement(UFGCDInvalidPlacement&&); \
	NO_API UFGCDInvalidPlacement(const UFGCDInvalidPlacement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInvalidPlacement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInvalidPlacement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDInvalidPlacement)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDEncroachingClearance(); \
	friend struct Z_Construct_UClass_UFGCDEncroachingClearance_Statics; \
public: \
	DECLARE_CLASS(UFGCDEncroachingClearance, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDEncroachingClearance)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDEncroachingClearance(); \
	friend struct Z_Construct_UClass_UFGCDEncroachingClearance_Statics; \
public: \
	DECLARE_CLASS(UFGCDEncroachingClearance, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDEncroachingClearance)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDEncroachingClearance(UFGCDEncroachingClearance&&); \
	NO_API UFGCDEncroachingClearance(const UFGCDEncroachingClearance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDEncroachingClearance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDEncroachingClearance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDEncroachingClearance)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_82_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDEncroachingPlayer(); \
	friend struct Z_Construct_UClass_UFGCDEncroachingPlayer_Statics; \
public: \
	DECLARE_CLASS(UFGCDEncroachingPlayer, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDEncroachingPlayer)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDEncroachingPlayer(); \
	friend struct Z_Construct_UClass_UFGCDEncroachingPlayer_Statics; \
public: \
	DECLARE_CLASS(UFGCDEncroachingPlayer, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDEncroachingPlayer)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDEncroachingPlayer(UFGCDEncroachingPlayer&&); \
	NO_API UFGCDEncroachingPlayer(const UFGCDEncroachingPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDEncroachingPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDEncroachingPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDEncroachingPlayer)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_93_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDInvalidFloor(); \
	friend struct Z_Construct_UClass_UFGCDInvalidFloor_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidFloor, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidFloor)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDInvalidFloor(); \
	friend struct Z_Construct_UClass_UFGCDInvalidFloor_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidFloor, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidFloor)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInvalidFloor(UFGCDInvalidFloor&&); \
	NO_API UFGCDInvalidFloor(const UFGCDInvalidFloor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInvalidFloor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInvalidFloor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDInvalidFloor)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_104_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDUniqueBuilding(); \
	friend struct Z_Construct_UClass_UFGCDUniqueBuilding_Statics; \
public: \
	DECLARE_CLASS(UFGCDUniqueBuilding, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDUniqueBuilding)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDUniqueBuilding(); \
	friend struct Z_Construct_UClass_UFGCDUniqueBuilding_Statics; \
public: \
	DECLARE_CLASS(UFGCDUniqueBuilding, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDUniqueBuilding)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDUniqueBuilding(UFGCDUniqueBuilding&&); \
	NO_API UFGCDUniqueBuilding(const UFGCDUniqueBuilding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDUniqueBuilding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDUniqueBuilding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDUniqueBuilding)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_115_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDMustSnap(UFGCDMustSnap&&); \
	NO_API UFGCDMustSnap(const UFGCDMustSnap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDMustSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDMustSnap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_126_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDShouldntSnap(); \
	friend struct Z_Construct_UClass_UFGCDShouldntSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDShouldntSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDShouldntSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDShouldntSnap(); \
	friend struct Z_Construct_UClass_UFGCDShouldntSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDShouldntSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDShouldntSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDShouldntSnap(UFGCDShouldntSnap&&); \
	NO_API UFGCDShouldntSnap(const UFGCDShouldntSnap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDShouldntSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDShouldntSnap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDShouldntSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_137_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_140_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDNeedsResourceNode(); \
	friend struct Z_Construct_UClass_UFGCDNeedsResourceNode_Statics; \
public: \
	DECLARE_CLASS(UFGCDNeedsResourceNode, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDNeedsResourceNode)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDNeedsResourceNode(); \
	friend struct Z_Construct_UClass_UFGCDNeedsResourceNode_Statics; \
public: \
	DECLARE_CLASS(UFGCDNeedsResourceNode, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDNeedsResourceNode)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDNeedsResourceNode(UFGCDNeedsResourceNode&&); \
	NO_API UFGCDNeedsResourceNode(const UFGCDNeedsResourceNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDNeedsResourceNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDNeedsResourceNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDNeedsResourceNode)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_148_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_151_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDResourceNodeIsOccuped(); \
	friend struct Z_Construct_UClass_UFGCDResourceNodeIsOccuped_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceNodeIsOccuped, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceNodeIsOccuped)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDResourceNodeIsOccuped(); \
	friend struct Z_Construct_UClass_UFGCDResourceNodeIsOccuped_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceNodeIsOccuped, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceNodeIsOccuped)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDResourceNodeIsOccuped(UFGCDResourceNodeIsOccuped&&); \
	NO_API UFGCDResourceNodeIsOccuped(const UFGCDResourceNodeIsOccuped&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDResourceNodeIsOccuped); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDResourceNodeIsOccuped); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDResourceNodeIsOccuped)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_159_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_162_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDResourceDeposit(); \
	friend struct Z_Construct_UClass_UFGCDResourceDeposit_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceDeposit, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceDeposit)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDResourceDeposit(); \
	friend struct Z_Construct_UClass_UFGCDResourceDeposit_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceDeposit, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceDeposit)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDResourceDeposit(UFGCDResourceDeposit&&); \
	NO_API UFGCDResourceDeposit(const UFGCDResourceDeposit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDResourceDeposit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDResourceDeposit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDResourceDeposit)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDWireSnap(); \
	friend struct Z_Construct_UClass_UFGCDWireSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDWireSnap(); \
	friend struct Z_Construct_UClass_UFGCDWireSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDWireSnap(UFGCDWireSnap&&); \
	NO_API UFGCDWireSnap(const UFGCDWireSnap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDWireSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDWireSnap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDWireSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_181_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDWireTooLong(); \
	friend struct Z_Construct_UClass_UFGCDWireTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDWireTooLong(); \
	friend struct Z_Construct_UClass_UFGCDWireTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDWireTooLong(UFGCDWireTooLong&&); \
	NO_API UFGCDWireTooLong(const UFGCDWireTooLong&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDWireTooLong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDWireTooLong); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDWireTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_192_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDWireTooManyConnections(); \
	friend struct Z_Construct_UClass_UFGCDWireTooManyConnections_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireTooManyConnections, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireTooManyConnections)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDWireTooManyConnections(); \
	friend struct Z_Construct_UClass_UFGCDWireTooManyConnections_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireTooManyConnections, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireTooManyConnections)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDWireTooManyConnections(UFGCDWireTooManyConnections&&); \
	NO_API UFGCDWireTooManyConnections(const UFGCDWireTooManyConnections&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDWireTooManyConnections); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDWireTooManyConnections); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDWireTooManyConnections)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_203_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_206_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDBeltMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDBeltMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDBeltMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDBeltMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDBeltMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDBeltMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDBeltMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDBeltMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDBeltMustSnap(UFGCDBeltMustSnap&&); \
	NO_API UFGCDBeltMustSnap(const UFGCDBeltMustSnap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDBeltMustSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDBeltMustSnap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDBeltMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_214_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_217_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooLong(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooLong(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorTooLong(UFGCDConveyorTooLong&&); \
	NO_API UFGCDConveyorTooLong(const UFGCDConveyorTooLong&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorTooLong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorTooLong); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_225_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_228_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooShort(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooShort_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooShort, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooShort(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooShort_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooShort, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorTooShort(UFGCDConveyorTooShort&&); \
	NO_API UFGCDConveyorTooShort(const UFGCDConveyorTooShort&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorTooShort); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorTooShort); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_236_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_239_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooSteep(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooSteep_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooSteep, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooSteep)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooSteep(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooSteep_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooSteep, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooSteep)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorTooSteep(UFGCDConveyorTooSteep&&); \
	NO_API UFGCDConveyorTooSteep(const UFGCDConveyorTooSteep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorTooSteep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorTooSteep); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorTooSteep)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_247_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_250_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorInvalidShape(); \
	friend struct Z_Construct_UClass_UFGCDConveyorInvalidShape_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorInvalidShape, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorInvalidShape)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorInvalidShape(); \
	friend struct Z_Construct_UClass_UFGCDConveyorInvalidShape_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorInvalidShape, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorInvalidShape)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorInvalidShape(UFGCDConveyorInvalidShape&&); \
	NO_API UFGCDConveyorInvalidShape(const UFGCDConveyorInvalidShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorInvalidShape); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorInvalidShape); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorInvalidShape)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_258_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_261_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorAttachmentTooSharpTurn(); \
	friend struct Z_Construct_UClass_UFGCDConveyorAttachmentTooSharpTurn_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorAttachmentTooSharpTurn, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorAttachmentTooSharpTurn)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorAttachmentTooSharpTurn(); \
	friend struct Z_Construct_UClass_UFGCDConveyorAttachmentTooSharpTurn_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorAttachmentTooSharpTurn, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorAttachmentTooSharpTurn)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorAttachmentTooSharpTurn(UFGCDConveyorAttachmentTooSharpTurn&&); \
	NO_API UFGCDConveyorAttachmentTooSharpTurn(const UFGCDConveyorAttachmentTooSharpTurn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorAttachmentTooSharpTurn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorAttachmentTooSharpTurn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorAttachmentTooSharpTurn)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_269_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_272_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDMustHaveRailRoadTrack(); \
	friend struct Z_Construct_UClass_UFGCDMustHaveRailRoadTrack_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustHaveRailRoadTrack, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustHaveRailRoadTrack)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDMustHaveRailRoadTrack(); \
	friend struct Z_Construct_UClass_UFGCDMustHaveRailRoadTrack_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustHaveRailRoadTrack, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustHaveRailRoadTrack)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDMustHaveRailRoadTrack(UFGCDMustHaveRailRoadTrack&&); \
	NO_API UFGCDMustHaveRailRoadTrack(const UFGCDMustHaveRailRoadTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDMustHaveRailRoadTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDMustHaveRailRoadTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDMustHaveRailRoadTrack)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_280_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_283_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDMustAttachToTrainPlatform(); \
	friend struct Z_Construct_UClass_UFGCDMustAttachToTrainPlatform_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustAttachToTrainPlatform, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustAttachToTrainPlatform)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDMustAttachToTrainPlatform(); \
	friend struct Z_Construct_UClass_UFGCDMustAttachToTrainPlatform_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustAttachToTrainPlatform, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustAttachToTrainPlatform)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDMustAttachToTrainPlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDMustAttachToTrainPlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDMustAttachToTrainPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDMustAttachToTrainPlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDMustAttachToTrainPlatform(UFGCDMustAttachToTrainPlatform&&); \
	NO_API UFGCDMustAttachToTrainPlatform(const UFGCDMustAttachToTrainPlatform&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDMustAttachToTrainPlatform(UFGCDMustAttachToTrainPlatform&&); \
	NO_API UFGCDMustAttachToTrainPlatform(const UFGCDMustAttachToTrainPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDMustAttachToTrainPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDMustAttachToTrainPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDMustAttachToTrainPlatform)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_291_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_294_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDTrackTooLong(); \
	friend struct Z_Construct_UClass_UFGCDTrackTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDTrackTooLong(); \
	friend struct Z_Construct_UClass_UFGCDTrackTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDTrackTooLong(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDTrackTooLong) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDTrackTooLong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDTrackTooLong); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDTrackTooLong(UFGCDTrackTooLong&&); \
	NO_API UFGCDTrackTooLong(const UFGCDTrackTooLong&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDTrackTooLong(UFGCDTrackTooLong&&); \
	NO_API UFGCDTrackTooLong(const UFGCDTrackTooLong&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDTrackTooLong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDTrackTooLong); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDTrackTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_302_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_305_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDTrackTooShort(); \
	friend struct Z_Construct_UClass_UFGCDTrackTooShort_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTooShort, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDTrackTooShort(); \
	friend struct Z_Construct_UClass_UFGCDTrackTooShort_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTooShort, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDTrackTooShort(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDTrackTooShort) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDTrackTooShort); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDTrackTooShort); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDTrackTooShort(UFGCDTrackTooShort&&); \
	NO_API UFGCDTrackTooShort(const UFGCDTrackTooShort&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDTrackTooShort(UFGCDTrackTooShort&&); \
	NO_API UFGCDTrackTooShort(const UFGCDTrackTooShort&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDTrackTooShort); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDTrackTooShort); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDTrackTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_313_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_316_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDTrackTooSteep(); \
	friend struct Z_Construct_UClass_UFGCDTrackTooSteep_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTooSteep, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTooSteep)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDTrackTooSteep(); \
	friend struct Z_Construct_UClass_UFGCDTrackTooSteep_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTooSteep, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTooSteep)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDTrackTooSteep(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDTrackTooSteep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDTrackTooSteep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDTrackTooSteep); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDTrackTooSteep(UFGCDTrackTooSteep&&); \
	NO_API UFGCDTrackTooSteep(const UFGCDTrackTooSteep&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDTrackTooSteep(UFGCDTrackTooSteep&&); \
	NO_API UFGCDTrackTooSteep(const UFGCDTrackTooSteep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDTrackTooSteep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDTrackTooSteep); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDTrackTooSteep)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_327_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDTrackTrunToSharp(); \
	friend struct Z_Construct_UClass_UFGCDTrackTrunToSharp_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTrunToSharp, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTrunToSharp)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDTrackTrunToSharp(); \
	friend struct Z_Construct_UClass_UFGCDTrackTrunToSharp_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTrunToSharp, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTrunToSharp)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDTrackTrunToSharp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDTrackTrunToSharp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDTrackTrunToSharp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDTrackTrunToSharp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDTrackTrunToSharp(UFGCDTrackTrunToSharp&&); \
	NO_API UFGCDTrackTrunToSharp(const UFGCDTrackTrunToSharp&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDTrackTrunToSharp(UFGCDTrackTrunToSharp&&); \
	NO_API UFGCDTrackTrunToSharp(const UFGCDTrackTrunToSharp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDTrackTrunToSharp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDTrackTrunToSharp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDTrackTrunToSharp)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_335_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
