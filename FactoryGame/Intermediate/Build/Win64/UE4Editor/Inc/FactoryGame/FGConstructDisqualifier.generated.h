// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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


template<> FACTORYGAME_API UClass* StaticClass<class UFGConstructDisqualifier>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDInitializing(); \
	friend struct Z_Construct_UClass_UFGCDInitializing_Statics; \
public: \
	DECLARE_CLASS(UFGCDInitializing, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInitializing)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDInitializing(); \
	friend struct Z_Construct_UClass_UFGCDInitializing_Statics; \
public: \
	DECLARE_CLASS(UFGCDInitializing, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInitializing)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInitializing(UFGCDInitializing&&); \
	NO_API UFGCDInitializing(const UFGCDInitializing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInitializing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInitializing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDInitializing)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_40_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDInitializing>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDInvalidAimLocation(); \
	friend struct Z_Construct_UClass_UFGCDInvalidAimLocation_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidAimLocation, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidAimLocation)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDInvalidAimLocation(); \
	friend struct Z_Construct_UClass_UFGCDInvalidAimLocation_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidAimLocation, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidAimLocation)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInvalidAimLocation(UFGCDInvalidAimLocation&&); \
	NO_API UFGCDInvalidAimLocation(const UFGCDInvalidAimLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInvalidAimLocation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInvalidAimLocation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDInvalidAimLocation)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_54_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDInvalidAimLocation>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDUnaffordable(); \
	friend struct Z_Construct_UClass_UFGCDUnaffordable_Statics; \
public: \
	DECLARE_CLASS(UFGCDUnaffordable, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDUnaffordable)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDUnaffordable(); \
	friend struct Z_Construct_UClass_UFGCDUnaffordable_Statics; \
public: \
	DECLARE_CLASS(UFGCDUnaffordable, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDUnaffordable)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDUnaffordable(UFGCDUnaffordable&&); \
	NO_API UFGCDUnaffordable(const UFGCDUnaffordable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDUnaffordable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDUnaffordable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDUnaffordable)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_68_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDUnaffordable>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDInvalidPlacement(); \
	friend struct Z_Construct_UClass_UFGCDInvalidPlacement_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidPlacement, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidPlacement)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDInvalidPlacement(); \
	friend struct Z_Construct_UClass_UFGCDInvalidPlacement_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidPlacement, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidPlacement)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInvalidPlacement(UFGCDInvalidPlacement&&); \
	NO_API UFGCDInvalidPlacement(const UFGCDInvalidPlacement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInvalidPlacement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInvalidPlacement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDInvalidPlacement)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_83_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDInvalidPlacement>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDEncroachingClearance(); \
	friend struct Z_Construct_UClass_UFGCDEncroachingClearance_Statics; \
public: \
	DECLARE_CLASS(UFGCDEncroachingClearance, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDEncroachingClearance)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDEncroachingClearance(); \
	friend struct Z_Construct_UClass_UFGCDEncroachingClearance_Statics; \
public: \
	DECLARE_CLASS(UFGCDEncroachingClearance, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDEncroachingClearance)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDEncroachingClearance(UFGCDEncroachingClearance&&); \
	NO_API UFGCDEncroachingClearance(const UFGCDEncroachingClearance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDEncroachingClearance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDEncroachingClearance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDEncroachingClearance)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_97_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDEncroachingClearance>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDEncroachingPlayer(); \
	friend struct Z_Construct_UClass_UFGCDEncroachingPlayer_Statics; \
public: \
	DECLARE_CLASS(UFGCDEncroachingPlayer, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDEncroachingPlayer)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDEncroachingPlayer(); \
	friend struct Z_Construct_UClass_UFGCDEncroachingPlayer_Statics; \
public: \
	DECLARE_CLASS(UFGCDEncroachingPlayer, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDEncroachingPlayer)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDEncroachingPlayer(UFGCDEncroachingPlayer&&); \
	NO_API UFGCDEncroachingPlayer(const UFGCDEncroachingPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDEncroachingPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDEncroachingPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDEncroachingPlayer)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_111_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDEncroachingPlayer>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDInvalidFloor(); \
	friend struct Z_Construct_UClass_UFGCDInvalidFloor_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidFloor, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidFloor)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDInvalidFloor(); \
	friend struct Z_Construct_UClass_UFGCDInvalidFloor_Statics; \
