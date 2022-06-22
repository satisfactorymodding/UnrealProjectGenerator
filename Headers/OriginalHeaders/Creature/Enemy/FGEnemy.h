// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FGCreature.h"
#include "FGEnemy.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYGAME_API AFGEnemy : public AFGCreature
{
	GENERATED_BODY()
public:
	/** ctor */
	AFGEnemy( const FObjectInitializer& ObjectInitializer );
};

