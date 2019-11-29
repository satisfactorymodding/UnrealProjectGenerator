// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_RailroadNavigation_generated_h
#error "RailroadNavigation.generated.h already included, missing '#pragma once' in RailroadNavigation.h"
#endif
#define FACTORYGAME_RailroadNavigation_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_RailroadNavigation_h


#define FOREACH_ENUM_ERAILROADPATHFINDINGRESULT(op) \
	op(ERailroadPathFindingResult::RNQR_Error) \
	op(ERailroadPathFindingResult::RNQR_Unreachable) \
	op(ERailroadPathFindingResult::RNQR_Success) 

enum class ERailroadPathFindingResult : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<ERailroadPathFindingResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
