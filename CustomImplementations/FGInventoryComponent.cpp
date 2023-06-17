#include "FactoryGameCustomVersion.h"

bool FInventoryItem::Serialize(FArchive& ar) {
	ar.UsingCustomVersion(FFactoryGameCustomVersion::GUID);
	if (ar.CustomVer(FFactoryGameCustomVersion::GUID) >= 2) {
		ar << ItemClass;
		ar << ItemState;
	}
	return true;
}