public: \
	DECLARE_CLASS(UFGCDInvalidFloor, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDInvalidFloor)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDInvalidFloor(UFGCDInvalidFloor&&); \
	NO_API UFGCDInvalidFloor(const UFGCDInvalidFloor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDInvalidFloor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDInvalidFloor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDInvalidFloor)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_125_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDInvalidFloor>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDUniqueBuilding(); \
	friend struct Z_Construct_UClass_UFGCDUniqueBuilding_Statics; \
public: \
	DECLARE_CLASS(UFGCDUniqueBuilding, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDUniqueBuilding)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDUniqueBuilding(); \
	friend struct Z_Construct_UClass_UFGCDUniqueBuilding_Statics; \
public: \
	DECLARE_CLASS(UFGCDUniqueBuilding, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDUniqueBuilding)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDUniqueBuilding(UFGCDUniqueBuilding&&); \
	NO_API UFGCDUniqueBuilding(const UFGCDUniqueBuilding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDUniqueBuilding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDUniqueBuilding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDUniqueBuilding)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_139_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDUniqueBuilding>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDMustSnap(UFGCDMustSnap&&); \
	NO_API UFGCDMustSnap(const UFGCDMustSnap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDMustSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDMustSnap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_153_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDMustSnap>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDShouldntSnap(); \
	friend struct Z_Construct_UClass_UFGCDShouldntSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDShouldntSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDShouldntSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDShouldntSnap(); \
	friend struct Z_Construct_UClass_UFGCDShouldntSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDShouldntSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDShouldntSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDShouldntSnap(UFGCDShouldntSnap&&); \
	NO_API UFGCDShouldntSnap(const UFGCDShouldntSnap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDShouldntSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDShouldntSnap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDShouldntSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_167_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_170_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDShouldntSnap>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDNeedsResourceNode(); \
	friend struct Z_Construct_UClass_UFGCDNeedsResourceNode_Statics; \
public: \
	DECLARE_CLASS(UFGCDNeedsResourceNode, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDNeedsResourceNode)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDNeedsResourceNode(); \
	friend struct Z_Construct_UClass_UFGCDNeedsResourceNode_Statics; \
public: \
	DECLARE_CLASS(UFGCDNeedsResourceNode, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDNeedsResourceNode)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_184_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDNeedsResourceNode(UFGCDNeedsResourceNode&&); \
	NO_API UFGCDNeedsResourceNode(const UFGCDNeedsResourceNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDNeedsResourceNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDNeedsResourceNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDNeedsResourceNode)


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


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDNeedsResourceNode>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDResourceNodeIsOccuped(); \
	friend struct Z_Construct_UClass_UFGCDResourceNodeIsOccuped_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceNodeIsOccuped, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceNodeIsOccuped)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDResourceNodeIsOccuped(); \
	friend struct Z_Construct_UClass_UFGCDResourceNodeIsOccuped_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceNodeIsOccuped, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceNodeIsOccuped)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDResourceNodeIsOccuped(UFGCDResourceNodeIsOccuped&&); \
	NO_API UFGCDResourceNodeIsOccuped(const UFGCDResourceNodeIsOccuped&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDResourceNodeIsOccuped); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDResourceNodeIsOccuped); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDResourceNodeIsOccuped)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_195_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_198_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDResourceNodeIsOccuped>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDResourceIsTooShallow(); \
	friend struct Z_Construct_UClass_UFGCDResourceIsTooShallow_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceIsTooShallow, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceIsTooShallow)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDResourceIsTooShallow(); \
	friend struct Z_Construct_UClass_UFGCDResourceIsTooShallow_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceIsTooShallow, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceIsTooShallow)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDResourceIsTooShallow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDResourceIsTooShallow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDResourceIsTooShallow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDResourceIsTooShallow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDResourceIsTooShallow(UFGCDResourceIsTooShallow&&); \
	NO_API UFGCDResourceIsTooShallow(const UFGCDResourceIsTooShallow&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDResourceIsTooShallow(UFGCDResourceIsTooShallow&&); \
	NO_API UFGCDResourceIsTooShallow(const UFGCDResourceIsTooShallow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDResourceIsTooShallow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDResourceIsTooShallow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDResourceIsTooShallow)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_209_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_212_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDResourceIsTooShallow>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDNeedsWaterVolume(); \
	friend struct Z_Construct_UClass_UFGCDNeedsWaterVolume_Statics; \
public: \
	DECLARE_CLASS(UFGCDNeedsWaterVolume, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDNeedsWaterVolume)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDNeedsWaterVolume(); \
	friend struct Z_Construct_UClass_UFGCDNeedsWaterVolume_Statics; \
public: \
	DECLARE_CLASS(UFGCDNeedsWaterVolume, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDNeedsWaterVolume)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDNeedsWaterVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDNeedsWaterVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDNeedsWaterVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDNeedsWaterVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDNeedsWaterVolume(UFGCDNeedsWaterVolume&&); \
	NO_API UFGCDNeedsWaterVolume(const UFGCDNeedsWaterVolume&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDNeedsWaterVolume(UFGCDNeedsWaterVolume&&); \
	NO_API UFGCDNeedsWaterVolume(const UFGCDNeedsWaterVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDNeedsWaterVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDNeedsWaterVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDNeedsWaterVolume)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_223_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_226_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDNeedsWaterVolume>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDResourceDeposit(); \
	friend struct Z_Construct_UClass_UFGCDResourceDeposit_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceDeposit, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceDeposit)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDResourceDeposit(); \
	friend struct Z_Construct_UClass_UFGCDResourceDeposit_Statics; \
public: \
	DECLARE_CLASS(UFGCDResourceDeposit, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDResourceDeposit)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDResourceDeposit(UFGCDResourceDeposit&&); \
	NO_API UFGCDResourceDeposit(const UFGCDResourceDeposit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDResourceDeposit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDResourceDeposit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDResourceDeposit)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_237_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_240_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDResourceDeposit>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDWireSnap(); \
	friend struct Z_Construct_UClass_UFGCDWireSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDWireSnap(); \
	friend struct Z_Construct_UClass_UFGCDWireSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDWireSnap(UFGCDWireSnap&&); \
	NO_API UFGCDWireSnap(const UFGCDWireSnap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDWireSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDWireSnap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDWireSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_251_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_254_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDWireSnap>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDWireTooLong(); \
	friend struct Z_Construct_UClass_UFGCDWireTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDWireTooLong(); \
	friend struct Z_Construct_UClass_UFGCDWireTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDWireTooLong(UFGCDWireTooLong&&); \
	NO_API UFGCDWireTooLong(const UFGCDWireTooLong&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDWireTooLong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDWireTooLong); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDWireTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_265_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_268_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDWireTooLong>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDWireTooManyConnections(); \
	friend struct Z_Construct_UClass_UFGCDWireTooManyConnections_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireTooManyConnections, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireTooManyConnections)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDWireTooManyConnections(); \
	friend struct Z_Construct_UClass_UFGCDWireTooManyConnections_Statics; \
public: \
	DECLARE_CLASS(UFGCDWireTooManyConnections, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDWireTooManyConnections)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDWireTooManyConnections(UFGCDWireTooManyConnections&&); \
	NO_API UFGCDWireTooManyConnections(const UFGCDWireTooManyConnections&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDWireTooManyConnections); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDWireTooManyConnections); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDWireTooManyConnections)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_279_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_282_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDWireTooManyConnections>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDBeltMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDBeltMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDBeltMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDBeltMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDBeltMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDBeltMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDBeltMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDBeltMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDBeltMustSnap(UFGCDBeltMustSnap&&); \
	NO_API UFGCDBeltMustSnap(const UFGCDBeltMustSnap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDBeltMustSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDBeltMustSnap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDBeltMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_293_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_296_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDBeltMustSnap>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooLong(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooLong(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorTooLong(UFGCDConveyorTooLong&&); \
	NO_API UFGCDConveyorTooLong(const UFGCDConveyorTooLong&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorTooLong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorTooLong); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_307_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_310_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDConveyorTooLong>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooShort(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooShort_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooShort, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooShort(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooShort_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooShort, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorTooShort(UFGCDConveyorTooShort&&); \
	NO_API UFGCDConveyorTooShort(const UFGCDConveyorTooShort&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorTooShort); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorTooShort); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_321_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_324_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDConveyorTooShort>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooSteep(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooSteep_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooSteep, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooSteep)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorTooSteep(); \
	friend struct Z_Construct_UClass_UFGCDConveyorTooSteep_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorTooSteep, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorTooSteep)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_338_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorTooSteep(UFGCDConveyorTooSteep&&); \
	NO_API UFGCDConveyorTooSteep(const UFGCDConveyorTooSteep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorTooSteep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorTooSteep); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorTooSteep)


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


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDConveyorTooSteep>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorInvalidShape(); \
	friend struct Z_Construct_UClass_UFGCDConveyorInvalidShape_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorInvalidShape, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorInvalidShape)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorInvalidShape(); \
	friend struct Z_Construct_UClass_UFGCDConveyorInvalidShape_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorInvalidShape, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorInvalidShape)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorInvalidShape(UFGCDConveyorInvalidShape&&); \
	NO_API UFGCDConveyorInvalidShape(const UFGCDConveyorInvalidShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorInvalidShape); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorInvalidShape); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorInvalidShape)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_349_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_352_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDConveyorInvalidShape>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDConveyorAttachmentTooSharpTurn(); \
	friend struct Z_Construct_UClass_UFGCDConveyorAttachmentTooSharpTurn_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorAttachmentTooSharpTurn, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorAttachmentTooSharpTurn)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDConveyorAttachmentTooSharpTurn(); \
	friend struct Z_Construct_UClass_UFGCDConveyorAttachmentTooSharpTurn_Statics; \
