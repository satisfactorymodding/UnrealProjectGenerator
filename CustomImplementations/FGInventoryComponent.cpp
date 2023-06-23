#include "FactoryGameCustomVersion.h"

bool FInventoryItem::Serialize(FArchive& ar) {
	ar.UsingCustomVersion(FFactoryGameCustomVersion::GUID);
	if (ar.CustomVer(FFactoryGameCustomVersion::GUID) >= FFactoryGameCustomVersion::InventoryItemGotPersistantSeralization) {
		ar << ItemClass;
		ar << ItemState;
	}
	return true;
}
