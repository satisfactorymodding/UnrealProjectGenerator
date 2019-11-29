// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_IncludeInBuild_generated_h
#error "IncludeInBuild.generated.h already included, missing '#pragma once' in IncludeInBuild.h"
#endif
#define FACTORYGAME_IncludeInBuild_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_IncludeInBuild_h


#define FOREACH_ENUM_EINCLUDEINBUILDS(op) \
	op(EIncludeInBuilds::IIB_Never) \
	op(EIncludeInBuilds::IIB_Development) \
	op(EIncludeInBuilds::IIB_PrivateBuilds) \
	op(EIncludeInBuilds::IIB_PublicBuilds) 

enum class EIncludeInBuilds : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EIncludeInBuilds>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
