// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGWorldCreationInterface_generated_h
#error "FGWorldCreationInterface.generated.h already included, missing '#pragma once' in FGWorldCreationInterface.h"
#endif
#define FACTORYGAME_FGWorldCreationInterface_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGWorldCreationInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGWorldCreationInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWorldCreationInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWorldCreationInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWorldCreationInterface(UFGWorldCreationInterface&&); \
	NO_API UFGWorldCreationInterface(const UFGWorldCreationInterface&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWorldCreationInterface(UFGWorldCreationInterface&&); \
	NO_API UFGWorldCreationInterface(const UFGWorldCreationInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWorldCreationInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWorldCreationInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGWorldCreationInterface)


#define FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGWorldCreationInterface(); \
	friend struct Z_Construct_UClass_UFGWorldCreationInterface_Statics; \
public: \
	DECLARE_CLASS(UFGWorldCreationInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGWorldCreationInterface)


#define FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	FORCEINLINE virtual ~IFGWorldCreationInterface() {} \
public: \
	typedef UFGWorldCreationInterface UClassType; \
	typedef IFGWorldCreationInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_INCLASS_IINTERFACE \
protected: \
	FORCEINLINE virtual ~IFGWorldCreationInterface() {} \
public: \
	typedef UFGWorldCreationInterface UClassType; \
	typedef IFGWorldCreationInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGWorldCreationInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGWorldCreationInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
