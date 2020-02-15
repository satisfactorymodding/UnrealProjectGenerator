#pragma once

#include "FGBuildableSubsystem.h"
#include "FGConstructionMessageInterface.generated.h"

USTRUCT()
struct FConstructHologramMessage
{
	GENERATED_BODY()

	UPROPERTY()
	FNetConstructionID ConstructionID;

	UPROPERTY()
	TSubclassOf< class UFGRecipe > Recipe;

	UPROPERTY()
	AActor* UpgradeActor;

	UPROPERTY()
	TArray<uint8> SerializedHologramData;

	UPROPERTY()
	int64 NumBits;

	FConstructHologramMessage() :
		Recipe( nullptr ),
		UpgradeActor(nullptr),
		SerializedHologramData(),
		NumBits( 0 )
	{}

	bool IsUpgradeConstructionMessage() const
	{
		return UpgradeActor != nullptr;
	}
};

/**
*
*/
UINTERFACE(Blueprintable)
class UFGConstructionMessageInterface : public UInterface
{
	GENERATED_BODY()
};

/**
*
*/
class IFGConstructionMessageInterface
{
	GENERATED_BODY()

public:
	virtual void SerializeConstructMessage( FArchive& ar ) = 0;

	virtual void ClientPreConstructMessageSerialization() {};
	virtual void ClientPostConstructMessageSerialization() {};
	virtual void ServerPreConstructMessageDeserialization() {};
	virtual void ServerPostConstructMessageDeserialization() {};

	/** This is called on server when a hologram has been created from a construct message */
	UFUNCTION( BlueprintNativeEvent )
	void OnConstructMessagedDeserialized();
};