public: \
	DECLARE_CLASS(UFGCDConveyorAttachmentTooSharpTurn, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDConveyorAttachmentTooSharpTurn)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDConveyorAttachmentTooSharpTurn(UFGCDConveyorAttachmentTooSharpTurn&&); \
	NO_API UFGCDConveyorAttachmentTooSharpTurn(const UFGCDConveyorAttachmentTooSharpTurn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDConveyorAttachmentTooSharpTurn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDConveyorAttachmentTooSharpTurn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDConveyorAttachmentTooSharpTurn)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_363_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_366_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDConveyorAttachmentTooSharpTurn>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDMustHaveRailRoadTrack(); \
	friend struct Z_Construct_UClass_UFGCDMustHaveRailRoadTrack_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustHaveRailRoadTrack, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustHaveRailRoadTrack)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDMustHaveRailRoadTrack(); \
	friend struct Z_Construct_UClass_UFGCDMustHaveRailRoadTrack_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustHaveRailRoadTrack, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustHaveRailRoadTrack)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDMustHaveRailRoadTrack(UFGCDMustHaveRailRoadTrack&&); \
	NO_API UFGCDMustHaveRailRoadTrack(const UFGCDMustHaveRailRoadTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDMustHaveRailRoadTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDMustHaveRailRoadTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDMustHaveRailRoadTrack)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_377_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_380_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDMustHaveRailRoadTrack>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDMustAttachToTrainPlatform(); \
	friend struct Z_Construct_UClass_UFGCDMustAttachToTrainPlatform_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustAttachToTrainPlatform, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustAttachToTrainPlatform)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDMustAttachToTrainPlatform(); \
	friend struct Z_Construct_UClass_UFGCDMustAttachToTrainPlatform_Statics; \
public: \
	DECLARE_CLASS(UFGCDMustAttachToTrainPlatform, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDMustAttachToTrainPlatform)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDMustAttachToTrainPlatform(UFGCDMustAttachToTrainPlatform&&); \
	NO_API UFGCDMustAttachToTrainPlatform(const UFGCDMustAttachToTrainPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDMustAttachToTrainPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDMustAttachToTrainPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDMustAttachToTrainPlatform)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_391_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_394_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDMustAttachToTrainPlatform>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDTrackTooLong(); \
	friend struct Z_Construct_UClass_UFGCDTrackTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDTrackTooLong(); \
	friend struct Z_Construct_UClass_UFGCDTrackTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDTrackTooLong(UFGCDTrackTooLong&&); \
	NO_API UFGCDTrackTooLong(const UFGCDTrackTooLong&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDTrackTooLong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDTrackTooLong); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDTrackTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_405_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_408_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDTrackTooLong>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDTrackTooShort(); \
	friend struct Z_Construct_UClass_UFGCDTrackTooShort_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTooShort, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDTrackTooShort(); \
	friend struct Z_Construct_UClass_UFGCDTrackTooShort_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTooShort, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDTrackTooShort(UFGCDTrackTooShort&&); \
	NO_API UFGCDTrackTooShort(const UFGCDTrackTooShort&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDTrackTooShort); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDTrackTooShort); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDTrackTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_419_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_422_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDTrackTooShort>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDTrackTooSteep(); \
	friend struct Z_Construct_UClass_UFGCDTrackTooSteep_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTooSteep, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTooSteep)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDTrackTooSteep(); \
	friend struct Z_Construct_UClass_UFGCDTrackTooSteep_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTooSteep, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTooSteep)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDTrackTooSteep(UFGCDTrackTooSteep&&); \
	NO_API UFGCDTrackTooSteep(const UFGCDTrackTooSteep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDTrackTooSteep); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDTrackTooSteep); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDTrackTooSteep)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_433_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_436_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDTrackTooSteep>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDTrackTrunToSharp(); \
	friend struct Z_Construct_UClass_UFGCDTrackTrunToSharp_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTrunToSharp, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTrunToSharp)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDTrackTrunToSharp(); \
	friend struct Z_Construct_UClass_UFGCDTrackTrunToSharp_Statics; \
public: \
	DECLARE_CLASS(UFGCDTrackTrunToSharp, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDTrackTrunToSharp)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDTrackTrunToSharp(UFGCDTrackTrunToSharp&&); \
	NO_API UFGCDTrackTrunToSharp(const UFGCDTrackTrunToSharp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDTrackTrunToSharp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDTrackTrunToSharp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDTrackTrunToSharp)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_447_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_450_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDTrackTrunToSharp>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDPipeTooShort(); \
	friend struct Z_Construct_UClass_UFGCDPipeTooShort_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeTooShort, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDPipeTooShort(); \
	friend struct Z_Construct_UClass_UFGCDPipeTooShort_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeTooShort, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDPipeTooShort(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDPipeTooShort) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeTooShort); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeTooShort); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeTooShort(UFGCDPipeTooShort&&); \
	NO_API UFGCDPipeTooShort(const UFGCDPipeTooShort&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeTooShort(UFGCDPipeTooShort&&); \
	NO_API UFGCDPipeTooShort(const UFGCDPipeTooShort&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeTooShort); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeTooShort); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDPipeTooShort)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_461_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_464_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDPipeTooShort>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDPipeTooLong(); \
	friend struct Z_Construct_UClass_UFGCDPipeTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDPipeTooLong(); \
	friend struct Z_Construct_UClass_UFGCDPipeTooLong_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeTooLong, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDPipeTooLong(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDPipeTooLong) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeTooLong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeTooLong); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeTooLong(UFGCDPipeTooLong&&); \
	NO_API UFGCDPipeTooLong(const UFGCDPipeTooLong&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeTooLong(UFGCDPipeTooLong&&); \
	NO_API UFGCDPipeTooLong(const UFGCDPipeTooLong&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeTooLong); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeTooLong); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDPipeTooLong)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_475_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_478_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDPipeTooLong>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDPipeAttachmentTooSharpTurn(); \
	friend struct Z_Construct_UClass_UFGCDPipeAttachmentTooSharpTurn_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeAttachmentTooSharpTurn, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeAttachmentTooSharpTurn)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDPipeAttachmentTooSharpTurn(); \
	friend struct Z_Construct_UClass_UFGCDPipeAttachmentTooSharpTurn_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeAttachmentTooSharpTurn, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeAttachmentTooSharpTurn)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDPipeAttachmentTooSharpTurn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDPipeAttachmentTooSharpTurn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeAttachmentTooSharpTurn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeAttachmentTooSharpTurn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeAttachmentTooSharpTurn(UFGCDPipeAttachmentTooSharpTurn&&); \
	NO_API UFGCDPipeAttachmentTooSharpTurn(const UFGCDPipeAttachmentTooSharpTurn&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeAttachmentTooSharpTurn(UFGCDPipeAttachmentTooSharpTurn&&); \
	NO_API UFGCDPipeAttachmentTooSharpTurn(const UFGCDPipeAttachmentTooSharpTurn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeAttachmentTooSharpTurn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeAttachmentTooSharpTurn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDPipeAttachmentTooSharpTurn)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_489_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_492_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDPipeAttachmentTooSharpTurn>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDPipeMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDPipeMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDPipeMustSnap(); \
	friend struct Z_Construct_UClass_UFGCDPipeMustSnap_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeMustSnap, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDPipeMustSnap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDPipeMustSnap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeMustSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeMustSnap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeMustSnap(UFGCDPipeMustSnap&&); \
	NO_API UFGCDPipeMustSnap(const UFGCDPipeMustSnap&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeMustSnap(UFGCDPipeMustSnap&&); \
	NO_API UFGCDPipeMustSnap(const UFGCDPipeMustSnap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeMustSnap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeMustSnap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDPipeMustSnap)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_503_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_506_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDPipeMustSnap>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDPipeFluidTypeMismatch(); \
	friend struct Z_Construct_UClass_UFGCDPipeFluidTypeMismatch_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeFluidTypeMismatch, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeFluidTypeMismatch)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDPipeFluidTypeMismatch(); \
	friend struct Z_Construct_UClass_UFGCDPipeFluidTypeMismatch_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeFluidTypeMismatch, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeFluidTypeMismatch)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDPipeFluidTypeMismatch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDPipeFluidTypeMismatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeFluidTypeMismatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeFluidTypeMismatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeFluidTypeMismatch(UFGCDPipeFluidTypeMismatch&&); \
	NO_API UFGCDPipeFluidTypeMismatch(const UFGCDPipeFluidTypeMismatch&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeFluidTypeMismatch(UFGCDPipeFluidTypeMismatch&&); \
	NO_API UFGCDPipeFluidTypeMismatch(const UFGCDPipeFluidTypeMismatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeFluidTypeMismatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeFluidTypeMismatch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDPipeFluidTypeMismatch)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_517_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_520_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDPipeFluidTypeMismatch>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDPipeInvalidShape(); \
	friend struct Z_Construct_UClass_UFGCDPipeInvalidShape_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeInvalidShape, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeInvalidShape)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDPipeInvalidShape(); \
	friend struct Z_Construct_UClass_UFGCDPipeInvalidShape_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeInvalidShape, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeInvalidShape)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDPipeInvalidShape(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDPipeInvalidShape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeInvalidShape); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeInvalidShape); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeInvalidShape(UFGCDPipeInvalidShape&&); \
	NO_API UFGCDPipeInvalidShape(const UFGCDPipeInvalidShape&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeInvalidShape(UFGCDPipeInvalidShape&&); \
	NO_API UFGCDPipeInvalidShape(const UFGCDPipeInvalidShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeInvalidShape); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeInvalidShape); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDPipeInvalidShape)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_531_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_534_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDPipeInvalidShape>();

#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCDPipeNoPathFound(); \
	friend struct Z_Construct_UClass_UFGCDPipeNoPathFound_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeNoPathFound, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeNoPathFound)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_INCLASS \
private: \
	static void StaticRegisterNativesUFGCDPipeNoPathFound(); \
	friend struct Z_Construct_UClass_UFGCDPipeNoPathFound_Statics; \
public: \
	DECLARE_CLASS(UFGCDPipeNoPathFound, UFGConstructDisqualifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCDPipeNoPathFound)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCDPipeNoPathFound(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCDPipeNoPathFound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeNoPathFound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeNoPathFound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeNoPathFound(UFGCDPipeNoPathFound&&); \
	NO_API UFGCDPipeNoPathFound(const UFGCDPipeNoPathFound&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCDPipeNoPathFound(UFGCDPipeNoPathFound&&); \
	NO_API UFGCDPipeNoPathFound(const UFGCDPipeNoPathFound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCDPipeNoPathFound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCDPipeNoPathFound); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCDPipeNoPathFound)


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_545_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h_548_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCDPipeNoPathFound>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGConstructDisqualifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
